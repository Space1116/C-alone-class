#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80]; //입력받을 문자열을 저장할 변수
	char temp[80]; //각 문자열 위치 변경간 임시저장소로 쓸 변수

	printf("두 문자열 입력 : ");
	scanf_s("%s %s", str1, str2);
	printf("바꾸기 전 : %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("바꾼 후 : %s %s", str1, str2);

	return 0;
}

//12줄~13줄: 표로 도식화해서 이해하면 편하다.