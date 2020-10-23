#include<stdio.h>
#include<stdlib.h>

int Han_Xin_4()
{
	char x = 'X';
	char y = '-';
	printf("(4) \n");
	int temp = 1;
	int temp2 = 8;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i > 0) && (i < 5) && (j == temp))
			{
				printf("%c", x);
			}
			else if ((i > 0) && (i < 5) && (j == temp2))
			{
				temp++;
				printf("%c", x);
				temp2--;
			}
			else if (i == 0)
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