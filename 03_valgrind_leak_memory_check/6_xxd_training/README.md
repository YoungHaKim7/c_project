# Result


```bash
# grep섞어서 내가 보고 싶은것만 찾아보기
$ xxd ./target/debug/xxd_hex_editor | grep "1234"
00002000: 0100 0200 3132 3334 3520 3d20 2564 0000  ....12345 = %d..


$ xxd ./target/debug/xxd_hex_editor | grep "main"
00000500: 7274 5f6d 6169 6e00 5f5f 6378 615f 6669  rt_main.__cxa_fi
00003b10: 6469 746f 722f 7372 632f 6d61 696e 2e63  ditor/src/main.c
00003b90: 5459 5045 5f5f 006d 6169 6e00 6100 2e2e  TYPE__.main.a...
00003d70: 6f72 2f73 7263 2f6d 6169 6e2e 6300 6372  or/src/main.c.cr
00004210: 6179 5f65 6e74 7279 006d 6169 6e2e 6300  ay_entry.main.c.
00004300: 7400 6d61 696e 005f 5f54 4d43 5f45 4e44  t.main.__TMC_END


$ xxd ./target/debug/xxd_hex_editor > xxd_test.txt
```
