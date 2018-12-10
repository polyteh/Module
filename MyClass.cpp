#include "MyClass.h"

using namespace std;

namespace fun
{
int MyClass::addValues(const int &  a, const int & b)
	{
		return a+b;
	}
int MyClass::deductValues(const int &  a, const int & b)
	{
		return a-b;
	}
}