void fcn.0044a522(uint *arg1, ulong noname_1, ulong noname_2, ulong arg4)

{
    uint uVar1;
    uint32_t uVar2;
    uint *puVar3;
    uchar uVar4;
    uint64_t unaff_RBP;

    puVar3 = arg1 + unaff_RBP;
    uVar4 = *puVar3;
    if ((5 < arg4) && (unaff_RBP < 0xfffffffffffffffd)) {
        uVar2 = arg4 - 4;
        do {
            arg4._0_4_ = uVar2;
            uVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            *arg1 = uVar1;
            arg1 = arg1 + 1;
            uVar2 = arg4 - 4;
        } while (3 < arg4);
        uVar4 = *puVar3;
        if (arg4 == 0) {
            return;
        }
    }
    do {
        puVar3 = puVar3 + 1;
        *arg1 = uVar4;
        arg4._0_4_ = arg4 - 1;
        uVar4 = *puVar3;
        arg1 = arg1 + 1;
    } while (arg4 != 0);
    return;
}