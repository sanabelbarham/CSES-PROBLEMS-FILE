

#include <iostream>
using namespace std;






int main()
{
	long long  int n = 0;
	cout << "enter a value for n" << endl;
	cin >> n;
	cout << n << " ";
	while (n != 1)
	{
		if (n % 2 == 1)
			n = (n * 3) + 1;
		else
			n = n / 2;
		cout << n << " ";


	}
	return 0;
}

