#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B3E8
// Address: 0x11b3e8 - 0x11b460
void sub_0011B3E8_0x11b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B3E8_0x11b3e8");
#endif

    switch (ctx->pc) {
        case 0x11b40cu: goto label_11b40c;
        case 0x11b428u: goto label_11b428;
        case 0x11b438u: goto label_11b438;
        default: break;
    }

    ctx->pc = 0x11b3e8u;

    // 0x11b3e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b3ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11b3f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11b3f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11b3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b3f8: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11b3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b400: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b404: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11B404u;
    SET_GPR_U32(ctx, 31, 0x11B40Cu);
    ctx->pc = 0x11B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B404u;
            // 0x11b408: 0xae329de4  sw          $s2, -0x621C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294942180), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B40Cu; }
        if (ctx->pc != 0x11B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B40Cu; }
        if (ctx->pc != 0x11B40Cu) { return; }
    }
    ctx->pc = 0x11B40Cu;
label_11b40c:
    // 0x11b40c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11b410: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11b414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b418: 0x24a5b390  addiu       $a1, $a1, -0x4C70
    ctx->pc = 0x11b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
    // 0x11b41c: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x11b41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x11b420: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x11B420u;
    SET_GPR_U32(ctx, 31, 0x11B428u);
    ctx->pc = 0x11B424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B420u;
            // 0x11b424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B428u; }
        if (ctx->pc != 0x11B428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FF30_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B428u; }
        if (ctx->pc != 0x11B428u) { return; }
    }
    ctx->pc = 0x11B428u;
label_11b428:
    // 0x11b428: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B428u;
    {
        const bool branch_taken_0x11b428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B428u;
            // 0x11b42c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b428) {
            ctx->pc = 0x11B43Cu;
            goto label_11b43c;
        }
    }
    ctx->pc = 0x11B430u;
    // 0x11b430: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11B430u;
    SET_GPR_U32(ctx, 31, 0x11B438u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B438u; }
        if (ctx->pc != 0x11B438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B438u; }
        if (ctx->pc != 0x11B438u) { return; }
    }
    ctx->pc = 0x11B438u;
label_11b438:
    // 0x11b438: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11b43c:
    // 0x11b43c: 0xae209de4  sw          $zero, -0x621C($s1)
    ctx->pc = 0x11b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942180), GPR_U32(ctx, 0));
    // 0x11b440: 0xac529e08  sw          $s2, -0x61F8($v0)
    ctx->pc = 0x11b440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942216), GPR_U32(ctx, 18));
    // 0x11b444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b44c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11b44cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b450: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b458: 0x3e00008  jr          $ra
    ctx->pc = 0x11B458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B458u;
            // 0x11b45c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B460u;
    ctx->pc = 0x11b460u;
}
