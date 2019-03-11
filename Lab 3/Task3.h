#include <iostream>

using namespace std;

class Task3
{
private:
	double s, x, a, x0, xk, dx;

	double CalculateTask3()
	{
		for (int n = 1; n <= 6; n++)
			for (int k = 1; k <= 3; k++)
				return pow(sqrt(k*n*pow(x, 2) - a), 3);
	}

public:
	void OutputTask3()
	{
		x0 = 0;
		dx = 0.1;
		xk = 0.6;
		a = 0;
		x = x0;
		while (x <= xk)
		{
			s = a;
			s += CalculateTask3();
			x += dx;
			cout << "x = " << x << "    " << "s = " << s << endl;
		}
	}
};