#include "iostream"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	const int Size = 1024;
	int Gigabyte;
	int Megabyte;
	int Kilobyte;
	long long Byte;

	cout << "Type quontatie of Gigabyte: ";
	cin >> Gigabyte;

	Megabyte 	= Size * Gigabyte;
	Kilobyte	= Size * Megabyte;
	Byte 		= (long long)Size * (long long)Kilobyte;

	cout << Gigabyte << " Gigabyte:" 			<< endl;
	cout << "It's "  << Megabyte << " Megabyte" << endl;
	cout << "It's "  << Kilobyte << " Kilobyte" << endl;
	cout << "It's "  << Byte 	 << " Byte"	    << endl;

	return 0;
}