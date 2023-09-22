/*source: 05floatdouble.c*/

# include <stdio.h>
 int main(void)
 {
  float x = 3.14F;    //float x =3.14인 경우, 경고가 발생한다.
  double y = -3.141592; // double의 저장공간 크기는 float의 2배.
  long double z = 29.74;  // double과 long double은 저장공간이 모두 64비트이다.

  printf("부동소수 값: %f %lf %Lf\n", x, y, z);
 
  return 0;
 }
// 출력값은 부동소수 값: 3.140000 -3.141592 29.740000 이다.



 /**
  *  printf("부동소수 값: %f %f %f\n", x, y, z); 
  * 실행결과
  * 빌드를 시작하는 중...
/usr/bin/clang -fcolor-diagnostics -fansi-escape-codes -g /Users/sj/Desktop/C-solution/solution/ch03/prj05/05floatdouble.c -o /Users/sj/Desktop/C-solution/solution/ch03/prj05/05floatdouble
/Users/sj/Desktop/C-solution/solution/ch03/prj05/05floatdouble.c:10:48: warning: format specifies type 'double' but the argument has type 'long double' [-Wformat]
  printf("부동소수 값: %f %f %f\n", x, y, z); //모두 %f로 출력 가능
                             ~~           ^
                             %Lf
1 warning generated.

빌드가 완료되었지만, 경고가 발생했습니다.
 *  Terminal will be reused by tasks, press any key to close it. q
 * long double의 경우 값을 출력할 때 %Lf를 사용해야한다.
 */
