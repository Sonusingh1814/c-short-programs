/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a=2 ,i=1;
 do{
    cout<<a<<"*"<<i<<"="<<i*a<<endl;
i++;
 }
 while( false);//i<=10)


return 0;
} */
//             continou statement
/*#include<bits/stdc++.h>
using namespace std;
int main()
{

for(int i=1;i<=10;i++)
{

    if(i==4)
    {
     continue;
    }
    cout<<i<<endl;
    }

return 0;
} */
//    1.   first n number sum
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int sum=n/2*(n+1);
cout<<sum<<" this is sum of n number";

return 0;
}*/
//    2.    fisrt n even no. of sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,sum=0;
cout<<"enter the value of n"<<endl;
cin>>n;
for(int i=2;i<=n;i+=2)
{
   // if(i%2==0)
  //  {
      sum+=i;
      cout<<i<<endl;
  //  }
}



return 0;
}