# Result

```bash
 clang \
          -std=c23 \
          -O0 -g \
          -fsanitize=address \
          -fsanitize-address-use-after-scope \
          src/main.c \
          -o ub

# run
 ./ub
=================================================================
==19053==ERROR: AddressSanitizer: stack-use-after-scope on address 0x7bf7048f0020 at pc 0x56058f5ca6eb bp 0x7ffc4105fbf0 sp 0x7ffc4105fbe8
READ of size 4 at 0x7bf7048f0020 thread T0
    #0 0x56058f5ca6ea in main /home/gy/my_projects/C_Lang/c_project/03_valgrind_leak_memory_check/5_UB_examples/santitizer_use_after_scope/src/main.c:12:20
    #1 0x7ff706a2b53d in __libc_start_call_main (/lib64/libc.so.6+0x2b53d) (BuildId: aa9d4edc4e25f8842c8f1e29eaaaf78a6197b3d7)
    #2 0x7ff706a2b66a in __libc_start_main@GLIBC_2.2.5 (/lib64/libc.so.6+0x2b66a) (BuildId: aa9d4edc4e25f8842c8f1e29eaaaf78a6197b3d7)
    #3 0x56058f4da354 in _start /home/abuild/rpmbuild/BUILD/glibc-2.44-build/glibc-2.44/csu/../sysdeps/x86_64/start.S:115

Address 0x7bf7048f0020 is located in stack of thread T0 at offset 32 in frame
    #0 0x56058f5ca5ff in main /home/gy/my_projects/C_Lang/c_project/03_valgrind_leak_memory_check/5_UB_examples/santitizer_use_after_scope/src/main.c:4

  This frame has 1 object(s):
    [32, 36) 'x' (line 8) <== Memory access at offset 32 is inside this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: stack-use-after-scope /home/gy/my_projects/C_Lang/c_project/03_valgrind_leak_memory_check/5_UB_examples/santitizer_use_after_scope/src/main.c:12:20 in main
Shadow bytes around the buggy address:
  0x7bf7048efd80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048efe00: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048efe80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048eff00: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048eff80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x7bf7048f0000: f1 f1 f1 f1[f8]f3 f3 f3 00 00 00 00 00 00 00 00
  0x7bf7048f0080: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048f0100: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048f0180: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048f0200: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x7bf7048f0280: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
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
==19053==ABORTING
```
