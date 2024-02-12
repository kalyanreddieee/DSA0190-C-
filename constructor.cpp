#include<iostream>
using namespace std;

class Sum
{
	public:
		int n1,n2,sum=0;
		
		Sum()
		{
			int sum = n1+n2;
			
		}
		
		Sum(int n1, int n2, int n3)
		{
			sum = n1+n2+n3;
			return sum;
		}
};

int main()
{
	int x = Sum(1,2,3);
	cout<<x<<endl;
}
