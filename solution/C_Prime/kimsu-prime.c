	
/** 아래 내용 중에서 함수 개념을 모르시는 학생 분들은 prime_number() 함수를 정의하지 않고
 *  main() 함수만 가지고 프로그램을 작성하셔도 됩니다.
 * 2부터 n사이의 소수들을 출력하는 프로그램을 다음 조건에 맞춰 작성하시오.
 * - 조건1: main 함수에서 2 이상 100 이하인 정수를 하나 입력 받아 n 값으로 사용한다.
 * - 조건2: 2부터 n사이(2와 n 포함)의 소수를 출력하고 소수의 개수를 리턴하는 함수 prime_number를 정의하고
 *  main 함수에서 호출한다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main(void)

{
	int num;
	int cnt = 0;
	int arr[100];
	scanf("%d", &num);

	for (int i = 2; i <= num; i++){
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(num); i++){
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j <= num; j += i)
		{
			arr[j] = 0;
		}
	}

	for (int i = 2; i <= num; i++)
	{
		if (arr[i] != 0) printf("%d ", arr[i]);
	}

	return 0;
}