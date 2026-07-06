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

// Function: sub_00284F78
// Address: 0x284f78 - 0x284ff8
void sub_00284F78_0x284f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F78_0x284f78");
#endif

    switch (ctx->pc) {
        case 0x284f94u: goto label_284f94;
        case 0x284fb8u: goto label_284fb8;
        case 0x284fc8u: goto label_284fc8;
        case 0x284fd8u: goto label_284fd8;
        default: break;
    }

    ctx->pc = 0x284f78u;

    // 0x284f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284f7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x284f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284f8c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x284F8Cu;
    SET_GPR_U32(ctx, 31, 0x284F94u);
    ctx->pc = 0x284F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F8Cu;
    // 0x284f90: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x284F8Cu, 0x284F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F94u;
label_284f94:
    // 0x284f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f98: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284F98u;
    {
        const bool branch_taken_0x284f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x284F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F98u;
        // 0x284f9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f98) {
            ctx->pc = 0x284FC0u;
            goto label_284fc0;
        }
    }
    ctx->pc = 0x284FA0u;
    // 0x284fa0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x284fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x284fa4: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x284fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x284fa8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x284fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x284fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fb0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x284FB0u;
    SET_GPR_U32(ctx, 31, 0x284FB8u);
    ctx->pc = 0x284FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FB0u;
    // 0x284fb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x284FB0u, 0x284FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FB8u;
label_284fb8:
    // 0x284fb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x284FB8u;
    {
        const bool branch_taken_0x284fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FB8u;
        // 0x284fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fb8) {
            ctx->pc = 0x284FE0u;
            goto label_284fe0;
        }
    }
    ctx->pc = 0x284FC0u;
label_284fc0:
    // 0x284fc0: 0xc0a13fe  jal         func_284FF8
    ctx->pc = 0x284FC0u;
    SET_GPR_U32(ctx, 31, 0x284FC8u);
    ctx->pc = 0x284FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FC0u;
    // 0x284fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FF8u, 0x284FC0u, 0x284FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FC8u;
label_284fc8:
    // 0x284fc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284FC8u;
    {
        const bool branch_taken_0x284fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FC8u;
        // 0x284fcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fc8) {
            ctx->pc = 0x284FE0u;
            goto label_284fe0;
        }
    }
    ctx->pc = 0x284FD0u;
    // 0x284fd0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284FD0u;
    SET_GPR_U32(ctx, 31, 0x284FD8u);
    ctx->pc = 0x284FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FD0u;
    // 0x284fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284FD0u, 0x284FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FD8u;
label_284fd8:
    // 0x284fd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x284fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x284fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_284fe0:
    // 0x284fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284fe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284fec: 0x3e00008  jr          $ra
    ctx->pc = 0x284FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FECu;
        // 0x284ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284FF4u;
    // 0x284ff4: 0x0  nop
    ctx->pc = 0x284ff4u;
    // NOP
}
