/*소스: 11enum.c*/

#include <stdio.h>

int main(void)
{
  //키워드 enum으로 열거형 정수 상수 목록 만들기
  enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT}; // 상수SUN은 0에서부터 순차적으로 1씩 증가하여 지정되며, 상수 THU는 4로 지정된다.
  printf("%d %d\n", SUN, THU ); //0 4

//상수목록에서 특정한 정수 지정 가능
 enum SHAPE {POINT, LINE, TRI =3, RECT, OCTA =8 , CIRCLE};
 printf("LINE: %d, RECT: %d, CIRCLE: %d\n", LINE, RECT, CIRCLE); //LINE:1, RECT:4, CIRCLE:9

 enum pl {c = 1972, cpp = 1983, java = 1995, csharp = 2000};
printf("c : %d, cpp: %d, java: %d\n", c, cpp, java); // c:1972, cpp:1983, java:1995

return 0;
}
