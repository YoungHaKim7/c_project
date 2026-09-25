# Result(난해한 UB찾기 절대 못찾겠다.)

- santize 001

```bash
 /usr/bin/clang \
          -O0 -g \
          -std=c23 \
          -Wall -Wextra \
          -fsanitize=address \
          -fsanitize-address-use-after-scope \
          src/main.c \
          -o ./target/a02_casting_ub_bytes_check

$ ./target/a02_casting_ub_bytes_check
x address = 0x7bb6567f0020
x value   = 42
x bytes   = 2a 00 00 00
p address = 0x7bb6567f0020
*p value  = 42
p bytes   = 20 00 7f 56 b6 7b 00 00

After *p = 100:
x value   = 42
*p value  = 100
x bytes   = 64 00 00 00
```

- santizer = UB찾는거 안나옴

```bash
❯ /usr/bin/clang \
          -O0 -g \
          -std=c23 \
          -Wall -Wextra -Wpedantic \
          -fsanitize=undefined \
          src/main.c \
          -o ./target/a02_casting_ub_bytes_check

$ ./target/a02_casting_ub_bytes_check
x address = 0x7ffecead5ed8
x value   = 42
x bytes   = 2a 00 00 00
p address = 0x7ffecead5ed8
*p value  = 42
p bytes   = d8 5e ad ce fe 7f 00 00

After *p = 100:
x value   = 42
*p value  = 100
x bytes   = 64 00 00 00
```

- valgrind로 찾아보기(LinuxOS)

```bash
$ /usr/bin/clang -O0 -g -std=c23 -pedantic -pthread -pedantic-errors -lm \
          -Wall -Wextra -ggdb -Werror \
          src/main.c -o ./target/a02_casting_ub_bytes_check


# valgrind test

$ valgrind --leak-check=full target/a02_casting_ub_bytes_check
==25152== Memcheck, a memory error detector
==25152== Copyright (C) 2002-2026, and GNU GPL'd, by Julian Seward et al.
==25152== Using Valgrind-3.27.1 and LibVEX; rerun with -h for copyright info
==25152== Command: target/a02_casting_ub_bytes_check
==25152==
x address = 0x1ffeffffa8
x value   = 42
x bytes   = 2a 00 00 00
p address = 0x1ffeffffa8
*p value  = 42
p bytes   = a8 ff ff fe 1f 00 00 00

After *p = 100:
x value   = 42
*p value  = 100
x bytes   = 64 00 00 00
==25152==
==25152== HEAP SUMMARY:
==25152==     in use at exit: 0 bytes in 0 blocks
==25152==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==25152==
==25152== All heap blocks were freed -- no leaks are possible
==25152==
==25152== For lists of detected and suppressed errors, rerun with: -s
==25152== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
