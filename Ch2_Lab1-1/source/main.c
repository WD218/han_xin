#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char x = 'X';
	char y = '-';
	int temp;
	int temp2;

	printf("(1) \n");

	for (int i=0;i<10;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i == 0) ||(i == 9) || (j == 0) || (j == 9))
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
	printf("(2)\n");
	for(int i=0;i<10;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9)|| (i == 1) || (i == 2) || (j == 1) || (j == 2)|| (i == 7) || (i == 8) || (j == 7) || (j == 8))
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

	temp = 4;
	temp2 = 5;
	printf("(3) \n");
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
	temp = 1;
	temp2 = 8;
	printf("(4)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i >0) && (i<5)&&(j == temp))
			{
				printf("%c", x);
			}
			else if ((i>0) && (i < 5) && (j == temp2))
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
	temp = 9;
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
				printf("%c",y);
			}
		}
		printf("\n");
	}
	system("pause");
}