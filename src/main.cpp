struct Hook_TESConditionItem_IsTrue
{
    static void* Unk(void* a_arg1, void* a_arg2)
    {
        auto tls = *(std::uintptr_t*)REX::W32::NtCurrentTeb()->threadLocalStoragePointer;
        auto doConsoleLog = (bool*)(tls + 464);
        *doConsoleLog = false;

        return _Unk(a_arg1, a_arg2);
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
