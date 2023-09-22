#define _CRT_SECURE_NO_WARNINGS //scanf()오류를 방지하기위한 상수를 정의

#include <stdio.h>

int main(void)
{
  int month = 0;
  printf("1년은 몇달?");
  scanf("%d", &month); //scanf()의 형식문자열에 표시된 문자는 꼭 입력되어야하는 형식으로, 콘솔에서 정수를입력한 후 반드시 return을 입력해야한다.
  printf("1년은 %d달\n\n", month);

  int snum, credit;
  printf("당신의 학번과 신청 학점은? ");
  scanf("%d%d", &snum, &credit); // 수를 위한 형식지정자 사이의 빈 공백은 아무 의미가 없기때문에 %d%d와 %d %d 모두 사용해도 된다. 
  printf("학번: %d 신청학점: %d\n", snum, credit);

  return 0;
}
// 1년은 몇 달? 12 -> 정수를 입력한후 enter키를 눌러야 프로그램이 진행된다.
// 1년은 12달

// 당신의 학번과 신청 학점은? 2023 24 -> 두 정수를 스페이스 또는 엔터로 구분하여 입력한후 엔터키를 눌러야 프로그램이 진행된다.
// 학버니 2023 신청학점: 24