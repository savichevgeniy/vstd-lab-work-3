#include <iostream>

using namespace std;

class Task4
{
private:
	double s, x, a, x0, xk, dx;
	int n, k, i;

	double CalculateTask4()
	{
		return pow(sqrt(k*n*pow(x, 2) - a), 3);
	}

public:
	void OutputTask4()
	{
		x0 = 0;
		dx = 0.1;
		xk = 0.7;
		a = 0.46;
		x = x0;
		cout << "¬ведите число повторений: ";
		cin >> i;
		for (n = 1; n <= i; n++)
		{
			for (k = 0; k <= i; k++)
				s = a;
			s += CalculateTask4();
			x += dx;
			cout << "x = " << x << "    " << "s = " << s << endl;
		}
	}
};