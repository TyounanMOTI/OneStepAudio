#pragma once 

#include "Node.h"

class Constant : public Node
{
public:
	double Pull()
	{
		return 0.5;
	}
};
