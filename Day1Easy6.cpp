#include<iostream>
int main()
{
	int n;
	std::cout<<"Enter a number:";
	std::cin>>n;
	if(n%2==0)
	{
		std::cout<<"Even number";
	}
	else
	{
		std::cout<<"Odd number";
	}
	return 0;
}
