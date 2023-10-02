#include <iostream>
using namespace std;
int main()
{
    long long int a, b, t;
    cin >> t;



    for (long long int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        if ((a > 2 * b) || (b > 2 * a) || ((a + b )% 3 != 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;



    }
    return 0;

}
