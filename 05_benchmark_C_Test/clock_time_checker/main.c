#include <time.h>
#include <stdio.h>

int main(void) {
  int i;
  double start, end;
  
  // for 루프 시작 시간 
  start = (double)clock() / CLOCKS_PER_SEC;
  
  // for 루프 100_000 돌아보기
  int sum = 0;
  for (i = 0; i < 1000000; i++) {
    sum++;
  }
  
  // for 루프 끝난 시간
  end = (((double)clock()) / CLOCKS_PER_SEC);
  printf("Program test time (sec) : %lf sec \n ", (end-start));
}


// Result:
// PS D:\young_project\c_lang\c_project\benchmark_C_Test\clock_time_checker> ls

//     Directory: D:\young_project\c_lang\c_project\benchmark_C_Test\clock_time_checker

// Mode                 LastWriteTime         Length Name
// ----                 -------------         ------ ----
// -a---        2022-12-09 오전 10:02            430 main.c
// -a---        2022-12-09 오전 10:02          47894 main.exe

// PS D:\clock_time_checker> .\main.exe
// Program test time (sec) : 0.015000
