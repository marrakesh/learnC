#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 150;

	bool SimpleNumbers[N];

	for(int i = 2; i < N+1; i++)
		SimpleNumbers[i] = true;

	for(int i = 2; i < N+1; i++)
	{
		if(SimpleNumbers[i])
			for(int j = i * i; j<= N; j+=i)
				SimpleNumbers[j] = false;
	}

	for(int i = 2; i <= N; i++)
		if(SimpleNumbers[i])
			cout << i << endl;

	return 0;
}
