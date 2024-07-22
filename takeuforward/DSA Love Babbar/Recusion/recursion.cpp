#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
void tailcount(int n)
{
    if(n==0)
    return;
    cout<<n<<endl;
    tailcount(n-1);

}
void headcount(int n)
{
    if(n==0)
    return;
    headcount(n-1);
    cout<<n<<endl;
}


int main()
{
    
    headcount(5);
    tailcount(5);
    
}