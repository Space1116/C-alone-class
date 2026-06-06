#include <stdio.h>

double centi_to_meter(int cm); //'cm'라는 변수의 값을 인수로 받는 'centi_to_meter'라는 함수를 선언. 함수를 선언할 때는 main함수 밖에 쓴다.

int main(void) {
    double res;

    res = centi_to_meter(187); //'cm'변수에 '187'이라는 값을 넣고, 그 값을 'centi_to_meter'함수에 넣고 돌린 값을 res에 초기화
    printf("%.2lfm\n", res); //res값을 소수점 2자리까지 출력

    return 0;
}

//centi_to_meter함수 정의(컴퓨터한테 함수의 모습을 설명)
double centi_to_meter(int cm) {
    double meter;
    meter = cm / 100.0; //'cm'에 있는 값을 100으로 나눈 값을 'meter'라는 변수에 넣는다.
    return meter; //반환(그 값이 'centi_to_meter(int cm)'함수의 최종값이 된다.)
} 
