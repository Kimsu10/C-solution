#include <stdio.h>

int main (void){
  const int MAX = 30;

  printf("1에서 %d까지의 정수중 3으로 나누어 떨어지지 않는 수는\n", MAX);
  for(int i =1; i <= MAX; i++){
    if(i % 3 == 0)
    continue;
    printf("%3d", i);
  }
  puts("");
  
  return 0;
  } 