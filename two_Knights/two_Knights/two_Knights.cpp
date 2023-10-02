
#include <iostream>
using namespace std;


int main()
{
	long long int n,attcks,compination;
	cin >> n;
	for (long long int i = 1; i <= n; i++)
	{
		compination = ((i * i) * ((i * i) - 1)) / 2;
		attcks = 4 * (i - 1) * (i - 2);
		cout << compination - attcks << endl;
	}
	

	return 0;
}
