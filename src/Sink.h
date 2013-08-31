#pragma once

class Sink
{
public:
	Sink() {}
	~Sink() {}

	template<typename T>
	void Pull(T* destBuffer, size_t bufferSize)
	{
		for (size_t i = 0; i < bufferSize; i++) {
			*(destBuffer + i) = T(1.0);
		}
	}
};
