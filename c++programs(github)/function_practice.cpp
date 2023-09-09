/*#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b)
{
    int c = a * b;
    return c;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int devide(int a, int b)
{
    int c = a / b;
    return c;
}
void print()
{
cout<<" this is void fuction which is not take values and give values also ";
}

int main()
{
    int a, b;
    cout<<" enter the two values for calculation"<<endl;
    cin >> a >> b;

    cout << "this is multiple" << endl;
    cout << mul(a, b) << endl;

    cout << "this is plus" << endl;
    cout << sum(a, b) << endl;

    cout << "this is devide" << endl;
    cout << devide(a, b) << endl;

    print();

    return 0;
}*/
// 1 prime no.
/*#include<bits/stdc++.h>
using namespace std;
int prime(int a)
{ int count=0;
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
        {

            count++;
        }
    }
    if(count==2)
    {
        cout<<"this is a prime no"<<endl;
    }
    else
    {
        cout<<"this is not prime no";

    }
    return 0;
}
int main()
{int n;
cout<<"enter the values"<<endl;
cin>>n;
cout<<prime(n);

return 0;
}*/
// 2 avarage no
/*#include <bits/stdc++.h>
using namespace std;
int avarage(float a, float b)
{
float c=(a+b)/2;
return c;
}
int main()
{
    int a, b;
    cout << "enter the values for calculate of avarge " << endl;
    cin >> a >> b;

    cout << avarage(a, b);
     return 0;
}*/

// 3. fibbonaci series

/*#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    int a=0,b=1;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";

    int temp=a+b;
    a=b;
    b=temp;
    }
}
int main()
{
    int a;
    cout << " enter the no" << endl;
    cin >> a;

    cout << fibonacci(a);

    return 0;
}*/
// 4. palindrom number
/*#include <bits/stdc++.h>
using namespace std;

int palindrom(int a)
{
    int r, sum = 0;
    int c = a;
    while (a > 0)
    {
        r = a % 10;
        sum = r + (sum * 10);
        a = a / 10;
    }
    if (c == sum)
    {
        cout << " this is palindrom no  :-" << endl;
    }
    else
    {
        cout << " this is not palindrom no" << endl;
    }
    return sum;
}
int main()
{
    int n;
    cout << " enter the no" << endl;
    cin >> n;

    cout << palindrom(n);

    return 0;
}*/
// 5. factorial
/*#include <bits/stdc++.h>
using namespace std;
int factorial(int a)
{
    int fact=1;
    for(int i=1; i<=a; i++)
    {
        fact=fact*i;

    }
    return fact;
}
int main()
{
    int n;
    cout << " enter the no" << endl;
    cin >> n;

    cout << factorial(n);


    return 0;
}*/

// 6.leapyear
/*#include<bits/stdc++.h>
using namespace std;
int leap(int a)
{
    if(a%4==0)
    {
        cout<<"this is leap year"<<endl;
    }
    else
    {
        cout<<" this is not leap year"<<endl;
    }

return a;
}
int main()
{
 int n;
    cout << " enter the no" << endl;
    cin >> n;

    cout << leap(n);

return 0;
}*/

// 7.call by reference
/*#include<bits/stdc++.h>
using namespace std;
int swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
   // return c;
}
int main()
{
int x,v;
cout<<"enter the values "<<endl;
cin>>x>>v;
swap( x,v);
cout<<x<<endl<<v;

return 0;
}*/
// 8.sum of n natural numbers

/*#include<bits/stdc++.h>
using namespace std;
int sumn(int n)
{
   int  s=0;
    s=(n+1)*n/2;

    return s;
}
int main()
{
int a;
cout<<" enter the no,"<<endl;
cin>>a;

cout<<sumn(a);


return 0;
}*/
// 9. pythagorean triplate

/*#include<bits/stdc++.h>
using namespace std;

int  pythagorean(int x, int y, int z)
{
    int c=(x*x)+(y*y);
    if(z*z ==c)
    {
        cout<<"this is triplate";
    }
    else
    {
        cout<<"this is not";
    }
     //return c;
}
int main()
{
    int a,b,c;
    cout<<"enter the no's"<<endl;

    cin>>a>>b>>c;

    pythagorean(a,b,c);

return 0;
}*/
// 10. binary to decimal

/*#include <bits/stdc++.h>
using namespace std;
int binarytodeci(int a)
{
  int i = 0;
    int r;
    int sum = 0;

    while (a > 0)
    {
        r = a % 10;
        sum += r * pow(2, i);
        i++;
        a = a / 10;
    }
cout<<sum;
    //return sum;

}
int main()
{
    int n;
    cout<<"enter the binary number "<<endl;
    cin>>n;
   binarytodeci(n);

return 0;
}*/
// 11. decimal to binary
/*#include <bits/stdc++.h>
using namespace std;
int decimaltobinary(int a)
{
    int r;
    int sum = 0;
    int base = 1;

    while (a > 0)
    {
        r = a % 2;
        sum += r * base;
        a = a / 2;
        base = base * 10;
    }
    cout << sum;
}
int main()
{
    int a;
    cout << " enter the number " << endl;
    cin >> a;
    decimaltobinary(a);
}*/
// 12. octal to decimal
/*#include<bits/stdc++.h>
using namespace std;
int octaltodecimal(int a)
{
int sum=0;
int i=0;

while(a>0)

{    int r=a%10;
    sum+=r*pow(8,i);
    i++;
    a=a/10;
}
cout<<sum;

}

int main()
{
    int a;
cout<<"enter the no."<<endl;
cin>>a;
octaltodecimal( a);

return 0;
}*/
// 13. decimal to octal
/*#include<bits/stdc++.h>
using namespace std;
int decimaltooctal(int a)
{
    int sum=0;
    int base=1;

    while(a>0)
    {
        int r=a%8;
        sum+=r*base;
        a=a/8;
        base=base*10;
    }
    cout<<sum;
}
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;

    decimaltooctal(a);

return 0;
}*/
// 14. hexadecimal to decimal ------->>>>  after i will done this program now i just leave it

// 15. default arguments 
/*#include<bits/stdc++.h>
using namespace std;
int table(int a,int i=2)
{
cout<<a*i;


}
int main()
{
    int a;
    cout<<" enter the value"<<endl;
    cin>>a;

    table(a);

return 0;
}*/
//               -----------recursion---------------
#include<bits/stdc++.h>
using namespace std;
int fact(int a)

{
    if(a<2)
        {
            return 1;
        }

   return fact(a-2) + fact(a-1);

    
    
}
int main()
{
int a;
    cout<<" enter the value"<<endl;
    cin>>a;
  cout<< fact(a);
return 0;
} 
