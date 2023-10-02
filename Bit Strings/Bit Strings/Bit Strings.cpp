// Bit Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long int modu = 10000000007;



int main()
{
	long long  n,t,x=1;
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		x *= 2;
		x %= modu;
	}
	cout << x << endl;

	return 0;

}

