#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    vector<int> ans(n);
    s.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        int temp=arr[i];
        while(s.top()>=temp)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(temp);
    }
    return ans;

}