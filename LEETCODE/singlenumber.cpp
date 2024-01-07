// whenever we come across the duplicate or single elements then always think of XOR Operation
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans ^ nums.at(i);
        }
        return ans;
    }
};
