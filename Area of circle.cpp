#include<iostream>
int main()
{
	int r;
	std::cout<<"Enter radius: ";
	std::cin>>r;
	float pie=3.14;
	float result=pie*r*r;
	{
		std::cout<<"Area of a circle: "<< result;
	}
}
