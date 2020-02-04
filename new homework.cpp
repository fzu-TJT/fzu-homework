#include<stdio.h>
#include<string.h>
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
char* convert2(int n)
{
    if (n == 0)  return "零";
    else if (n == 1) return "一";
    else if (n == 2) return "二";
    else if (n == 3) return "三";
    else if (n == 4) return "四";
    else if (n == 5) return "五";
    else if (n == 6) return "六";
    else if (n == 7) return "七";
    else if (n == 8) return "八";
    else if (n == 9) return "九";
    else if (n == 10) return "十";
}
void output(int n)
{ 
 if (n<=10)
    {
        printf("%s",convert2(n));
    }
    else if(n%10==0&&n<100)
    {
        printf("%s十",convert2(n/10));
    }
    else if (n<20)
    {
        n%=10;
        printf("十%s",convert2(n));
    }
    else if (n<100)
    {
        printf("%s十%s", convert2(n/10),convert2(n%10));
    }
}
int main()
{
    int result;
    char a[10],name[10],b[10],c[10];
    printf("输入文件名\n"); 
	 char s[10];
	 scanf("%s",s);
	 freopen(s,"r",stdin);
   scanf("%s %s %s %s",a,name,b,c);
    if(strcmp(a,"整数")!=0||strcmp(b,"等于")!=0)
    {printf("输入错误\n");
     return 0;
    }
    result=convert1(c);
    while(1)
    {
	    scanf ("%s ",name);
	    if(strcmp(name,"看看")!=0)
		{
			scanf("%s %s",b,c);
			if(strcmp(b,"增加")==0)
			{
				result+=convert1(c);
			}
			else if(strcmp(b,"减少")==0)
			{
				result-=convert1(c);
			}
		}
		else break;
	}
    output(result);
    return 0;
}

