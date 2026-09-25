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

…ak_memory_check/5_UB_examples/a02_casting_ub_bytes_check on  main [!?] via △ v4.4.3
❯ ./target/a02_casting_ub_bytes_check
x address = 0x7b98d19f0020
x value   = 42
2a 00 00 00
p address = 0x7b98d19f0020
*p value  = 42
p bytes(Big endian sytle)   = 20 00 9f d1 98 7b 00 00

After *p = 100:
x value   = 42
*p value  = 100
x bytes   = 64 00 00 00
```

- santizer = UB찾는거 안나옴

```bash
$ /usr/bin/clang \
                -O0 -g \
                -std=c23 \
                -Wall -Wextra -Wpedantic \
                -fsanitize=undefined \
                src/main.c \
                -o ./target/a02_casting_ub_bytes_check

$ ./target/a02_casting_ub_bytes_check
x address = 0x7ffc152578b8
x value   = 42
2a 00 00 00
p address = 0x7ffc152578b8
*p value  = 42
p bytes(Big endian sytle)   = b8 78 25 15 fc 7f 00 00

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

# valgrind
$ valgrind --leak-check=full target/a02_casting_ub_bytes_check
==30070== Memcheck, a memory error detector
==30070== Copyright (C) 2002-2026, and GNU GPL'd, by Julian Seward et al.
==30070== Using Valgrind-3.27.1 and LibVEX; rerun with -h for copyright info
==30070== Command: target/a02_casting_ub_bytes_check
==30070==
x address = 0x1ffeffffa8
x value   = 42
2a 00 00 00
p address = 0x1ffeffffa8
*p value  = 42
p bytes(Big endian sytle)   = a8 ff ff fe 1f 00 00 00

After *p = 100:
x value   = 42
*p value  = 100
x bytes   = 64 00 00 00
==30070==
==30070== HEAP SUMMARY:
==30070==     in use at exit: 0 bytes in 0 blocks
==30070==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==30070==
==30070== All heap blocks were freed -- no leaks are possible
==30070==
==30070== For lists of detected and suppressed errors, rerun with: -s
==30070== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
