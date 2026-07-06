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

// Function: sub_001D9F60
// Address: 0x1d9f60 - 0x1d9fd8
void sub_001D9F60_0x1d9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F60_0x1d9f60");
#endif

    switch (ctx->pc) {
        case 0x1d9f84u: goto label_1d9f84;
        default: break;
    }

    ctx->pc = 0x1d9f60u;

    // 0x1d9f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9f70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9f78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d9f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9f7c: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F84u);
    ctx->pc = 0x1D9F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F7Cu;
    // 0x1d9f80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1D9F7Cu, 0x1D9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F84u;
label_1d9f84:
    // 0x1d9f84: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9F8Cu;
    {
        const bool branch_taken_0x1d9f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F8Cu;
        // 0x1d9f90: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f8c) {
            ctx->pc = 0x1D9FB0u;
            goto label_1d9fb0;
        }
    }
    ctx->pc = 0x1D9F94u;
    // 0x1d9f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9fa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9fa4: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9FA4u;
    ctx->pc = 0x1D9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FA4u;
    // 0x1d9fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9FACu;
    // 0x1d9fac: 0x0  nop
    ctx->pc = 0x1d9facu;
    // NOP
label_1d9fb0:
    // 0x1d9fb0: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x1d9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1d9fb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9fb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d9fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9fc0: 0x8e0402d4  lw          $a0, 0x2D4($s0)
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1d9fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9fc8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1d9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1d9fcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FD0u;
        // 0x1d9fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9FD8u;
}
