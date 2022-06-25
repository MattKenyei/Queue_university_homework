#include "Queue.h"

void lp()
{
	Queue meq;
	int ch;
	int tmp;
	while (true)
	{
		printf("Choose:\n1)add number\n2)delete number\n3)translate the entered sequence of digits into a word\n4)exit\n");
		do 
		{
			scanf_s("%i", &ch);
		} while (ch < 1 || ch > 4);
		switch (ch)
		{
		case 1: 
				printf("Input number");
				scanf_s("%i", &tmp);
				push(meq, tmp);
				break;
		case 2:
			if (!isEmpty(meq))
			{
				tmp = pull(meq);
				printf("Removed number: %i\n", tmp);
			}
			else
				printf("Error! Empty queue\n");
			break;
		case 3:
			if (!isEmpty(meq))
				change(meq);
			else 
				printf("Error! Empty queue\n");
			break;
		case 4:
			return;
		}
		print(meq);
	}
	if (ch==4)
		clear(meq);
}

int main()
{
	lp();
	system("pause");
	return 0;
}