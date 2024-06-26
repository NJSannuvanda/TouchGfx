#ifndef SCREEN_TRANSITIONVIEW_HPP
#define SCREEN_TRANSITIONVIEW_HPP

#include <gui_generated/screen_transition_screen/Screen_TransitionViewBase.hpp>
#include <gui/screen_transition_screen/Screen_TransitionPresenter.hpp>

class Screen_TransitionView : public Screen_TransitionViewBase
{
public:
    Screen_TransitionView();
    virtual ~Screen_TransitionView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREEN_TRANSITIONVIEW_HPP
