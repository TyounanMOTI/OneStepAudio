#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
#if 0
	sink_ = new SinkNode();
	constant_ = new ConstantNode(1.0);
	sink_ << constant_;
#endif
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	plot(std::vector<double>(256, 5.0));
}

void testApp::plot(const std::vector<double>& data)
{
	static float radius = 2.0f;

	float x = 0.0f;
	float max = *std::max_element(data.begin(), data.end());

	for (double y : data) {
		ofCircle(x, -y / max * ofGetHeight() / 2 + (ofGetHeight() / 2), radius);
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
