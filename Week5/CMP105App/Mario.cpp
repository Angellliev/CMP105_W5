#include "Mario.h"

Mario::Mario()
{
	marioWalk.addFrame(sf::IntRect(0, 0, 15, 20));
	marioWalk.addFrame(sf::IntRect(0, 0, 30, 40));
	marioWalk.addFrame(sf::IntRect(0, 0, 45, 60));
	marioWalk.addFrame(sf::IntRect(0, 0, 60, 80));

	marioSwim.addFrame(sf::IntRect(0, 0, 16, 20));
	marioSwim.addFrame(sf::IntRect(0, 0, 32, 40));
	marioSwim.addFrame(sf::IntRect(0, 0, 48, 60));
	
	marioDuck.addFrame(sf::IntRect(0, 0, 16, 20));
	marioDuck.addFrame(sf::IntRect(0, 0, 16, 20));
}

Mario::~Mario()
{

}

void Mario::update(float dt)
{
	marioWalk.animate(dt);
	setTextureRect(marioWalk.getCurrentFrame());

	//marioSwim.animate(dt);
	//setTextureRect(marioSwim.getCurrentFrame());
	//
	//marioDuck.animate(dt);
	//setTextureRect(marioDuck.getCurrentFrame());
}

void Mario::startMarioWalk()
{
	
}

void Mario::stopMarioWalk()
{

}

void Mario::marioFlip()
{
}

void Mario::marioReverseFlip()
{
}
