#include<stdio.h>
#include<stdlib.h>

int Han_Xin_5()
{
	char x = 'X';
	char y = '-';
	int temp = 9;
	printf("(5)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", x);
			}
			else if (j == temp)
			{
				printf("%c", x);
				temp--;
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