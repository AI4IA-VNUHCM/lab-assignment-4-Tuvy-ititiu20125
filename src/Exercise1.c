/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

void Ex1(int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			int iF=1;
			for (int k = 1; k<=i; k++)
			{
				iF=iF*k;
			}
			int jF=1;
			for (int k = 1; k<=j; k++)
			{
				jF=jF*k;
			}
			int ijF=1;
			for (int k = 1; k <= i-j; k++)
			{
				ijF=ijF*k;
			}
			int C = iF/(ijF*jF);
			printf ("%4d",C);
		}
		printf ("\n");
	}
	
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	Ex1(testcase);
	return 0;
}
