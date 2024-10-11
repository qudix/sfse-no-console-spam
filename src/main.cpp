struct Hook_TESConditionItem_IsTrue
{
    static RE::ConditionCheckParams& Unk(RE::ConditionCheckParams& a_paramsA, RE::ConditionCheckParams& a_paramsB)
    {
        auto tls = RE::TLS::GetSingleton();
        tls->logConditionFunctions = false;

        return _Unk(a_paramsA, a_paramsB);
    }

    static inline REL::Relocation<decltype(Unk)> _Unk;

    static void Install()
    {
        REL::Relocation target{ REL::ID{ 116127 }, 0x779 };
        _Unk = target.write_call<5>(Unk);
    }
};

SFSEPluginLoad(const SFSE::LoadInterface* a_sfse)
{
    SFSE::Init(a_sfse);
    SFSE::AllocTrampoline(14);

    Hook_TESConditionItem_IsTrue::Install();

    return true;
}
