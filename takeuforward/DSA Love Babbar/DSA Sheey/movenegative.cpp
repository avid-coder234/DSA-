#include<iostream>
using namespace std;
void function(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
}
int main()
{
  int arr[7]={3,4,5,-1,-2,4,5};
  function(arr,7);
  for(int i=0;i<7;i++)
  {
    cout<<arr[i];
  }

}