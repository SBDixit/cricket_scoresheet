#include <iostream>
using namespace std;
int main()
{
     int i, j;
     cout << "Enter the values of i , j = ";
     cin >> i >> j;
     int k;
     int l;

     k = i + j + i++ + j++ + ++i + ++j;
        l = k + j + i;
     cout << " i "
          << " = " << i << endl;
     cout << " j "
          << " = " << j << endl;
     cout << " k "
          << " = " << k << endl;
     cout << " l "
          << " = " << l << endl;

     return 0;
}