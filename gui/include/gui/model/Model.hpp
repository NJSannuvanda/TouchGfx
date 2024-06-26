#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;
#include <gui/common/lookup.hpp>
#include <gui/def.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;

#define BUTTON_COUNT 3
#define SCREEN_COUNT 3


extern string null;
extern string buttons[BUTTON_COUNT];
extern string screens[SCREEN_COUNT];

struct ButtonHandler {
    std::string buttonPointer;
    std::string currScreenPointer;
    std::string nextScreenPointer;
    std::string prevScreenPointer;
};
extern ButtonHandler ButtonHandlerTemp;

extern bool screenChangeIndicatorFlag;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    // void gotoSreen_Screen1();
    // void gotoSreen_Screen2();
    // void gotoSreen_Screen3();
protected:
    ModelListener* modelListener;

};

#endif // MODEL_HPP
