/*
Isme naya array bnaya hai with all value zero aur fir saare element ka count
store krwaya hai fir check kiya us array se

*/

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n=a.size();

    long long SN=(n*(n+1))/2;
    long long S2N=(n*(n+1)*(2*n+1))/6;
    long long S=0,S2=0;
    for(int i=0;i<n;i++)
    {
        S+=a[i];
        S2+=(long long)a[i]*(long long)a[i];
    }
    long long val1=S-SN;
    long long val2=S2-S2N;
    val2=val2/val1;

    long long x = (val1+val2)/2;
    long long y = x - val1;
    return {(int)x,(int)y};
}


vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n=a.size();
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[a[i]]++;
    }
    int miss=-1;
    int repeat=-1;
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==2)
        {
            repeat=i;
        }
        else if(hash[i]==0)
        {
            miss=i;
        }
        if(repeat!=-1 && miss!=-1)
        {
            break;
        }
    }
    return {repeat,miss};
}