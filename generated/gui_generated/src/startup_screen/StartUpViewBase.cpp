/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/startup_screen/StartUpViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

StartUpViewBase::StartUpViewBase() :
    frameCountInteraction1Interval(0)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    textArea1.setXY(191, 126);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Z014));
    add(textArea1);
}

StartUpViewBase::~StartUpViewBase()
{

}

void StartUpViewBase::setupScreen()
{

}

void StartUpViewBase::handleTickEvent()
{
    frameCountInteraction1Interval++;
    if(frameCountInteraction1Interval == TICK_INTERACTION1_INTERVAL)
    {
        //Interaction1
        //When every N tick change screen to Screen_1
        //Go to Screen_1 with screen transition towards East
        application().gotoScreen_1ScreenSlideTransitionEast();
        frameCountInteraction1Interval = 0;
    }
}
