OneStepAudio
============
音響信号処理の実験場。

動作確認済みプラットフォーム
============
- Windows 8
- Mac 10.8

実行方法
============
実行ファイルは（まだ）用意していません。
各プラットフォームでビルドをお願いします。

ビルド方法
============

## 必要なもの
### Mac
- Xcode 5.0
- OpenFrameworks C++11対応版

	OpenFrameworks 0.8.0は、Xcode5.0ではC++11規格でビルドできません。
	C++11対応版を使う必要があります。
	以下のGitHubリポジトリをクローンしてください。
	https://github.com/openFrameworks-cpp11/openFrameworks
	
- libsndfile 1.0.25
	
	homebrewなどでインストールしてください。
	
### Windows
- Visual Studio 2012
- OpenFrameworks 0.8.0
- libsndfile 1.0.25

	Windowsでは（まだ）試していません。

## ビルド手順
### Mac
1.	openFrameworks/apps/myApps 以下に OneStepAudio フォルダを配置する
2. Xcode で OneStepAudio/OneStepAudio.xcodeproj を開く
3. User.xcconfig を編集する
	1. libsndfile の動的リンクライブラリ、ヘッダーファイルパスを編集する
4. ビルドして実行する

### Windows
1.	openFrameworks/apps/myApps 以下に OneStepAudio フォルダを配置する
2. Visual Studio 2012 で OneStepAudio/OneStepAudio.sln を開く
3. libsndfile のライブラリ、ヘッダーファイルへのパスを通す（まだ試していません）
4. ビルドして実行する

License
============
MIT License.

Acknowledgements
============
- OpenFrameworks

	Copyright (c) 2004- openFrameworks Community
	http://www.openframeworks.cc
	
- libsndfile
	
	libsndfile was written by Erik de Castro Lopo, and released under LGPL version3.
	http://www.mega-nerd.com/libsndfile/
	
	OneStepAudio will load libsndfile dynamic link library.

