#include <gui/screen_1_screen/Screen_1View.hpp>

Screen_1View::Screen_1View()
{

}

void Screen_1View::setupScreen()
{
    Screen_1ViewBase::setupScreen();
}

void Screen_1View::tearDownScreen()
{
    Screen_1ViewBase::tearDownScreen();
}
// Step 3
// add button actions
void Screen_1View::buttonHandler()
{
    if(screenChangeIndicatorFlag)
    {
        switch(ButtonHandlerTemp.buttonPointer[6])
        {
            case('1'):   application().gotoScreen_1ScreenNoTransition(); break;
            case('2'):   application().gotoScreen_2ScreenNoTransition(); break;
            case('3'):   application().gotoScreen_3ScreenNoTransition(); break;
        }
        screenChangeIndicatorFlag = 0;
    }    
}