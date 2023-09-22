#include <iostream>
#include "Sample.class.hpp"

int main()
{
	Sample instance;

	std::cout << "_foo original value: " << instance.getFoo() << std::endl;
	instance.setFoo(42);
	std::cout << "_foo new value: " << instance.getFoo() << std::endl;

	return (0);
}
