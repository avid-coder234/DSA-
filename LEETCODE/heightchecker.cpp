class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        int size=heights.size();
        int count=0;
        vector<int> ans=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<size;i++)
        {
            if(heights[i]!=ans[i])
            count++;
        }
        return count;
    }
};
