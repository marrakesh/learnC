#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 10;
	int Ar[N];
	int index;

	for(int i = 0; i < N; i++)
	{
		Ar[i] = i+1;
	}

	cin >> number;
	if(index >=0 && index < N)
		cout << Ar[index] << endl;
	else
		cout << "Error!!!" << endl;

	return 0;
}