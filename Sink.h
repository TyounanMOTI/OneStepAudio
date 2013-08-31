#pragma once

#include "Node.h"

namespace OneStepAudio {
	class Sink
	{
	public:
		Sink() {}
		~Sink() {}
		void operator <<(Node& source);
		template<typename T> void Pull(T* destBuffer, size_t bufferSize);
	};
}
