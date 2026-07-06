#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140F50
// Address: 0x140f50 - 0x141510
void sub_00140F50_0x140f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140F50_0x140f50");
#endif

    switch (ctx->pc) {
        case 0x140fa8u: goto label_140fa8;
        case 0x140fc8u: goto label_140fc8;
        case 0x140fe0u: goto label_140fe0;
        case 0x14101cu: goto label_14101c;
        case 0x141030u: goto label_141030;
        case 0x141044u: goto label_141044;
        case 0x141064u: goto label_141064;
        case 0x141070u: goto label_141070;
        case 0x1410d0u: goto label_1410d0;
        case 0x1410f8u: goto label_1410f8;
        case 0x141168u: goto label_141168;
        case 0x141190u: goto label_141190;
        case 0x141230u: goto label_141230;
        case 0x141280u: goto label_141280;
        case 0x141340u: goto label_141340;
        case 0x14136cu: goto label_14136c;
        case 0x141380u: goto label_141380;
        case 0x141398u: goto label_141398;
        case 0x141470u: goto label_141470;
        case 0x14148cu: goto label_14148c;
        case 0x1414bcu: goto label_1414bc;
        case 0x1414dcu: goto label_1414dc;
        default: break;
    }

    ctx->pc = 0x140f50u;

    // 0x140f50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x140f54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x140f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x140f58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x140f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x140f5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x140f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x140f60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x140f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x140f64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x140f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x140f68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140f6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x140f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140f74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x140f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140f80: 0x8cb50214  lw          $s5, 0x214($a1)
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x140f84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140f88: 0x8ca30218  lw          $v1, 0x218($a1)
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 536)));
    // 0x140f8c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x140f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f90: 0xaca30214  sw          $v1, 0x214($a1)
    ctx->pc = 0x140f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 3));
    // 0x140f94: 0x84b6020c  lh          $s6, 0x20C($a1)
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x140f98: 0x84a3020e  lh          $v1, 0x20E($a1)
    ctx->pc = 0x140f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 526)));
    // 0x140f9c: 0xa4a3020c  sh          $v1, 0x20C($a1)
    ctx->pc = 0x140f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x140fa0: 0x84b7022a  lh          $s7, 0x22A($a1)
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 554)));
    // 0x140fa4: 0x8e830208  lw          $v1, 0x208($s4)
    ctx->pc = 0x140fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 520)));
label_140fa8:
    // 0x140fa8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x140fac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x140facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x140fb0: 0x2a21000b  slti        $at, $s1, 0xB
    ctx->pc = 0x140fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x140fb4: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x140FB4u;
    {
        const bool branch_taken_0x140fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140FB4u;
            // 0x140fb8: 0x90720000  lbu         $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fb4) {
            ctx->pc = 0x14109Cu;
            goto label_14109c;
        }
    }
    ctx->pc = 0x140FBCu;
    // 0x140fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x140fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fc0: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x140FC0u;
    SET_GPR_U32(ctx, 31, 0x140FC8u);
    ctx->pc = 0x140FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FC0u;
            // 0x140fc4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FC8u; }
        if (ctx->pc != 0x140FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FC8u; }
        if (ctx->pc != 0x140FC8u) { return; }
    }
    ctx->pc = 0x140FC8u;
label_140fc8:
    // 0x140fc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x140FC8u;
    {
        const bool branch_taken_0x140fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fc8) {
            ctx->pc = 0x140FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140FC8u;
            // 0x140fcc: 0x8e830208  lw          $v1, 0x208($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 520)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_140fa8;
        }
    }
    ctx->pc = 0x140FD0u;
    // 0x140fd0: 0x56600010  bnel        $s3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x140FD0u;
    {
        const bool branch_taken_0x140fd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fd0) {
            ctx->pc = 0x140FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140FD0u;
            // 0x140fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141014u;
            goto label_141014;
        }
    }
    ctx->pc = 0x140FD8u;
    // 0x140fd8: 0xc04f530  jal         func_13D4C0
    ctx->pc = 0x140FD8u;
    SET_GPR_U32(ctx, 31, 0x140FE0u);
    ctx->pc = 0x140FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FD8u;
            // 0x140fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4C0u;
    if (runtime->hasFunction(0x13D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FE0u; }
        if (ctx->pc != 0x140FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4C0_0x13d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FE0u; }
        if (ctx->pc != 0x140FE0u) { return; }
    }
    ctx->pc = 0x140FE0u;
label_140fe0:
    // 0x140fe0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x140fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x140fe4: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x140fe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x140fe8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x140FE8u;
    {
        const bool branch_taken_0x140fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140fe8) {
            ctx->pc = 0x141010u;
            goto label_141010;
        }
    }
    ctx->pc = 0x140FF0u;
    // 0x140ff0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x140ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x140ff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140ff8: 0x2463cd00  addiu       $v1, $v1, -0x3300
    ctx->pc = 0x140ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954240));
    // 0x140ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141000: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141004: 0x400008  jr          $v0
    ctx->pc = 0x141004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14100Cu;
label_14100c:
    // 0x14100c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14100cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141010:
    // 0x141010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_141014:
    // 0x141014: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x141014u;
    SET_GPR_U32(ctx, 31, 0x14101Cu);
    ctx->pc = 0x141018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141014u;
            // 0x141018: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14101Cu; }
        if (ctx->pc != 0x14101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14101Cu; }
        if (ctx->pc != 0x14101Cu) { return; }
    }
    ctx->pc = 0x14101Cu;
label_14101c:
    // 0x14101c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14101Cu;
    {
        const bool branch_taken_0x14101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14101c) {
            ctx->pc = 0x141020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14101Cu;
            // 0x141020: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141050u;
            goto label_141050;
        }
    }
    ctx->pc = 0x141024u;
    // 0x141024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141028: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x141028u;
    SET_GPR_U32(ctx, 31, 0x141030u);
    ctx->pc = 0x14102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141028u;
            // 0x14102c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141030u; }
        if (ctx->pc != 0x141030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141030u; }
        if (ctx->pc != 0x141030u) { return; }
    }
    ctx->pc = 0x141030u;
label_141030:
    // 0x141030: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141030u;
    {
        const bool branch_taken_0x141030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141030) {
            ctx->pc = 0x14104Cu;
            goto label_14104c;
        }
    }
    ctx->pc = 0x141038u;
    // 0x141038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14103c: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x14103Cu;
    SET_GPR_U32(ctx, 31, 0x141044u);
    ctx->pc = 0x141040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14103Cu;
            // 0x141040: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141044u; }
        if (ctx->pc != 0x141044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141044u; }
        if (ctx->pc != 0x141044u) { return; }
    }
    ctx->pc = 0x141044u;
label_141044:
    // 0x141044: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x141044u;
    {
        const bool branch_taken_0x141044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141044) {
            ctx->pc = 0x141050u;
            goto label_141050;
        }
    }
    ctx->pc = 0x14104Cu;
label_14104c:
    // 0x14104c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14104cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141050:
    // 0x141050: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x141050u;
    {
        const bool branch_taken_0x141050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x141050) {
            ctx->pc = 0x141054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141050u;
            // 0x141054: 0x8e830214  lw          $v1, 0x214($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141084u;
            goto label_141084;
        }
    }
    ctx->pc = 0x141058u;
    // 0x141058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14105c: 0xc04f324  jal         func_13CC90
    ctx->pc = 0x14105Cu;
    SET_GPR_U32(ctx, 31, 0x141064u);
    ctx->pc = 0x141060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14105Cu;
            // 0x141060: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC90u;
    if (runtime->hasFunction(0x13CC90u)) {
        auto targetFn = runtime->lookupFunction(0x13CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141064u; }
        if (ctx->pc != 0x141064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC90_0x13cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141064u; }
        if (ctx->pc != 0x141064u) { return; }
    }
    ctx->pc = 0x141064u;
label_141064:
    // 0x141064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141068: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x141068u;
    SET_GPR_U32(ctx, 31, 0x141070u);
    ctx->pc = 0x14106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141068u;
            // 0x14106c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141070u; }
        if (ctx->pc != 0x141070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141070u; }
        if (ctx->pc != 0x141070u) { return; }
    }
    ctx->pc = 0x141070u;
label_141070:
    // 0x141070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141070u;
    {
        const bool branch_taken_0x141070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141070) {
            ctx->pc = 0x141080u;
            goto label_141080;
        }
    }
    ctx->pc = 0x141078u;
    // 0x141078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14107c: 0xae830214  sw          $v1, 0x214($s4)
    ctx->pc = 0x14107cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 3));
label_141080:
    // 0x141080: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x141080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_141084:
    // 0x141084: 0xae830218  sw          $v1, 0x218($s4)
    ctx->pc = 0x141084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 3));
    // 0x141088: 0xae950214  sw          $s5, 0x214($s4)
    ctx->pc = 0x141088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 21));
    // 0x14108c: 0x8683020c  lh          $v1, 0x20C($s4)
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 524)));
    // 0x141090: 0xa683020e  sh          $v1, 0x20E($s4)
    ctx->pc = 0x141090u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 526), (uint16_t)GPR_U32(ctx, 3));
    // 0x141094: 0xa696020c  sh          $s6, 0x20C($s4)
    ctx->pc = 0x141094u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 524), (uint16_t)GPR_U32(ctx, 22));
    // 0x141098: 0xa697022a  sh          $s7, 0x22A($s4)
    ctx->pc = 0x141098u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 554), (uint16_t)GPR_U32(ctx, 23));
label_14109c:
    // 0x14109c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1410a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1410a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1410a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1410a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1410a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1410a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1410ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1410acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1410b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1410b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1410b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1410b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1410b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1410b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1410bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1410bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1410c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1410C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1410C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1410C0u;
            // 0x1410c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1410C8u;
    // 0x1410c8: 0x0  nop
    ctx->pc = 0x1410c8u;
    // NOP
    // 0x1410cc: 0x0  nop
    ctx->pc = 0x1410ccu;
    // NOP
label_1410d0:
    // 0x1410d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1410d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1410d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1410d8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1410d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1410dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1410dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1410e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1410e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1410e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1410e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1410e8: 0x8cc400dc  lw          $a0, 0xDC($a2)
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x1410ec: 0x8010  mfhi        $s0
    ctx->pc = 0x1410ecu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1410f0: 0xc062804  jal         func_18A010
    ctx->pc = 0x1410F0u;
    SET_GPR_U32(ctx, 31, 0x1410F8u);
    ctx->pc = 0x1410F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1410F0u;
            // 0x1410f4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410F8u; }
        if (ctx->pc != 0x1410F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410F8u; }
        if (ctx->pc != 0x1410F8u) { return; }
    }
    ctx->pc = 0x1410F8u;
label_1410f8:
    // 0x1410f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1410F8u;
    {
        const bool branch_taken_0x1410f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1410f8) {
            ctx->pc = 0x1410FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1410F8u;
            // 0x1410fc: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141108u;
            goto label_141108;
        }
    }
    ctx->pc = 0x141100u;
    // 0x141100: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x141100u;
    {
        const bool branch_taken_0x141100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141100u;
            // 0x141104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141100) {
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x141108u;
label_141108:
    // 0x141108: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x141108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14110c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x14110cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x141110: 0x12030033  beq         $s0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x141110u;
    {
        const bool branch_taken_0x141110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x141114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141110u;
            // 0x141114: 0x42882  srl         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141110) {
            ctx->pc = 0x1411E0u;
            goto label_1411e0;
        }
    }
    ctx->pc = 0x141118u;
    // 0x141118: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x141118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14111c: 0x52030022  beql        $s0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14111Cu;
    {
        const bool branch_taken_0x14111c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x14111c) {
            ctx->pc = 0x141120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14111Cu;
            // 0x141120: 0x8e230238  lw          $v1, 0x238($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1411A8u;
            goto label_1411a8;
        }
    }
    ctx->pc = 0x141124u;
    // 0x141124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141128: 0x52020017  beql        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x141128u;
    {
        const bool branch_taken_0x141128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x141128) {
            ctx->pc = 0x14112Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141128u;
            // 0x14112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141188u;
            goto label_141188;
        }
    }
    ctx->pc = 0x141130u;
    // 0x141130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141134: 0x52020005  beql        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141134u;
    {
        const bool branch_taken_0x141134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x141134) {
            ctx->pc = 0x141138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141134u;
            // 0x141138: 0x8e230238  lw          $v1, 0x238($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14114Cu;
            goto label_14114c;
        }
    }
    ctx->pc = 0x14113Cu;
    // 0x14113c: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x14113Cu;
    {
        const bool branch_taken_0x14113c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14113c) {
            ctx->pc = 0x141140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14113Cu;
            // 0x141140: 0x8622020c  lh          $v0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141204u;
            goto label_141204;
        }
    }
    ctx->pc = 0x141144u;
    // 0x141144: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x141144u;
    {
        const bool branch_taken_0x141144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141144) {
            ctx->pc = 0x141200u;
            goto label_141200;
        }
    }
    ctx->pc = 0x14114Cu;
label_14114c:
    // 0x14114c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x14114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x141150: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141150u;
    {
        const bool branch_taken_0x141150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141150) {
            ctx->pc = 0x141154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141150u;
            // 0x141154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141160u;
            goto label_141160;
        }
    }
    ctx->pc = 0x141158u;
    // 0x141158: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x141158u;
    {
        const bool branch_taken_0x141158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141158u;
            // 0x14115c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141158) {
            ctx->pc = 0x141218u;
            goto label_141218;
        }
    }
    ctx->pc = 0x141160u;
label_141160:
    // 0x141160: 0xc060d5c  jal         func_183570
    ctx->pc = 0x141160u;
    SET_GPR_U32(ctx, 31, 0x141168u);
    ctx->pc = 0x183570u;
    if (runtime->hasFunction(0x183570u)) {
        auto targetFn = runtime->lookupFunction(0x183570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141168u; }
        if (ctx->pc != 0x141168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183570_0x183570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141168u; }
        if (ctx->pc != 0x141168u) { return; }
    }
    ctx->pc = 0x141168u;
label_141168:
    // 0x141168: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x141168u;
    {
        const bool branch_taken_0x141168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141168) {
            ctx->pc = 0x141200u;
            goto label_141200;
        }
    }
    ctx->pc = 0x141170u;
    // 0x141170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141174: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x141174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x141178: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x14117c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x14117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x141180: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x141180u;
    {
        const bool branch_taken_0x141180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141180u;
            // 0x141184: 0xae230238  sw          $v1, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141180) {
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x141188u;
label_141188:
    // 0x141188: 0xc060d5c  jal         func_183570
    ctx->pc = 0x141188u;
    SET_GPR_U32(ctx, 31, 0x141190u);
    ctx->pc = 0x183570u;
    if (runtime->hasFunction(0x183570u)) {
        auto targetFn = runtime->lookupFunction(0x183570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141190u; }
        if (ctx->pc != 0x141190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183570_0x183570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141190u; }
        if (ctx->pc != 0x141190u) { return; }
    }
    ctx->pc = 0x141190u;
label_141190:
    // 0x141190: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x141190u;
    {
        const bool branch_taken_0x141190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141190) {
            ctx->pc = 0x141200u;
            goto label_141200;
        }
    }
    ctx->pc = 0x141198u;
    // 0x141198: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x141198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x14119c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1411a0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1411A0u;
    {
        const bool branch_taken_0x1411a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411A0u;
            // 0x1411a4: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411a0) {
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x1411A8u;
label_1411a8:
    // 0x1411a8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1411a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1411ac: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1411ACu;
    {
        const bool branch_taken_0x1411ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411ac) {
            ctx->pc = 0x1411B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1411ACu;
            // 0x1411b0: 0x8c420498  lw          $v0, 0x498($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1411BCu;
            goto label_1411bc;
        }
    }
    ctx->pc = 0x1411B4u;
    // 0x1411b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1411B4u;
    {
        const bool branch_taken_0x1411b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411B4u;
            // 0x1411b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411b4) {
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x1411BCu;
label_1411bc:
    // 0x1411bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1411bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1411c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1411C0u;
    {
        const bool branch_taken_0x1411c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411c0) {
            ctx->pc = 0x141200u;
            goto label_141200;
        }
    }
    ctx->pc = 0x1411C8u;
    // 0x1411c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1411cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1411ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x1411d0: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1411d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1411d4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1411d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1411d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1411D8u;
    {
        const bool branch_taken_0x1411d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411D8u;
            // 0x1411dc: 0xae230238  sw          $v1, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411d8) {
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x1411E0u;
label_1411e0:
    // 0x1411e0: 0x8c420498  lw          $v0, 0x498($v0)
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
    // 0x1411e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1411e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1411e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1411E8u;
    {
        const bool branch_taken_0x1411e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411e8) {
            ctx->pc = 0x141200u;
            goto label_141200;
        }
    }
    ctx->pc = 0x1411F0u;
    // 0x1411f0: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x1411f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x1411f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1411f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1411F8u;
    {
        const bool branch_taken_0x1411f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411F8u;
            // 0x1411fc: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411f8) {
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x141200u;
label_141200:
    // 0x141200: 0x8622020c  lh          $v0, 0x20C($s1)
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
label_141204:
    // 0x141204: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141204u;
    {
        const bool branch_taken_0x141204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141204) {
            ctx->pc = 0x141208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141204u;
            // 0x141208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141214u;
            goto label_141214;
        }
    }
    ctx->pc = 0x14120Cu;
    // 0x14120c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141210: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x141210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_141214:
    // 0x141214: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141218:
    // 0x141218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14121c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14121cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141220: 0x3e00008  jr          $ra
    ctx->pc = 0x141220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141220u;
            // 0x141224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141228u;
    // 0x141228: 0x0  nop
    ctx->pc = 0x141228u;
    // NOP
    // 0x14122c: 0x0  nop
    ctx->pc = 0x14122cu;
    // NOP
label_141230:
    // 0x141230: 0x8cc30238  lw          $v1, 0x238($a2)
    ctx->pc = 0x141230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 568)));
    // 0x141234: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x141234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x141238: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141238u;
    {
        const bool branch_taken_0x141238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141238) {
            ctx->pc = 0x14123Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141238u;
            // 0x14123c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141250u;
            goto label_141250;
        }
    }
    ctx->pc = 0x141240u;
    // 0x141240: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x141240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x141244: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141244u;
    {
        const bool branch_taken_0x141244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141244) {
            ctx->pc = 0x141248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141244u;
            // 0x141248: 0x84c2020c  lh          $v0, 0x20C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14125Cu;
            goto label_14125c;
        }
    }
    ctx->pc = 0x14124Cu;
    // 0x14124c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141250:
    // 0x141250: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141254: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x141254u;
    {
        const bool branch_taken_0x141254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141254u;
            // 0x141258: 0xacc30214  sw          $v1, 0x214($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141254) {
            ctx->pc = 0x141270u;
            goto label_141270;
        }
    }
    ctx->pc = 0x14125Cu;
label_14125c:
    // 0x14125c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14125Cu;
    {
        const bool branch_taken_0x14125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14125c) {
            ctx->pc = 0x141260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14125Cu;
            // 0x141260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141270u;
            goto label_141270;
        }
    }
    ctx->pc = 0x141264u;
    // 0x141264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141268: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14126c: 0xacc30214  sw          $v1, 0x214($a2)
    ctx->pc = 0x14126cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 3));
label_141270:
    // 0x141270: 0x3e00008  jr          $ra
    ctx->pc = 0x141270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141278u;
    // 0x141278: 0x0  nop
    ctx->pc = 0x141278u;
    // NOP
    // 0x14127c: 0x0  nop
    ctx->pc = 0x14127cu;
    // NOP
label_141280:
    // 0x141280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141284: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x141284u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x141288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14128c: 0x0  nop
    ctx->pc = 0x14128cu;
    // NOP
    // 0x141290: 0x1810  mfhi        $v1
    ctx->pc = 0x141290u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x141294: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x141294u;
    {
        const bool branch_taken_0x141294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141294) {
            ctx->pc = 0x141298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141294u;
            // 0x141298: 0x84c2020c  lh          $v0, 0x20C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1412E4u;
            goto label_1412e4;
        }
    }
    ctx->pc = 0x14129Cu;
    // 0x14129c: 0x8cc3048c  lw          $v1, 0x48C($a2)
    ctx->pc = 0x14129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
    // 0x1412a0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1412a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1412a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1412a8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1412A8u;
    {
        const bool branch_taken_0x1412a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1412a8) {
            ctx->pc = 0x1412ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1412A8u;
            // 0x1412ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1412D4u;
            goto label_1412d4;
        }
    }
    ctx->pc = 0x1412B0u;
    // 0x1412b0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1412b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1412b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1412b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1412B8u;
    {
        const bool branch_taken_0x1412b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1412b8) {
            ctx->pc = 0x1412D0u;
            goto label_1412d0;
        }
    }
    ctx->pc = 0x1412C0u;
    // 0x1412c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1412c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1412c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1412c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1412c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1412C8u;
    {
        const bool branch_taken_0x1412c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1412c8) {
            ctx->pc = 0x1412E0u;
            goto label_1412e0;
        }
    }
    ctx->pc = 0x1412D0u;
label_1412d0:
    // 0x1412d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1412d4:
    // 0x1412d4: 0xacc20214  sw          $v0, 0x214($a2)
    ctx->pc = 0x1412d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 2));
    // 0x1412d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1412D8u;
    {
        const bool branch_taken_0x1412d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1412D8u;
            // 0x1412dc: 0xa0c00260  sb          $zero, 0x260($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 608), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412d8) {
            ctx->pc = 0x141330u;
            goto label_141330;
        }
    }
    ctx->pc = 0x1412E0u;
label_1412e0:
    // 0x1412e0: 0x84c2020c  lh          $v0, 0x20C($a2)
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 524)));
label_1412e4:
    // 0x1412e4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1412E4u;
    {
        const bool branch_taken_0x1412e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1412e4) {
            ctx->pc = 0x1412E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1412E4u;
            // 0x1412e8: 0x8cc20490  lw          $v0, 0x490($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141318u;
            goto label_141318;
        }
    }
    ctx->pc = 0x1412ECu;
    // 0x1412ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1412ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1412f0: 0xacc20214  sw          $v0, 0x214($a2)
    ctx->pc = 0x1412f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 2));
    // 0x1412f4: 0x90c30260  lbu         $v1, 0x260($a2)
    ctx->pc = 0x1412f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 608)));
    // 0x1412f8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1412f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1412fc: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1412FCu;
    {
        const bool branch_taken_0x1412fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1412fc) {
            ctx->pc = 0x141300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1412FCu;
            // 0x141300: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141310u;
            goto label_141310;
        }
    }
    ctx->pc = 0x141304u;
    // 0x141304: 0xacc20214  sw          $v0, 0x214($a2)
    ctx->pc = 0x141304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 2));
    // 0x141308: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x141308u;
    {
        const bool branch_taken_0x141308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141308u;
            // 0x14130c: 0xa0c00260  sb          $zero, 0x260($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 608), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141308) {
            ctx->pc = 0x141330u;
            goto label_141330;
        }
    }
    ctx->pc = 0x141310u;
label_141310:
    // 0x141310: 0xa0c20260  sb          $v0, 0x260($a2)
    ctx->pc = 0x141310u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 608), (uint8_t)GPR_U32(ctx, 2));
    // 0x141314: 0x8cc20490  lw          $v0, 0x490($a2)
    ctx->pc = 0x141314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1168)));
label_141318:
    // 0x141318: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x141318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14131c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14131Cu;
    {
        const bool branch_taken_0x14131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14131c) {
            ctx->pc = 0x141320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14131Cu;
            // 0x141320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141330u;
            goto label_141330;
        }
    }
    ctx->pc = 0x141324u;
    // 0x141324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141328: 0xacc20214  sw          $v0, 0x214($a2)
    ctx->pc = 0x141328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 2));
    // 0x14132c: 0xa0c00260  sb          $zero, 0x260($a2)
    ctx->pc = 0x14132cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 608), (uint8_t)GPR_U32(ctx, 0));
label_141330:
    // 0x141330: 0x3e00008  jr          $ra
    ctx->pc = 0x141330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141338u;
    // 0x141338: 0x0  nop
    ctx->pc = 0x141338u;
    // NOP
    // 0x14133c: 0x0  nop
    ctx->pc = 0x14133cu;
    // NOP
label_141340:
    // 0x141340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14134c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141350: 0x84c2020c  lh          $v0, 0x20C($a2)
    ctx->pc = 0x141350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 524)));
    // 0x141354: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141354u;
    {
        const bool branch_taken_0x141354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141354u;
            // 0x141358: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141354) {
            ctx->pc = 0x141364u;
            goto label_141364;
        }
    }
    ctx->pc = 0x14135Cu;
    // 0x14135c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x14135Cu;
    {
        const bool branch_taken_0x14135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14135Cu;
            // 0x141360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14135c) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x141364u;
label_141364:
    // 0x141364: 0xc04fe6c  jal         func_13F9B0
    ctx->pc = 0x141364u;
    SET_GPR_U32(ctx, 31, 0x14136Cu);
    ctx->pc = 0x141368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141364u;
            // 0x141368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9B0u;
    if (runtime->hasFunction(0x13F9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13F9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14136Cu; }
        if (ctx->pc != 0x14136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F9B0_0x13f9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14136Cu; }
        if (ctx->pc != 0x14136Cu) { return; }
    }
    ctx->pc = 0x14136Cu;
label_14136c:
    // 0x14136c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14136cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141370: 0x8e220208  lw          $v0, 0x208($s1)
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x141374: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x141374u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x141378: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x141378u;
    SET_GPR_U32(ctx, 31, 0x141380u);
    ctx->pc = 0x14137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141378u;
            // 0x14137c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141380u; }
        if (ctx->pc != 0x141380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141380u; }
        if (ctx->pc != 0x141380u) { return; }
    }
    ctx->pc = 0x141380u;
label_141380:
    // 0x141380: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x141380u;
    {
        const bool branch_taken_0x141380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141380) {
            ctx->pc = 0x141384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141380u;
            // 0x141384: 0xa620020c  sh          $zero, 0x20C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1413A4u;
            goto label_1413a4;
        }
    }
    ctx->pc = 0x141388u;
    // 0x141388: 0x8e220208  lw          $v0, 0x208($s1)
    ctx->pc = 0x141388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x14138c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x14138cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141390: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x141390u;
    SET_GPR_U32(ctx, 31, 0x141398u);
    ctx->pc = 0x141394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141390u;
            // 0x141394: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141398u; }
        if (ctx->pc != 0x141398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141398u; }
        if (ctx->pc != 0x141398u) { return; }
    }
    ctx->pc = 0x141398u;
label_141398:
    // 0x141398: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141398u;
    {
        const bool branch_taken_0x141398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141398) {
            ctx->pc = 0x14139Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141398u;
            // 0x14139c: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1413B4u;
            goto label_1413b4;
        }
    }
    ctx->pc = 0x1413A0u;
    // 0x1413a0: 0xa620020c  sh          $zero, 0x20C($s1)
    ctx->pc = 0x1413a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 0));
label_1413a4:
    // 0x1413a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1413a8: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x1413a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x1413ac: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1413ACu;
    {
        const bool branch_taken_0x1413ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1413ACu;
            // 0x1413b0: 0xae200238  sw          $zero, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413ac) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x1413B4u;
label_1413b4:
    // 0x1413b4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1413b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1413b8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1413B8u;
    {
        const bool branch_taken_0x1413b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413b8) {
            ctx->pc = 0x1413BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1413B8u;
            // 0x1413bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141418u;
            goto label_141418;
        }
    }
    ctx->pc = 0x1413C0u;
    // 0x1413c0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1413c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1413c4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1413C4u;
    {
        const bool branch_taken_0x1413c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413c4) {
            ctx->pc = 0x141414u;
            goto label_141414;
        }
    }
    ctx->pc = 0x1413CCu;
    // 0x1413cc: 0xa6200248  sh          $zero, 0x248($s1)
    ctx->pc = 0x1413ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x1413d0: 0xa620024a  sh          $zero, 0x24A($s1)
    ctx->pc = 0x1413d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 586), (uint16_t)GPR_U32(ctx, 0));
    // 0x1413d4: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1413d8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1413d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1413dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1413DCu;
    {
        const bool branch_taken_0x1413dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413dc) {
            ctx->pc = 0x1413E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1413DCu;
            // 0x1413e0: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1413F0u;
            goto label_1413f0;
        }
    }
    ctx->pc = 0x1413E4u;
    // 0x1413e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1413e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1413e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1413E8u;
    {
        const bool branch_taken_0x1413e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1413E8u;
            // 0x1413ec: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413e8) {
            ctx->pc = 0x14140Cu;
            goto label_14140c;
        }
    }
    ctx->pc = 0x1413F0u;
label_1413f0:
    // 0x1413f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1413F0u;
    {
        const bool branch_taken_0x1413f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413f0) {
            ctx->pc = 0x1413F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1413F0u;
            // 0x1413f4: 0xae200214  sw          $zero, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141404u;
            goto label_141404;
        }
    }
    ctx->pc = 0x1413F8u;
    // 0x1413f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1413f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1413fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1413FCu;
    {
        const bool branch_taken_0x1413fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1413FCu;
            // 0x141400: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413fc) {
            ctx->pc = 0x14140Cu;
            goto label_14140c;
        }
    }
    ctx->pc = 0x141404u;
label_141404:
    // 0x141404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141408: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x141408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
label_14140c:
    // 0x14140c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14140Cu;
    {
        const bool branch_taken_0x14140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14140Cu;
            // 0x141410: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14140c) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x141414u;
label_141414:
    // 0x141414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141418:
    // 0x141418: 0x56040003  bnel        $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141418u;
    {
        const bool branch_taken_0x141418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x141418) {
            ctx->pc = 0x14141Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141418u;
            // 0x14141c: 0x8e230238  lw          $v1, 0x238($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141428u;
            goto label_141428;
        }
    }
    ctx->pc = 0x141420u;
    // 0x141420: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x141420u;
    {
        const bool branch_taken_0x141420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141420u;
            // 0x141424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141420) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x141428u;
label_141428:
    // 0x141428: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x141428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14142c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14142Cu;
    {
        const bool branch_taken_0x14142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14142c) {
            ctx->pc = 0x141430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14142Cu;
            // 0x141430: 0x92220282  lbu         $v0, 0x282($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 642)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141460u;
            goto label_141460;
        }
    }
    ctx->pc = 0x141434u;
    // 0x141434: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x141434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x141438: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141438u;
    {
        const bool branch_taken_0x141438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141438) {
            ctx->pc = 0x14145Cu;
            goto label_14145c;
        }
    }
    ctx->pc = 0x141440u;
    // 0x141440: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x141440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x141444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141448: 0xae240220  sw          $a0, 0x220($s1)
    ctx->pc = 0x141448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 4));
    // 0x14144c: 0x86230228  lh          $v1, 0x228($s1)
    ctx->pc = 0x14144cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x141450: 0xa623022a  sh          $v1, 0x22A($s1)
    ctx->pc = 0x141450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x141454: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x141454u;
    {
        const bool branch_taken_0x141454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141454u;
            // 0x141458: 0xa6200228  sh          $zero, 0x228($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141454) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x14145Cu;
label_14145c:
    // 0x14145c: 0x92220282  lbu         $v0, 0x282($s1)
    ctx->pc = 0x14145cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 642)));
label_141460:
    // 0x141460: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141460u;
    {
        const bool branch_taken_0x141460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141460) {
            ctx->pc = 0x141464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141460u;
            // 0x141464: 0x92220281  lbu         $v0, 0x281($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 641)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141478u;
            goto label_141478;
        }
    }
    ctx->pc = 0x141468u;
    // 0x141468: 0xc04fe28  jal         func_13F8A0
    ctx->pc = 0x141468u;
    SET_GPR_U32(ctx, 31, 0x141470u);
    ctx->pc = 0x14146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141468u;
            // 0x14146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8A0u;
    if (runtime->hasFunction(0x13F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x13F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141470u; }
        if (ctx->pc != 0x141470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A0_0x13f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141470u; }
        if (ctx->pc != 0x141470u) { return; }
    }
    ctx->pc = 0x141470u;
label_141470:
    // 0x141470: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x141470u;
    {
        const bool branch_taken_0x141470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141470u;
            // 0x141474: 0x96220226  lhu         $v0, 0x226($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141470) {
            ctx->pc = 0x1414E0u;
            goto label_1414e0;
        }
    }
    ctx->pc = 0x141478u;
label_141478:
    // 0x141478: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x141478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14147c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14147Cu;
    {
        const bool branch_taken_0x14147c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14147c) {
            ctx->pc = 0x141480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14147Cu;
            // 0x141480: 0x8e230494  lw          $v1, 0x494($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141494u;
            goto label_141494;
        }
    }
    ctx->pc = 0x141484u;
    // 0x141484: 0xc04fe28  jal         func_13F8A0
    ctx->pc = 0x141484u;
    SET_GPR_U32(ctx, 31, 0x14148Cu);
    ctx->pc = 0x141488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141484u;
            // 0x141488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8A0u;
    if (runtime->hasFunction(0x13F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x13F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14148Cu; }
        if (ctx->pc != 0x14148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A0_0x13f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14148Cu; }
        if (ctx->pc != 0x14148Cu) { return; }
    }
    ctx->pc = 0x14148Cu;
label_14148c:
    // 0x14148c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14148Cu;
    {
        const bool branch_taken_0x14148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14148c) {
            ctx->pc = 0x1414DCu;
            goto label_1414dc;
        }
    }
    ctx->pc = 0x141494u;
label_141494:
    // 0x141494: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x141498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14149c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14149Cu;
    {
        const bool branch_taken_0x14149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14149c) {
            ctx->pc = 0x1414DCu;
            goto label_1414dc;
        }
    }
    ctx->pc = 0x1414A4u;
    // 0x1414a4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1414a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1414a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1414ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1414ACu;
    {
        const bool branch_taken_0x1414ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414ac) {
            ctx->pc = 0x1414DCu;
            goto label_1414dc;
        }
    }
    ctx->pc = 0x1414B4u;
    // 0x1414b4: 0xc04fa14  jal         func_13E850
    ctx->pc = 0x1414B4u;
    SET_GPR_U32(ctx, 31, 0x1414BCu);
    ctx->pc = 0x1414B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414B4u;
            // 0x1414b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E850u;
    if (runtime->hasFunction(0x13E850u)) {
        auto targetFn = runtime->lookupFunction(0x13E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414BCu; }
        if (ctx->pc != 0x1414BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E850_0x13e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414BCu; }
        if (ctx->pc != 0x1414BCu) { return; }
    }
    ctx->pc = 0x1414BCu;
label_1414bc:
    // 0x1414bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1414BCu;
    {
        const bool branch_taken_0x1414bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414bc) {
            ctx->pc = 0x1414DCu;
            goto label_1414dc;
        }
    }
    ctx->pc = 0x1414C4u;
    // 0x1414c4: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x1414c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x1414c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1414c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1414cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1414ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1414d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1414d4: 0xc04fe28  jal         func_13F8A0
    ctx->pc = 0x1414D4u;
    SET_GPR_U32(ctx, 31, 0x1414DCu);
    ctx->pc = 0x1414D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414D4u;
            // 0x1414d8: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8A0u;
    if (runtime->hasFunction(0x13F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x13F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414DCu; }
        if (ctx->pc != 0x1414DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A0_0x13f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414DCu; }
        if (ctx->pc != 0x1414DCu) { return; }
    }
    ctx->pc = 0x1414DCu;
label_1414dc:
    // 0x1414dc: 0x96220226  lhu         $v0, 0x226($s1)
    ctx->pc = 0x1414dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
label_1414e0:
    // 0x1414e0: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1414e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1414e4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1414E4u;
    {
        const bool branch_taken_0x1414e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1414e4) {
            ctx->pc = 0x1414E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1414E4u;
            // 0x1414e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x1414ECu;
    // 0x1414ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1414ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1414f0: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1414f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1414f4:
    // 0x1414f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1414f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1414f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1414f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1414fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1414fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141500: 0x3e00008  jr          $ra
    ctx->pc = 0x141500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141500u;
            // 0x141504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141508u;
    // 0x141508: 0x0  nop
    ctx->pc = 0x141508u;
    // NOP
    // 0x14150c: 0x0  nop
    ctx->pc = 0x14150cu;
    // NOP
    ctx->pc = 0x141510u;
}
