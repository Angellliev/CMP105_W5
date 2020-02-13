#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Mario :public GameObject
{
protected:
		Animation marioWalk;
		Animation marioSwim;
		Animation marioDuck;

public:
	Mario();
	~Mario();
	void update(float dt);
	void startMarioWalk();
	void stopMarioWalk();
	void marioFlip();
	void marioReverseFlip();
		

};

