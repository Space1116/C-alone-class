//for문과 if~else문의 중첩
#include <stdio.h>
int main(void)
{
    int i, j; //반복횟수를 쓸 변수 선언
    for (i = 0; i < 5; i++) //i가 0일 때부터 4가 될때까지 1씩 증가하며 반복이니까 총 5번 반복
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == j) || (i + j == 4)) 
                printf("*"); 
            else printf(" "); 
        }
        printf("\n");
    }
    return 0;
}
//표로 표현하면 if의 조건문이 만족하는 경우들이 X자를 이룬다.
//도식화(표) 참고
