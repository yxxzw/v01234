#include"stdio.h"
#include"string.h"

int main()
{
	char strexp[] = "2+2*3+2/2-1";
    char *strtmp=new char[strlen(strexp)];
	int s = strexp[0] - '0';

	for (int i = 0; i < strlen(strexp); i++)
	{
		if (strexp[i] == '*')
		{
			strexp[i - 1] = strexp[i - 1] - '0';
			strexp[i + 1] = strexp[i + 1] - '0';
			strtmp[i - 1] = strexp[i - 1] * strexp[i + 1]+'0';
			i++;
		}
		else if (strexp[i] == '/')
		{
			strexp[i - 1] = strexp[i - 1] - '0';
			strexp[i + 1] = strexp[i + 1] - '0';
			strtmp[i - 1] = strexp[i - 1] / strexp[i + 1] + '0';
			i++;
		}
		else
		{
			strtmp[i] = strexp[i];
		}
	}
	for (int a = 0; a<strlen(strtmp); a++)
	{
		if (strtmp[a] == '+')
		{
			s = s + (strtmp[a + 1]-'0');
			a++;
		}
		if (strtmp[a] == '-')
		{
			s = s - (strtmp[a + 1]-'0');
			a++;
		}
	}
	printf("%d\n", s);
	return 0;
}
