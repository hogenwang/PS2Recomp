#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EB928
// Address: 0x2eb928 - 0x2ebe08
void sub_002EB928_0x2eb928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB928_0x2eb928");
#endif

    switch (ctx->pc) {
        case 0x2eb9a4u: goto label_2eb9a4;
        case 0x2eb9fcu: goto label_2eb9fc;
        case 0x2eba18u: goto label_2eba18;
        case 0x2eba30u: goto label_2eba30;
        case 0x2ebaacu: goto label_2ebaac;
        case 0x2ebab4u: goto label_2ebab4;
        case 0x2ebad4u: goto label_2ebad4;
        case 0x2ebb2cu: goto label_2ebb2c;
        case 0x2ebb34u: goto label_2ebb34;
        case 0x2ebb50u: goto label_2ebb50;
        case 0x2ebb58u: goto label_2ebb58;
        case 0x2ebb70u: goto label_2ebb70;
        case 0x2ebb90u: goto label_2ebb90;
        case 0x2ebbc4u: goto label_2ebbc4;
        case 0x2ebc0cu: goto label_2ebc0c;
        case 0x2ebc34u: goto label_2ebc34;
        case 0x2ebc58u: goto label_2ebc58;
        case 0x2ebc98u: goto label_2ebc98;
        case 0x2ebce4u: goto label_2ebce4;
        case 0x2ebd24u: goto label_2ebd24;
        case 0x2ebd6cu: goto label_2ebd6c;
        case 0x2ebdb0u: goto label_2ebdb0;
        case 0x2ebdd4u: goto label_2ebdd4;
        case 0x2ebe00u: goto label_2ebe00;
        default: break;
    }

    ctx->pc = 0x2eb928u;

    // 0x2eb928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eb928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eb92c: 0x2c8f0010  sltiu       $t7, $a0, 0x10
    ctx->pc = 0x2eb92cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2eb930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb934: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eb934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eb938: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eb938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eb93c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eb93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb940: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2eb940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2eb944: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2eb944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb94c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2eb94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb950: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2eb950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2eb954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2eb954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2eb958: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EB958u;
    {
        const bool branch_taken_0x2eb958 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB958u;
            // 0x2eb95c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb958) {
            ctx->pc = 0x2EB9A4u;
            goto label_2eb9a4;
        }
    }
    ctx->pc = 0x2EB960u;
    // 0x2eb960: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2eb960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb968: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb970: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2eb970u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2eb974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eb974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb978: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eb978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb97c: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2eb97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2eb980: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eb980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb984: 0x25080468  addiu       $t0, $t0, 0x468
    ctx->pc = 0x2eb984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1128));
    // 0x2eb988: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2eb988u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eb98c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2eb98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2eb990: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eb990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb998: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x2eb998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x2eb99c: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EB99Cu;
    ctx->pc = 0x2EB9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB99Cu;
            // 0x2eb9a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2EB9A4u;
label_2eb9a4:
    // 0x2eb9a4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eb9a8: 0x8deeeca8  lw          $t6, -0x1358($t7)
    ctx->pc = 0x2eb9a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2eb9ac: 0x11c00013  beqz        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EB9ACu;
    {
        const bool branch_taken_0x2eb9ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9ACu;
            // 0x2eb9b0: 0x240f000a  addiu       $t7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9ac) {
            ctx->pc = 0x2EB9FCu;
            goto label_2eb9fc;
        }
    }
    ctx->pc = 0x2EB9B4u;
    // 0x2eb9b4: 0x11cf0012  beq         $t6, $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EB9B4u;
    {
        const bool branch_taken_0x2eb9b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EB9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9B4u;
            // 0x2eb9b8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9b4) {
            ctx->pc = 0x2EBA00u;
            goto label_2eba00;
        }
    }
    ctx->pc = 0x2EB9BCu;
    // 0x2eb9bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb9c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb9c4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2eb9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2eb9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb9cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eb9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb9d0: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2eb9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2eb9d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eb9d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb9d8: 0x25080480  addiu       $t0, $t0, 0x480
    ctx->pc = 0x2eb9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1152));
    // 0x2eb9dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eb9dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb9e0: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x2eb9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x2eb9e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2eb9e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eb9e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eb9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb9f0: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x2eb9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x2eb9f4: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EB9F4u;
    ctx->pc = 0x2EB9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9F4u;
            // 0x2eb9f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2EB9FCu;
label_2eb9fc:
    // 0x2eb9fc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eb9fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2eba00:
    // 0x2eba00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eba00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba04: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2eba04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2eba08: 0x24061558  addiu       $a2, $zero, 0x1558
    ctx->pc = 0x2eba08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5464));
    // 0x2eba0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba10: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EBA10u;
    SET_GPR_U32(ctx, 31, 0x2EBA18u);
    ctx->pc = 0x2EBA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA10u;
            // 0x2eba14: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA18u; }
        if (ctx->pc != 0x2EBA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA18u; }
        if (ctx->pc != 0x2EBA18u) { return; }
    }
    ctx->pc = 0x2EBA18u;
label_2eba18:
    // 0x2eba18: 0x240f0006  addiu       $t7, $zero, 0x6
    ctx->pc = 0x2eba18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eba1c: 0xae110378  sw          $s1, 0x378($s0)
    ctx->pc = 0x2eba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 17));
    // 0x2eba20: 0xae0f0394  sw          $t7, 0x394($s0)
    ctx->pc = 0x2eba20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 15));
    // 0x2eba24: 0x240e001e  addiu       $t6, $zero, 0x1E
    ctx->pc = 0x2eba24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2eba28: 0xae130380  sw          $s3, 0x380($s0)
    ctx->pc = 0x2eba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 19));
    // 0x2eba2c: 0xae0e0398  sw          $t6, 0x398($s0)
    ctx->pc = 0x2eba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 14));
label_2eba30:
    // 0x2eba30: 0xae150390  sw          $s5, 0x390($s0)
    ctx->pc = 0x2eba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 21));
    // 0x2eba34: 0xae13037c  sw          $s3, 0x37C($s0)
    ctx->pc = 0x2eba34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 19));
    // 0x2eba38: 0xae1503a4  sw          $s5, 0x3A4($s0)
    ctx->pc = 0x2eba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 21));
    // 0x2eba3c: 0xae0003d0  sw          $zero, 0x3D0($s0)
    ctx->pc = 0x2eba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 0));
    // 0x2eba40: 0xae0003d4  sw          $zero, 0x3D4($s0)
    ctx->pc = 0x2eba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 0));
    // 0x2eba44: 0x8e0f0384  lw          $t7, 0x384($s0)
    ctx->pc = 0x2eba44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x2eba48: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBA48u;
    {
        const bool branch_taken_0x2eba48 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA48u;
            // 0x2eba4c: 0x3c0f002f  lui         $t7, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba48) {
            ctx->pc = 0x2EBA5Cu;
            goto label_2eba5c;
        }
    }
    ctx->pc = 0x2EBA50u;
    // 0x2eba50: 0x240f01e0  addiu       $t7, $zero, 0x1E0
    ctx->pc = 0x2eba50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2eba54: 0xae0f0384  sw          $t7, 0x384($s0)
    ctx->pc = 0x2eba54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 15));
    // 0x2eba58: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x2eba58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
label_2eba5c:
    // 0x2eba5c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2eba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2eba60: 0x25ef0760  addiu       $t7, $t7, 0x760
    ctx->pc = 0x2eba60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1888));
    // 0x2eba64: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2eba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2eba68: 0xae0f03c4  sw          $t7, 0x3C4($s0)
    ctx->pc = 0x2eba68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 15));
    // 0x2eba6c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2eba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2eba70: 0x340fa000  ori         $t7, $zero, 0xA000
    ctx->pc = 0x2eba70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2eba74: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2eba74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2eba78: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2eba78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2eba7c: 0x1f2900a  movz        $s2, $t7, $s2
    ctx->pc = 0x2eba7cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x2eba80: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2eba80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2eba84: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2eba84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2eba88: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x2eba88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2eba8c: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x2eba8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2eba90: 0x168000db  bnez        $s4, . + 4 + (0xDB << 2)
    ctx->pc = 0x2EBA90u;
    {
        const bool branch_taken_0x2eba90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA90u;
            // 0x2eba94: 0xa6000020  sh          $zero, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba90) {
            ctx->pc = 0x2EBE00u;
            goto label_2ebe00;
        }
    }
    ctx->pc = 0x2EBA98u;
    // 0x2eba98: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eba9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaa0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2ebaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ebaa4: 0xc089e36  jal         func_2278D8
    ctx->pc = 0x2EBAA4u;
    SET_GPR_U32(ctx, 31, 0x2EBAACu);
    ctx->pc = 0x2EBAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBAA4u;
            // 0x2ebaa8: 0x248404a0  addiu       $a0, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2278D8u;
    if (runtime->hasFunction(0x2278D8u)) {
        auto targetFn = runtime->lookupFunction(0x2278D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBAACu; }
        if (ctx->pc != 0x2EBAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002278D8_0x2278d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBAACu; }
        if (ctx->pc != 0x2EBAACu) { return; }
    }
    ctx->pc = 0x2EBAACu;
label_2ebaac:
    // 0x2ebaac: 0xae15006c  sw          $s5, 0x6C($s0)
    ctx->pc = 0x2ebaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 21));
    // 0x2ebab0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ebab0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ebab4:
    // 0x2ebab4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2ebab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2ebab8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ebab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebabc: 0x2610eca8  addiu       $s0, $s0, -0x1358
    ctx->pc = 0x2ebabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962344));
    // 0x2ebac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ebac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebac4: 0xae140068  sw          $s4, 0x68($s0)
    ctx->pc = 0x2ebac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 20));
    // 0x2ebac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebacc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EBACCu;
    SET_GPR_U32(ctx, 31, 0x2EBAD4u);
    ctx->pc = 0x2EBAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBACCu;
            // 0x2ebad0: 0x2928821  addu        $s1, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBAD4u; }
        if (ctx->pc != 0x2EBAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBAD4u; }
        if (ctx->pc != 0x2EBAD4u) { return; }
    }
    ctx->pc = 0x2EBAD4u;
label_2ebad4:
    // 0x2ebad4: 0x8e0d0378  lw          $t5, 0x378($s0)
    ctx->pc = 0x2ebad4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x2ebad8: 0xd7a00  sll         $t7, $t5, 8
    ctx->pc = 0x2ebad8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x2ebadc: 0x1ed3823  subu        $a3, $t7, $t5
    ctx->pc = 0x2ebadcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x2ebae0: 0x30ee0003  andi        $t6, $a3, 0x3
    ctx->pc = 0x2ebae0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2ebae4: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBAE4u;
    {
        const bool branch_taken_0x2ebae4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBAE4u;
            // 0x2ebae8: 0x24ed0003  addiu       $t5, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebae4) {
            ctx->pc = 0x2EBB00u;
            goto label_2ebb00;
        }
    }
    ctx->pc = 0x2EBAECu;
    // 0x2ebaec: 0x28ee0000  slti        $t6, $a3, 0x0
    ctx->pc = 0x2ebaecu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2ebaf0: 0x1ae380b  movn        $a3, $t5, $t6
    ctx->pc = 0x2ebaf0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 13));
    // 0x2ebaf4: 0x77883  sra         $t7, $a3, 2
    ctx->pc = 0x2ebaf4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 7), 2));
    // 0x2ebaf8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2ebaf8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2ebafc: 0x25e70004  addiu       $a3, $t7, 0x4
    ctx->pc = 0x2ebafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_2ebb00:
    // 0x2ebb00: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x2ebb00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2ebb04: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebb04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebb08: 0x234702b  sltu        $t6, $s1, $s4
    ctx->pc = 0x2ebb08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebb0c: 0x11c00012  beqz        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EBB0Cu;
    {
        const bool branch_taken_0x2ebb0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB0Cu;
            // 0x2ebb10: 0x25e904b0  addiu       $t1, $t7, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb0c) {
            ctx->pc = 0x2EBB58u;
            goto label_2ebb58;
        }
    }
    ctx->pc = 0x2EBB14u;
    // 0x2ebb14: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebb18: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebb18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebb1c: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebb20: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebb24: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2ebb24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb28: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x2ebb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_2ebb2c:
    // 0x2ebb2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb30: 0x2407d8ed  addiu       $a3, $zero, -0x2713
    ctx->pc = 0x2ebb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
label_2ebb34:
    // 0x2ebb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebb38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebb38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebb3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebb3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebb40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ebb40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebb44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ebb44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebb48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ebb48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ebb4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ebb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebb50:
    // 0x2ebb50: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EBB50u;
    ctx->pc = 0x2EBB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB50u;
            // 0x2ebb54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2EBB58u;
label_2ebb58:
    // 0x2ebb58: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2ebb58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2ebb5c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb60: 0x2610ed50  addiu       $s0, $s0, -0x12B0
    ctx->pc = 0x2ebb60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962512));
    // 0x2ebb64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb68: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBB68u;
    SET_GPR_U32(ctx, 31, 0x2EBB70u);
    ctx->pc = 0x2EBB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB68u;
            // 0x2ebb6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB70u; }
        if (ctx->pc != 0x2EBB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB70u; }
        if (ctx->pc != 0x2EBB70u) { return; }
    }
    ctx->pc = 0x2EBB70u;
label_2ebb70:
    // 0x2ebb70: 0x8e0e02d0  lw          $t6, 0x2D0($s0)
    ctx->pc = 0x2ebb70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2ebb74: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebb74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebb78: 0x25e904e0  addiu       $t1, $t7, 0x4E0
    ctx->pc = 0x2ebb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1248));
    // 0x2ebb7c: 0xe3880  sll         $a3, $t6, 2
    ctx->pc = 0x2ebb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2ebb80: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x2ebb80u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2ebb84: 0x234782b  sltu        $t7, $s1, $s4
    ctx->pc = 0x2ebb84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebb88: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBB88u;
    {
        const bool branch_taken_0x2ebb88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB88u;
            // 0x2ebb8c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb88) {
            ctx->pc = 0x2EBBA8u;
            goto label_2ebba8;
        }
    }
    ctx->pc = 0x2EBB90u;
label_2ebb90:
    // 0x2ebb90: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebb90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebb94: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebb98: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebb98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebb9c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2ebb9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebba0: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x2EBBA0u;
    {
        const bool branch_taken_0x2ebba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBA0u;
            // 0x2ebba4: 0x2405010d  addiu       $a1, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebba0) {
            ctx->pc = 0x2EBB2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebb2c;
        }
    }
    ctx->pc = 0x2EBBA8u;
label_2ebba8:
    // 0x2ebba8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ebba8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ebbac: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbb0: 0x25f0ed48  addiu       $s0, $t7, -0x12B8
    ctx->pc = 0x2ebbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962504));
    // 0x2ebbb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ebbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbbc: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBBBCu;
    SET_GPR_U32(ctx, 31, 0x2EBBC4u);
    ctx->pc = 0x2EBBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBBCu;
            // 0x2ebbc0: 0x2631fefc  addiu       $s1, $s1, -0x104 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967036));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBC4u; }
        if (ctx->pc != 0x2EBBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBC4u; }
        if (ctx->pc != 0x2EBBC4u) { return; }
    }
    ctx->pc = 0x2EBBC4u;
label_2ebbc4:
    // 0x2ebbc4: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebbc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebbc8: 0x234702b  sltu        $t6, $s1, $s4
    ctx->pc = 0x2ebbc8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebbcc: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBBCCu;
    {
        const bool branch_taken_0x2ebbcc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBCCu;
            // 0x2ebbd0: 0x25e904f0  addiu       $t1, $t7, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebbcc) {
            ctx->pc = 0x2EBBF8u;
            goto label_2ebbf8;
        }
    }
    ctx->pc = 0x2EBBD4u;
    // 0x2ebbd4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebbd8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebbdc: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebbe0: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebbe4: 0x24050115  addiu       $a1, $zero, 0x115
    ctx->pc = 0x2ebbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x2ebbe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbec: 0x2407d8ed  addiu       $a3, $zero, -0x2713
    ctx->pc = 0x2ebbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
    // 0x2ebbf0: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x2EBBF0u;
    {
        const bool branch_taken_0x2ebbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBF0u;
            // 0x2ebbf4: 0x240a0104  addiu       $t2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebbf0) {
            ctx->pc = 0x2EBB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebb34;
        }
    }
    ctx->pc = 0x2EBBF8u;
label_2ebbf8:
    // 0x2ebbf8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc00: 0x2605fff8  addiu       $a1, $s0, -0x8
    ctx->pc = 0x2ebc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x2ebc04: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBC04u;
    SET_GPR_U32(ctx, 31, 0x2EBC0Cu);
    ctx->pc = 0x2EBC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC04u;
            // 0x2ebc08: 0x24070104  addiu       $a3, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC0Cu; }
        if (ctx->pc != 0x2EBC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC0Cu; }
        if (ctx->pc != 0x2EBC0Cu) { return; }
    }
    ctx->pc = 0x2EBC0Cu;
label_2ebc0c:
    // 0x2ebc0c: 0x2631f800  addiu       $s1, $s1, -0x800
    ctx->pc = 0x2ebc0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965248));
    // 0x2ebc10: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebc10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebc14: 0x234702b  sltu        $t6, $s1, $s4
    ctx->pc = 0x2ebc14u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebc18: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBC18u;
    {
        const bool branch_taken_0x2ebc18 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC18u;
            // 0x2ebc1c: 0x25e90500  addiu       $t1, $t7, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc18) {
            ctx->pc = 0x2EBC44u;
            goto label_2ebc44;
        }
    }
    ctx->pc = 0x2EBC20u;
    // 0x2ebc20: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebc24: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebc24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebc28: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebc2c: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebc30: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x2ebc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_2ebc34:
    // 0x2ebc34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc38: 0x2407d8ed  addiu       $a3, $zero, -0x2713
    ctx->pc = 0x2ebc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
    // 0x2ebc3c: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x2EBC3Cu;
    {
        const bool branch_taken_0x2ebc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC3Cu;
            // 0x2ebc40: 0x240a0800  addiu       $t2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc3c) {
            ctx->pc = 0x2EBB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebb34;
        }
    }
    ctx->pc = 0x2EBC44u;
label_2ebc44:
    // 0x2ebc44: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc4c: 0x2605ffe8  addiu       $a1, $s0, -0x18
    ctx->pc = 0x2ebc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x2ebc50: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBC50u;
    SET_GPR_U32(ctx, 31, 0x2EBC58u);
    ctx->pc = 0x2EBC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC50u;
            // 0x2ebc54: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC58u; }
        if (ctx->pc != 0x2EBC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC58u; }
        if (ctx->pc != 0x2EBC58u) { return; }
    }
    ctx->pc = 0x2EBC58u;
label_2ebc58:
    // 0x2ebc58: 0x2631f800  addiu       $s1, $s1, -0x800
    ctx->pc = 0x2ebc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965248));
    // 0x2ebc5c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebc5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebc60: 0x234702b  sltu        $t6, $s1, $s4
    ctx->pc = 0x2ebc60u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebc64: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBC64u;
    {
        const bool branch_taken_0x2ebc64 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC64u;
            // 0x2ebc68: 0x25e90510  addiu       $t1, $t7, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc64) {
            ctx->pc = 0x2EBC84u;
            goto label_2ebc84;
        }
    }
    ctx->pc = 0x2EBC6Cu;
    // 0x2ebc6c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebc70: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebc70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebc74: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebc78: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebc7c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EBC7Cu;
    {
        const bool branch_taken_0x2ebc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC7Cu;
            // 0x2ebc80: 0x24050125  addiu       $a1, $zero, 0x125 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc7c) {
            ctx->pc = 0x2EBC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebc34;
        }
    }
    ctx->pc = 0x2EBC84u;
label_2ebc84:
    // 0x2ebc84: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc8c: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x2ebc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2ebc90: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBC90u;
    SET_GPR_U32(ctx, 31, 0x2EBC98u);
    ctx->pc = 0x2EBC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC90u;
            // 0x2ebc94: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC98u; }
        if (ctx->pc != 0x2EBC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC98u; }
        if (ctx->pc != 0x2EBC98u) { return; }
    }
    ctx->pc = 0x2EBC98u;
label_2ebc98:
    // 0x2ebc98: 0x2631e800  addiu       $s1, $s1, -0x1800
    ctx->pc = 0x2ebc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961152));
    // 0x2ebc9c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebca0: 0x234702b  sltu        $t6, $s1, $s4
    ctx->pc = 0x2ebca0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebca4: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBCA4u;
    {
        const bool branch_taken_0x2ebca4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCA4u;
            // 0x2ebca8: 0x25e90520  addiu       $t1, $t7, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebca4) {
            ctx->pc = 0x2EBCD0u;
            goto label_2ebcd0;
        }
    }
    ctx->pc = 0x2EBCACu;
    // 0x2ebcac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebcb0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebcb4: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebcb8: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebcbc: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x2ebcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x2ebcc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcc4: 0x2407d8ed  addiu       $a3, $zero, -0x2713
    ctx->pc = 0x2ebcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
    // 0x2ebcc8: 0x1000ff9a  b           . + 4 + (-0x66 << 2)
    ctx->pc = 0x2EBCC8u;
    {
        const bool branch_taken_0x2ebcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCC8u;
            // 0x2ebccc: 0x240a1800  addiu       $t2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcc8) {
            ctx->pc = 0x2EBB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebb34;
        }
    }
    ctx->pc = 0x2EBCD0u;
label_2ebcd0:
    // 0x2ebcd0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebcd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcd8: 0x2605ffd8  addiu       $a1, $s0, -0x28
    ctx->pc = 0x2ebcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
    // 0x2ebcdc: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBCDCu;
    SET_GPR_U32(ctx, 31, 0x2EBCE4u);
    ctx->pc = 0x2EBCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCDCu;
            // 0x2ebce0: 0x24071800  addiu       $a3, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBCE4u; }
        if (ctx->pc != 0x2EBCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBCE4u; }
        if (ctx->pc != 0x2EBCE4u) { return; }
    }
    ctx->pc = 0x2EBCE4u;
label_2ebce4:
    // 0x2ebce4: 0x2631f800  addiu       $s1, $s1, -0x800
    ctx->pc = 0x2ebce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965248));
    // 0x2ebce8: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebce8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebcec: 0x234702b  sltu        $t6, $s1, $s4
    ctx->pc = 0x2ebcecu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2ebcf0: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBCF0u;
    {
        const bool branch_taken_0x2ebcf0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCF0u;
            // 0x2ebcf4: 0x25e90530  addiu       $t1, $t7, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcf0) {
            ctx->pc = 0x2EBD10u;
            goto label_2ebd10;
        }
    }
    ctx->pc = 0x2EBCF8u;
    // 0x2ebcf8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebcfc: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebd00: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2ebd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2ebd04: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x2ebd04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x2ebd08: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x2EBD08u;
    {
        const bool branch_taken_0x2ebd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD08u;
            // 0x2ebd0c: 0x24050135  addiu       $a1, $zero, 0x135 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd08) {
            ctx->pc = 0x2EBC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebc34;
        }
    }
    ctx->pc = 0x2EBD10u;
label_2ebd10:
    // 0x2ebd10: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2ebd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ebd14: 0x2605ffd0  addiu       $a1, $s0, -0x30
    ctx->pc = 0x2ebd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x2ebd18: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd1c: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBD1Cu;
    SET_GPR_U32(ctx, 31, 0x2EBD24u);
    ctx->pc = 0x2EBD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD1Cu;
            // 0x2ebd20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD24u; }
        if (ctx->pc != 0x2EBD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD24u; }
        if (ctx->pc != 0x2EBD24u) { return; }
    }
    ctx->pc = 0x2EBD24u;
label_2ebd24:
    // 0x2ebd24: 0x2343823  subu        $a3, $s1, $s4
    ctx->pc = 0x2ebd24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2ebd28: 0x30ef0003  andi        $t7, $a3, 0x3
    ctx->pc = 0x2ebd28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2ebd2c: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBD2Cu;
    {
        const bool branch_taken_0x2ebd2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD2Cu;
            // 0x2ebd30: 0x24ed0003  addiu       $t5, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd2c) {
            ctx->pc = 0x2EBD48u;
            goto label_2ebd48;
        }
    }
    ctx->pc = 0x2EBD34u;
    // 0x2ebd34: 0x28ee0000  slti        $t6, $a3, 0x0
    ctx->pc = 0x2ebd34u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2ebd38: 0x1ae380b  movn        $a3, $t5, $t6
    ctx->pc = 0x2ebd38u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 13));
    // 0x2ebd3c: 0x77883  sra         $t7, $a3, 2
    ctx->pc = 0x2ebd3cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 7), 2));
    // 0x2ebd40: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2ebd40u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2ebd44: 0x25e70004  addiu       $a3, $t7, 0x4
    ctx->pc = 0x2ebd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_2ebd48:
    // 0x2ebd48: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ebd48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ebd4c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2ebd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2ebd50: 0x25e90540  addiu       $t1, $t7, 0x540
    ctx->pc = 0x2ebd50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1344));
    // 0x2ebd54: 0x2610ed28  addiu       $s0, $s0, -0x12D8
    ctx->pc = 0x2ebd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962472));
    // 0x2ebd58: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ebd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ebd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd64: 0xc0bc1a8  jal         func_2F06A0
    ctx->pc = 0x2EBD64u;
    SET_GPR_U32(ctx, 31, 0x2EBD6Cu);
    ctx->pc = 0x2EBD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD64u;
            // 0x2ebd68: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06A0u;
    if (runtime->hasFunction(0x2F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD6Cu; }
        if (ctx->pc != 0x2EBD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06A0_0x2f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD6Cu; }
        if (ctx->pc != 0x2EBD6Cu) { return; }
    }
    ctx->pc = 0x2EBD6Cu;
label_2ebd6c:
    // 0x2ebd6c: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x2ebd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x2ebd70: 0x8e0f0078  lw          $t7, 0x78($s0)
    ctx->pc = 0x2ebd70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2ebd74: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2ebd74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebd78: 0x26310458  addiu       $s1, $s1, 0x458
    ctx->pc = 0x2ebd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
    // 0x2ebd7c: 0x2405014c  addiu       $a1, $zero, 0x14C
    ctx->pc = 0x2ebd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x2ebd80: 0xa1ed0003  sb          $t5, 0x3($t7)
    ctx->pc = 0x2ebd80u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2ebd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ebd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebd8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ebd8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd90: 0x8e0f0070  lw          $t7, 0x70($s0)
    ctx->pc = 0x2ebd90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2ebd94: 0xa1ed0003  sb          $t5, 0x3($t7)
    ctx->pc = 0x2ebd94u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2ebd98: 0x8e0e0080  lw          $t6, 0x80($s0)
    ctx->pc = 0x2ebd98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2ebd9c: 0x95cf0000  lhu         $t7, 0x0($t6)
    ctx->pc = 0x2ebd9cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2ebda0: 0x31effff0  andi        $t7, $t7, 0xFFF0
    ctx->pc = 0x2ebda0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65520);
    // 0x2ebda4: 0x35ef000d  ori         $t7, $t7, 0xD
    ctx->pc = 0x2ebda4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)13);
    // 0x2ebda8: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EBDA8u;
    SET_GPR_U32(ctx, 31, 0x2EBDB0u);
    ctx->pc = 0x2EBDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDA8u;
            // 0x2ebdac: 0xa5cf0000  sh          $t7, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDB0u; }
        if (ctx->pc != 0x2EBDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDB0u; }
        if (ctx->pc != 0x2EBDB0u) { return; }
    }
    ctx->pc = 0x2EBDB0u;
label_2ebdb0:
    // 0x2ebdb0: 0x8e0a0378  lw          $t2, 0x378($s0)
    ctx->pc = 0x2ebdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x2ebdb4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ebdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ebdb8: 0x8e080390  lw          $t0, 0x390($s0)
    ctx->pc = 0x2ebdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
    // 0x2ebdbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdc0: 0x8e090380  lw          $t1, 0x380($s0)
    ctx->pc = 0x2ebdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2ebdc4: 0x24e70550  addiu       $a3, $a3, 0x550
    ctx->pc = 0x2ebdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1360));
    // 0x2ebdc8: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x2ebdcc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EBDCCu;
    SET_GPR_U32(ctx, 31, 0x2EBDD4u);
    ctx->pc = 0x2EBDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDCCu;
            // 0x2ebdd0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDD4u; }
        if (ctx->pc != 0x2EBDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDD4u; }
        if (ctx->pc != 0x2EBDD4u) { return; }
    }
    ctx->pc = 0x2EBDD4u;
label_2ebdd4:
    // 0x2ebdd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebdd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebddc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebde0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebde0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebde4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ebde4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebde8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ebde8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebdec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ebdecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ebdf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ebdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDF4u;
            // 0x2ebdf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBDFCu;
    // 0x2ebdfc: 0x0  nop
    ctx->pc = 0x2ebdfcu;
    // NOP
label_2ebe00:
    // 0x2ebe00: 0x1000ff2c  b           . + 4 + (-0xD4 << 2)
    ctx->pc = 0x2EBE00u;
    {
        const bool branch_taken_0x2ebe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE00u;
            // 0x2ebe04: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe00) {
            ctx->pc = 0x2EBAB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebab4;
        }
    }
    ctx->pc = 0x2EBE08u;
    ctx->pc = 0x2ebe08u;
}
