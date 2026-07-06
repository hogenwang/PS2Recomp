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

// Function: sub_002C27B8
// Address: 0x2c27b8 - 0x2c2820
void sub_002C27B8_0x2c27b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C27B8_0x2c27b8");
#endif

    switch (ctx->pc) {
        case 0x2c27ccu: goto label_2c27cc;
        case 0x2c27e0u: goto label_2c27e0;
        case 0x2c280cu: goto label_2c280c;
        default: break;
    }

    ctx->pc = 0x2c27b8u;

    // 0x2c27b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c27b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c27bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c27c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c27c4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C27C4u;
    SET_GPR_U32(ctx, 31, 0x2C27CCu);
    ctx->pc = 0x2C27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27C4u;
    // 0x2c27c8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C27C4u, 0x2C27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27CCu;
label_2c27cc:
    // 0x2c27cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c27ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C27D0u;
    {
        const bool branch_taken_0x2c27d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27D0u;
        // 0x2c27d4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27d0) {
            ctx->pc = 0x2C27F0u;
            goto label_2c27f0;
        }
    }
    ctx->pc = 0x2C27D8u;
    // 0x2c27d8: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C27D8u;
    SET_GPR_U32(ctx, 31, 0x2C27E0u);
    ctx->pc = 0x2C27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27D8u;
    // 0x2c27dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A708u, 0x2C27D8u, 0x2C27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27E0u;
label_2c27e0:
    // 0x2c27e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c27e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c27e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C27E8u;
    {
        const bool branch_taken_0x2c27e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E8u;
        // 0x2c27ec: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27e8) {
            ctx->pc = 0x2C2810u;
            goto label_2c2810;
        }
    }
    ctx->pc = 0x2C27F0u;
label_2c27f0:
    // 0x2c27f0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c27f4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c27f8: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x2c27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2c27fc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c27fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c2800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2804: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C2804u;
    SET_GPR_U32(ctx, 31, 0x2C280Cu);
    ctx->pc = 0x2C2808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2804u;
    // 0x2c2808: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C2804u, 0x2C280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C280Cu;
label_2c280c:
    // 0x2c280c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c280cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2810:
    // 0x2c2810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c2810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2814: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c2814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2818: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2818u;
        // 0x2c281c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2820u;
}
