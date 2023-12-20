#define _CRT_SECRET_NO_WARNINGS
#include <stdio.h>

int main(void){
  int score;
  printf("점수(0~100)을 입력해주세요: ");
  scanf("%d", &score);

  if(score <0 || score >100){
    printf("입력가능한 범위를 벗어났습니다.\n");
    return 0;
  }

  switch(score/10){
    default:
    printf("점수가  %d 점으로 성적이 %c 입니다.\n", score, 'F');
    break;

    case 10: case 9:
    printf("점수가  %d 점으로 성적이 %c 입니다.\n", score, 'A');
    break;

    case 8:
    printf("점수가  %d 점으로 성적이 %c 입니다.\n", score, 'B');
    break;

    case 7: 
    printf("점수가  %d 점으로 성적이 %c 입니다.\n", score, 'C');
    break;

    case 6:
    printf("점수가  %d 점으로 성적이 %c 입니다.\n", score, 'D');
    break;
  }

  return 0;
}