# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
  double temperatuer;

  printf("현재온도 입력: ");
  scanf("%lf", &temperatuer);

  if(temperatuer >= 30.0){
    printf("폭염주의.\n");
    printf("물 자주 마시기.\n");
  }

  printf("현재온도는 섭씨 %.2f 입니다.\n", temperatuer);

  return 0;
}