#include <bits/stdc++.h>
using namespace std;
// To find the largest element in array
/*
Brute Force approach- Sort the array and return the last element
*/
//Optimized approach
int large(int arr[],int n)
{
    int large=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;
}

//To find the second largest element in array
/*
Brute force approach- Sort the array and return the second last element
large=arr[n-1];
second=0;
for(int i=n-2;i>0;i--)
{
    if(arr[i]!=large)
    second=arr[i];
    break;
    
}
*/
//BETTER APPROACH
/*
First find the largest element and then again traverse the loop and in the if statement check the 
codition that if(arr[i]>second && arr[i]!=large)
and print the second 
*/
/*
Optimized approach- To find the second largest and second smallest number with O(n) 
int secondsmallest(vector<int> &a,int n){
            int small=a[0];
            int ssmall=INT_MAX;
            for(int i=1;i<n;i++)
            {
                if(a[i]<small)
                {
                    ssmall=small;
                    small=a[i];
                }
                else if(a[i]<ssmall & a[i]!= small)
                {
                    ssmall=a[i];
                }
            }
           return ssmall;
        }
        int secondlargest(vector<int> &a,int n){
        int large=a[0];
        int slarge=-1;
        for(int i=1;i<n;i++)
        {
            if(a[i]>large)
            {
                slarge=large;
                large=a[i];
            }
            else if (a[i] < large && a[i] > slarge) {
                slarge = a[i];
            }
        }
        return slarge;
        }

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int large=secondlargest(a,n);
    int small=secondsmallest(a,n);
    return {large,small};
}*/


//Remove duplcaite elements from array and rturn the number of unique elements
//Brute force approach
// insert the element in the set data structure 
/*
set<int> s;
for(int i=0;i<n;i++)
{
    s.insert(arr[i]);
}
NLOGN

index=0;
for(auto i:st)
{
    arr[index]==it
    index++;
}

//Optimized approach

i=0;
for(int j=1;j<n;j++)
{
    if(arr[i]!=arr[j])
    {
        arr[i+1]=arr[j];
        i++;
    }
}
return i+1;
*/
int main()
{

}