#include<iostream>
int main()
{
	double num1,num2;
	std::cout<<"Enter num1:";
	std::cin>>num1;
	std::cout<<"Enter num2:";
	std::cin>>num2;
	if (num2!=0)
	{
		double result=num1/num2;
		std::cout<<"Division of "<< num1 <<" and "<< num2 <<" is "<< result <<std::endl;
		return 0;
	}
}
