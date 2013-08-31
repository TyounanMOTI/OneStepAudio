#pragma once

#include "Node.h"

namespace OneStepAudio {
	class ConstantNode : public Node
	{
	public:
		ConstantNode(double value) : value_(value) {}
		~ConstantNode() {}
		double Pull() { return value_; }

	private:
		double value_;
	};
}