#include <SFML/Graphics.hpp>

#include <Object.h>
#include <Ball.h>
#include <Mobile.h>
#include <Fixed.h>

#define PLAYER1 0
#define PLAYER2 1


int main()
 {
    sf::RenderWindow window(sf::VideoMode(1600, 1000), "My window");
    int it = 0;
    Ball b[5] = {{PLAYER2,15,0},{PLAYER1,10,0},{PLAYER2,5,0},{PLAYER1,3,-3},{PLAYER2,5,-5}};

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }



        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
         for(int i=0;i<5;i++){
            if(it/50>=i){
                //b[i](PLAYER2,15,0);
                window.draw(b[i].getBall());
                b[i].update();
            }
        }
        //window.draw(b.getBall());
        // end the current frame
        window.display();
        it++;
    }

    //sf::Shape shape;
return 0;
 }

/*
#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}
*/
