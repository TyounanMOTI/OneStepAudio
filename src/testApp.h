#pragma once

#include "ofMain.h"
#include "Sink.h"
#include "Constant.h"
#include "Phase.h"
#include "Buffer.h"
#include <memory>

class testApp : public ofBaseApp{

	public:
		testApp();
		void setup();
		void update();
		void draw();

		void audioOut( float * output, int bufferSize, int nChannels);
		void plot(const std::vector<double>& data);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
private:
	Sink sink_;
	Constant constant_;
	Phase phase_;
	std::unique_ptr<Buffer> music_;
};
