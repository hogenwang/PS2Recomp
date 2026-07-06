#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B8E0
// Address: 0x12b8e0 - 0x12bb28
void sub_0012B8E0_0x12b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B8E0_0x12b8e0");
#endif

    switch (ctx->pc) {
        case 0x12b910u: goto label_12b910;
        case 0x12b95cu: goto label_12b95c;
        case 0x12b990u: goto label_12b990;
        case 0x12b994u: goto label_12b994;
        case 0x12b9fcu: goto label_12b9fc;
        case 0x12ba0cu: goto label_12ba0c;
        case 0x12ba20u: goto label_12ba20;
        case 0x12ba38u: goto label_12ba38;
        case 0x12ba6cu: goto label_12ba6c;
        case 0x12ba80u: goto label_12ba80;
        case 0x12ba8cu: goto label_12ba8c;
        case 0x12baa4u: goto label_12baa4;
        default: break;
    }

    ctx->pc = 0x12b8e0u;

    // 0x12b8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b8e4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12b8e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b8ec: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12b8f0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12b8f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8f4: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x12b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12b8f8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12b8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b900: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12b900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b904: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b908: 0x804ada8  j           func_12B6A0
    ctx->pc = 0x12B908u;
    ctx->pc = 0x12B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B908u;
    // 0x12b90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6A0u;
    sub_0012B6A0_0x12b6a0(rdram, ctx, runtime); return;
    ctx->pc = 0x12B910u;
label_12b910:
    // 0x12b910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12b914: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12b914u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12b918: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12b91c: 0x25edb7c8  addiu       $t5, $t7, -0x4838
    ctx->pc = 0x12b91cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
    // 0x12b920: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12b924: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12b928: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b92c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12b930: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12b930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b934: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12b938: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x12b938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b93c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12b940: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12b944: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12b948: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12b94c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12b950: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12b950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12b954: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x12b954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x12b958: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12b958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_12b95c:
    // 0x12b95c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b960: 0x20d7021  addu        $t6, $s0, $t5
    ctx->pc = 0x12b960u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x12b964: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12b964u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12b968: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12b968u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x12b96c: 0x0  nop
    ctx->pc = 0x12b96cu;
    // NOP
    // 0x12b970: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B970u;
    {
        const bool branch_taken_0x12b970 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B970u;
        // 0x12b974: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b970) {
            ctx->pc = 0x12B95Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b95c;
        }
    }
    ctx->pc = 0x12B978u;
    // 0x12b978: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12b97c: 0x160f0065  bne         $s0, $t7, . + 4 + (0x65 << 2)
    ctx->pc = 0x12B97Cu;
    {
        const bool branch_taken_0x12b97c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B97Cu;
        // 0x12b980: 0x240f002b  addiu       $t7, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b97c) {
            ctx->pc = 0x12BB14u;
            goto label_12bb14;
        }
    }
    ctx->pc = 0x12B984u;
    // 0x12b984: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12b984u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b988: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12b988u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b98c: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x12b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_12b990:
    // 0x12b990: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b994:
    // 0x12b994: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B994u;
    {
        const bool branch_taken_0x12b994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B994u;
        // 0x12b998: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b994) {
            ctx->pc = 0x12B9A4u;
            goto label_12b9a4;
        }
    }
    ctx->pc = 0x12B99Cu;
    // 0x12b99c: 0x164f000c  bne         $s2, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12B99Cu;
    {
        const bool branch_taken_0x12b99c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b99c) {
            ctx->pc = 0x12B9D0u;
            goto label_12b9d0;
        }
    }
    ctx->pc = 0x12B9A4u;
label_12b9a4:
    // 0x12b9a4: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12b9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12b9a8: 0x160f0009  bne         $s0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B9A8u;
    {
        const bool branch_taken_0x12b9a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A8u;
        // 0x12b9ac: 0x240f0078  addiu       $t7, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a8) {
            ctx->pc = 0x12B9D0u;
            goto label_12b9d0;
        }
    }
    ctx->pc = 0x12B9B0u;
    // 0x12b9b0: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b9b4: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B9B4u;
    {
        const bool branch_taken_0x12b9b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9B4u;
        // 0x12b9b8: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9b4) {
            ctx->pc = 0x12B9C4u;
            goto label_12b9c4;
        }
    }
    ctx->pc = 0x12B9BCu;
    // 0x12b9bc: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B9BCu;
    {
        const bool branch_taken_0x12b9bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b9bc) {
            ctx->pc = 0x12B9D0u;
            goto label_12b9d0;
        }
    }
    ctx->pc = 0x12B9C4u;
label_12b9c4:
    // 0x12b9c4: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x12b9c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x12b9c8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b9cc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_12b9d0:
    // 0x12b9d0: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B9D0u;
    {
        const bool branch_taken_0x12b9d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9D0u;
        // 0x12b9d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9d0) {
            ctx->pc = 0x12B9ECu;
            goto label_12b9ec;
        }
    }
    ctx->pc = 0x12B9D8u;
    // 0x12b9d8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x12b9d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12b9dc: 0x3a0e0030  xori        $t6, $s0, 0x30
    ctx->pc = 0x12b9dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)48);
    // 0x12b9e0: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b9e4: 0x1ee900b  movn        $s2, $t7, $t6
    ctx->pc = 0x12b9e4u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x12b9e8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x12b9e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b9ec:
    // 0x12b9ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b9f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9f4: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x12B9F4u;
    SET_GPR_U32(ctx, 31, 0x12B9FCu);
    ctx->pc = 0x12B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B9F4u;
    // 0x12b9f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x12B9F4u, 0x12B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9FCu;
label_12b9fc:
    // 0x12b9fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12b9fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ba04: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x12BA04u;
    SET_GPR_U32(ctx, 31, 0x12BA0Cu);
    ctx->pc = 0x12BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA04u;
    // 0x12ba08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x12BA04u, 0x12BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA0Cu;
label_12ba0c:
    // 0x12ba0c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x12ba0cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ba10: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12ba10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12ba14: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x12ba14u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x12ba18: 0x25f6b7c8  addiu       $s6, $t7, -0x4838
    ctx->pc = 0x12ba18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
    // 0x12ba1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ba1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ba20:
    // 0x12ba20: 0x2167821  addu        $t7, $s0, $s6
    ctx->pc = 0x12ba20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x12ba24: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12ba24u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ba28: 0x31ae0004  andi        $t6, $t5, 0x4
    ctx->pc = 0x12ba28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12ba2c: 0x11c00032  beqz        $t6, . + 4 + (0x32 << 2)
    ctx->pc = 0x12BA2Cu;
    {
        const bool branch_taken_0x12ba2c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA2Cu;
        // 0x12ba30: 0x31af0003  andi        $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba2c) {
            ctx->pc = 0x12BAF8u;
            goto label_12baf8;
        }
    }
    ctx->pc = 0x12BA34u;
    // 0x12ba34: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_12ba38:
    // 0x12ba38: 0x212782a  slt         $t7, $s0, $s2
    ctx->pc = 0x12ba38u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12ba3c: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12BA3Cu;
    {
        const bool branch_taken_0x12ba3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba3c) {
            ctx->pc = 0x12BA8Cu;
            goto label_12ba8c;
        }
    }
    ctx->pc = 0x12BA44u;
    // 0x12ba44: 0x6600008  bltz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BA44u;
    {
        const bool branch_taken_0x12ba44 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x12BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA44u;
        // 0x12ba48: 0x282782b  sltu        $t7, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba44) {
            ctx->pc = 0x12BA68u;
            goto label_12ba68;
        }
    }
    ctx->pc = 0x12BA4Cu;
    // 0x12ba4c: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BA4Cu;
    {
        const bool branch_taken_0x12ba4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ba4c) {
            ctx->pc = 0x12BA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA4Cu;
            // 0x12ba50: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BA6Cu;
            goto label_12ba6c;
        }
    }
    ctx->pc = 0x12BA54u;
    // 0x12ba54: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BA54u;
    {
        const bool branch_taken_0x12ba54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x12BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA54u;
        // 0x12ba58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba54) {
            ctx->pc = 0x12BA78u;
            goto label_12ba78;
        }
    }
    ctx->pc = 0x12BA5Cu;
    // 0x12ba5c: 0x3d0782a  slt         $t7, $fp, $s0
    ctx->pc = 0x12ba5cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12ba60: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BA60u;
    {
        const bool branch_taken_0x12ba60 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba60) {
            ctx->pc = 0x12BA78u;
            goto label_12ba78;
        }
    }
    ctx->pc = 0x12BA68u;
label_12ba68:
    // 0x12ba68: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x12ba68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12ba6c:
    // 0x12ba6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12ba6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ba70: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x12BA70u;
    {
        const bool branch_taken_0x12ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA70u;
        // 0x12ba74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba70) {
            ctx->pc = 0x12BA20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ba20;
        }
    }
    ctx->pc = 0x12BA78u;
label_12ba78:
    // 0x12ba78: 0xc048082  jal         func_120208
    ctx->pc = 0x12BA78u;
    SET_GPR_U32(ctx, 31, 0x12BA80u);
    ctx->pc = 0x12BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA78u;
    // 0x12ba7c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x12BA78u, 0x12BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA80u;
label_12ba80:
    // 0x12ba80: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba84: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x12BA84u;
    {
        const bool branch_taken_0x12ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA84u;
        // 0x12ba88: 0x202102d  daddu       $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba84) {
            ctx->pc = 0x12BA6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ba6c;
        }
    }
    ctx->pc = 0x12BA8Cu;
label_12ba8c:
    // 0x12ba8c: 0x6610017  bgez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x12BA8Cu;
    {
        const bool branch_taken_0x12ba8c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x12BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA8Cu;
        // 0x12ba90: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba8c) {
            ctx->pc = 0x12BAECu;
            goto label_12baec;
        }
    }
    ctx->pc = 0x12BA94u;
    // 0x12ba94: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12ba94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba98: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12ba98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12ba9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12baa0: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x12baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_12baa4:
    // 0x12baa4: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12baa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12baa8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BAA8u;
    {
        const bool branch_taken_0x12baa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAA8u;
        // 0x12baac: 0x262fffff  addiu       $t7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baa8) {
            ctx->pc = 0x12BABCu;
            goto label_12babc;
        }
    }
    ctx->pc = 0x12BAB0u;
    // 0x12bab0: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12bab0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12bab4: 0x1f3b80b  movn        $s7, $t7, $s3
    ctx->pc = 0x12bab4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    // 0x12bab8: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x12bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
label_12babc:
    // 0x12babc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12babcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bac0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12bac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bac4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12bac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bac8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12bac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12bacc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12baccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bad0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12bad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12bad4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12bad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bad8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12badc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12bae0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12bae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12bae4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE4u;
        // 0x12bae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BAECu;
label_12baec:
    // 0x12baec: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x12baecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12baf0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12BAF0u;
    {
        const bool branch_taken_0x12baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAF0u;
        // 0x12baf4: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baf0) {
            ctx->pc = 0x12BAA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12baa4;
        }
    }
    ctx->pc = 0x12BAF8u;
label_12baf8:
    // 0x12baf8: 0x11e0ffe4  beqz        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12BAF8u;
    {
        const bool branch_taken_0x12baf8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAF8u;
        // 0x12bafc: 0x260effa9  addiu       $t6, $s0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baf8) {
            ctx->pc = 0x12BA8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ba8c;
        }
    }
    ctx->pc = 0x12BB00u;
    // 0x12bb00: 0x260fffc9  addiu       $t7, $s0, -0x37
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967241));
    // 0x12bb04: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x12bb04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12bb08: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x12bb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb0c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12BB0Cu;
    {
        const bool branch_taken_0x12bb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB0Cu;
        // 0x12bb10: 0x1cd800a  movz        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb0c) {
            ctx->pc = 0x12BA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ba38;
        }
    }
    ctx->pc = 0x12BB14u;
label_12bb14:
    // 0x12bb14: 0x160fff9f  bne         $s0, $t7, . + 4 + (-0x61 << 2)
    ctx->pc = 0x12BB14u;
    {
        const bool branch_taken_0x12bb14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x12bb14) {
            ctx->pc = 0x12B994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b994;
        }
    }
    ctx->pc = 0x12BB1Cu;
    // 0x12bb1c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x12BB1Cu;
    {
        const bool branch_taken_0x12bb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB1Cu;
        // 0x12bb20: 0x82300000  lb          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb1c) {
            ctx->pc = 0x12B990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b990;
        }
    }
    ctx->pc = 0x12BB24u;
    // 0x12bb24: 0x0  nop
    ctx->pc = 0x12bb24u;
    // NOP
}
