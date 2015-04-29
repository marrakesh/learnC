#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 2;
	double Ar[N];
	double sum = 0;
	double srednee;


for(int i = 0; i < N; i++)
	{
		Ar[i] = i+1;
		sum += Ar[i];
		
	}
	cout << sum << endl;

	srednee = sum / N;

	cout << srednee << endl;


	return 0;
}