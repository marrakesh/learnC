//Конвертер температуры по Цельсию в температуру по Фаренгейту
#include "iostream"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	double Celsius;
	double Fahrenheit;

	cout << "Введите температуру по Цельсию: ";
	cin  >> Celsius;

	Fahrenheit = Celsius * 9 / 5 + 32;

	cout << Celsius << " Цельсиев - это " << Fahrenheit << " Фаренгейт" << endl;; 

	
	return 0;
}

