#include<vector.h>
// we have the use the concept of MOORE'S Voting Algorithm to provide the most optimized solution.
// First and basic approach was by using with time complexity of n^2.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                count = 1;
                ele = nums.at(i);
            } else if (nums[i] == ele) {
                count++;
            } else {
                count--;
            }
        }
        int cnt;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == ele)
                cnt++;

            if (cnt > (nums.size()) / 2)
                return ele;
        }
        return -1;
    };
};
