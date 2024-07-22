#include<iostream>
using namespace std;
int first(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int last(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[8]={1,2,2,2,2,2,2,2};
    int k=first(arr,8,2);
    int l=last(arr,8,2);
    cout<<k<<endl;
    cout<<l;
    // IF TOTAL NUMBER OF OCCURRENCES IS ASKED 
    // THEN TOTAL number of occurences of 2 is (l-k+1)

}

//Peak Index in a Mountain Array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     int start=0;
     int end=arr.size()-1;
     int mid= start+(end-start)/2;
     while(start<end)
     {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
     }   
    return start;
    }
};
