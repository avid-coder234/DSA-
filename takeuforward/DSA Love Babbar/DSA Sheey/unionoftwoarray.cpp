
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++
/*Yaha pe union of two array chahiye tha matlab unique elements
To agr unique elements set data structure me aata hai 
toh mene dono array k elements ko set me daal diya 
aur fir set ka .size se number of elements nikal liya*/  

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       set<int> s;
       for(int i=0;i<n;i++)
       {
           s.insert(a[i]);
       }
       for(int j=0;j<m;j++)
       {
           s.insert(b[j]);
       }
       int k=s.size();
       return k;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends