#include<iostream>
#include<cmath>
int det(int arr[3][3])

{
	int ans=0;
	for(int j=0,i=0;j<3;j++)
	{
		int l=0;
		l=arr[0][j]*((arr[i+1][(j+1)%3]*arr[i+2][(j+2)%3])-(arr[i+2][(j+1)%3]*arr[i+1][(j+2)%3]));
		ans=ans+l;
	}
	return ans;
}
using namespace std;
int main()
{
	int arr[3][3];
	int v[3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
		cin>>v[i];
	}
	cout<<det(arr)<<endl;
	int arrx[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j!=0)
			{	arrx[i][j]=arr[i][j];		}
			else arrx[i][j]=v[i];
			
		}
	
	}
	int arry[3][3];
for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j!=1)
			{	arry[i][j]=arr[i][j];		}
			else arry[i][j]=v[i];
			
		}
	
	}
	int arrz[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j!=2)
			{	arrz[i][j]=arr[i][j];		}
			else arrz[i][j]=v[i];
			
		}
	
	}
	int x,y,z;
	x=det(arrx)/det(arr);
	y=det(arry)/det(arr);
	z=det(arrz)/det(arr);
	cout<<x<<" "<<y<<" "<<z;
	
	
}
