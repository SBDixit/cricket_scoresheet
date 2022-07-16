#include<iostream>
using namespace std;
int main()
{
 int n1,n2;
 cout<<"Enter the N1,N2 :\n";
 cin>>n1>>n2;
char operators;
cout << "Enter the operators : ";
cin >> operators;

switch (operators)
{
    case '+':
cout<<n1+n2<<endl;
    break;

    case '-':
cout<<n1-n2<<endl;
    break;

    case '*':
cout<<n1*n2<<endl;
    break;

    case '/':
cout<<n1/n2<<endl;
    break;

default:
cout<<"SORRY ! THE ENTERED OPERATORS IS NOT THERE :"<<endl;
    break;
}
return 0;
}