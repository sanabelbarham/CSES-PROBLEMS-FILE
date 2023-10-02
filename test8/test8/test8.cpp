#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> seats(n);
    for (int i = 0; i < n; i++) {
        cin >> seats[i];
    }
    if (n == 1 && seats[0] == 0)
    {
        seats[0] = 1;
        k--;

    }
    if (n > 1 && seats[0] == seats[1] && seats[0] == 0)
    {
        seats[0] = 1;
        k--;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (seats[i] == seats[i - 1] && seats[i + 1] == seats[i] && seats[i] == 0)
        {
            seats[i] = 1;
            k--;
            i++;
        }

    }
    if (n > 1 && seats[n - 1] == 0 && seats[n - 2] == 0)
    {
        k--;
    }
    if (k <= 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
   
    return 0;
}
