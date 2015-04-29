#include "iostream"

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	unsigned long long result = 1, pow = 1;
	const int N=64;

	for (int i = 1; i <= N; i++)
	{
		pow *= 2;		
		cout << result << endl;
		result += pow;
		
	}

	return 0;
}