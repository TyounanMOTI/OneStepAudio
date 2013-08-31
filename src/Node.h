#pragma once

class Node
{
public:
	Node() {}
	virtual ~Node() {}
	virtual double Pull() = 0;
};
