# working with strings in rust

https://fasterthanli.me/articles/working-with-strings-in-rust

<br>

# How to return static str? (Rust user.rust-lang)

https://users.rust-lang.org/t/how-to-return-static-str/83850/34

<br>

# result :

```
$ ./main "ready" "set" "go" | xxd -g 1

00000000: 61 72 67 76 20 3d 20 30 78 31 36 64 37 30 33 32  argv = 0x16d7032
00000010: 61 30 0a 61 72 67 76 5b 30 5d 20 3d 20 30 78 31  a0.argv[0] = 0x1
00000020: 36 64 37 30 33 34 64 38 0a 2e 2f 6d 61 69 6e 0a  6d7034d8../main.
00000030: 61 72 67 76 5b 31 5d 20 3d 20 30 78 31 36 64 37  argv[1] = 0x16d7
00000040: 30 33 34 64 66 0a 72 65 61 64 79 0a 61 72 67 76  034df.ready.argv
00000050: 5b 32 5d 20 3d 20 30 78 31 36 64 37 30 33 34 65  [2] = 0x16d7034e
00000060: 35 0a 73 65 74 0a 61 72 67 76 5b 33 5d 20 3d 20  5.set.argv[3] =
00000070: 30 78 31 36 64 37 30 33 34 65 39 0a 67 6f 0a     0x16d7034e9.go.
```

# result 2 :

```
$ ./main "ready" "set" "go"

argv = 0x16b9a32a0
argv[0] = 0x16b9a34d8
./main
argv[1] = 0x16b9a34df
ready
argv[2] = 0x16b9a34e5
set
argv[3] = 0x16b9a34e9
go
```
