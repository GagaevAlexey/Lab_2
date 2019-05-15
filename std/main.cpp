#include <stdio.h> 
#include <math.h> 
#include <iostream>

using namespace std;

double func(double x);
bool isInArea(double x, double y);

int main(void)
{
	double x, y;
	int n;
	printf("Select Task: 1, 2\n");
	cin >> n;
	switch (n)
	{
		case 1:
		{
			printf("Task1:\n");
			printf("Enter X=");
			cin >> x;
			printf("Enter Y=");
			cin >> y;
			isInArea(x, y);
			printf("%d", isInArea(x, y));
			break;
		}
		case 2:
		{
			printf("Task 2:\n");
			printf("Enter X=");
			cin >> x;
			func(x);
			printf("%.3lf", func(x));
			break;
		}
		default:
			printf("Wrong input");
		break;
	}
	return(0);
}

bool isInArea(double x, double y)
{
	double c;
	c = x * x;
	if ((y >= x) && (x >= 0 && y >= 0) || (y >= -x) && (x <= 0 && y >= 0) || (y <= x) && (x <= 0 && y <= 0) || (y <= -x) && (x >= 0 && y <= 0))
			return(1);
	else
		return (0);
}


double func(double x)
{
	double f;
	if (x<= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return  1 / (pow(x, 3) + 6);
}