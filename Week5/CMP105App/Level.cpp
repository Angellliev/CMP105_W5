#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	backgroundTexture.loadFromFile("gfx/Level1_1.png");
	background.setSize(sf::Vector2f(11038, 675));
	background.setTexture(&backgroundTexture);

	zombie.setInput(input);
	zombieTexture.loadFromFile("gfx/animZombie.png");
	zombie.setSize(sf::Vector2f(55, 108));
	zombie.setPosition(100, 100);
	zombie.setTexture(&zombieTexture);

	mario.setInput(input);
	mario.setPosition(150, 1100);
	marioTexture.loadFromFile("gfx/MarioSheetT.png");
	mario.setSize(sf::Vector2f(55, 108));
	mario.setPosition(100, 100);
	mario.setTexture(&marioTexture);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	view.move(zombie.getPosition());
	if (input->isKeyDown( sf::Keyboard::A) )
	{
		zombie.move(-400 * dt , 0);
		zombie.startWalking();
		zombie.walkFlip();
	}
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		zombie.move(400 * dt, 0);
		zombie.startWalking();
		zombie.reverseWalkFlip();
	}
	else
	{
		zombie.stopWalking();
	}

	
}
  
// Update game objects
void Level::update(float dt)
{
	mario.update(dt);
	zombie.update(dt);
	view.setCenter(mario.getPosition());
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(background);
	window->draw(zombie);
	window->draw(mario);
	
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}