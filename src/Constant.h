#pragma once 

#include "Node.h"
#include <iostream>

class Constant : public Node
{
public:
	Constant() : value_(0.0) {}

	Constant(double value) : value_(value) {}

	double Pull()
	{
		return value_;
	}

private:
	double value_;
};
