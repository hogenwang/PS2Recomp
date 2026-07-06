#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002129A8
// Address: 0x2129a8 - 0x212ac0
void sub_002129A8_0x2129a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002129A8_0x2129a8");
#endif

    switch (ctx->pc) {
        case 0x2129f4u: goto label_2129f4;
        case 0x212a10u: goto label_212a10;
        case 0x212a28u: goto label_212a28;
        case 0x212a54u: goto label_212a54;
        case 0x212a60u: goto label_212a60;
        case 0x212a88u: goto label_212a88;
        case 0x212a90u: goto label_212a90;
        case 0x212ab8u: goto label_212ab8;
        default: break;
    }

    ctx->pc = 0x2129a8u;

    // 0x2129a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2129a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2129ac: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2129acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2129b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2129b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2129b4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2129b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2129b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2129b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2129bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2129bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2129c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2129c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2129c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2129c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2129c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2129ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2129d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2129d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2129d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2129d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2129d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2129dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2129e0: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2129e0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2129e4: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2129e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2129e8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x2129e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x2129ec: 0xc08497e  jal         func_2125F8
    ctx->pc = 0x2129ECu;
    SET_GPR_U32(ctx, 31, 0x2129F4u);
    ctx->pc = 0x2129F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2129ECu;
            // 0x2129f0: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2125F8u;
    if (runtime->hasFunction(0x2125F8u)) {
        auto targetFn = runtime->lookupFunction(0x2125F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2129F4u; }
        if (ctx->pc != 0x2129F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002125F8_0x2125f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2129F4u; }
        if (ctx->pc != 0x2129F4u) { return; }
    }
    ctx->pc = 0x2129F4u;
label_2129f4:
    // 0x2129f4: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2129F4u;
    {
        const bool branch_taken_0x2129f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2129F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129F4u;
            // 0x2129f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129f4) {
            ctx->pc = 0x212A90u;
            goto label_212a90;
        }
    }
    ctx->pc = 0x2129FCu;
    // 0x2129fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2129fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212a00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a08: 0xc084612  jal         func_211848
    ctx->pc = 0x212A08u;
    SET_GPR_U32(ctx, 31, 0x212A10u);
    ctx->pc = 0x212A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A08u;
            // 0x212a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A10u; }
        if (ctx->pc != 0x212A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A10u; }
        if (ctx->pc != 0x212A10u) { return; }
    }
    ctx->pc = 0x212A10u;
label_212a10:
    // 0x212a10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212a1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a20: 0xc084654  jal         func_211950
    ctx->pc = 0x212A20u;
    SET_GPR_U32(ctx, 31, 0x212A28u);
    ctx->pc = 0x212A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A20u;
            // 0x212a24: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (runtime->hasFunction(0x211950u)) {
        auto targetFn = runtime->lookupFunction(0x211950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A28u; }
        if (ctx->pc != 0x212A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211950_0x211950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A28u; }
        if (ctx->pc != 0x212A28u) { return; }
    }
    ctx->pc = 0x212A28u;
label_212a28:
    // 0x212a28: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x212a28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a2c: 0x29cf0005  slti        $t7, $t6, 0x5
    ctx->pc = 0x212a2cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x212a30: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x212A30u;
    {
        const bool branch_taken_0x212a30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212A30u;
            // 0x212a34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a30) {
            ctx->pc = 0x212A90u;
            goto label_212a90;
        }
    }
    ctx->pc = 0x212A38u;
    // 0x212a38: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x212A38u;
    {
        const bool branch_taken_0x212a38 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x212a38) {
            ctx->pc = 0x212A48u;
            goto label_212a48;
        }
    }
    ctx->pc = 0x212A40u;
    // 0x212a40: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x212a40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212a44: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x212a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_212a48:
    // 0x212a48: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x212A48u;
    {
        const bool branch_taken_0x212a48 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x212A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212A48u;
            // 0x212a4c: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a48) {
            ctx->pc = 0x212A7Cu;
            goto label_212a7c;
        }
    }
    ctx->pc = 0x212A50u;
    // 0x212a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212a54:
    // 0x212a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a58: 0xc08489e  jal         func_212278
    ctx->pc = 0x212A58u;
    SET_GPR_U32(ctx, 31, 0x212A60u);
    ctx->pc = 0x212A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A58u;
            // 0x212a5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212278u;
    if (runtime->hasFunction(0x212278u)) {
        auto targetFn = runtime->lookupFunction(0x212278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A60u; }
        if (ctx->pc != 0x212A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212278_0x212278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A60u; }
        if (ctx->pc != 0x212A60u) { return; }
    }
    ctx->pc = 0x212A60u;
label_212a60:
    // 0x212a60: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x212A60u;
    {
        const bool branch_taken_0x212a60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212A60u;
            // 0x212a64: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a60) {
            ctx->pc = 0x212AB8u;
            goto label_212ab8;
        }
    }
    ctx->pc = 0x212A68u;
    // 0x212a68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x212a68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x212a6c: 0x26f782a  slt         $t7, $s3, $t7
    ctx->pc = 0x212a6cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x212a70: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212A70u;
    {
        const bool branch_taken_0x212a70 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212A70u;
            // 0x212a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a70) {
            ctx->pc = 0x212A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212a54;
        }
    }
    ctx->pc = 0x212A78u;
    // 0x212a78: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x212a78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212a7c:
    // 0x212a7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x212a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a80: 0xc0849da  jal         func_212768
    ctx->pc = 0x212A80u;
    SET_GPR_U32(ctx, 31, 0x212A88u);
    ctx->pc = 0x212A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A80u;
            // 0x212a84: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    if (runtime->hasFunction(0x212768u)) {
        auto targetFn = runtime->lookupFunction(0x212768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A88u; }
        if (ctx->pc != 0x212A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212768_0x212768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A88u; }
        if (ctx->pc != 0x212A88u) { return; }
    }
    ctx->pc = 0x212A88u;
label_212a88:
    // 0x212a88: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x212a88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212a8c: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x212a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_212a90:
    // 0x212a90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x212a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212a94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x212a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x212a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212a9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212aa0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x212aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212aa4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x212aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212aa8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x212aa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x212aac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x212aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x212AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212AB0u;
            // 0x212ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212AB8u;
label_212ab8:
    // 0x212ab8: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x212AB8u;
    {
        const bool branch_taken_0x212ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212AB8u;
            // 0x212abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ab8) {
            ctx->pc = 0x212A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212a90;
        }
    }
    ctx->pc = 0x212AC0u;
    ctx->pc = 0x212ac0u;
}
