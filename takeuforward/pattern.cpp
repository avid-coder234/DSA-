#include<iostream>
using namespace std;
/*
PATTERN 1
****
****
****
****

void pattern1()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
/*
PATTERN 2
*
**
***
****
*****

void pattern2()
{
    for (int i = 0; i <=5; i++)
    {
        for(int j =0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*
1
12
123
1234
12345

void pattern3()
{
    for (int i = 1; i<=n; i++)
    {
        for(int j =1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/

/*
1
22
333
4444
55555
void pattern4()
{
    for (int i = 1; i <=n; i++)
    {
        for(int j =1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/

int main()
{   
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}