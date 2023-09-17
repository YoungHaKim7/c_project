# 고생하면서 배우는 C언어 (일본어)苦しんで覚えるＣ言語

https://9cguide.appspot.com/index.html



# C build.sh

```
echo "#\x21/bin/bash\xa\xagcc -Wall -Wextra -ggdb -o main main.c -lm" >> build.sh
#!/bin/bash
```

```bash
gcc -Wall -Wextra -ggdb -o main main.c -lm
```

```
chmod +x build.sh
```


# C delete.sh

```
echo "#\x21/bin/bash\xa\xarm -rf main main.dSYM" >> delete.sh
```

```bash
#!/bin/bash

rm -rf main main.dSYM
```

# c언어 공부하면서 정리 
- Preprocessor 전처리기  
  - https://clang.llvm.org/doxygen/index.html

- string literal (c lang)
  - https://en.cppreference.com/w/c/language/string_literal

```c
c 언어 
float = f32
double = f64
```


- 단어와 기호
  - 예약어
    - https://9cguide.appspot.com/r_mark.html
