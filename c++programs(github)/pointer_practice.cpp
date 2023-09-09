#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=5;
int * b=&a;

cout<<"the address of a "<<endl<<&a<<endl;
cout<<"the address of a "<<endl<<b<<endl;  

cout<<"the value of a "<<endl<<*b<<endl;


return 0;
}