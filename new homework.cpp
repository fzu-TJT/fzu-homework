#include<stdio.h>
#include<string.h>
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
char* convert2(int n)
{
    if (n == 0)  return "��";
    else if (n == 1) return "һ";
    else if (n == 2) return "��";
    else if (n == 3) return "��";
    else if (n == 4) return "��";
    else if (n == 5) return "��";
    else if (n == 6) return "��";
    else if (n == 7) return "��";
    else if (n == 8) return "��";
    else if (n == 9) return "��";
    else if (n == 10) return "ʮ";
}
void output(int n)
{ 
 if (n<=10)
    {
        printf("%s",convert2(n));
    }
    else if(n%10==0&&n<100)
    {
        printf("%sʮ",convert2(n/10));
    }
    else if (n<20)
    {
        n%=10;
        printf("ʮ%s",convert2(n));
    }
    else if (n<100)
    {
        printf("%sʮ%s", convert2(n/10),convert2(n%10));
    }
}
int main()
{
    int result;
    char a[10],name[10],b[10],c[10];
    printf("�����ļ���\n"); 
	 char s[10];
	 scanf("%s",s);
	 freopen(s,"r",stdin);
   scanf("%s %s %s %s",a,name,b,c);
    if(strcmp(a,"����")!=0||strcmp(b,"����")!=0)
    {printf("�������\n");
     return 0;
    }
    result=convert1(c);
    while(1)
    {
	    scanf ("%s ",name);
	    if(strcmp(name,"����")!=0)
		{
			scanf("%s %s",b,c);
			if(strcmp(b,"����")==0)
			{
				result+=convert1(c);
			}
			else if(strcmp(b,"����")==0)
			{
				result-=convert1(c);
			}
		}
		else break;
	}
    output(result);
    return 0;
}

