//if문 중첩
#include <stdio.h>
int main(void)
{
    int age = 25, chest = 95; //나이와 가슴둘레를 선언과 동시에 초기화
    char size; //size를 저장할 변수 선언
    if (age < 20) //age가 20보다 작다는 조건 설정
    {
        if (chest < 85) size = 'S'; //(age < 20)인 조건 중에서 chest가 85보다 작으면 size에 'S'대입
        else if (chest < 95) size = 'M'; //바로 위 if를 충족하지 않고 chest가 95보다 작으면 size에 'M'대입
        else size = 'L';//if문도, else if문도 충족하지 않으면 size에 'L'대입
    }
    else //위의 큰 if를 충족하지 안는 조건이라면 else의 조건문으로 들어간다. 이후 위 내용 반복
    {
        if (chest < 90) size = 'S';
        else if (chest < 100) size = 'M';
        else size = 'L';
    }
    printf("사이즈는 %c입니다.\n", size); // 최종 size에 들어간 값을 토대로 출력
}