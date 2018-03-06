#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_audio.h>

class BaseAllegroApplication {

    public:
        //@todo: Register allegro 5 resources
        BaseAllegroApplication(int iWidth, int iHeight) {}
        //@todo: Initialize correct values for starting the application correctly
        bool InitApplication() {}
        //@todo: Deference Allegro5 pointers and objects
        ~BaseAllegroApplication() {}

    private:
        //@todo: Register a palette of 8-16 colors
        //@todo: Audio + Image + App Pointer instance + etc.... all private pointers

};

// using namespace std;

int main(int argc, char** argv)
{
    std::cout << "Allegro 5 test application" << std::endl;
    return 0;
}
