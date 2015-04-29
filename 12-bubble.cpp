#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 5;
	int Ar[N];

	for(int i = 0; i < N; i++)
	{
		cout << "Введите значение " << i+1 << "-го члена массива: " << endl;
		cin >> Ar[i];
	}

	cout << endl << "Отсортируем массив методом пузырьков!" << endl << endl;
	
	
	for(int j = N-1; j > 0; j--)
	{
		for(int i = 0; i<j; i++)
		{
			if(Ar[i] > Ar[i+1])
			{
				int tmp = Ar[i];
				Ar[i] = Ar[i+1];
				Ar[i+1] = tmp;
			}
		}
	}
	for (int i(0); i< N; i++)
	{
		cout << "Теперь " << i+1 << " член масива " << Ar[i] << endl;
	}

	return 0;
}