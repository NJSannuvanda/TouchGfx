#ifndef SCREEN_2PRESENTER_HPP
#define SCREEN_2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen_2View;

class Screen_2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen_2Presenter(Screen_2View& v);

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

    virtual ~Screen_2Presenter() {}

private:
    Screen_2Presenter();

    Screen_2View& view;
};

#endif // SCREEN_2PRESENTER_HPP
