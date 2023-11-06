/**
 * - 조건1:사용자는 입력을 통해 가위바위보 중 하나를 선택할 수 있게 한다.
 * (가위는 1, 바위는 2, 보는 3으로 하여, 숫자로 선택할 수 있게 한다.)
 * (사용자가 ‘q’ 또는 ‘Q’를 입력하면 게임을 종료한다)
 * (랜덤 함수를 이용할 때, srand(time(NULL)을 사용하여 랜덤 수를 얻도록 한다.) 
 * - 조건2: 컴퓨터와 사용자의 선택을 비교하여 승무패를 정한다.
 * (숫자로 입력 받았다면 switch-case문을 이용하여 승무패를 비교할 수 있다.)
 * - 조건3: 결과를 나타내고, 계속 가위바위보를 진행한다. 
 *더 나은 사용자 인터페이스를 제공할 수 있으면 위 조건을 반드시 지킬 필요는 없습니다.
 * -> 문자열과 숫자 모두 입력가능하도록 작성.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    int com, user;
    int win = 0;
    int draw = 0;
    int lose = 0;
    char user_input[9];
    const char *choices[] = {"가위", "바위", "보"};
    
    srand(time(NULL));
    
    while (1) {
        com = rand() % 3;
        printf("가위(1), 바위(2), 보(3) 중 하나를 입력하세요 : 종료하고 싶다면 (q) 또는 (Q)를 입력해주세요 ");
        scanf("%s", user_input);

        int isNumber = 1;
        for (int i = 0; i < strlen(user_input); i++) {
            if (!isdigit(user_input[i])) {
                isNumber = 0;
                break;
            }
        }

        if (isNumber) {
            user = atoi(user_input) - 1;
        } else {
            if (strcmp(user_input, "가위") == 0 || strcmp(user_input, "1") == 0) {
                user = 0;
            } else if (strcmp(user_input, "바위") == 0 || strcmp(user_input, "2") == 0) {
                user = 1;
            } else if (strcmp(user_input, "보") == 0 || strcmp(user_input, "3") == 0) {
                user = 2;
            } else {
                user = -1; 
            }
        }

        if (strcmp(user_input, "q") == 0 || strcmp(user_input, "Q") == 0) {
            printf("종료.\n 총 전적 : %d 승 %d 무 %d 패\n", win, draw, lose);
            break;
        }

        if (user >= 0 && user < 3) {
            if (user == com) {
                draw++;
                printf("컴퓨터는 : %s, 당신은 : %s, 결과 : 비겼습니다.\n", choices[com], choices[user]);
            } else if ((user + 1) % 3 == com) {
                lose++;
                printf("컴퓨터는 : %s, 당신은 : %s, 결과 : 졌습니다.\n", choices[com], choices[user]);
            } else {
                win++;
                printf("컴퓨터는 : %s, 당신은 : %s, 결과 : 이겼습니다.\n", choices[com], choices[user]);
            }
        } else {
            printf("입력 오류! 가위(1), 바위(2), 보(3) 중 하나를 입력하세요.\n\n");
        }

        printf("현재 전적 : %d 승 %d 무 %d 패\n\n", win, draw, lose);
    }

    return 0;
}
