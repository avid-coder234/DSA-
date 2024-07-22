/*
Is question me hume esse smallest value nikalni thi jo array k element se 
division krke unki (ceil) value lene pe limit value se kam aayegi 

Humne ek function bnaya hai jisme hum 
sum nikalenge after division from the elements 

fir smallest divisor function me hum usko mid se check krenge 


*/


int division(vector<int>& arr,int key)
{
	int n=arr.size();
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum = sum + ceil((double)(arr[i])/(double)(key));
	}
	return sum;
}


int smallestDivisor(vector<int>& arr, int limit)
{
	int low=1;
	int high=*max_element(arr.begin(),arr.end());
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(division(arr,mid)<=limit)
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