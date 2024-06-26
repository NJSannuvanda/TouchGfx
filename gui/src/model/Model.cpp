#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <cstring>
#include <iostream>

#include <gui/def.hpp>

using namespace std;

Model ModelObj; // Instantiate your model object
std::string null = "NULL";

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
    if(null != ButtonHandlerTemp.buttonPointer)
    {
        g_ScreenHandler();
    }
}
