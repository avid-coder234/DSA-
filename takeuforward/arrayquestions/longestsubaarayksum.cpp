#include <bits/stdc++.h>
using namespace std;
//To find the longest subarray with sum k
/*
brute force
for(int i=0;i<n-1;i++)
{ 
    int sum=0;
    for(j=1;j<n;j++)
    {
        sum+=arr[j];
        if(sum==k)
        {
            len=max(len,j-i+1);
        }
    }
    return len;
}
*/
/*
Optimized approach
Isme 2 pointer approach lagaya hai left and right vo dono move krenge aur agr sum se bada 
number aata toh left wale se minus krenge value ko right wale se plus krenge

#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
        int left = 0;
    int right = 0;
    int maxLen = 0;
    int n = a.size();
    long long sum = a[0];

    while(right < n) {
        while(left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) {
            sum += a[right];
        }
    }
    return maxLen;  
}
 

*/

