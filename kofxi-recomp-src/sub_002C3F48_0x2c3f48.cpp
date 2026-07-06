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

// Function: sub_002C3F48
// Address: 0x2c3f48 - 0x2c3fc8
void sub_002C3F48_0x2c3f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3F48_0x2c3f48");
#endif

    switch (ctx->pc) {
        case 0x2c3f5cu: goto label_2c3f5c;
        case 0x2c3f84u: goto label_2c3f84;
        case 0x2c3f94u: goto label_2c3f94;
        case 0x2c3fa4u: goto label_2c3fa4;
        default: break;
    }

    ctx->pc = 0x2c3f48u;

    // 0x2c3f48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c3f4c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c3f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c3f50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c3f54: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C3F54u;
    SET_GPR_U32(ctx, 31, 0x2C3F5Cu);
    ctx->pc = 0x2C3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F54u;
    // 0x2c3f58: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C3F54u, 0x2C3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F5Cu;
label_2c3f5c:
    // 0x2c3f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f60: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3F60u;
    {
        const bool branch_taken_0x2c3f60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F60u;
        // 0x2c3f64: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f60) {
            ctx->pc = 0x2C3F8Cu;
            goto label_2c3f8c;
        }
    }
    ctx->pc = 0x2C3F68u;
    // 0x2c3f68: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c3f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3f6c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c3f70: 0x240500da  addiu       $a1, $zero, 0xDA
    ctx->pc = 0x2c3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2c3f74: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c3f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c3f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f7c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C3F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F84u);
    ctx->pc = 0x2C3F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F7Cu;
    // 0x2c3f80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C3F7Cu, 0x2C3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F84u;
label_2c3f84:
    // 0x2c3f84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3F84u;
    {
        const bool branch_taken_0x2c3f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F84u;
        // 0x2c3f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f84) {
            ctx->pc = 0x2C3FB4u;
            goto label_2c3fb4;
        }
    }
    ctx->pc = 0x2C3F8Cu;
label_2c3f8c:
    // 0x2c3f8c: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C3F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F94u);
    ctx->pc = 0x2C3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F8Cu;
    // 0x2c3f90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BC8u, 0x2C3F8Cu, 0x2C3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F94u;
label_2c3f94:
    // 0x2c3f94: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C3F94u;
    {
        const bool branch_taken_0x2c3f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F94u;
        // 0x2c3f98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f94) {
            ctx->pc = 0x2C3F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3f84;
        }
    }
    ctx->pc = 0x2C3F9Cu;
    // 0x2c3f9c: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C3F9Cu;
    SET_GPR_U32(ctx, 31, 0x2C3FA4u);
    ctx->pc = 0x2C3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F9Cu;
    // 0x2c3fa0: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BC8u, 0x2C3F9Cu, 0x2C3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FA4u;
label_2c3fa4:
    // 0x2c3fa4: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C3FA4u;
    {
        const bool branch_taken_0x2c3fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FA4u;
        // 0x2c3fa8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fa4) {
            ctx->pc = 0x2C3F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3f84;
        }
    }
    ctx->pc = 0x2C3FACu;
    // 0x2c3fac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2c3facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2c3fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3fb4:
    // 0x2c3fb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3fb8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c3fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FBCu;
        // 0x2c3fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3FC4u;
    // 0x2c3fc4: 0x0  nop
    ctx->pc = 0x2c3fc4u;
    // NOP
    if (ctx->pc == 0x2c3fc4u) { ctx->pc = 0x2c3fc8u; }
}
