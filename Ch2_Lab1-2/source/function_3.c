#include<stdio.h>
#include<stdlib.h>

int Han_Xin_3()
{
	char x = 'X';
	char y = '-';
	printf("(3) \n");
	int temp = 4;
	int temp2 = 5;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == temp))
			{
				printf("%c", x);
				temp--;
			}
			else if ((i < 5) && (j == temp2))
			{
				printf("%c", x);
			}
			else if (i == 4)
			{
				printf("%c", x);
			}
			else
			{
				printf("%c", y);
			}
		}
		temp2++;
		printf("\n");
	}

	return 0;
}