#include <stdio.h>
#include <string.h>

#define MAX 100
#define TRUE 0
#define FLASE -1

int main()
{
	int number,system,i;
	int an[MAX];
	int len = 0;
	int flag = TRUE;
			
	printf("输入对应的数和需要转换的进制：\n"); 
	scanf("%d%d",&number,&system);
	
	if(number < 0)
	{
		flag = FLASE;
		number = -number;
	}
 	
 	while(number != 0)
 	{
 		an[len++] = number % system ;
		number /= system;	
	}
	if(!flag)
	{
		printf("_");
	}
	for(i = len -1; i >= 0; --i)
	{
		printf("%c",an[i] < MAX ? an[i]+'0':an[i]-MAX+'A');
		
	}
	if(len == 0)
	{
		printf("0\n");
		
	}
	printf("\n");
	
	return 0;
 } 
 
 
 
