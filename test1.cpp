#include <stdio.h>
#include <string.h>
int convert1(char num[])
{
	if (strcmp(num, "һ") == 0)
		return 1;
	else if (strcmp(num, "��") == 0)
		return 2;
	else if (strcmp(num, "��") == 0)
		return 3;
	else if (strcmp(num, "��") == 0)
		return 4;
	else if (strcmp(num, "��") == 0)
		return 5;
	else if (strcmp(num, "��") == 0)
		return 6;
	else if (strcmp(num, "��") == 0)
		return 7;
	else if (strcmp(num, "��") == 0)
		return 8;
	else if (strcmp(num, "��") == 0)
		return 9;
	else if (strcmp(num, "��") == 0)
		return 0;
	else if (strcmp(num, "ʮ") == 0)
	return 10;
}
void test(char* s, int a)
{
    if (convert1(s)== a)
        printf("pass\n");
    else
        printf("error\n");
}
int main(void)
{
    test("��", 9);
    test("��", 0);
    test("һ", 1);
    test("ʮ", 10);
    test("��", 5);
    test("��", 6);
    test("��ʮ��", 77);
    test("sekiro", 99);
    test("��", 66);
    test("��", 1);
    test("��", 2);
    return 0;
        
}

