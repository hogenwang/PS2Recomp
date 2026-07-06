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

// Function: sub_0010F8D8
// Address: 0x10f8d8 - 0x10f948
void sub_0010F8D8_0x10f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F8D8_0x10f8d8");
#endif

    switch (ctx->pc) {
        case 0x10f8fcu: goto label_10f8fc;
        case 0x10f920u: goto label_10f920;
        case 0x10f930u: goto label_10f930;
        default: break;
    }

    ctx->pc = 0x10f8d8u;

    // 0x10f8d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f8dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10f8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10f8e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10f8e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10f8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f8ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10f8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10f8f4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10F8F4u;
    SET_GPR_U32(ctx, 31, 0x10F8FCu);
    ctx->pc = 0x10F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8F4u;
    // 0x10f8f8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10F8F4u, 0x10F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8FCu;
label_10f8fc:
    // 0x10f8fc: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f900: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10f900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10f904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f908: 0x2484f7b8  addiu       $a0, $a0, -0x848
    ctx->pc = 0x10f908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965176));
    // 0x10f90c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10f90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f910: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x10f910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f918: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x10F918u;
    SET_GPR_U32(ctx, 31, 0x10F920u);
    ctx->pc = 0x10F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F918u;
    // 0x10f91c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA48u, 0x10F918u, 0x10F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F920u;
label_10f920:
    // 0x10f920: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F920u;
    {
        const bool branch_taken_0x10f920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F920u;
        // 0x10f924: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f920) {
            ctx->pc = 0x10F934u;
            goto label_10f934;
        }
    }
    ctx->pc = 0x10F928u;
    // 0x10f928: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10F928u;
    SET_GPR_U32(ctx, 31, 0x10F930u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10F928u, 0x10F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F930u;
label_10f930:
    // 0x10f930: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10f930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10f934:
    // 0x10f934: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10f934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f938: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10f938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f93c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f940: 0x3e00008  jr          $ra
    ctx->pc = 0x10F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F940u;
        // 0x10f944: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F948u;
}
