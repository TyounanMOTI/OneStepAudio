#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	sink_.SetSource(constant_);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	static const size_t bufferSize = 256;
	auto result = std::vector<double>(bufferSize, 0.0);
	std::generate (result.begin(), result.end(), [this]()
	{
		return sink_.Pull();
	});
	plot(result);
}

// �f�[�^�̍ő�l��1.0�Ɖ��肵�ĕ`��
void testApp::plot(const std::vector<double>& data)
{
	static float radius = 2.0f;

	float x = 0.0f;

	for (double y : data) {
		ofCircle(x, -y * ofGetHeight() / 2 + (ofGetHeight() / 2), radius);
		x += ofGetWidth() / data.size();
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
