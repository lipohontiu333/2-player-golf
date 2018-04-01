#ifndef HOOP_H
#define HOOP_H

#include <Fixed.h>
#include <SFML/Graphics.hpp>


class Hoop : public Fixed
{
    public:
        Hoop();
        virtual ~Hoop();

    protected:

    private:
        sf::ConvexShape left, right;
        sf::Vertex v1,v2;
};

#endif // HOOP_H
