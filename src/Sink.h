#pragma once

#include "Node.h"

class Sink : public Node
{
public:
	void SetSource(Node& source)
	{
		source_ = &source;
	}

	double Pull()
	{
		return source_->Pull();
	}

private:
	Node* source_;
};
