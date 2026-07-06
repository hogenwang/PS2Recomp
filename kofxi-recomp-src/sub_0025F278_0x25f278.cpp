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

// Function: sub_0025F278
// Address: 0x25f278 - 0x25f2e0
void sub_0025F278_0x25f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F278_0x25f278");
#endif

    switch (ctx->pc) {
        case 0x25f290u: goto label_25f290;
        case 0x25f2a4u: goto label_25f2a4;
        case 0x25f2bcu: goto label_25f2bc;
        case 0x25f2c8u: goto label_25f2c8;
        default: break;
    }

    ctx->pc = 0x25f278u;

    // 0x25f278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f280: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25f288: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25F288u;
    SET_GPR_U32(ctx, 31, 0x25F290u);
    ctx->pc = 0x25F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F288u;
    // 0x25f28c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25F288u, 0x25F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F290u;
label_25f290:
    // 0x25f290: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f294: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x25F294u;
    {
        const bool branch_taken_0x25f294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F294u;
        // 0x25f298: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f294) {
            ctx->pc = 0x25F2C8u;
            goto label_25f2c8;
        }
    }
    ctx->pc = 0x25F29Cu;
    // 0x25f29c: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25F29Cu;
    SET_GPR_U32(ctx, 31, 0x25F2A4u);
    ctx->pc = 0x25F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F29Cu;
    // 0x25f2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25F29Cu, 0x25F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2A4u;
label_25f2a4:
    // 0x25f2a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F2A4u;
    {
        const bool branch_taken_0x25f2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f2a4) {
            ctx->pc = 0x25F2B4u;
            goto label_25f2b4;
        }
    }
    ctx->pc = 0x25F2ACu;
    // 0x25f2ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F2ACu;
    {
        const bool branch_taken_0x25f2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2ACu;
        // 0x25f2b0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2ac) {
            ctx->pc = 0x25F2BCu;
            goto label_25f2bc;
        }
    }
    ctx->pc = 0x25F2B4u;
label_25f2b4:
    // 0x25f2b4: 0xc08b84c  jal         func_22E130
    ctx->pc = 0x25F2B4u;
    SET_GPR_U32(ctx, 31, 0x25F2BCu);
    ctx->pc = 0x25F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2B4u;
    // 0x25f2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E130u, 0x25F2B4u, 0x25F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2BCu;
label_25f2bc:
    // 0x25f2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2c0: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25F2C0u;
    SET_GPR_U32(ctx, 31, 0x25F2C8u);
    ctx->pc = 0x25F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2C0u;
    // 0x25f2c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25F2C0u, 0x25F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2C8u;
label_25f2c8:
    // 0x25f2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f2cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2D4u;
        // 0x25f2d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F2DCu;
    // 0x25f2dc: 0x0  nop
    ctx->pc = 0x25f2dcu;
    // NOP
}
