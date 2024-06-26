#include <gui/screen_2_screen/Screen_2View.hpp>

Screen_2View::Screen_2View()
{

}

void Screen_2View::setupScreen()
{
    Screen_2ViewBase::setupScreen();
}

void Screen_2View::tearDownScreen()
{
    Screen_2ViewBase::tearDownScreen();
}
// Step 3
// add button actions
void Screen_2View::buttonHandler()
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