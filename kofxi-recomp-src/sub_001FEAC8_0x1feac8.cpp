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

// Function: sub_001FEAC8
// Address: 0x1feac8 - 0x1feb48
void sub_001FEAC8_0x1feac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEAC8_0x1feac8");
#endif

    switch (ctx->pc) {
        case 0x1feae8u: goto label_1feae8;
        case 0x1feaf8u: goto label_1feaf8;
        case 0x1feb08u: goto label_1feb08;
        default: break;
    }

    ctx->pc = 0x1feac8u;

    // 0x1feac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feacc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1feaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fead0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fead4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fead4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fead8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1feadc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feae0: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1FEAE0u;
    SET_GPR_U32(ctx, 31, 0x1FEAE8u);
    ctx->pc = 0x1FEAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAE0u;
    // 0x1feae4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA20u, 0x1FEAE0u, 0x1FEAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAE8u;
label_1feae8:
    // 0x1feae8: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FEAE8u;
    {
        const bool branch_taken_0x1feae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1FEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAE8u;
        // 0x1feaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feae8) {
            ctx->pc = 0x1FEB30u;
            goto label_1feb30;
        }
    }
    ctx->pc = 0x1FEAF0u;
    // 0x1feaf0: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1FEAF0u;
    SET_GPR_U32(ctx, 31, 0x1FEAF8u);
    ctx->pc = 0x1FEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAF0u;
    // 0x1feaf4: 0x8e052130  lw          $a1, 0x2130($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1FEAF0u, 0x1FEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAF8u;
label_1feaf8:
    // 0x1feaf8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FEAF8u;
    {
        const bool branch_taken_0x1feaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1FEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAF8u;
        // 0x1feafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaf8) {
            ctx->pc = 0x1FEB30u;
            goto label_1feb30;
        }
    }
    ctx->pc = 0x1FEB00u;
    // 0x1feb00: 0xc07fad2  jal         func_1FEB48
    ctx->pc = 0x1FEB00u;
    SET_GPR_U32(ctx, 31, 0x1FEB08u);
    ctx->pc = 0x1FEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB48u, 0x1FEB00u, 0x1FEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEB08u;
    {
        const bool branch_taken_0x1feb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB08u;
        // 0x1feb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb08) {
            ctx->pc = 0x1FEB30u;
            goto label_1feb30;
        }
    }
    ctx->pc = 0x1FEB10u;
    // 0x1feb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1feb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb18: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1feb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1feb1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1feb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feb20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1feb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feb24: 0x807f682  j           func_1FDA08
    ctx->pc = 0x1FEB24u;
    ctx->pc = 0x1FEB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB24u;
    // 0x1feb28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA08u, 0x1FEB24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FEB2Cu;
    // 0x1feb2c: 0x0  nop
    ctx->pc = 0x1feb2cu;
    // NOP
label_1feb30:
    // 0x1feb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1feb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1feb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB3Cu;
        // 0x1feb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB44u;
    // 0x1feb44: 0x0  nop
    ctx->pc = 0x1feb44u;
    // NOP
    if (ctx->pc == 0x1feb44u) { ctx->pc = 0x1feb48u; }
}
