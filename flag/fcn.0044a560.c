nt64_t fcn.0044a560(uint8_t *arg1, uint32_t *arg2, ulong noname_2, uint64_t arg4)

{
    int32_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t iVar4;
    uint32_t extraout_EDX;
    ulong extraout_RDX;
    ulong extraout_RDX_00;
    ulong noname_2_00;
    uint32_t unaff_EBX;
    uint64_t unaff_RBP;
    char in_R8B;
    uint8_t uVar5;
    bool bVar6;
    uint8_t uVar7;
    code *in_stack_00000000;
    int64_t in_stack_00000008;
    int32_t in_stack_00000010;
    int32_t *in_stack_00000018;

    if (in_R8B == '\b') {
        do {
            while( true ) {
                uVar7 = *arg2;
                uVar5 = CARRY4(unaff_EBX, unaff_EBX);
                unaff_EBX = unaff_EBX * 2;
                if (unaff_EBX == 0) {
                    uVar3 = *arg2;
                    bVar6 = arg2 < 0xfffffffffffffffc;
                    arg2 = arg2 + 1;
                    uVar5 = CARRY4(uVar3, uVar3) || CARRY4(uVar3 * 2, bVar6);
                    unaff_EBX = uVar3 * 2 + bVar6;
                    uVar7 = *arg2;
                }
                if (!uVar5) break;
                arg2 = arg2 + 1;
                *arg1 = uVar7;
                arg1 = arg1 + 1;
            }
            while( true ) {
                iVar1 = (*in_stack_00000000)();
                iVar4 = arg4;
                uVar2 = iVar1 * 2 + uVar5;
                uVar7 = CARRY4(unaff_EBX, unaff_EBX);
                unaff_EBX = unaff_EBX * 2;
                uVar3 = extraout_EDX;
                if (unaff_EBX == 0) {
                    uVar3 = *arg2;
                    bVar6 = arg2 < 0xfffffffffffffffc;
                    arg2 = arg2 + 1;
                    uVar7 = CARRY4(uVar3, uVar3) || CARRY4(uVar3 * 2, bVar6);
                    unaff_EBX = uVar3 * 2 + bVar6;
                    uVar3 = *arg2;
                }
                if (uVar7) break;
                uVar3 = (*in_stack_00000000)();
                uVar5 = CARRY4(uVar3, uVar3) || CARRY4(uVar3 * 2, uVar7);
            }
            if (uVar2 < 3) {
                uVar7 = CARRY4(unaff_EBX, unaff_EBX);
                unaff_EBX = unaff_EBX * 2;
                if (unaff_EBX == 0) {
                    uVar3 = *arg2;
                    bVar6 = arg2 < 0xfffffffffffffffc;
                    arg2 = arg2 + 1;
                    uVar7 = CARRY4(uVar3, uVar3) || CARRY4(uVar3 * 2, bVar6);
                    unaff_EBX = uVar3 * 2 + bVar6;
                }
                if (!uVar7) goto code_r0x0044a5d9;
code_r0x0044a601:
                (*in_stack_00000000)();
                iVar4 = iVar4 * 2 + uVar7;
                noname_2_00 = extraout_RDX_00;
            }
            else {
                arg2 = arg2 + 1;
                uVar3 = ((uVar2 - 3) * 0x100 | uVar3 & 0xff) ^ 0xffffffff;
                if (uVar3 == 0) break;
                uVar7 = (uVar3 & 1) != 0;
                unaff_RBP = uVar3 >> 1;
                if (uVar7) goto code_r0x0044a601;
code_r0x0044a5d9:
                iVar4 = iVar4 + 1;
                uVar7 = CARRY4(unaff_EBX, unaff_EBX);
                unaff_EBX = unaff_EBX * 2;
                if (unaff_EBX == 0) {
                    uVar3 = *arg2;
                    bVar6 = arg2 < 0xfffffffffffffffc;
                    arg2 = arg2 + 1;
                    uVar7 = CARRY4(uVar3, uVar3) || CARRY4(uVar3 * 2, bVar6);
                    unaff_EBX = uVar3 * 2 + bVar6;
                }
                if (uVar7) goto code_r0x0044a601;
                do {
                    (*in_stack_00000000)();
                    iVar4 = iVar4 * 2 + uVar7;
                    uVar7 = CARRY4(unaff_EBX, unaff_EBX);
                    unaff_EBX = unaff_EBX * 2;
                    if (unaff_EBX == 0) {
                        uVar3 = *arg2;
                        bVar6 = arg2 < 0xfffffffffffffffc;
                        arg2 = arg2 + 1;
                        uVar7 = CARRY4(uVar3, uVar3) || CARRY4(uVar3 * 2, bVar6);
                        unaff_EBX = uVar3 * 2 + bVar6;
                    }
                } while (!uVar7);
                iVar4 = iVar4 + 2;
                noname_2_00 = extraout_RDX;
            }
            arg4 = iVar4 + 2 + (unaff_RBP < 0xfffffffffffffb00);
            fcn.0044a522(arg1, arg2, noname_2_00, arg4);
        } while( true );
    }
    *in_stack_00000018 = arg1 - in_stack_00000010;
    return arg2 - in_stack_00000008;
}