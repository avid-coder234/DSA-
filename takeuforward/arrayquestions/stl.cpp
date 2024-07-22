#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
void explainPair()
{
    pair <int,int> p={1,3};
    cout<<p.first << " "<<p.second<<endl;
    // uaprwala 1 aur 3 print krega

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[1].second<<endl;


}
void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
}
int main()
{
    explainVector();
}