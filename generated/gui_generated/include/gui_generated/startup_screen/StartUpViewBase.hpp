/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef STARTUPVIEWBASE_HPP
#define STARTUPVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/startup_screen/StartUpPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class StartUpViewBase : public touchgfx::View<StartUpPresenter>
{
public:
    StartUpViewBase();
    virtual ~StartUpViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TextArea textArea1;

private:

    /*
     * Tick Counter Declarations
     */
    static const uint32_t TICK_INTERACTION1_INTERVAL = 100;
    uint32_t frameCountInteraction1Interval;

};

#endif // STARTUPVIEWBASE_HPP