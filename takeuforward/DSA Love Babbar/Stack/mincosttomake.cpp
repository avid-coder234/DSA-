#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  //odd condition
  if(str.length()%2==1)
  {
    return -1;
  }

  stack<int> s;
  for(int i=0;i<str.length();i++)
  {
    char ch=str[i];
    // IF we see an open bracket 
    if(ch=='{'){
      s.push(ch);
    }
    else{
      //ch is closed bracekt
      if(!s.empty() && s.top()=='{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }
    //stack contains invalid expresssion
    int a=0;
    int b=0;
    while(!s.empty()){
      if(s.top()=='{'){
        b++;
      }
      else{
        a++;
      }
      s.pop(); 
    }
    int ans=(a+1)/2 + (b+1)/2;
    return ans;

}
  