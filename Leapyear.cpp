#include<iostream>
int main()
{
	int n;
	std::cout<<"Enter a year:";
	std::cin>>n;
	if(n%1==0&n%4!=0 || n%400==0)
	{
		std::cout<<"It is not a Leap year";
	}
	else
	{
		std::cout<<"It is a Leap year";
	}
	return 0;
}
