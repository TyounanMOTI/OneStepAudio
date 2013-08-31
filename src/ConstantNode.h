#pragma once 

#include "Node.h"

class ConstantNode : public Node
{
public:
	double Pull()
	{
		return 0.5;
	}
};
