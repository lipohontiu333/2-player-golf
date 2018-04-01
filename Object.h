#ifndef OBJECT_H
#define OBJECT_H
//#include <Shape.hpp>




class Object
{
    public:
        Object();
    virtual ~Object();

    protected:
        float bounciness,friction;
        int positionX, positionY;

    private:



};

#endif // OBJECT_H
