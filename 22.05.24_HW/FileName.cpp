#include <iostream>
using namespace std;


class Fract
{
	int a;
	int b;
public:
	Fract()
	{
		a = b = 0;
	}
	Fract(int x, int y)
	{
		a = x;
		b = y;
	}

	void Summ(Fract& y)
	{
		double nom, denom, result;
		denom = b * y.b;
		nom = a * y.b + y.a * b;
		if (denom != 0)
		{
			result = nom / denom;
			cout << result << endl;
		}
	}
	void Substr(Fract& y)
	{
		double nom, denom, result;
		denom = b * y.b;
		nom = a * y.b - y.a * b;
		if (denom != 0)
		{
			result = nom / denom;
			cout << result << endl;
		}
	}
	void Mult(Fract& y)
	{
		double nom, denom, result;
		denom = b * y.b;
		nom = a * y.a;
		if (denom != 0)
		{
			result = nom / denom;
			cout << result << endl;
		}
	}
	void Divide(Fract& y)
	{
		double nom, denom, result;
		denom = b * y.a;
		nom = a * y.b;
		if (denom != 0)
		{
			result = nom / denom;
			cout<< result<<endl;
		}
	}
};
int main()
{
	Fract a{ 1,2 };
	Fract b{ 1,2 };
	a.Summ(b);
	a.Substr(b);
	a.Mult(b);
	a.Divide(b);

}