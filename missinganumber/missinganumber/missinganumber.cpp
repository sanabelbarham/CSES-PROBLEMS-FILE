

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cout << "enter a value for n" << endl;
	long long int n,i, sum, sum1{};
	cin >> n;
	sum = n * (n +1)/2;
	vector <long long int> vec(n);
	for (i = 0; i < n - 1; i++)
	{
		cin >> vec[i];
		sum1 += vec[i];

	}
	cout << endl;
	cout << sum - sum1;
	return 0;
	
}

