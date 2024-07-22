#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    cout<<"element at front is "<<q.front()<<endl;
    q.push(2);
    cout<<"element at front is "<<q.front()<<endl;
    q.push(3);
    cout<<"element at front is "<<q.front()<<endl;

    q.pop();
    q.pop();
    if(q.empty())
    {
        cout<<"Khali hai bc"<<endl;
    }
    else{
        cout<<"nahi hai"<<endl;
    }
    q.pop();
    if(q.empty())
    {
        cout<<"Khali hai bc"<<endl;
    }
    else{
        cout<<"nahi hai"<<endl;
    }

    return 0;
} 
