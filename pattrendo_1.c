#include<stdio.h>
int main()
{
	int i=1,j;
	do
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
	printf("\n");
	i++;
	}while(i<=5);
	return 0;

}