#pragma once

#include "Node.h"

class Sink : public Node
{
public:
	double Pull()
	{
		return 1.0;
	}
};
