#pragma once

#include "ofMain.h"
#include "ofxBullet.h"
#include "ofxAssimpModelLoader.h"
#include "ofxBulletBaseSoftShape.h"

class testApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofxBulletWorldSoft			world;
	vector <ofxBulletBox*>		bounds;
	ofxBulletCustomShape*		boundsShape;
	ofMaterial					boundsMat;
	float						boundsWidth;
	bool bDropBox;
	
	vector<ofxBulletCustomShape*>	logos;
	ofMaterial						logoMat;
	vector<ofxBulletBaseRigidShape*>		shapes;
	vector<ofxBulletBaseSoftShape*>	softShapes;
	ofxBulletBaseSoftShape*			blobShape;
	ofMaterial						shapesMat;
	
	bool bDrawDebug;
	
	float blobRotX, blobRotY, blobRotZ;
	ofMesh						logoMesh;
	ofMesh						blobMesh;
	ofIndexType					blobMesh_attachIndexEnd;
	ofCamera					camera;
	ofLight						light;
	ofLight						keyLight;
	ofLight						fillLight;
	
	ofxAssimpModelLoader		assimpModel;
	ofxAssimpModelLoader		blobModel;
	
	int randSeed;
};
