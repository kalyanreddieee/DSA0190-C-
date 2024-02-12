#include<iostream>
using namespace std;

class sum{
	public:
		int w,x,y,z;
		sum()
		{
			w=0,x=0,y=0,z=0;
		}
		sum(int x,int y)
		{
			cout<<"sum: "<<x+y;
		}
		sum(int x,int y,int z)
		{
			cout<<"sum: "<<x+y+z;	
		}
		sum(int w,int x,int y,int z)
		{
			cout<<"sum: "<<w+x+y+z;
		}
		
};

int main()
{
	sum n(1,2,3);
	n.sum();
	return 0;
}









