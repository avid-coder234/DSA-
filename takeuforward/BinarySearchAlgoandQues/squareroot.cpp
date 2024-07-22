int floorSqrt(int n)
{
    int low=0;
    int high=n;
    while(low<=high)
    {
        long long mid=(low+high)/2;
        long long ans=mid*mid;
        if(ans <= n)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return high;
}
