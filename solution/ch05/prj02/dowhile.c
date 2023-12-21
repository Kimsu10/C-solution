# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
  int input;
  do{
    printf("[0]종료 [1]아메리카노 [2]카페라떼 [3]카푸치노 \n");
    printf("주문할 커피 똔느 종료(0)을 입력 >>");
    scanf("%d", &input);
  } while(input != 0); // 0 이 아니어야 7번줄로 이동하여 반복하고, 0일경우 종료.

  return 0;
}