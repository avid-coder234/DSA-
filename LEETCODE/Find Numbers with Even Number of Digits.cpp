class Solution {
public:
    
    int findNumbers(vector<int>& nums)
    {
        int elecount=0;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int dcount=0;
            while(num!=0)
            {
                num=num/10;
                dcount++;
            }
            if(dcount%2==0)
            {
                elecount++;
            }
        }
        return elecount;
    }
};
