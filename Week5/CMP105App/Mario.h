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

	void startMarioSwim();
	void stopMarioSwim();

	void startMarioDuck();
	void stopMarioDuck();

	void marioFlip();
	void marioReverseFlip();
		

};

