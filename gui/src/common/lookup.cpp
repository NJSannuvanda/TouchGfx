#include <gui/common/lookup.hpp>
#include <gui/model/Model.hpp>

// Step 2
// Load the structure with valid data / information (lookup table data) 
buttonHandlerStruct_t updateValuesList[] = 
{
     //Button,      current screen,     next screen,        prev screen
    {"BUTTON1",     "SCREEN1",          "NULL",             "NULL"},
    {"BUTTON2",     "SCREEN1",          "SCREEN2",          "SCREEN1"},
    {"BUTTON3",     "SCREEN1",          "SCREEN3",          "SCREEN1"},
    {"NULL",        "NULL",             "NULL",             "NULL"}
};

// buttonHandlerStruct_t updateValuesList[] = 
// {
//      //Button,      current screen,     next screen,        prev screen
//     {"BUTTON1",     1,          0,             0},
//     {"BUTTON2",     1,          2,          1},
//     {"BUTTON3",     1,          3,          1},
//     {"NULL",        0,             0,            0}
// };