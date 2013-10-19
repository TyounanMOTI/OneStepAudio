#include "WAVLoader.h"
#include "Buffer.h"
#include <sndfile.hh>
#include <iostream>

WAVLoader::WAVLoader(const std::string& filePath)
	: filePath_(filePath)
{
}

Buffer WAVLoader::Read()
{
	SndfileHandle fileHandle(filePath_);

	if (fileHandle.error()) {
		std::cout << "[WAVLoader] File not found: " + filePath_ << std::endl;
		return Buffer(std::vector<double>());
	}

	// SndfileHandle::frames関数は（サンプリングレート*秒数）を返す。
	// SndfileHandle::readf関数で実際に読み込まれるのは（フレーム数*チャンネル数）なので、確保するのは（フレーム数*チャンネル数）ぶんの領域。
	std::vector<double> output(fileHandle.frames() * fileHandle.channels());
	fileHandle.readf(output.data(), fileHandle.frames());

	return Buffer(output);
}
