#include <bits/stdc++.h> 


// DUTCH NATIONAL FLAG ALGORITHM
void sortArray(vector<int>& arr, int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
            
        }
    }
}
