/**
 * 함수 printf()를 3번 반복 호출
 * 섭씨 온도는 12.46도에서 10씩 2번 증가
 * F(화씨) = 9/5*C(섭씨) + 32
 * 9.0이 아닌 9를 사용할 경우 결과가 1이라서 부정확한 결과가 나온다.
**/

#include <stdio.h>


int main(void){
  double celsius = 12.46;

  printf(" 섭씨(C) 화씨(F)\n");
  printf("%8.lf %8.2lf\n", celsius, 9.0/5 * celsius + 32);
  celsius += 10;
  printf("%8.lf %8.2lf\n", celsius, 9.0/5 * celsius + 32);
  celsius += 10;
  printf("%8.lf %8.2lf\n", celsius, 9.0/5 * celsius + 32);

return 0;
}