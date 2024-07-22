// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    string str="Aditya";
    stack<char> s;
    string ans;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        s.push(ch);
    }
    while(!s.empty())
    {
        char ch= s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
    
    
    return 0;
}