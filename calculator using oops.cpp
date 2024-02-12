#include<iostream>
using namespace std;

class calc{
	public:
		
		int add(int x,int y)
		{
			return x+y;
		}
		
		int sub(int x, int y)
		{
			return x-y;
		}
		
		int mul(int x, int y)
		{
			return x*y;
		}
		
		int div(int x, int y)
		{
			return x/y;
		}
};

int main()
{
	calc c;
	int a=15,b=3;
	
	cout<<c.add(a,b)<<endl;
	cout<<c.sub(a,b)<<endl;
	cout<<c.mul(a,b)<<endl;
	cout<<c.div(a,b)<<endl;
	return 0;
}
