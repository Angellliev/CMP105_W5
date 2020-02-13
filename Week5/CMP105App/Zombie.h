#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Zombie :public GameObject
{
protected:
	Animation walk;

public:
	Zombie();
	~Zombie();
	void update(float dt);
	void stopWalking();
	void startWalking();
	void walkFlip();
	void reverseWalkFlip();
};

