# clang 으로 LLVM IR Code 로 우선 변환

- 이거 하면 나 밑에거 둘 중에 하나하면 됨.
```
clang -S -emit-llvm fib.c

```

```
clang -emit-llvm -S main.c -o main.ll  
```

fib.c 가 fib.ll 변환됨