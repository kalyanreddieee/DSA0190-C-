#include<iostream>
using namespace std;

int main()
{
	int i,n,j,k;
	cout<<"Enter num: ";
	cin>>n;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			cout<<"not a prime number";
			goto x;
		}
	}
	cout<<"prime number"<<endl;
	x:
	return 0;
}
