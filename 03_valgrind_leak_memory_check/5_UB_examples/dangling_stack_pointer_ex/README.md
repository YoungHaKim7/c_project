# Result

- 컴파일 자체가 안된다.

```bash
/usr/bin/clang \
          -O0 -g \
          -std=c23 \
          -pedantic -pthread \
          -pedantic-errors \
          -lm -Wall \
          -Wextra \
          -ggdb \
          -Werror \
          src/main.c \
          -o dangling_stack_pointer_ex

src/main.c:6:13: error: address of stack memory associated with local variable 'x'
      returned [-Werror,-Wreturn-stack-address]
    6 |     return &x;
      |             ^
1 error generated.

```


```bash
/usr/bin/clang \
          -O0 -g \
          -std=c23 \
          -Wall -Wextra \
          -fsanitize=address \
          -fsanitize-address-use-after-scope \
          src/main.c \
          -o target/a01_dangling
src/main.c:6:13: warning: address of stack memory associated with local variable 'x'
      returned [-Wreturn-stack-address]
    6 |     return &x;
      |             ^
1 warning generated.

# 컴파일된건 실행
❯ target/a01_dangling
=================================================================
==22147==ERROR: AddressSanitizer: stack-use-after-return on address 0x7b57e3cf0020 at pc 0x561a50410746 bp 0x7ffde8a52f20 sp 0x7ffde8a52f18
READ of size 4 at 0x7b57e3cf0020 thread T0
    #0 0x561a50410745 in main /home/gy/my_projects/C_Lang/c_project/03_valgrind_leak_memory_check/5_UB_examples/dangling_stack_pointer_ex/src/main.c:13:20
    #1 0x7f57e602b53d in __libc_start_call_main (/lib64/libc.so.6+0x2b53d) (BuildId: aa9d4edc4e25f8842c8f1e29eaaaf78a6197b3d7)
    #2 0x7f57e602b66a in __libc_start_main@GLIBC_2.2.5 (/lib64/libc.so.6+0x2b66a) (BuildId: aa9d4edc4e25f8842c8f1e29eaaaf78a6197b3d7)
    #3 0x561a50320354 in _start /home/abuild/rpmbuild/BUILD/glibc-2.44-build/glibc-2.44/csu/../sysdeps/x86_64/start.S:115

Address 0x7b57e3cf0020 is located in stack of thread T0 at offset 32 in frame
    #0 0x561a504105ff in get_pointer /home/gy/my_projects/C_Lang/c_project/03_valgrind_leak_memory_check/5_UB_examples/dangling_stack_pointer_ex/src/main.c:4

  This frame has 1 object(s):
    [32, 36) 'x' (line 5) <== Memory access at offset 32 is inside this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: stack-use-after-return /home/gy/my_projects/C_Lang/c_project/03_valgrind_leak_memory_check/5_UB_examples/dangling_stack_pointer_ex/src/main.c:13:20 in main
Shadow bytes around the buggy address:
  0x7b57e3cefd80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3cefe00: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3cefe80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3ceff00: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3ceff80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x7b57e3cf0000: f5 f5 f5 f5[f5]f5 f5 f5 00 00 00 00 00 00 00 00
  0x7b57e3cf0080: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3cf0100: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3cf0180: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3cf0200: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7b57e3cf0280: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
==22147==ABORTING

```
