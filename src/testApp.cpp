#include "testApp.h"

//matt+bk's lovechild dont make love to it please

int sCircle;
int fCircle;
int xCircle;
int yCircle;

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(24);
    ofSetWindowShape(130, 130);
    ofBackground(245, 235, 225);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    xCircle = 97;
    yCircle = 69;
    
    sCircle = 40;
    
    ofSetColor(0);
    ofLine(120, 0, 130, 15); //black lines
    ofLine(70, 0, 130, 34);
    ofLine(28, 0, 0, 21);
    
    ofSetColor(159, 179, 118);
    ofBeginShape(); //green line like thing
        ofVertex(60, 0);
        ofVertex(70, 0);
        ofVertex(130, 34);
        ofVertex(130, 38);
    ofEndShape();
    
    ofSetColor(188, 98, 72);
    ofCircle(xCircle, yCircle, sCircle); //red circle
    
    ofSetColor(241, 223, 201); //pale yellow fill
    ofCircle(xCircle, yCircle, sCircle-4);
    
    ofSetColor(235, 203, 94);// yellow stroke
    ofCircle(xCircle, yCircle, sCircle-14);
    
    ofSetColor(221, 223, 222); //paleblue fill
    ofCircle(xCircle, yCircle, sCircle-18);
    
    ofSetColor(0); //blk semi
    ofCircle(xCircle, yCircle, sCircle-30);
    
    ofSetColor(81, 121, 94);
    ofBeginShape(); //green obnox box
    ofVertex(62, 12);
    ofVertex(130, 115);
    ofVertex(130, 130);
    ofVertex(78, 130);
    ofVertex(50, 21);
    ofEndShape();

    ofSetColor(204, 150, 78);
    ofBeginShape(); //brwn obnox box
    ofVertex(50, 21);
    ofVertex(78, 130);
    ofVertex(0, 130);
    ofVertex(0, 56);
    ofEndShape();

    ofSetColor(0);
    ofBeginShape(); //meanline
    ofVertex(43, 0);
    ofVertex(45, 0);
    ofVertex(79, 130);
    ofVertex(77, 130);
    ofEndShape();
    
    ofSetColor(0); //blk stroke
    ofCircle(40, 70, sCircle-8);

    ofSetColor(255); //blk stroke 
    ofCircle(40, 70, sCircle-13);
    
    ofSetColor(255); //whitefill
    ofCircle(40, 70, sCircle-14);
    
    ofSetColor(255, 0, 0);
    ofBeginShape(); //right red triangoe
    ofVertex(50, 58);
    ofVertex(59, 45);
    ofVertex(62, 47);
    ofEndShape();
    
    ofSetColor(255);
    ofBeginShape(); //right wht triangoe
    ofVertex(59, 45);
    ofVertex(68, 34);
    ofVertex(71, 37);
    ofVertex(62, 47);
    ofEndShape();
    
    ofSetColor(255,0,0);
    ofBeginShape(); //right blk triangoe
    ofVertex(68, 34);
    ofVertex(81, 20);
    ofVertex(85, 25);
    ofVertex(71, 37);
    ofEndShape();
    
    ofSetColor(0);
    ofBeginShape(); //right blk triangoe
    ofVertex(85, 15);
    ofVertex(97, 0);
    ofVertex(108, 0);
    ofVertex(90, 20);
    ofEndShape();
    
    ofSetColor(255, 0, 0);
    ofBeginShape(); //right red triangoe
    ofVertex(34, 63);
    ofVertex(14, 53);
    ofVertex(12, 57);
    ofEndShape();
    
    ofSetColor(255);
    ofBeginShape(); //right blk triangoe
    ofVertex(14, 53);
    ofVertex(0, 46);
    ofVertex(0, 54);
    ofVertex(12, 57);
    ofEndShape();
    
    ofSetColor(255, 0, 0);
    ofBeginShape(); //right red triangoe
    ofVertex(54, 76);
    ofVertex(69, 90);
    ofVertex(65, 93);
    ofEndShape();
    
    
    ofSetColor(0); //blk semi
    ofCircle(45, 70, sCircle-35);
    
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