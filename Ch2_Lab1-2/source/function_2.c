#include<stdio.h>
#include<stdlib.h>

int Han_Xin_2()
{
	char x = 'X';
	char y = '-';
	printf("(2) \n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9) || (i == 1) || (i == 2) || (j == 1) || (j == 2) || (i == 7) || (i == 8) || (j == 7) || (j == 8))
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