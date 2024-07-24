// Project Euler Problem 2

#include<iostream>
using namespace std;

int main()
{
	int previous = 1;
	int current = 1;
	int next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = previous + current;
		if (next % 2 == 0)
		{
			sum += next;
		}
		previous = current;
		current = next;
	}
	
	cout << sum;


	return 0;
}
