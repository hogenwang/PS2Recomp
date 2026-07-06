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

// Function: sub_002E5A30
// Address: 0x2e5a30 - 0x2e5ab0
void sub_002E5A30_0x2e5a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5A30_0x2e5a30");
#endif

    switch (ctx->pc) {
        case 0x2e5a58u: goto label_2e5a58;
        case 0x2e5a78u: goto label_2e5a78;
        case 0x2e5a80u: goto label_2e5a80;
        default: break;
    }

    ctx->pc = 0x2e5a30u;

    // 0x2e5a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e5a34: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e5a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e5a38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e5a3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e5a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5a44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e5a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5a4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e5a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e5a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e5a54: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e5a54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_2e5a58:
    // 0x2e5a58: 0x24030214  addiu       $v1, $zero, 0x214
    ctx->pc = 0x2e5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2e5a5c: 0x2624e3e0  addiu       $a0, $s1, -0x1C20
    ctx->pc = 0x2e5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960096));
    // 0x2e5a60: 0x2033018  mult        $a2, $s0, $v1
    ctx->pc = 0x2e5a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e5a64: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2e5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e5a68: 0x80430204  lb          $v1, 0x204($v0)
    ctx->pc = 0x2e5a68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x2e5a6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5A6Cu;
    {
        const bool branch_taken_0x2e5a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A6Cu;
        // 0x2e5a70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a6c) {
            ctx->pc = 0x2E5A8Cu;
            goto label_2e5a8c;
        }
    }
    ctx->pc = 0x2E5A74u;
    // 0x2e5a74: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2e5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_2e5a78:
    // 0x2e5a78: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2E5A78u;
    SET_GPR_U32(ctx, 31, 0x2E5A80u);
    ctx->pc = 0x2E5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A78u;
    // 0x2e5a7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2E5A78u, 0x2E5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A80u;
label_2e5a80:
    // 0x2e5a80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E5A80u;
    {
        const bool branch_taken_0x2e5a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A80u;
        // 0x2e5a84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a80) {
            ctx->pc = 0x2E5A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5a58;
        }
    }
    ctx->pc = 0x2E5A88u;
    // 0x2e5a88: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e5a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5a8c:
    // 0x2e5a8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e5a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5a94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e5a94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5a98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5a9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AA4u;
        // 0x2e5aa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5AACu;
    // 0x2e5aac: 0x0  nop
    ctx->pc = 0x2e5aacu;
    // NOP
}
