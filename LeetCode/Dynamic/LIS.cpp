#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fun(vector<int>arr)
{
    int n=arr.size();
    if(n==0)
    return 0;
    vector<int>dp(n+1,1);
    dp[0]=0;
    for (int i = 2; i <=n; i++)
    {
      
      for(int j=1;j<i;j++)
      {
          if(arr[i-1]>arr[j-1])
          dp[i]=max(dp[i],dp[j]+1);
          else
          {
              dp[i]=max(dp[i],dp[j]);
          }
          
      }
    }
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        if(ans<dp[i])
        ans=dp[i];
    }
    return ans;
    

}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<endl<<"length of LIS is:"<<endl<<fun(arr);
}