#include<vector.h>
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