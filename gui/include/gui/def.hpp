#ifndef DEF_HPP
#define DEF_HPP

#include <gui/model/Model.hpp>
// #include <gui/model/ModelListener.hpp>
// #include <gui/common/FrontendApplication.hpp>
#include <mvp/Presenter.hpp>
#include <mvp/View.hpp>
#include <cstring>
#include <iostream>
#include <vector>
#include <functional>


void gotoScreen_Screen1();
void gotoScreen_Screen2();
void gotoScreen_Screen3();
void g_ScreenHandler();

class gButtonHandler : public touchgfx::Presenter
{
public:
    gButtonHandler();
    virtual ~gButtonHandler() {}

    virtual void gotoScreen_Screen_1();
    virtual void gotoScreen_Screen_2();
    virtual void gotoScreen_Screen_3();
protected:

};

#endif