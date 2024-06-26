#include <gui/def.hpp>
#include <gui/model/Model.hpp>

ButtonHandler ButtonHandlerTemp;
bool screenChangeIndicatorFlag = 0;

using namespace std;

std::vector<ButtonHandler> temp_updateValuesList = {
    {"BUTTON1", "SCREEN1", "SCREEN1", "NULL"},
    {"BUTTON2", "SCREEN1", "SCREEN2", "SCREEN1"},
    {"BUTTON3", "SCREEN1", "SCREEN3", "SCREEN1"},
    {"BUTTON1", "SCREEN2", "SCREEN1", "SCREEN2"},
    {"BUTTON2", "SCREEN2", "SCREEN2", "NULL"},
    {"BUTTON3", "SCREEN2", "SCREEN3", "SCREEN2"},
    {"BUTTON1", "SCREEN3", "SCREEN1", "SCREEN3"},
    {"BUTTON2", "SCREEN3", "SCREEN2", "SCREEN3"},
    {"BUTTON3", "SCREEN3", "SCREEN3", "NULL"},
    {"NULL", "NULL", "NULL", "NULL"}
};

gButtonHandler gButtonHandlerObj;

template<typename T>
using TransitionFunction = void(gButtonHandler::*)(void);

typedef struct ScreenHandler_t {
    string screenName;
    TransitionFunction<void> transition;
}ScreenHandler_t;

ScreenHandler_t temp_screenTransisionList[] = {
    {"SCREEN1", gButtonHandler::gotoScreen_Screen_1 },
    {"SCREEN2", gButtonHandler::gotoScreen_Screen_2 },
    {"SCREEN3", gButtonHandler::gotoScreen_Screen_3 },
    {"NULL", nullptr}  // Use nullptr for no transition
};


void g_ScreenHandler()
{
    int screenIndex, boardIndex;

    // Loop between number of screens to get the current screen details
    for (screenIndex = 0 ; screenIndex < 3 ; screenIndex++) 
    {
        // Get the current screen details
        if (temp_updateValuesList[screenIndex].currScreenPointer == ButtonHandlerTemp.currScreenPointer) 
        {
            // std::cout << ButtonHandlerTemp.currScreenPointer << ".....\n";
            // Break the loop when the screen combination is found
            break;
        }
    } 

    // Loop between number of buttons to get the button press details
    for (boardIndex = screenIndex ; boardIndex < screenIndex + 3 ; boardIndex++) 
    {
        // Get the button press details
        if (temp_updateValuesList[boardIndex].buttonPointer == ButtonHandlerTemp.buttonPointer) 
        {
            // std::cout << ButtonHandlerTemp.buttonPointer << ".....\n";
            // Load the next screen detail to current screen
            ButtonHandlerTemp.currScreenPointer = temp_updateValuesList[boardIndex].nextScreenPointer;
            // Load the previous screen detail from the table to prev screen buffer
            ButtonHandlerTemp.prevScreenPointer = temp_updateValuesList[boardIndex].prevScreenPointer;
        }
    }        

    // Loop between number of screens to call the respective call back function
    for(short screenTransIndex = 0 ; screenTransIndex < 3 ; screenTransIndex++)
    {
        if(ButtonHandlerTemp.currScreenPointer == temp_screenTransisionList[screenTransIndex].screenName)
        {
            screenChangeIndicatorFlag = 1;
            // std::cout << temp_screenTransisionList[screenTransIndex].screenName << "entry .....\n";
            (gButtonHandlerObj.*temp_screenTransisionList[screenTransIndex].transition)();
        }
    }
    
    // clear the button press
    ButtonHandlerTemp.buttonPointer.clear();
    ButtonHandlerTemp.buttonPointer = null;
}

gButtonHandler::gButtonHandler()
{

}

void gButtonHandler::gotoScreen_Screen_1()
{
    std::cout << "Screen 1 entry.....\n";
    // application().gotoScreen_1ScreenNoTransition();
}
void gButtonHandler::gotoScreen_Screen_2()
{
    std::cout << "Screen 2 entry.....\n";
}
void gButtonHandler::gotoScreen_Screen_3()
{
    std::cout << "Screen 3 entry.....\n";
}