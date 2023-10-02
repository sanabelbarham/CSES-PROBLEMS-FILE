/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void p(int* ptr)
{
    *ptr += 10;
}
int main()
{
    int x = 5;
    p(&x);
    cout << x << endl;
    // int *const  ptr;
     //cout<<*&ptr<<endl;
       //  cout<<&*ptr<<endl;



    return 0;
}
