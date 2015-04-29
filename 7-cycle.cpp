#include "iostream"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int i(1);

	while (i<=10)
	{
		cout << "Цикл прошел " << i << " раз!" << endl;
		i++;
	}

	for (int a = 1; a<=10; a++)
	{
		cout << "Это цикл for " << a << endl;
	}

	return 0;
}