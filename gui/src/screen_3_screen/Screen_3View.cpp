#include <gui/screen_3_screen/Screen_3View.hpp>

Screen_3View::Screen_3View()
{

}

void Screen_3View::setupScreen()
{
    Screen_3ViewBase::setupScreen();
}

void Screen_3View::tearDownScreen()
{
    Screen_3ViewBase::tearDownScreen();
}
// Step 3
// add button actions
void Screen_3View::buttonHandler()
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