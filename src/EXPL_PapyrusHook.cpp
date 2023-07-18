#include "../include/EXPL_PapyrusHook.h"

namespace EXPL
{
    #define REGISTERPAPYRUSFUNC(name) vm->RegisterFunction(#name, "ZadExpressionNativeLib", EXPL::name);

    bool RegisterPapyrusFunctions(RE::BSScript::IVirtualMachine *vm) 
    {
        REGISTERPAPYRUSFUNC(ApplyExpression);
        REGISTERPAPYRUSFUNC(GetExpression);
        REGISTERPAPYRUSFUNC(ResetExpression);
        REGISTERPAPYRUSFUNC(FactionsToPreset);
        REGISTERPAPYRUSFUNC(ApplyPhonemsFaction);
        return true;
    }

    #undef REGISTERPAPYRUSFUNC
}