#pragma once
#include "../UIHelper/MethodUIHelper.h"
#include "../AllLevels.h"

class SizePrintingUI :
    public MethodUIHelper
{
private:
    void PrintDefaultTypes();
    void PrintPointers();
    void PrintClassTypes();
    void PrintPointersClassTypes();
public:
    void Run();
    void PrintDescription();
};

