#pragma once

namespace OneStepAudio {
	class Node
	{
	public:
		Node() {}
		virtual ~Node() {}
		virtual double Pull() = 0;
	};
}
