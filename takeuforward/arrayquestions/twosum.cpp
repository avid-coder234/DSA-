#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]== target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

string read(int n, vector<int> book, int target)
{
    int left=0;
    int right=n-1;
    sort(book.begin(),book.end());
    while(left<right)
    {
        int sum=book[left]+book[right];
        if(sum==target)
        {
            return "YES";
        }
        else if(sum>target)right--;
        else left++;
    }
    return "NO";
}
