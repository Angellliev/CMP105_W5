#include "Mario.h"

Mario::Mario()
{
	marioWalk.addFrame(sf::IntRect(0, 0, 15, 21));
	marioWalk.addFrame(sf::IntRect(15, 0, 15, 21));
	marioWalk.addFrame(sf::IntRect(30, 0, 15, 21));
	marioWalk.addFrame(sf::IntRect(45, 0, 15, 21));
	marioWalk.setFrameSpeed(1.f / 10.f);

	marioSwim.addFrame(sf::IntRect(0, 21, 16, 20));
	marioSwim.addFrame(sf::IntRect(16, 21, 16, 20));
	marioSwim.addFrame(sf::IntRect(32,21, 16, 20));
	marioSwim.setFrameSpeed(1.f / 10.f);
	
	marioDuck.addFrame(sf::IntRect(0, 41, 16, 20));
	marioDuck.addFrame(sf::IntRect(16, 41, 16, 20));
	marioDuck.setFrameSpeed(1.f / 10.f);
}

Mario::~Mario()
{

}

void Mario::update(float dt) 
{
	marioWalk.animate(dt);
	setTextureRect(marioWalk.getCurrentFrame());

	marioSwim.animate(dt);
	setTextureRect(marioSwim.getCurrentFrame());
	
	marioDuck.animate(dt);
	setTextureRect(marioDuck.getCurrentFrame());
}

void Mario::startMarioWalk()
{
	marioWalk.play(true);
}

void Mario::stopMarioWalk()
{
	marioWalk.stop();
	
}

void Mario::startMarioSwim()
{
	marioSwim.play(true);
}

void Mario::stopMarioSwim()
{
	marioSwim.stop();
}

void Mario::startMarioDuck()
{
	marioDuck.play(true);
}

void Mario::stopMarioDuck()
{
	marioDuck.stop();
}

void Mario::marioFlip()
{
	marioWalk.setFlipped(true);
	marioSwim.setFlipped(true);
	marioDuck.setFlipped(true);
}

void Mario::marioReverseFlip()
{
	marioWalk.setFlipped(false);
	marioSwim.setFlipped(false);
	marioDuck.setFlipped(false);
}
