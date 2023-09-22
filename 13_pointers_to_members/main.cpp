#include "Sample.class.hpp"
#include <iostream>


int main()
{

	Sample instance; // Instance allocated on the stack
	Sample *instancep = &instance; // Instance pointer still on the stack

	int		Sample::*p = NULL;
	void 	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	
	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}
