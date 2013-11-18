#pragma once

#include <string>
#include <vector>

class Buffer;

class WAVLoader
{
public:
	// 読み込むWAVファイルへのパスを指定する
	explicit WAVLoader(const std::string& filePath);

	// WAVファイルの内容を全て格納したバッファを返す
	Buffer Read();
	void Read(std::vector<float>& output);

private:
	std::string filePath_;
};
