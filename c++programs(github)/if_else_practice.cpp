/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b=5;
cout<<"enter the value"<<endl;
cin>>a;
if(a>b)
{
cout<<"this is larger than b";

}
else if(b>a)
{
    cout<<"this is lesss than b";

}
else{

    cout<<"this is equal to b";
}

return 0;
}*/

// 1  calculator //

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 char op;

cout<<"enter the values of a b"<<endl;
 cin>>a>>op;

 //cout<<"enter the op -,+,*"<<endl;
// cin>>op;

//cout<<"enter the values of a b"<<endl;
cin>>b;

 switch (op)
 {
 case '+':

  cout<<"output"<<endl<<a+b;
    break;

case '-':
  cout<<"output"<<endl<<a-b;
    break;

case '*':
  cout<<"output"<<endl<<a*b;
    break;

case '/':

  cout<<"output"<<endl<<a/b;
    break;

case '%':
  cout<<"output"<<endl<<a%b;
    break;


 default:
 cout<<"error";
    break;
 }


return 0;
}*/

// 2 odd and even bnumber

/*#include<bits/stdc++.h>

using namespace std;
int main()
{

int a;
cout<<"entr the values "<<endl;
cin>>a;

if(a%2==0)
{
cout<<"this is the even nubmer"<<endl;
}
else
{
    cout<<"this is odd number";
}

return 0;
}*/

// 3 psotive check

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"enter the value "<<endl;
cin>>n;

if(n>0)
{
  cout<<"this is the positive no."<<endl;
}
 else if(n<0)
{
  cout<<"this is the negative no."<<endl;
}
else
 {
  cout<<"this is zero";
}

return 0;
}*/
// 4 divisble

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cout<<"enter the no"<<endl;
cin>>a>>b;

if(a%b==0)
{
  cout<<"this is divisible";

}
 else
 {
 cout<<"this is not divisible ";
 }
return 0;
}*/
// 5 leap year

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int y;
cout<<"enter the year "<<endl;
cin>>y;
if(y%4==0)
{
  cout<<"this is leap year";
}
else
{
cout<<"this is not leap year ";
}
return 0;
}*/
// 6  largest no

/*#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c;
cout<<"enter  the no"<<endl;
cin>>a>>b>>c;
 if((a>b) && (a>c))
 {
  cout<<endl<<"this is the largest no "<<endl<<a;
 }
else if((b>a) && (b>c))
 {
  cout<<endl<<"this is the largest no "<<endl<<b;
 }
else
{
  cout<<endl<<"this is largest no"<<endl<<c;
}

return 0;
}*/
// 7 find squer and ractangle

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int length,width;
cout<<"enter the length"<<endl;
cin>>length;

cout<<"enter the width"<<endl;
cin>>width;

if(length==width)
{
cout<<"this is squer";

}
else
{
cout<<"this is the ractangle"<<endl<<length*width;
}

return 0;
}*/
// 8 vowel and consonent
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
char c;
cout<<"enter the caharcter "<<endl;
cin>>c;

if((c =='a') || (c =='o') || (c =='e') || (c =='u') || (c =='i'))
{
  cout<<"this is vowel char";

}
else
{
cout<<"this is consonent";
}

return 0;
}*/

// 9  prime no

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,count=0;
cout<<"enter the no"<<endl;
cin>>n;

for(int i=1; i<=n; i++)
{
  if(n%i==0)
  {
    count++;
  }
}
if(count==2)
{
  cout<<"this is prime no";
}
else
{
cout<<"this is not prime no";
}
return 0;
}*/
// 10  upper case

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
char a;
cout<<"enter the character "<<endl;
cin>>a;

if((a>65) && (a<90))
{
cout<<"upercase"<<endl<<a;
}


else if((a>97) && (a<122) )
{
  cout<<"this is lower case"<<endl<<a;
}

else
 {
  cout<<"this is digit "<<endl<<a;
}

return 0;
}*/
// 11  triangle

/*#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c;
cout<<"enter the sides 0f triangle  "<<endl;
cin>>a>>b>>c;

if(a<b+c) //|| (b<a+c) || (c<a+b))
{
 cout<<"this is triangle ";
}

else
{
 cout<<"this is not valid triangle ";
}

return 0;
}*/
// 12 palindrom no.

/*#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,r,sum=0;
cout<<"enter the no"<<endl;
cin>>n;
int c=n;
while(n>0)
{ r=n%10;
  sum=r+(sum*10);
  n=n/10;

}
if(c==sum)
{
cout<<" this is the palindrom no.";
}
else
{
 cout<<"this is not palindrom no.";
}

return 0;
}*/
// 13 swaping no without third party no

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cout<<"enter the a no"<<endl;
cin>>a;

cout<<"enter the b no"<<endl;
cin>>b;

a=a+b;
b=a-b;
a=a-b;

cout<<"after the a swap"<<a<<endl;

cout<<"after the b swap"<<b<<endl;

return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a = 2, power= 3;
  int i = 1;
 int ans = 1;
  while (i <= power)
  {
    ans=ans*a;
i++;

  }
  cout<<ans;
  return 0;
}
