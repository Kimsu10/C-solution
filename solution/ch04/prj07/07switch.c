#define _CRT_SECRET_NO_WARNINGS
#include <stdio.h>

int main(void){
  int month;
  printf("월(month) 입력: ");
  scanf("%d", &month);

  switch (month)
  {
  case 4: case 5:
    printf("%d월은 봄입니다.\n", month);
    break;
  
  default:
  printf("월(month)을 잘못 입력하였습니다.\n");
    break;
  }
  
  return 0;
}