/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD24bpp.hpp>
#include <gui/startup_screen/StartUpView.hpp>
#include <gui/startup_screen/StartUpPresenter.hpp>
#include <gui/screen_1_screen/Screen_1View.hpp>
#include <gui/screen_1_screen/Screen_1Presenter.hpp>
#include <gui/screen_2_screen/Screen_2View.hpp>
#include <gui/screen_2_screen/Screen_2Presenter.hpp>
#include <gui/screen_3_screen/Screen_3View.hpp>
#include <gui/screen_3_screen/Screen_3Presenter.hpp>
#include <gui/screen_transition_screen/Screen_TransitionView.hpp>
#include <gui/screen_transition_screen/Screen_TransitionPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD24bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
    reinterpret_cast<touchgfx::LCD24bpp&>(touchgfx::HAL::lcd()).enableDecompressorL8_All();
    reinterpret_cast<touchgfx::LCD24bpp&>(touchgfx::HAL::lcd()).enableDecompressorRGB();
}

/*
 * Screen Transition Declarations
 */

// StartUp

void FrontendApplicationBase::gotoStartUpScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoStartUpScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoStartUpScreenNoTransitionImpl()
{
    touchgfx::makeTransition<StartUpView, StartUpPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen_1

void FrontendApplicationBase::gotoScreen_1ScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoScreen_1ScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_1ScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<Screen_1View, Screen_1Presenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen_1ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoScreen_1ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_1ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen_1View, Screen_1Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen_2

void FrontendApplicationBase::gotoScreen_2ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoScreen_2ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_2ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen_2View, Screen_2Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen_3

void FrontendApplicationBase::gotoScreen_3ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoScreen_3ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_3ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen_3View, Screen_3Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
