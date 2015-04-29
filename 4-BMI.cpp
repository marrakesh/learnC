#include "iostream"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	double height, weight, BMI;
	
	cout << "		****BMI****		" << endl;
	cout << "Enter your height in meters and weight in kilos: ";
	
	cin >> height >> weight;

	BMI = weight/(height*height);

	cout << "Your BMI is " << BMI << endl;



	return 0;
}