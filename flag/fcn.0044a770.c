void fcn.0044a770(uchar *arg1, ulong arg2)

{
    uchar uVar1;
    uint32_t uVar2;
    int64_t arg4;
    ulong in_R8;
    ulong in_R9;
    bool bVar3;
    unkbyte10 Var4;
    int64_t in_stack_00000000;
    ulong in_stack_00000008;
    ulong in_stack_00000010;
    ulong in_stack_00000018;
    ulong var_9h;

    uVar2 = *(in_stack_00000000 + -9);
    bVar3 = uVar2 < 200;
    arg4 = in_stack_00000000 + -9 + (200 - uVar2);
    Var4 = fcn.0044a705(arg1, arg2, 200, arg4, in_R8, in_R9, in_stack_00000008, in_stack_00000010, in_stack_00000018);
    if (!bVar3) {
        *Var4 = *Var4 + Var4;
        uVar1 = in(Var4 >> 0x40);
        *arg1 = uVar1;
        uVar2 = Var4 + 0x49080000;
        *uVar2 = (*uVar2 - uVar2) - (0xb6f7ffff < Var4);
    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    *(arg4 + 0x19) = *(arg4 + 0x19) | arg4;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}