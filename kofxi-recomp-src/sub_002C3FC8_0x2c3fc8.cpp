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

// Function: sub_002C3FC8
// Address: 0x2c3fc8 - 0x2c4088
void sub_002C3FC8_0x2c3fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3FC8_0x2c3fc8");
#endif

    switch (ctx->pc) {
        case 0x2c3fdcu: goto label_2c3fdc;
        case 0x2c4004u: goto label_2c4004;
        case 0x2c4014u: goto label_2c4014;
        case 0x2c4024u: goto label_2c4024;
        case 0x2c4034u: goto label_2c4034;
        case 0x2c4048u: goto label_2c4048;
        case 0x2c4058u: goto label_2c4058;
        default: break;
    }

    ctx->pc = 0x2c3fc8u;

    // 0x2c3fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c3fcc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c3fd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c3fd4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C3FD4u;
    SET_GPR_U32(ctx, 31, 0x2C3FDCu);
    ctx->pc = 0x2C3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FD4u;
    // 0x2c3fd8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C3FD4u, 0x2C3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FDCu;
label_2c3fdc:
    // 0x2c3fdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fe0: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3FE0u;
    {
        const bool branch_taken_0x2c3fe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FE0u;
        // 0x2c3fe4: 0x240200da  addiu       $v0, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fe0) {
            ctx->pc = 0x2C400Cu;
            goto label_2c400c;
        }
    }
    ctx->pc = 0x2C3FE8u;
    // 0x2c3fe8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c3fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3fec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c3ff0: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x2c3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x2c3ff4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c3ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c3ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ffc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C3FFCu;
    SET_GPR_U32(ctx, 31, 0x2C4004u);
    ctx->pc = 0x2C4000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FFCu;
    // 0x2c4000: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C3FFCu, 0x2C4004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4004u;
label_2c4004:
    // 0x2c4004: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4004u;
    {
        const bool branch_taken_0x2c4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4004u;
        // 0x2c4008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4004) {
            ctx->pc = 0x2C4074u;
            goto label_2c4074;
        }
    }
    ctx->pc = 0x2C400Cu;
label_2c400c:
    // 0x2c400c: 0xc0b09ee  jal         func_2C27B8
    ctx->pc = 0x2C400Cu;
    SET_GPR_U32(ctx, 31, 0x2C4014u);
    ctx->pc = 0x2C4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C400Cu;
    // 0x2c4010: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C27B8u, 0x2C400Cu, 0x2C4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4014u;
label_2c4014:
    // 0x2c4014: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C4014u;
    {
        const bool branch_taken_0x2c4014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4014u;
        // 0x2c4018: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4014) {
            ctx->pc = 0x2C4004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4004;
        }
    }
    ctx->pc = 0x2C401Cu;
    // 0x2c401c: 0xc0a0938  jal         func_2824E0
    ctx->pc = 0x2C401Cu;
    SET_GPR_U32(ctx, 31, 0x2C4024u);
    ctx->pc = 0x2824E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2824E0u, 0x2C401Cu, 0x2C4024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4024u;
label_2c4024:
    // 0x2c4024: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C4024u;
    {
        const bool branch_taken_0x2c4024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4024u;
        // 0x2c4028: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4024) {
            ctx->pc = 0x2C4004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4004;
        }
    }
    ctx->pc = 0x2C402Cu;
    // 0x2c402c: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C402Cu;
    SET_GPR_U32(ctx, 31, 0x2C4034u);
    ctx->pc = 0x2C4030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C402Cu;
    // 0x2c4030: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BC8u, 0x2C402Cu, 0x2C4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4034u;
label_2c4034:
    // 0x2c4034: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C4034u;
    {
        const bool branch_taken_0x2c4034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4034u;
        // 0x2c4038: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4034) {
            ctx->pc = 0x2C4004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4004;
        }
    }
    ctx->pc = 0x2C403Cu;
    // 0x2c403c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c403cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c4040: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2C4040u;
    SET_GPR_U32(ctx, 31, 0x2C4048u);
    ctx->pc = 0x2C4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4040u;
    // 0x2c4044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2C4040u, 0x2C4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4048u;
label_2c4048:
    // 0x2c4048: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C4048u;
    {
        const bool branch_taken_0x2c4048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4048u;
        // 0x2c404c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4048) {
            ctx->pc = 0x2C4004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4004;
        }
    }
    ctx->pc = 0x2C4050u;
    // 0x2c4050: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2C4050u;
    SET_GPR_U32(ctx, 31, 0x2C4058u);
    ctx->pc = 0x2C4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4050u;
    // 0x2c4054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2C4050u, 0x2C4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4058u;
label_2c4058:
    // 0x2c4058: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C4058u;
    {
        const bool branch_taken_0x2c4058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4058u;
        // 0x2c405c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4058) {
            ctx->pc = 0x2C4004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4004;
        }
    }
    ctx->pc = 0x2C4060u;
    // 0x2c4060: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c4060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c4064: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2c4064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2c4068: 0x24634278  addiu       $v1, $v1, 0x4278
    ctx->pc = 0x2c4068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17016));
    // 0x2c406c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c406cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4070: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2c4070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_2c4074:
    // 0x2c4074: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4078: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c4078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c407c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C407Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C407Cu;
        // 0x2c4080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C407Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4084u;
    // 0x2c4084: 0x0  nop
    ctx->pc = 0x2c4084u;
    // NOP
    if (ctx->pc == 0x2c4084u) { ctx->pc = 0x2c4088u; }
}
