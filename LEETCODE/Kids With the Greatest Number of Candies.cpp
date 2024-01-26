class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    { 
        vector<bool> ans;
        int key=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            key=max(candies[i],key);
        }
        for(int i=0;i<candies.size();i++)
        {
            int temp = candies[i]+extraCandies;
            if(temp>=key)
            {
                ans.push_back(1);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};

Initialize a variable maxi with a very small value (INT_MIN) to keep track of the maximum number of candies among all children.

Create an empty vector ans to store the boolean values indicating whether each child can have the greatest number of candies.

Iterate through the candies vector to find the maximum number of candies (maxi) among all children.

Iterate through the candies vector again to determine if each child can have the greatest number of candies by adding extraCandies to their current candies.

If the resulting value is greater than or equal to maxi, push true (1) into the ans vector; otherwise, push false (0).

Finally, return the ans vector, which contains boolean values indicating whether each child can have the greatest number of candies.
