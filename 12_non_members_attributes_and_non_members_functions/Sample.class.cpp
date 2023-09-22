#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbinst += 1;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbinst -= 1;
	return;
}

void Sample::getNbInst(void)
{
	return Sample::_nbinst;
}

int Sample::_nbinst = 0;
