#include <stdio.h>
int main()
{
	char strexp[]="3+4";
		int l=strexp[0]-'0';
		int r=strexp[2]-'0';
		printf("%d\n",l+r);
		return 0;
}