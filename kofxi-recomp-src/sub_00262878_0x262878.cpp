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

// Function: sub_00262878
// Address: 0x262878 - 0x262900
void sub_00262878_0x262878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262878_0x262878");
#endif

    switch (ctx->pc) {
        case 0x2628a0u: goto label_2628a0;
        case 0x2628bcu: goto label_2628bc;
        case 0x2628d8u: goto label_2628d8;
        case 0x2628e8u: goto label_2628e8;
        default: break;
    }

    ctx->pc = 0x262878u;

    // 0x262878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26287c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x26287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262880: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x262884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26288c: 0x24c675d8  addiu       $a2, $a2, 0x75D8
    ctx->pc = 0x26288cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30168));
    // 0x262890: 0xac40d778  sw          $zero, -0x2888($v0)
    ctx->pc = 0x262890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956920), GPR_U32(ctx, 0));
    // 0x262894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262898: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x262898u;
    SET_GPR_U32(ctx, 31, 0x2628A0u);
    ctx->pc = 0x26289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262898u;
    // 0x26289c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x262898u, 0x2628A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628A0u;
label_2628a0:
    // 0x2628a0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2628a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2628a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2628A4u;
    {
        const bool branch_taken_0x2628a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2628A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628A4u;
        // 0x2628a8: 0xac621a10  sw          $v0, 0x1A10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628a4) {
            ctx->pc = 0x2628B4u;
            goto label_2628b4;
        }
    }
    ctx->pc = 0x2628ACu;
    // 0x2628ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2628ACu;
    {
        const bool branch_taken_0x2628ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628ACu;
        // 0x2628b0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628ac) {
            ctx->pc = 0x2628ECu;
            goto label_2628ec;
        }
    }
    ctx->pc = 0x2628B4u;
label_2628b4:
    // 0x2628b4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x2628B4u;
    SET_GPR_U32(ctx, 31, 0x2628BCu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x2628B4u, 0x2628BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628BCu;
label_2628bc:
    // 0x2628bc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x2628bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x2628c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2628c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2628c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628c8: 0x24a527d8  addiu       $a1, $a1, 0x27D8
    ctx->pc = 0x2628c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10200));
    // 0x2628cc: 0x34840014  ori         $a0, $a0, 0x14
    ctx->pc = 0x2628ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20);
    // 0x2628d0: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x2628D0u;
    SET_GPR_U32(ctx, 31, 0x2628D8u);
    ctx->pc = 0x2628D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628D0u;
    // 0x2628d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF30u, 0x2628D0u, 0x2628D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628D8u;
label_2628d8:
    // 0x2628d8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2628D8u;
    {
        const bool branch_taken_0x2628d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628D8u;
        // 0x2628dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628d8) {
            ctx->pc = 0x2628ECu;
            goto label_2628ec;
        }
    }
    ctx->pc = 0x2628E0u;
    // 0x2628e0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2628E0u;
    SET_GPR_U32(ctx, 31, 0x2628E8u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2628E0u, 0x2628E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628E8u;
label_2628e8:
    // 0x2628e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2628e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2628ec:
    // 0x2628ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2628ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2628f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2628f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2628F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2628F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628F4u;
        // 0x2628f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2628F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2628FCu;
    // 0x2628fc: 0x0  nop
    ctx->pc = 0x2628fcu;
    // NOP
    if (ctx->pc == 0x2628fcu) { ctx->pc = 0x262900u; }
}
