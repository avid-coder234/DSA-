class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
      sort(nums.begin(),nums.end());
      int count=0;
      int size=nums.size();
      for(int i=0;i<size;i++)
      {
          if(nums[i]!=i)
          {
              return i;
          }
      }
      return size;
    }
};
