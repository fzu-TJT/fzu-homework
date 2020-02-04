#include <stdio.h>
#include <string.h>
int convert1(char num[])
{
	if (strcmp(num, "一") == 0)
		return 1;
	else if (strcmp(num, "二") == 0)
		return 2;
	else if (strcmp(num, "三") == 0)
		return 3;
	else if (strcmp(num, "四") == 0)
		return 4;
	else if (strcmp(num, "五") == 0)
		return 5;
	else if (strcmp(num, "六") == 0)
		return 6;
	else if (strcmp(num, "七") == 0)
		return 7;
	else if (strcmp(num, "八") == 0)
		return 8;
	else if (strcmp(num, "九") == 0)
		return 9;
	else if (strcmp(num, "零") == 0)
		return 0;
	else if (strcmp(num, "十") == 0)
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
    test("九", 9);
    test("零", 0);
    test("一", 1);
    test("十", 10);
    test("五", 5);
    test("六", 6);
    test("七十七", 77);
    test("sekiro", 99);
    test("真", 66);
    test("好", 1);
    test("玩", 2);
    return 0;
        
}

