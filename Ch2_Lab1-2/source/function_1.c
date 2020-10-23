#include<stdio.h>
#include<stdlib.h>

int Han_Xin_1()
{
	char x = 'X';
	char y = '-';
	printf("(1) \n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", x);
			}
			else
			{
				printf("%c", y);
			}
		}
		printf("\n");
	}
	return 0;
}