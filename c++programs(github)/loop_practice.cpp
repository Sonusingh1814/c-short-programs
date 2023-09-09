
// 1 simple loop
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=10;
for(int i=0; i<=n;i++)
{
    if(i==4)
    {
cout<<"chal ange bhad ";
    }
    cout<<i<<endl;
}
return 0;
}*/
// 2 table of input nubmer

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"enter the n table "<<endl;
cin>>n;
for(int i=1; i<=10; i++)
{
    cout<<n<<"*"<<" "<<i<<"="<<n*i<<endl;
}

return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main()
{ int n=50;
for(int i=1; i<=n; i++)
{
    if(i%2==0)

    cout<<i<<endl;
}

return 0;
}*/
// 3 even no.sum

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,end, n;
    cout<<"enter the start no"<<endl;
    cin>>start;

    cout<<"enter the end no"<<endl;
    cin>>end;

    n=end/2;

    int c=(n*(start+end))/2;
    cout<<"the sum of even "<<endl<<c;

return 0;
}*/
//  4. sum of natural no.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=10,sum=0;
for( int i=1; i<=n; i++)
{
     sum+=i;
    cout<<sum<<endl;
}
return 0;
}*/
// 5. factorial

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,f=1;
    cout<<"enter the no"<<endl;
    cin>>n;
     while( i<=n)

    {

     f=f*i;
      i++;
     }
     cout<<"this is n"<<endl<<f;



return 0;
}*/
// 6. prime no.

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, i=1,count=0;
cout<<"enter the value of n"<<endl;
cin>>n;
while( i<=n)
{

    if(n%i==0)
    {
        count++;
    }
    ++i;
}

if(count==2){
    cout<<"this is prime no."<<endl;
}
else
{
    cout<<"this is not prime no.";
}
return 0;
}*/
// 7.   fibbonacci series

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,a=0,b=1;
  cout<<"enter the series "<<endl;
  cin>>n;
cout<<"this is series of fibbonaci"<<endl;
  for(i=1; i<=n;i++)
  {
    cout<<a<<endl;
    int c=a+b;
    a=b;
    b=c;
  }
return 0;
}*/
// 8. 10 to 1 number

/*#include<bits/stdc++.h>
using namespace std;
int main()
{int n=0,i;
    cout<<"enter the i"<<endl;
    cin>>i;


for( i; i>=n;i--)
{
    cout<<i<<endl;
}

return 0;
}*/
//   9.reverse number

/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, r, sum = 0;
    cout << "enter the number " << endl;
    cin >> n;
    int c = n;
    while (n > 0)
    {
        r = n % 10;
        sum = r + (sum * 10);
        n = n / 10;
    }
    cout << "this is reverse number " << endl
         << sum;

    return 0;
}*/
// 10. multiplication table nested loop

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start, end, i;
    cout << "enter the start no" << endl;
    cin >> start;
    cout << "enter the end no" << endl;
    cin >> end;

    for (i = start; i <= end; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << endl << j * i;
        }
    }

    return 0;
}*/
// 11. Armstrong number
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, arm = 0;
    cout << "enter the no" << endl;
    cin >> n;
    int c = n;

    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
    {
        cout << "this is the armstrong no" << endl;
    }
    else
    {

        cout << "this is not armstrong no.";
    }

    return 0;
}*/
//  12. HCF AND LCM

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
     int x=a,y=b;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }


    }
    cout << endl << b << endl;

   int lcm=(x * y) / b;

    cout << "this is value of lcm" << endl <<lcm;


    return 0;
}*/
// 13. star pattern
/*          *
 **
 ***
 ****
 *****
 */

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter no. of pattern" << endl;
    cin >> n;

    for (i; i <= n; i++)
    {
        for (int j = i; j <n; j++)
        {
            cout <<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout <<" "<< endl;
    }

    return 0;
}*/
// patern squer
/*  ******
    ******
    ******
    ******
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i=1;
cout<<"enter no of patern"<<endl;
cin>>n;

for(i; i<=n; i++ )
{
for(int j=1; j<=n; j++)
{
    cout<<" * ";

}
cout<<" "<<endl;
}


return 0;
}*/
//    patern
/*       *****
 *   *
 *   *
 *   *
 *****
 */
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter no of patern" << endl;
    cin >> n;

    for (i; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)

        {
            if ((i == 1) || (i == n) || (j == 1) || (j == n))
            {

                cout << "*";
            }
            else
            {
              cout<<" ";
            }
        }
        cout << "  " << endl;
    }
    return 0;
}*/
//     paramid pattern

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter tha pattern no" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j=i; j<=n; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"* ";
        }
        cout<<"    "<<endl;
    }

    return 0;
}*/
//  revers paramid pattern
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter tha pattern no" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(int k=i; k<=n; k++)
        {
            cout<<"* ";
        }
        cout<<"    "<<endl;
    }

    return 0;
}*/
//   patern *-

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter tha pattern no" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == i)
            {
                cout << "*";
            }
            else
            {
                cout<<"*-";
            }
        }
        cout << " " << endl;
    }

    return 0;
}*/
// patern right shift paramid

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter no of  the pattern" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            continue;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }

            cout << " " << endl;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int l = k; l <= n; l++)
        {
            cout << "* ";
        }

        cout << " " << endl;
    }
    return 0;
}*/
// pattern left shift paramid

/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "enter no of  the pattern" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            continue;
        }

        else
        {
            for (int j = i; j < n; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout << " " << endl;
        }
    }
    for (int p = 1; p <= n; p++)
    {
        for (int l = 1; l < p; l++)
        {
            cout << " ";
        }
        for (int m = p; m <= n; m++)
        {
            cout << "*";
        }
        cout << " " << endl;
    }
    return 0;
}*/
//   patern cut triangle from squer

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"enter the no of pattern"<<endl;
cin>>n;
for(int i=1; i<=n; i++)
{
    for(int j=i; j<=n; j++)
    {
        cout<<"*";
    }

    for(int k=1; k<=2*i; k++)
    {
        cout<<" ";
    }

    for(int p=i; p<=n; p++)
    {
        cout<<"*";
    }
    cout<<" "<<endl;
}


return 0;
}*/
// L PATTERN
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enrter the no. of pattern" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == n) || (j == 1))
            {
                cout << " * ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << " " << endl;
    }

    return 0;
}*/
