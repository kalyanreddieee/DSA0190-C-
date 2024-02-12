#include <iostream>
#include <string>
using namespace std;

class stu
{
	public:
		string name;
		string fathername;
		string mothername;	
		void print_details()
		{
			cout<<"Stu name: "<<name<<endl;
			cout<<"Stu father name: "<<fathername<<endl;
			cout<<"Stu mother name: "<<mothername<<endl;
		}
};

int main()
{
	stu one,two,three;
	cout<<"Enter the details of the person: "<<endl;
	cout<<"Enter name: ";
	cin>>one.name;
	cout<<"Enter father name: ";
	cin>>one.fathername;
	cout<<"Enter mother name: ";
	cin>>one.mothername;
	
	cout<<"Printing details: "<<endl;
	one.print_details();
	return 0;
}
