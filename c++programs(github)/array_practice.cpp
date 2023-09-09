/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter tha length of array"<<endl;
    cin>>n;

    int koko[n];
    cout<<"enter tha values of array"<<endl;
    for( int i=0; i<n; i++)
    {
        cin>>koko[i];
    }

    for (int i = 0; i < n; i++)
    {

        cout << "this is vlue of array      " << i << " : " << koko[i] << endl;
    }
    return 0;
}*/
// 2. maximum and find
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter tha length of array" << endl;
    cin >> n;
    int man[n];
    for (int i = 0; i < n; i++)
    {
        cin >> man[i];
    }
    for (int i = 0; i < n; i++)
     {
         cout << " this is array :    " << man[i] << endl;
     }
    int maxno = man[0]; // INT_MIN;
    int minno = man[0]; // INT_MAX;
    for (int j = 0; j < n; j++)

    {
        maxno = max(maxno,man[j]);

        minno = min(minno,man[j]);
       // cout << maxno << " " << minno << endl;
    }
cout << maxno << " " << minno << endl;
    return 0;
}*/
// 3.searching in array

/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, key;
    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter tha search element" << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
            //break;
        }

          }

    return 0;
}*/
// 4. binary search

/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, key;
    int start = 0, end = n;

    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter tha search element" << endl;
    cin >> key;

   int mid = (start + end) / 2;

    for (int i = 0; i < n; i++)
    {
        //int mid = (start + end) / 2;

        if(arr[i]==key)
        {
            cout<<i;
        }
        else if (mid>key)
        {
            end=mid-1;
        }
        else
        {
             start=mid+1;

        }
    }

    return 0;
}*/
// 5. selection  sorting array

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, key;
    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"this is array list"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
            }
        }

    }
    cout<<"after the sorting"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}*/
//  6. bubble sort array
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int count=0;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
cout<<"after tha sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}*/
// 7.insertion sort

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while ((arr[j] > current) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout<<"after tha sort array"<<endl;
    cout<<"{";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << ", ";
    }
cout<<"}";
    return 0;
}*/
// 8.   2D array print and search element

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter tha length of n array" << endl;
    cin >> n;
    cout << "enter tha length of m array" << endl;
    cin >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        { // cout<<" ";
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
    // search element
    cout << " what you search" << endl;
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "row is" << endl<< i << endl;
                cout << "column is " << endl << j;
            }
        }
    }

    return 0;
}*/
//  9. print 2D array

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,i=0,j=0;
    cout << "enter tha length of n rows array" << endl;
    cin >> n;
    cout << "enter tha length of m colunms array" << endl;
    cin >> m;

    cout << "the 1st matrix elemment is " << endl;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int p, k;

    cout << "enter tha length of n rows array" << endl;
    cin >> p;
    cout << "enter tha length of m colunms array" << endl;
    cin >> k;
    cout << " second matrix element is " << endl;

    int krr[p][k];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> krr[i][j];
        }
    }
    cout << " and the output is " << endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        { // cout<<" ";
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < p; i++)
    {

        for (int j = 0; j < k; j++)
        { // cout<<" ";
            cout << krr[i][j];
            cout << " ";
        }
        cout << endl;
   }



    return 0;
}*/
// 10. multiplication 2D array

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1st matrix

    int row1, col1;

    cout << "enter tha length of n rows array" << endl;
    cin >> row1;
    cout << "enter tha length of m colunms array" << endl;
    cin >> col1;

    cout << "the 1st matrix elemment is " << endl;

    int arr[row1][col1];  //  1st array

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr[i][j];
        }
    }
    //   2nd matrix

    int row2, col2;

    cout << "enter tha length of p rows array" << endl;
    cin >> row2;
    cout << "enter tha length of k colunms array" << endl;
    cin >> col2;
    cout << " second matrix element is " << endl;

    int krr[row2][col2];  // 2nd array

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> krr[i][j];
        }
    }

    // output of print both matrix
    cout << " and the output is " << endl;

    for (int i = 0; i < row1; i++)
    {

        for (int j = 0; j < col1; j++)
        {
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row2; i++)
    {

        for (int j = 0; j < col2; j++)
        {
            cout << krr[i][j];
            cout << " ";
        }
        cout << endl;
    }
// multiplication of both matrix logic
    cout << "after the multipy" << endl;

    int mul[row1][col2];    // 3rd array for store answer

    for (int i = 0; i < row1; i++)  //  logic of multiplication
    {
        for (int j = 0; j < col2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                // mul[i][j] = 0;
                mul[i][j] += arr[i][k] * krr[j][k];
            }
        }
    }
    // output result
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/
// 11. character array / check palindrom
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;

    cout << "enter the length of character" << endl;
    cin >> a;

    char arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] == arr[a-1-i])
        {
            cout<<" the word is palindrom";
            break;
        }
        else {
            cout<<" the word is not palindrom";
            break;
        }
    }
    return 0;
}*/
