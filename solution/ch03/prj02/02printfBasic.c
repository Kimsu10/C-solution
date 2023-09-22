#include <stdio.h>

int main(void)
{
  double width = 3.434, height = 2.718;
  int shape =3;

  printf("가로: %f, 세로: %lf\n", width, height); //printf()에서 시수는 %f와 %lf 모두 사용 가능하다.
  printf("%d각형 %s: %8.2f\n", shape, "면적", (width * height) / 2);
  printf("%d각형 %s: %10.4f\n", shape + 1, "면적", width * height); 
  // %10.4는 실수전체의 폭을 10으로정하고 거기서 소수점이하 자릿수를 4로 지정하는 방법이다.
  // 무슨말이냐면 출력되는 값의 전체자리를 10자리로하고 그중  소수점은 4자리로 하는것을 말한다.
  return 0;
}
// 가로:3.424000, 세로: 2.718000
// 3각형 면적: 4.67
// 4각형 면적: 9.3336