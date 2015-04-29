#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 10;
	const double M = 2.5;
	double Ar[N];

	for(int i = 0; i < N; i++)
	{
		cout << "Введите оценку " << i+1 << "-го студента: " << endl;
		cin >> Ar[i];
	}

	for(int i = 0; i < N; i++)
	{
		if(Ar[i] <= M)
		{
			cout << "Отчислить " << i+1 << "-го студента" << endl;
		}
	}


	return 0;
}