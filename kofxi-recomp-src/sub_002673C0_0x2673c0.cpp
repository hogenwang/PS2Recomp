#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002673C0
// Address: 0x2673c0 - 0x267440
void sub_002673C0_0x2673c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002673C0_0x2673c0");
#endif

    switch (ctx->pc) {
        case 0x2673e8u: goto label_2673e8;
        case 0x2673f8u: goto label_2673f8;
        case 0x267410u: goto label_267410;
        case 0x267428u: goto label_267428;
        default: break;
    }

    ctx->pc = 0x2673c0u;

    // 0x2673c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2673c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2673c4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2673c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2673c8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2673c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2673cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2673ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2673d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2673d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2673d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2673d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2673dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2673dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673e0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2673E0u;
    SET_GPR_U32(ctx, 31, 0x2673E8u);
    ctx->pc = 0x2673E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2673E0u;
            // 0x2673e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673E8u; }
        if (ctx->pc != 0x2673E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673E8u; }
        if (ctx->pc != 0x2673E8u) { return; }
    }
    ctx->pc = 0x2673E8u;
label_2673e8:
    // 0x2673e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2673e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2673ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673f0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2673F0u;
    SET_GPR_U32(ctx, 31, 0x2673F8u);
    ctx->pc = 0x2673F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2673F0u;
            // 0x2673f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673F8u; }
        if (ctx->pc != 0x2673F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673F8u; }
        if (ctx->pc != 0x2673F8u) { return; }
    }
    ctx->pc = 0x2673F8u;
label_2673f8:
    // 0x2673f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2673f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673fc: 0x3405c014  ori         $a1, $zero, 0xC014
    ctx->pc = 0x2673fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
    // 0x267400: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267404: 0x34a5697b  ori         $a1, $a1, 0x697B
    ctx->pc = 0x267404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27003);
    // 0x267408: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267408u;
    SET_GPR_U32(ctx, 31, 0x267410u);
    ctx->pc = 0x26740Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267408u;
            // 0x26740c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267410u; }
        if (ctx->pc != 0x267410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267410u; }
        if (ctx->pc != 0x267410u) { return; }
    }
    ctx->pc = 0x267410u;
label_267410:
    // 0x267410: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267410u;
    {
        const bool branch_taken_0x267410 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267410u;
            // 0x267414: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267410) {
            ctx->pc = 0x26742Cu;
            goto label_26742c;
        }
    }
    ctx->pc = 0x267418u;
    // 0x267418: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26741c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267420: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267420u;
    SET_GPR_U32(ctx, 31, 0x267428u);
    ctx->pc = 0x267424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267420u;
            // 0x267424: 0x24a57898  addiu       $a1, $a1, 0x7898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267428u; }
        if (ctx->pc != 0x267428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267428u; }
        if (ctx->pc != 0x267428u) { return; }
    }
    ctx->pc = 0x267428u;
label_267428:
    // 0x267428: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26742c:
    // 0x26742c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26742cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267430: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x267430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267434: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x267434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267438: 0x3e00008  jr          $ra
    ctx->pc = 0x267438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267438u;
            // 0x26743c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267440u;
    ctx->pc = 0x267440u;
}
