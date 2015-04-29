#include "iostream"
#include "cmath"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	double a, b, c, D, x, x1, x2;

	cout << "Enter coeficients of square equation: ax^2+bx+c=0 \n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	cout << "Your equation is " << a <<"x^2+" << b << "x+" << c << "=0" << endl;

	D = b * b - 4 * a * c;

	if (D < 0)
	{
		cout << "There is no solutions" << endl;
	}
	else
	{	
		if (D == 0)
		{
			cout << "There is one solution ";
			x = - b / (2 * a);
			cout << "x = " << x << endl;
		}
		else
		{
			cout << "There is two solutions ";
			x1 = (- b + sqrt(D)) / (2 * a);
			x2 = (- b - sqrt(D)) / (2 * a);
			cout << "x1 = " << x1 << " ,x2 = " << x2 << endl;
		}
	}
return 0;
}