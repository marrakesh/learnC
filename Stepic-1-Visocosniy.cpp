#include <iostream>
using namespace std;

int main()
{
    // put your code here
    int A;
    int B;
    int D = 0;
    cout << "Put two integers:\n";
    cin >> A >> B;
    while ((A-1)<B){
    	if (A%4 == 0 && A%100 !=0)
    	{
    		D++;
    	}
    	else if (A%400 == 0)
    	{
    		D++;
    	}
    	A++;
    }
    
    cout << D << endl;
    return 0;
}
