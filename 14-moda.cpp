#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 10;
	double Ar[N];

	cout << "Заполните массив!" << endl;

	for(int i = 0; i < N; i++)
	{
		cout << i+1 << " член массива: " << endl;
		cin >> Ar[i];
	}

	
	
	return 0;
}