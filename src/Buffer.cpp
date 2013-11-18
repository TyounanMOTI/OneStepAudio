#include "Buffer.h"
#include <assert.h>


Buffer::Buffer()
	: content_(),
		head_index_(0)
{
}

Buffer::Buffer(const std::vector<double>& content)
	: content_(content),
		head_index_(0)
{
}

double Buffer::Pull()
{
	if (head_index_ == content_.size()) {
		return 0.0;
	} else {
		return content_[++head_index_];
	}
}
