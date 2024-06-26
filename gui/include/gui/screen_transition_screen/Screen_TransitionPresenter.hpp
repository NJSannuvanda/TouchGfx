#ifndef SCREEN_TRANSITIONPRESENTER_HPP
#define SCREEN_TRANSITIONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen_TransitionView;

class Screen_TransitionPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen_TransitionPresenter(Screen_TransitionView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen_TransitionPresenter() {}

private:
    Screen_TransitionPresenter();

    Screen_TransitionView& view;
};

#endif // SCREEN_TRANSITIONPRESENTER_HPP
