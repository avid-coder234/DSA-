#include <bits/stdc++.h> 
#include<vector>
// BRUTE FORCE APPROACH
/*
phele matrix traverse krna hai aur jaha pe 0 dikhta hai
vaha wala row aur col ki value ko -1 intiliaze kr dena
then iske liye row and col intialzie function bnana hai
 
Fir ye hone k baaad matrix ko vapas travers krna hai aur 
jaha bhi -1 hai vaha pe 0 assign krna hai 

TC - (n^3) near about 

*/
// BETTER APPROACH
/*
yaha pe hume ye dhyan dena ki TC ko n^2 tak leke aaye

so hum yaha pe ek 2 array define krenge 
col and row array aur usme saare value ko 0 rkhenge 
Then 
matrix traverse krenge aur agr 0 aata hai toh row aur col ki
value ko update 1 krenge 

Fir iske baad ek aur loop use krenge
usme hum ye dekhenge ki agr 

Condition(if(row[i] || col[j] == 1))
then matrix[i][j] == 0;

isme TC toh 2*N*M
SC N+M ko lg rhi hai kyuki 2 array extra liya hai 
*/
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  int col[m] = {0};
  int row[n] = {0};
  for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
		  if(matrix[i][j]==0){
			  row[i]=1;
			  col[j]=1;
		  }
	  }
  }
  for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
		  if((row[i] || col[j]) == 1){
			  matrix[i][j] = 0;
		  }
	  }
  }
  return matrix;
}