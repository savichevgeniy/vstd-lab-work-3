#include <iostream>

using namespace std;

class Task2
{
private:
	double  x0, xk, dx, a, y, x;

	double CalculateTask2()
	{
		return (exp(pow(x, 2) / 2) + exp(1 + (pow(a, 2) / 2))) / 1 + pow(a, 2) / 2 + pow((pow(x, 4) / 2), 2);
	}

public:
	void OutputTask2()
	{
		cout << "¬ведите начальное значение x: ";
		cin >> x0;
		cout << "¬ведите конечное значение x: ";
		cin >> xk;
		cout << "¬ведите шаг: ";
		cin >> dx;
		a = 1.77;
		x = x0;
		while (x <= xk)
		{
			y = CalculateTask2();
			cout << "x = " << x << "     " << "y = " << y << endl;
			x += dx;
		}
	}
};