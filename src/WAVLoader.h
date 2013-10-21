#pragma once

#include <string>

class Buffer;

class WAVLoader
{
public:
	// 読み込むWAVファイルへのパスを指定する
	explicit WAVLoader(const std::string& filePath);

	// WAVファイルの内容を全て格納したバッファを返す
	std::unique_ptr<Buffer> Read();

private:
	std::string filePath_;
};
