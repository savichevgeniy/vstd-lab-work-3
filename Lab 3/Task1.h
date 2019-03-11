#include<iostream>

using namespace std;

class Task1
{
public:
	void result()
	{
		x0 = 0;
		xk = 1.0;
		dx = 0.1;
		a = 1.77;
		x = x0;
		do
		{
			y = a;
			y = calculateY();
			cout << "x = " << x << "     " << "y = " << y << endl;
			x += dx;
		} while (x <= xk);
	}

private:
	double  x0, xk, dx, a, y, x;

	double calculateY()
	{
		return (cos(3 * a + 1) / 4) / (pow(sin(3 * x), 3) + exp(4 * a));
	}
};