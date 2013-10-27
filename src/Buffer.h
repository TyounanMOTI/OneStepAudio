#pragma once

#include "Node.h"
#include <vector>

class Buffer : public Node
{
public:
	// バッファを空で初期化する
	Buffer();

	// 保持させるサンプリングデータを渡して初期化する
	explicit Buffer(const std::vector<double>& content);

	// 保持しているデータを１サンプルずつ返す
	// 返すデータがなくなったら、0.0を返し続ける
	double Pull();

private:
	std::vector<double> content_;

	// content_をどこまで読んだかを覚えておく
	std::vector<double>::size_type head_index_;
};
