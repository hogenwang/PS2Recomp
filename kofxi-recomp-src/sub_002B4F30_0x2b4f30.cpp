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

// Function: sub_002B4F30
// Address: 0x2b4f30 - 0x2b4fb8
void sub_002B4F30_0x2b4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4F30_0x2b4f30");
#endif

    switch (ctx->pc) {
        case 0x2b4f58u: goto label_2b4f58;
        case 0x2b4f8cu: goto label_2b4f8c;
        case 0x2b4fa4u: goto label_2b4fa4;
        default: break;
    }

    ctx->pc = 0x2b4f30u;

    // 0x2b4f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4f34: 0x24051160  addiu       $a1, $zero, 0x1160
    ctx->pc = 0x2b4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4448));
    // 0x2b4f38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b4f3c: 0x24061161  addiu       $a2, $zero, 0x1161
    ctx->pc = 0x2b4f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4449));
    // 0x2b4f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4f48: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b4f4c: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x2b4f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b4f50: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2B4F50u;
    SET_GPR_U32(ctx, 31, 0x2B4F58u);
    ctx->pc = 0x2B4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F50u;
    // 0x2b4f54: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD260u, 0x2B4F50u, 0x2B4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F58u;
label_2b4f58:
    // 0x2b4f58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4f60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4F60u;
    {
        const bool branch_taken_0x2b4f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F60u;
        // 0x2b4f64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f60) {
            ctx->pc = 0x2B4F78u;
            goto label_2b4f78;
        }
    }
    ctx->pc = 0x2B4F68u;
    // 0x2b4f68: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2b4f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b4f6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b4f6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4f70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B4F70u;
    {
        const bool branch_taken_0x2b4f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F70u;
        // 0x2b4f74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f70) {
            ctx->pc = 0x2B4FB0u;
            goto label_2b4fb0;
        }
    }
    ctx->pc = 0x2B4F78u;
label_2b4f78:
    // 0x2b4f78: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B4F78u;
    {
        const bool branch_taken_0x2b4f78 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F78u;
        // 0x2b4f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f78) {
            ctx->pc = 0x2B4FA4u;
            goto label_2b4fa4;
        }
    }
    ctx->pc = 0x2B4F80u;
    // 0x2b4f80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4f84: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4F84u;
    SET_GPR_U32(ctx, 31, 0x2B4F8Cu);
    ctx->pc = 0x2B4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F84u;
    // 0x2b4f88: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B4F84u, 0x2B4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F8Cu;
label_2b4f8c:
    // 0x2b4f8c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4f90: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x2b4f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2b4f94: 0x2406009f  addiu       $a2, $zero, 0x9F
    ctx->pc = 0x2b4f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x2b4f98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f9c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4F9Cu;
    SET_GPR_U32(ctx, 31, 0x2B4FA4u);
    ctx->pc = 0x2B4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F9Cu;
    // 0x2b4fa0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B4F9Cu, 0x2B4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4FA4u;
label_2b4fa4:
    // 0x2b4fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4fac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4fb0:
    // 0x2b4fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FB0u;
        // 0x2b4fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FB8u;
}
