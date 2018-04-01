#include "Ball.h"

Ball::Ball(int pl,int x,int y)
{
    ball.setRadius(15);
    ball.setPointCount(100);
    player = pl;
    this->setColor(pl);
    //ball.setFillColor(sf::Color(100, 250, 50));
    speedX = x;
    speedY = y;
    rotation = 0;
    ball.setPosition(0,50);

}
Ball::Ball(int pl,int x,int y,int rad,int b,int m)
{

    ball.setRadius(rad);
    player = pl;
    bounciness = b;
    mass = m;
    speedX = x;
    speedY = y;

}
void Ball::setColor(int pl){
    switch(pl){
    case PLAYER1:
        ball.setFillColor(sf::Color(100, 250, 50));
        break;
    case PLAYER2:
        ball.setFillColor(sf::Color(128,0,128));
        break;
    }
}

void Ball::puteremingemare(){
    ball.setRadius(ball.getRadius()+100);

}

sf::CircleShape Ball::getBall(){
    return ball;
}

void Ball::update(){
    ball.move(speedX,speedY);
    speedY += G_;
    if(ball.getPosition().x>1000){
        speedX = -speedX*0.4;
        speedY -= (speedY+rotation)*0.3;
        //rotation -= 0.1 * speedY; //WRONG!!!
        ball.setPosition(1000,ball.getPosition().y);
    }
    if(ball.getPosition().y>600){
        speedY = -speedY*0.4;
        speedX -= (speedX+rotation)*0.3;
        //rotation -= 0.1 * speedX; //WRONG!!!
        ball.setPosition(ball.getPosition().x,600);
    }

}

Ball::~Ball()
{
    //dtor
}
