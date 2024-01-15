class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int adi = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<adi;i++)
        {
            if(nums[i]== target)
            return i;
            else if(nums[i]>target)
            return i;
        }
        return adi;
    }
};
