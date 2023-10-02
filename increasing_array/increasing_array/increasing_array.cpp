/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[5][5];
    long long int y, x, t, i, j, k;
    for (j = 0; j < 5; j++)
    {
        for (k = 0; k < 5; k++)
        {
            cin >> arr[j][k];
        }
    }

    cout << "enter the value for t" << endl;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cout << "enter y and x" << endl;
        cin >> y >> x;
        cout << arr[y][x] << endl;
    }


    return 0;
}




