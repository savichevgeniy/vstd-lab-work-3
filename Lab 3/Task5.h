#include <iostream>

using namespace std;

class Task5
{
private:
	const int N = 10;
	double a, x, y, y0;
	int nf, n, m;

	double CalculateTask5()
	{
		return pow(x, n) / nf;
	}

public:
	void OutputTask5()
	{
		cout << "������� �: "; cin >> a;
		cout << "������� x: "; cin >> x;
		y = 1;
		for (n = 1; n <= N; n++)
		{
			for (m = 1; m <= n; m++)
				nf = n * m;
			y = CalculateTask5();
		}
		y0 = (a, x);
		cout << "��������� �������� � 10 ������� ����: " << y << endl;
		cout << "������ �������� ����: " << y0 << endl;

	}
};

