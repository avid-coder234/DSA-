// Left rotate an array by ones
//saare element ko ek place aage move krna loop laga ke aur phele wala 
//elemt jo temp store hai usse last me array k last me store krna hai
#include <bits/stdc++.h> 
#include <vector.h>
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}


//shift left array by d places
/*
phele ek temp array me first d elements store kr dena hai
fir shifitting
for(int i=d;i<n;i++)
{
    a[i-d]=a[i];
}
for(int i=0;i<d;i++)
{
    a[n-d+i]=temp[i];
}
;
for(int i=n-d;i<n;i++)
{
    arr[n-d]=arr[i-(n-d)];
    j++;
}
*/
