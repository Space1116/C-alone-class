#include <stdio.h>
int main(void)
{
    double height = 179.5; //키를 저장할 변수를 선언함과 동시에 변수를 179.5로 초기화
    double weight = 75.0; //몸무게를 저장할 변수를 선언함과 동시에 변수를 75.0으로 초기화
    if ((height >= 187.5) && (weight < 80)) //if의 조건을 충족하면 "ok"를 출력한다.
    {
        printf("ok\n");
    }
    else //if의 조건을 충족하지 않으면 "cancle"을 출력한다.
    {
        printf("cancle\n");
    }
    return 0;
}
