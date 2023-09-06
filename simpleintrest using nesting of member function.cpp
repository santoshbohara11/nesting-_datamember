//WAP using nesting member function  concept  to calculate simple intrest
#include<iostream>
using namespace std;
class si
{
	int p,t,r;
	
	public:
		void getdata();
		void display();
		int calculate();
};

void si::getdata(){
	cout<<"enter the value of principal, rate and time:"<<endl;
    cin>>p>>t>>r;	
}
int si::calculate()
{
	int intrest;
	intrest=(p * t * r)/100;
    return intrest ;
}

void si::display()
{
	cout<<"simple intrest ="<<calculate()<<endl;
}

int main()
{
	si obj;
	obj.getdata();
	obj.display();
	return 0;
}
