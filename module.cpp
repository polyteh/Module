#include <iostream>       // std::cout

#include "fun.h"
#include "MyClass.h"

using namespace std;
using namespace fun;

int main()
	{
		
		int a=11;
		int b=6;

		//use functions
		cout<<"Function based"<<endl;
		cout<<"Sum of values "<<a<<" and "<<b<<" is "<<addition(a,b)<<endl;
		cout<<"Difference of values "<<a<<" and "<<b<<" is "<<deduction(a,b)<<endl;
		
		
		//use class
		cout<<endl<<"Class based"<<endl;
		MyClass Sample;
		cout<<"Sum of values "<<a<<" and "<<b<<" is "<<Sample.addValues(a,b)<<endl;
		cout<<"Difference of values "<<a<<" and "<<b<<" is "<<Sample.deductValues(a,b)<<endl;

		int t;//просто задержать на экране
		std::cin>>t;
		return 0;
	}