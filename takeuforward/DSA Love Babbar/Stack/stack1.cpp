#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int *arr;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;   
        }
    }
    void push(int data)
    {
        if(size-top>1){
            top++;
            arr[top]=data;
        }
    }

};
int main()
{
    /*
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(3);
    s.pop();
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    cout<<"size of stack is"<<s.size();
    */
}