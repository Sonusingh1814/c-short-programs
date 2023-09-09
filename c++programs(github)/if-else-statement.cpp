//  1.     even odd no. practice
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cout<<"enter the no."<<endl;
cin>>a;
if(a%2==0){

cout<<"this is even no."<<endl;
}

else{
    cout<<"this is oddd no.";
}

return 0;
}*/

//  2.  print the large no.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cout<<"enrte the no."<<endl;
cin>>a>>b;
 if (a>b)
 {
    cout<<a<<"----is the large no.";

 }
 else if(b>a)
{
    cout<<b<<"is large no.";
}
return 0;
}*/

//   3.   check the no is positive or negative
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cout<<"enter no."<<endl;
cin>>a;

if(a>0)
{
    cout<<a<<"   this is positive no";
}
else{

    cout<<a<<"   this is negative no.";
}

return 0;
}*/
//   4.     leap year or not
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cout<<"enter the year"<<endl;
cin>>a;

if(a%4==0)
{

cout<<a<<"   this is leap year";

}
else{
cout<<a<<" this is normal year";

}

return 0;
}*/
//   5.    find maximum no.

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the no."<<endl;
cin>>a>>b>>c;
if((a>b) && (a>c))
{
    cout<<a<< "   is larger no.";

}
else if ((b>a) && (b>c))
{
cout<<b<<"   this is larger no";

}
else
{
    cout<<c<<"   this is larger no";
}
return 0;
}*/

//   6.   calculate grade of exam

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    float p;
    cout<<"enter maths no."<<endl;
    cin>>a;
    cout<<"enter physics no."<<endl;
    cin>>b;
    cout<<"enter english no."<<endl;
    cin>>c;

    p=(a+b+c)*100/300;
    cout<<p<<" % "<<endl;
    if(p<33)

    {
       cout<<p<<"you are fail";

    }
    else if((p>33)  && (p<49))
    {
        cout<<p<<"%"<<"you have achieve 3rd grade";

    }
    else if((p>49) && (p<60))
    {
        cout<<p<<"%"<<"you have achieve 2nd grade";
    }
    else
    {
        cout<<p<<"%"<<" you have achieve 1st grade";
    }

    return 0;
}*/
//    7.   check characte vowel or conconent

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a1;
    cout<<"enter character "<<endl;
    cin>>a1;
    if(a1=='i' || a1=='o' || a1=='a' || a1=='e' || a1=='u')
    {
        cout<<a1<<" "<<"this is vowel";
    }
    else
    {
        cout<<a1<<" "<<"this is conconent";
    }

return 0;
}*/
//    8.   check prime no.
/*#include<bits/stdc++.h>

using namespace std;
int main()
{
int a,count=0,i;
cout<<"enter the no"<<endl;
cin>>a;

for(i=1;i<=a;i++)
{
      if(a%i==0)
      {
         count++;
      }
}
if(count==2)
{
    cout<<"this is prime no.";
}
else
{
    cout<<"this is not prime no.";
}

return 0;
}*/

//    9.    palindrom no.

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c, r, s = 0;
    cout << "enter the no" << endl;
    cin >> a;
    c = a;

    while (a > 0)
    {
        r = a % 10;
        s = r + (s * 10);
        a = a / 10;
    }

    if (s == c)
    {
        cout << c << " "<< "this is palindrom";
    }
    else
    {
        cout << "this is not panlidrom no.";
    }

    return 0;
}*/
//    10.   check the no. upper case or lower case
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
  char ch;
  cout<<"enter the character "<<endl;
  cin>>ch;
    if((ch>='a')  && (ch<='z'))
    {
        cout<<ch<<" "<<"this is lower case";
    }
    else if((ch>='A') && (ch<='Z'))
    {
        cout<<ch<<" "<<"this is upper case";
    }
    else 
    
    {
     cout<<"this is not alphabet";
    }

 return 0;
 }