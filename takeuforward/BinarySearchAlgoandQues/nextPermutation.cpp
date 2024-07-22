vector<int> nextGreaterPermutation(vector<int> &A) {
    int ind=-1;
    int n =A.size();
    int index=-1;
    //phele piche se traverse krte hue check krna kaha break point 
    // Matlab ki increase hote hote decrease hua
    for(int i=n-2;i>=0;i--)
    {
       if(A[i+1]>A[i])
        {
            index=i;
            break;
        }
    }
    if(ind==-1)
    {
        reverse(A.begin(),A.end());
        return A;
    }
    //Iske baad hume us index k element ko next usse bade element se swap krna hai
    // Isse hume use bada next permutation mile(uska sirf kuch digits ) 
    for(int i=n-1;i>ind;i--)
    {
        if(A[i]>A[index])
        {
            swap(A[i],A[index]);
            break;
        }
    }
    //Yaha pe hum next bada permutation nikalte hai baki bache hue 
    // element ko sort krke 
    reverse(A.begin()+ind+1,A.end());
    return A;
}