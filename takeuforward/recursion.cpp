#include<iostream>
using namespace std;
void print(int a,int b)
{
    if (a>b)
    return;
    cout<<"aditya"<<endl;
    a++;
    print(a,b);
    
}
void printnum(int a,int b)
{
    if(a>b)
    return;
    cout<<a<<endl;
    a++;
    printnum(a,b);
}
void reverse(int a,int b)
{
    if(a>b)
    return;
    cout<<b<<endl;
    b--;
    reverse(a,b);
}
void back1(int i,int n)
{
    if(i<1)
    return;
    back1(i-1,n);
    cout<<i;
}
void printName(int i , int n){
    if(i>n){
        return;
    } 
    printName(i+1 ,n);
    cout <<i<< endl;
}
void summation(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    summation(i-1,sum+i);
    
}
int main()
{
    summation(4,0);
    
}