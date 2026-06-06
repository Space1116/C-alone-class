#include <stdio.h>
int main(void)
{
    int n; //입력값을 받을 변수 선언
    printf("정수 입력 : ");
    scanf("%d", &n); //입력값을 변수n에 대입
    switch (n % 3) //n을 3으로 나눈 나머지의 값을 확인(해당 값이 switch값)
    {
    case 0: //switch값이 0이면 "거짓"을 출력한다.
        printf("거짓");
        break; //출력후 switch문을 빠져나온다. 기본적으로 case는 break을 포함한다.
    default: //switch값이 case에서 설정한 값에 모두 해당되지 않으면 "참"을 출력한다.
        printf("참");
        break; //switch값 탈출
    }
    return 0;
}