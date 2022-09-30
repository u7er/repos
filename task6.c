#include "stdio.h"

// Вывод матрицы ниже главной диагонали с помощью разных типов цикла

void loop_type_1(){
  printf("for:\n");
  const int N = 10;
  int per_line = 0;
  int filter = 0;
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N && j <= filter; ++j){
      printf("%d\t", i + j + per_line);
    }
    printf("\n");
    per_line += N - 1;
    ++filter;
  }
}

void loop_type_2(){
  printf("while:\n");
  const int N = 10;
  int per_line = 0;
  int filter = 0;
  int i = 0;
  int j = 0;
  while(i < N){
    j = 0;
    while(j < N && j <= filter){
      printf("%d\t", i + j + per_line);
      ++j;
    }
    printf("\n");
    per_line += N - 1;
    ++filter;
    ++i;
  }
}

void loop_type_3(){
  printf("do while:\n");
  const int N = 10;
  int per_line = 0;
  int filter = 0;
  int i = 0;
  int j = 0;

  do {
    j = 0;
    do {
      printf("%d\t", i + j + per_line);
      ++j;
    } while(j < N && j <= filter);
    printf("\n");
    per_line += N - 1;
    ++filter;
    ++i;
  } while(i < N);
}

void loop_type_4(){
  printf("goto:\n");
  const int N = 10;
  int per_line = 0;
  int filter = 0;
  int i = 0;
  int j = 0;
  
  // danila: {
  //   if(i < N){
  //     j = 0;
  //     pasha: {
  //       if(j < N && j <= filter){
  //         printf("%d\t", i + j + per_line);
  //         ++j;
  //       } else
  //         goto pasha_end;
  //     } goto pasha;
  //     pasha_end:
  //     printf("\n");
  //     per_line += N - 1;
  //     ++filter;
  //     ++i;
  //   } else
  //     goto danila_end;
  // } goto danila;
  // danila end:
}

int main(){
  loop_type_1();
  loop_type_2();
  loop_type_3();
  loop_type_4();
}