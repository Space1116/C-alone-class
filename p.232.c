#include <stdio.h>

void sum(int n); //sum이라는 함수를 선언

int main(void) {
    sum(10);
    sum(100);
    return 0;
}

//sum함수 정의
void sum(int n)
{
    int i, tot = 0;
    for(i = 1; i <= n; i++)
    {
        tot += i; //"tot = tot + i"와 같은 뜻
    }
    // 15~18줄은 i가 n과 같은 값이 될 때까지 i값을 계속 누적해서 더해서 tot변수에 넣는다는 말임.
    printf("1부터 %d까지의 합은 %d입니다.\n", n, tot);
}
