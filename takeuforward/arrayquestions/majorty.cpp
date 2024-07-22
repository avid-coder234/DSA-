#include<bits/stdc++.h>
#include<vector>
int majorityElement(vector<int>a){
	map<int,int>mpp;
	for(int i=0;i<v.size();i++)
	{
		mpp[v[i]]++;
	}
	for(auto i:mpp)
	{
		if(i.second > (v.size()/2)){
			return i.first;
		}
	}
	return -1;
};



#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	int count=0;
	int key=0;
	for(int i=0;i<v.size();i++)
	{
		if(count==0)
		{
			key=v[i];
			count=1;
		}
		else if(v[i]==key)
		{
			count++;
		}
		else{
			count--;
		}
	}
	int count1=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==key)
		{
			count1++;
		}
	}
	if(count1 > (v.size()/2))
	{
		return key;
	}
	return -1;
}