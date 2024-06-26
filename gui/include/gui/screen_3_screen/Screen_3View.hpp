#ifndef SCREEN_3VIEW_HPP
#define SCREEN_3VIEW_HPP

#include <gui_generated/screen_3_screen/Screen_3ViewBase.hpp>
#include <gui/screen_3_screen/Screen_3Presenter.hpp>

class Screen_3View : public Screen_3ViewBase
{
public:
    Screen_3View();
    virtual ~Screen_3View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    
    virtual void buttonHandler();
protected:
};

#endif // SCREEN_3VIEW_HPP
