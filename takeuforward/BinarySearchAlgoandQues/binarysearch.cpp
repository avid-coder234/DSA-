#include<iostream>
using namespace std;

int bound(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
//we have a fucntion lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
int BinarySearch(int arr[],int n,int target)
{
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<high)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
//  Write mid as mid= low+ (high-low)/2;
// essa likhne se overflow ka case solve ho jata hai
// recursive 
int bs(int arr[],int low,int high,int target)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]>target)
    return bs(arr,low,mid-1,target);
    else
    return bs(arr,mid+1,high,target);
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int ans=BinarySearch(arr,7,4);
    cout<<ans;
    int k =bs(arr,0,6,4);
    cout<<k;
} 