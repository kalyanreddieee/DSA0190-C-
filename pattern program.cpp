//Star pyramid
#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter a number";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
