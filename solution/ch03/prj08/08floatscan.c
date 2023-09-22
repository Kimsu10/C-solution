#define _CRT_SECURE_NO_WARNINGS //scanf()오류를 방지하기위한 상수를 정의

#include <stdio.h>

int main(void)
{
  float mile = 0.621;
  printf("100km는 몇 mile? "); 
  scanf("%f", &mile);
  printf("80 km: %.2f mile\n\n", mile * 80);


  double liter = 3.785;
  printf("1 gallon은 몇 liter? ");
  scanf("%lf", &liter);
  printf("18 gallon: %.2f liter\n", liter * 18);

  return 0;
}