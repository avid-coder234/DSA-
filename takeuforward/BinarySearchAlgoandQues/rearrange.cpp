#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    int posIdx=0;
    int negIdx=1;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            ans[posIdx]=a[i];
            posIdx=+2;
        }
        else
        {
            ans[negIdx]=a[i];
            negIdx=+2;
        }
    }
    return ans;
}

vector <int> alternateNumbers(vector <int>&a){
    vector<int> pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    
    if(pos.size()>neg.size())
    {
        int index=2*neg.size();
        for(int i=0;i<neg.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        for(int i=neg.size();i<pos.size();i++)
        {
            a[index]=pos[i];
            index++;
        }
    }
    if(neg.size()>pos.size())
    {
        int index=2*neg.size();
        for(int i=0;i<pos.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        for(int i=pos.size();i<neg.size();i++)
        {
            a[index]=neg[i];
            index++;
        }
    }
}