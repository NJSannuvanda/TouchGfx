/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_transition_screen/Screen_TransitionViewBase.hpp>
#include <touchgfx/Color.hpp>

Screen_TransitionViewBase::Screen_TransitionViewBase()
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);
}

Screen_TransitionViewBase::~Screen_TransitionViewBase()
{

}

void Screen_TransitionViewBase::setupScreen()
{

}

void Screen_TransitionViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction1
        //When hardware button 0 clicked change screen to Screen_1
        //Go to Screen_1 with no screen transition
        application().gotoScreen_1ScreenNoTransition();
    
    }

    if(1 == key)
    {
        //Interaction2
        //When hardware button 1 clicked change screen to Screen_2
        //Go to Screen_2 with no screen transition
        application().gotoScreen_2ScreenNoTransition();
    
    }

    if(2 == key)
    {
        //Interaction3
        //When hardware button 2 clicked change screen to Screen_3
        //Go to Screen_3 with no screen transition
        application().gotoScreen_3ScreenNoTransition();
    
    }
}
