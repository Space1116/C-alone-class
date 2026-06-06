int chset = 95; //가슴둘레의 크기를 저장할 변수
char size; //사이즈 크기를 저장할 변수
if (chset = < 90)
{
    size = 'S';
}
//가슴둘레가 90보다 작거나 같으면 size는 S
else if (chest = < 100)
{
    size = 'M';
}
//if문의 요건(chest =< 90)도 충족하지 않고, chest가 100보다 작거나 같으면 size는 M
else
{
    size = 'L';
}
//if문과 else if 모두 중족하지 않으면 사이즈는 L