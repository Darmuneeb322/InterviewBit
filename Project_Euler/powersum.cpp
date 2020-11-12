#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a;
	a.push_back(3);
	a.push_back(2);
	for(int i=0;i<995;i++)
	{
		vector<int>temp;
		int k=a.size();
			int carry=0;
		while(k--)
		{
			int l=2*a[k];
		
			if((l+carry)>=10&&k!=0)
			{
				temp.push_back((l+carry)%10);
				carry=(l+carry)/10;
				
			}
			else if((l+carry)>=10&&k==0)
			{
					temp.push_back((l+carry)%10);
						temp.push_back((l+carry)/10);
			}
			else	
			{
					temp.push_back((l+carry));
					carry=0;
			}
		
			
		}
		reverse(temp.begin(),temp.end());
		
		a.clear();
		a=temp;
		temp.clear();
	}
	int f=a.size();
	int sum=0;
	while(f--)
	{
	sum=sum+a[f];	
	}
	cout<<sum;
}
