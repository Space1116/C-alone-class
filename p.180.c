//switc~case문

#include <stdio.h>

int main(void)
{
    int num1, num2, res; //계산값 두 개와 결과값을 넣은 변수 선언
    char op; //연산자를 넣을 변수 선언

    printf("사칙연산 입력(정수) : ");
    scanf_s("%d%c%d", &num1, &op, 1, &num2); //입력값을 각 변수에 넣는다.
    //op는 바로 뒤에 문자 크기(1)을 꼭 적어줘야 한다.

    switch (op) //사용자가 입력한 연산자에 맞는 case문을 실행한다.
    {
    case '+': res = num1 + num2; break;
    case '-': res = num1 - num2; break;
    case '*': res = num1 * num2; break;
    case '/': res = num1 / num2; break;
    }

    printf("%d %c %d = %d\n", num1, op, num2, res); //최종 결과물 출력

    return 0;
}
