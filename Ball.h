#ifndef BALL_H
#define BALL_H
#define PLAYER1 0
#define PLAYER2 1
#define DEFSIZE 555
#define G_ 0.1

#include <SFML/Graphics.hpp>


#include <Mobile.h>


class Ball : public Mobile
{
    public:
        Ball(int,int,int);
        Ball(int,int,int,int,int,int);
        void puteremingemare();
        void setColor(int);
        sf::CircleShape getBall();
        virtual ~Ball();
        void update();


    protected:

    private:
        int player;
        sf::CircleShape ball;
        float rotation;
};

#endif // BALL_H
