#include<iostream>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>

using namespace std;
int main()
{
    /*
    vector<int> v;
    vector<int> a(5,1);
    for(int i:a)
    {
        //cout<<i;
    }
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i:v)
    {
       // cout<<i;
    }
    int k=v.front();
    int l=v.back();
    cout<<k<<l;
    

    deque<int> d;
    d.push_back(2);
    d.push_front(1);

    stack<string> s;
    s.push("Aditya");
    s.push("Dewangan");
    cout<<"Top Element "<<s.top();
    
    s.pop();
    cout<<"Top element "<<s.top();
    //Max heap
    priority_queue<int> maxi;
    //Min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(2);
    maxi.push(0);
    maxi.push(3);
    maxi.push(1);
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top();
        maxi.pop();
    }

   set<int> s;
   // s.insert takes o(log(n)) 
   s.insert(3);
   s.insert(2);
   s.insert(5);
   s.insert(1);
   s.insert(1);
   for(auto i:s)
   {
    cout<<i<<endl;
   }
   cout<<s.count(1);*/

    map<int,string> m;
    m.insert({1,"aditya"});
    m.insert({3,"dewangan"});
    m.insert({14,"vit"});
    for(auto i:m){
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    }
    auto it=m.find(1);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }






    


}