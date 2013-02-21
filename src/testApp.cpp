#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(186, 135);
    ofBackground(241, 223, 183);
    ofSetCircleResolution(20);
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(240, 227, 219);
    ofFill();    
    ofTriangle(74, 10, 110, 135, 40 , 135);//peachtriangle
    
    ofSetColor(255, 206, 43);
    ofFill();    
    ofTriangle(110, 53, 132, 96, 80 , 94);
      
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(3);
    ofTriangle(74, 10, 110, 135, 40 , 135);
    
    ofFill();
    ofSetColor(148, 164, 163);
    ofCircle(26, 64, 15.5); // Left Sided Circle
    
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(3);
    ofCircle(186, 57, 18); // Far Circle
    
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(4);
    ofCircle(147, 105, 20); // Bottom Right Circle Outline
    
    ofFill();
    ofSetColor(169, 178, 135);
    ofSetLineWidth(10);
    ofCircle(147, 105, 20); // Bottom Right Circle Outter
    
    ofFill();
    ofSetColor(91, 106, 145);
    ofSetLineWidth(10);
    ofCircle(147, 105, 15); // Bottom Right Circle Innter
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(2);
    ofLine(0, 82, 82, 135);
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(2);
    ofLine(0, 119, 42, 135);//bottom left diagonal lines
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(2);
    ofLine(176, 0, 176, 135);
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(2);
    ofLine(182, 0, 182, 135); //vertical black lines 
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(1);
    ofLine(164, 122, 186, 122);
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(1);
    ofLine(164, 124, 186, 124);
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(1);
    ofLine(164, 126, 186, 126); //bottom black horizontal lines 
    
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(1);
    ofLine(164, 24, 186, 24);
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(1);
    ofLine(164, 26, 186, 26);//top black horizontal lines 

    
    
    

    
    
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