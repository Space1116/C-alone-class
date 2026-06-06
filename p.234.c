#include <stdio.h>

int rec_func(int n); //'rec_func'라는 함수 선언

int main(void) {
    int total_sum; //'total_sum'라는 변수 선언
    total_sum = rec_func(10); //'rec_func'함수에 10을 넣은 값을 'total_sum'이라는 변수에 대입함.
    printf("%d\n", total_sum);
    return 0;
}

//'total_sum'함수 정의
int rec_func(int n) { //'rec_func'함수는 정수를 매개변수로 갖는다.
    if(n == 1){
        return 1; 
    }//n이라는 변수의 값이 1이라면 1을 반환한다.
    return n + rec_func(n - 1); //n이라는 변수의 값이 1이 아니라면 (n-1)의 값을 대입한 'rec_func'함수의 값을 반환한다.
    // n이 1부터 증가해가기 때문에, (n-1)이 갖는 의미는, 직전의 계산값과 현재의 계산값을 더하라는 것이다.
    // 결론적으로 누적 더하기가 된다.
}

/*
return n == 현재의 n값을 그대로 반환
rec_func(n-1) == 방금 계산한 값을 반환
결론적으로 위 두 줄을 더하면 누적더하기 논리가 된다.
언제까지? n이 1이 될 때까지.
7번 줄에서 n이 10이니까, 10 + (re_func(9)(=8 + re_func(8)(=7+re_func(6) ~~~ +1) 재귀호출이 된다.
*/