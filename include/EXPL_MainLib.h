#pragma once

namespace EXPL 
{
    #define PAPYRUSFUNCHANDLE RE::BSScript::Internal::VirtualMachine* a_vm, const RE::VMStackID a_stackID, RE::StaticFunctionTag*
    #define SKSELOG(...) {SKSE::log::info(__VA_ARGS__);}

    std::vector<float> ApplyExpression(PAPYRUSFUNCHANDLE, RE::Actor* a_actor, std::vector<float> a_expression, int a_control);
    std::vector<float> GetExpression(PAPYRUSFUNCHANDLE, RE::Actor* a_actor);
    void ResetExpression(PAPYRUSFUNCHANDLE, RE::Actor* a_actor, bool a_phonem, bool b_mods);
    
    std::vector<float> FactionsToPreset(PAPYRUSFUNCHANDLE, RE::Actor* a_actor, std::vector<RE::TESFaction*> a_factions, std::vector<int> a_defaults);
    std::vector<float> ApplyPhonemsFaction(PAPYRUSFUNCHANDLE, RE::Actor* a_actor, std::vector<float> a_exp, std::vector<RE::TESFaction*> a_factions, std::vector<int> a_defaults);

    std::vector<float> _ApplyExpression(RE::Actor* a_actor, const std::vector<float> &a_expression, int a_control);
    std::vector<float> _GetExpression(RE::Actor* a_actor);
    void _ResetExpression(RE::Actor* a_actor, bool a_phonem, bool b_mods);
}