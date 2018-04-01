#ifndef MOBILE_H
#define MOBILE_H

#include <Object.h>


class Mobile : public Object
{
    public:
        Mobile();
        virtual ~Mobile();
        float getSpeedX();
        float getSpeedY();
        virtual void update();

    protected:
        float speedX, speedY;
        int mass;


    private:
};

#endif // MOBILE_H
