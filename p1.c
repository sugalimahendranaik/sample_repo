#include<stdio.h>
#include<ctype.h>
void main()
{
	char n,i,j;
	scanf("%c",&n);
	for(i=65;i<=n;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
    }
}
