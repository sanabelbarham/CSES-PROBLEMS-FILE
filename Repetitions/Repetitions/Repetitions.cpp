// Repetitions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i, CA = 0, CC = 0, CT = 0,CG=0;
    cout << "enter the size of the vector" << endl;
    cin >> n;
  
    vector <char> DNA(n);
    
    for (i = 0; i < n ; i++)
    {
        cin >> DNA[i];
        if (DNA[i] == 'A')
            CA++;//5
        else if (DNA[i] == 'C')
            CC++;//99
        else if (DNA[i] == 'G')
            CG++;
        else if (DNA[i] == 'T')
            CT++;//1

    }
    cout << endl;
    int max = CA;
    if (CC > max)
        max = CC;
    if (CG > max)
        max = CG;
    if (CT > max)
        max = CT;
    cout << "the longest repetition is" << max << endl;



}
