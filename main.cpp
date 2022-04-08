#include <stdio.h>
#include <string.h>
int main()
{
	char strexp[]="2*2/4*1/1*2*3/2";
    int a=strexp[0]-'0';
    for(int i=1;i<strlen(strexp);i++)
	{
        if(strexp[i]=='*')
		{
			a=a*(strexp[i+1]-'0');
		}
		if(strexp[i]=='/')
		{
			a=a/(strexp[i+1]-'0');
		}	
	}
	printf("%d\n",a);	
	return 0;
}