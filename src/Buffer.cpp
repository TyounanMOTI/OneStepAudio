#include "Buffer.h"

Buffer::Buffer(std::vector<double> content)
	: content_(content),
		head_(content_.begin())
{
}

double Buffer::Pull()
{
	if (head_ == content_.end()) {
		return 0.0;
	} else {
		auto retval = *head_;
		++head_;
		return retval;
	}
}
