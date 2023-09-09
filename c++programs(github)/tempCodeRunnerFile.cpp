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
#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c;
cout<<"enter  the no"<<endl;
cin>>a>>b>>c;
 if((a>b) && (a>c))
 {
  cout<<endl<<"this is the largest no "<<a;
 }
else if((b>a) && (b>c))
 {
  cout<<endl<<"this is the largest no "<<b;
 }
else 
{
  cout<<endl<<"this is largest no"<<c;
}

return 0;
}


