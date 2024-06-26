#ifndef SCREEN_1VIEW_HPP
#define SCREEN_1VIEW_HPP

#include <gui_generated/screen_1_screen/Screen_1ViewBase.hpp>
#include <gui/screen_1_screen/Screen_1Presenter.hpp>

class Screen_1View : public Screen_1ViewBase
{
public:
    Screen_1View();
    virtual ~Screen_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void buttonHandler();
protected:
};

#endif // SCREEN_1VIEW_HPP
