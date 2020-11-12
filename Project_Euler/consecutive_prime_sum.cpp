#include<iostream>
#include<cmath>
using namespace std;
int prime(int n)
{
	if(n==1)
	return 0;
else if(n==2||n==3)
	return 1;
	else 
	{
		int k=1;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			k=0;
		}
		if(k==1)
		return 1;
	}
	return 0;
}
int main()
{
	int i=0;
	int j=2;
	int ans1=0;
	int ans2=0;

int arr[100000];
while(i<100000)
{
	if(prime(j))
	{
		arr[i]=j;
	i++;
	}
	j++;
}
for(int m=0;m<100000;m++)

{
	int sum=0;
	int n=m;
	while(sum<1000000)
	{
		sum=sum+arr[n];
		n++;
	}
	if(n-m>ans1&&prime(sum-arr[n-1]))
	{
		ans1=n-m;
		ans2=sum-arr[n-1];
	}
}
cout<<ans2;
}
