/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* string  str1="sirnamesingh";
     cout<<" enter the any tring "<<endl;
    // cin>>str1;
     cout<<str1<<" ";*/
/*string str;
getline(cin, str);
cout << str << endl;

cout<<"after use push_back functio"<<endl;
str.push_back('s');
cout << str<<endl;

cout<<"after use push_back functio"<<endl;
str.pop_back();
cout<<str;

return 0;
}*/
// some string usefull functions
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
      // strlen function --------> calculate length
    char str[20];
gets(str);
puts(str);
   // cin>>str;
    //cout<<str<<endl;
    int l=strlen(str);
    cout<<l<<endl;
    //  strrev function --------> reverse the string
    cout<<" after the reverse order string"<<endl;
   // cout<<strrev(str);

cout<<" copy string "<<endl;
char str2[20];
strcpy(str2,str);
cout<<str2;

return 0;
}*/
// 2. some string usefull functions
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="sonu";
    char str2[]="sonu";

   // strcat(str,str2);  // ----------------> for use add two strings values
    cout<<str<<endl;

    int value=strcmp(str,str2);//  string compare function
    cout<<value;  // if both values are equel then this is return 0 if not equel then return 1

return 0;
}*/
// 3. some string functions length replace append
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="sonu";
//string str2=" singh";
//str.append(str2);


cout<<str.replace(0,4,"kamal");


return 0;
}*/
// 4. some string functions  erase fine insert
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    //       ----------erase function--------
    // str.erase(5,3);
    // cout<<str;
    //      ----------fine position function--------
    // cout<<str.find("sonu");

    //      ---------- insert string value-------
    // str.insert(4,"kunal");
    // cout<<str;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }
    //    ------------take out sub string---------
    // cout<<str.substr(5,5);

    //    ------------ string to integer-------
    int a = stoi(str);
    cout << a + 6 << endl;
//       -------------integer to string-------
    cout << "integer to string" << endl;
    cout << to_string(a) + "22";

    return 0;
}*/
//   sort string
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cout<<"enter the charctor "<<endl;
    getline(cin, str);

    sort(str.begin(), str.end());
    cout << str<<" ";

    return 0;
}