#include <iostream>

#include "Singleton.hpp"

int main()
{
	std::cout << "Value is : " << Singleton::GetInstance().GetValue() << std::endl;
	Singleton::GetInstance().SetValue(10);
	std::cout << "Value is : " << Singleton::GetInstance().GetValue() << std::endl;

	return 0;
}
