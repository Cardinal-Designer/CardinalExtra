#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string>
#include "../Classes/wrapper.h"

//return Application::getInstance()->run();
BOOST_PYTHON_MODULE(libCardinalExtra)
{
    def("Init", Init_Main);
    def("setSearchPath",setSearchPath);
    def("setMode",setMode);
    def("setDragonBones",setDragonBones);
    def("setWindowsOnTop",setWindowsOnTop);
    def("setScale",setScale);
}