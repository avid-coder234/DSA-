#include<vector>

vector<vector<int>> twosum(vector<int> &num,int s)
{
    vector<vector<int>> ans;
    for(int i=0;i<num.size();i++)
    {
        for(int j=0;j<num.size();j++)
        {
            if(num[i]+num[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(num[i],num[j]));
                temp.push_back(max(num[i],num[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
}