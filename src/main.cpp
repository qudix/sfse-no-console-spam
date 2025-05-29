struct Hook_TESConditionItem
{
    static bool IsTrue(RE::TESConditionItem* a_this, RE::ConditionCheckParams* a_params)
    {
        auto tls = RE::TLS::GetSingleton();
        tls->logConditionFunctions = false;

        return _IsTrue1(a_this, a_params);
    }

    static inline REL::Hook _IsTrue1{ REL::ID(50176), 0x0F4, IsTrue };
    static inline REL::Hook _IsTrue2{ REL::ID(50176), 0x13D, IsTrue };
    static inline REL::Hook _IsTrue3{ REL::ID(68040), 0x0D7, IsTrue };
    static inline REL::Hook _IsTrue4{ REL::ID(68040), 0x153, IsTrue };
    static inline REL::Hook _IsTrue5{ REL::ID(71422), 0x08B, IsTrue };
    static inline REL::Hook _IsTrue6{ REL::ID(71422), 0x0C2, IsTrue };
    static inline REL::Hook _IsTrue7{ REL::ID(85507), 0x0D8, IsTrue };
    static inline REL::Hook _IsTrue8{ REL::ID(85507), 0x120, IsTrue };
};

SFSE_PLUGIN_LOAD(const SFSE::LoadInterface* a_sfse)
{
    SFSE::Init(a_sfse, { .trampoline = true });

    return true;
}
