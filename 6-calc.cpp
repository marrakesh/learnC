#include "iostream"
#include "cmath"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	double a, b, c;
	char oper;

	cout << "Type first number: " << endl;
	cin >> a;
	cout << "Type second number: " << endl;
	cin >> b;
	cout << "Type an operation between this numbers: " << endl;
	cin >> oper;

	switch(oper)
	{
		case '+': c = (a + b);break;
		case '-': c = (a - b);break;
		case '*': c = (a * b);break;
		case '/': c = (a / b);break;

		default: cout << "Error!";
	}

	cout << c << endl;


	return 0;
}