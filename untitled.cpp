#include<iostream>
using namespace std;

int main(){
	int n,tmp,sum=1,orgsum=0,rem,len;
	
	cout<<"Enter num: ";
	cin>>n;
	tmp=n;
	len = tmp.length();
	cout<<"The length of the digits are "<<len<<endl;
	tmp=n;
	
	while(tmp!=0)
	{
		sum=1;
		rem = tmp%10;
		for(int i=0;i<len;i++)
		{
			sum*=rem;
		}
		orgsum+=sum;
		tmp/=10;
	}
	
	if(orgsum==n)
	{
		cout<<"Armstrong";
	}
	else
	{
		cout<<"Not armstrong";
	}
	return 0;
}
