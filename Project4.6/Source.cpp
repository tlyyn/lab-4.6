#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	P = 1;
	k = 1;
	while (k <= 20)

	{
		S = 0;
		i = k;
		while (i <= 40-k)

		{
			S += i * i;
			i++;

		}
		P *= (1 + sqrt(S)) / (k * k);
		k++;

	}
	cout << P << endl;
	P = 1;
	k = 1;
	do
	{
		S = 0;
		i = k;
		do
		{
			S += i * i;
			i++;
		} while (i <= 40-k);
		P *= (1 + sqrt(S)) / (k * k);
		k++;
	} while (k <= 20);
	cout << P << endl;
	P = 1;
	for (k = 1; k <= 20; k++)

	{
		S = 0;
		for (i = k; i <= 40 - k; i++)

		{
			S += i * i;

		}
		P *= (1 + sqrt(S)) / (k * k);

	}
	cout << P << endl;
	P = 1;
	for (k = 20; k >= 1; k--
		)

	{
		S = 0;
		for (i = 40 - k; i >= k; i--
			)

		{
			S += i*i;
		
		}
		P *= (1 + sqrt(S)) / (k * k);
	}
	cout << P << endl;
	return 0;
}