#pragma once

#include "Node.h"

class Phase : public Node
{
public:
	Phase() : phase_(0.0) {}

	double Pull()
	{
		return samplingRateProvider_->Pull();
	}

	void SetSamplingRate(Node* node)
	{
		samplingRateProvider_ = node;
	}

	void SetFramerate(Node* node)
	{
		frequencyProvider_ = node;
	}

private:
	double phase_;
	Node* samplingRateProvider_;
	Node* frequencyProvider_;
};