#include "testApp.h"
#include "WAVLoader.h"
#include "Buffer.h"

testApp::testApp() : constant_(1.0), ofBaseApp()
{
}

//--------------------------------------------------------------
void testApp::setup(){
	sink_.SetSource(&constant_);

	std::string musicFilePath = ofDirectory("130915.wav").getAbsolutePath();
	WAVLoader loader(musicFilePath);
	music_ = loader.Read();

	ofSoundStreamSetup(2, 0, this);
}

//--------------------------------------------------------------
void testApp::update(){

}

void testApp::audioOut( float * output, int bufferSize, int nChannels )
{
	std::generate_n(output, bufferSize * nChannels,
								[this]()
								{
									return music_->Pull();
								});
}

//--------------------------------------------------------------
void testApp::draw(){

}

// データの最大値が1.0と仮定して描画
void testApp::plot(const std::vector<double>& data)
{
	static float radius = 2.0f;

	double x = 0.0f;

	for (double y : data) {
		ofCircle(x, -y * ofGetHeight() / 2 + (ofGetHeight() / 2), radius);
		x += double(ofGetWidth()) / data.size();
	}
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
	
}
