int findmax(vector<int> &v)
{
    int large=v[0];
    for(int i=0;i<v.size();i++)
    {
        large=max(large,v[i]);
    }
    return large;
}

int calculatehour(vector<int> &v,int hour)
{
    int total=0;
    int n=v.size();
    for (int i = 0; i < n; i++) {
        total += ceil((double)v[i] / (double)hour);
    }
    return total;
}


int minimumRateToEatBananas(vector<int> &v, int h) {
    int low=0;
    int high=findmax(v);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int hour=calculatehour(v,mid);
        if(hour<=h)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
    
}