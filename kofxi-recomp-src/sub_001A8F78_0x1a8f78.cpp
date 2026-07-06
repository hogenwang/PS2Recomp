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

// Function: sub_001A8F78
// Address: 0x1a8f78 - 0x1a9008
void sub_001A8F78_0x1a8f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8F78_0x1a8f78");
#endif

    switch (ctx->pc) {
        case 0x1a8fa0u: goto label_1a8fa0;
        case 0x1a8fbcu: goto label_1a8fbc;
        case 0x1a8fecu: goto label_1a8fec;
        default: break;
    }

    ctx->pc = 0x1a8f78u;

    // 0x1a8f78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a8f7c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a8f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1a8f80: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a8f84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a8f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f88: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a8f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1a8f8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a8f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a8f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a8f94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a8f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a8f98: 0xc06a3b0  jal         func_1A8EC0
    ctx->pc = 0x1A8F98u;
    SET_GPR_U32(ctx, 31, 0x1A8FA0u);
    ctx->pc = 0x1A8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F98u;
    // 0x1a8f9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EC0u, 0x1A8F98u, 0x1A8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FA0u;
label_1a8fa0:
    // 0x1a8fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fa4: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8FA4u;
    {
        const bool branch_taken_0x1a8fa4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA4u;
        // 0x1a8fa8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fa4) {
            ctx->pc = 0x1A8FC4u;
            goto label_1a8fc4;
        }
    }
    ctx->pc = 0x1A8FACu;
    // 0x1a8fac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a8fb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a8fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fb4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A8FB4u;
    SET_GPR_U32(ctx, 31, 0x1A8FBCu);
    ctx->pc = 0x1A8FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FB4u;
    // 0x1a8fb8: 0x24846a08  addiu       $a0, $a0, 0x6A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A8FB4u, 0x1A8FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FBCu;
label_1a8fbc:
    // 0x1a8fbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A8FBCu;
    {
        const bool branch_taken_0x1a8fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FBCu;
        // 0x1a8fc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fbc) {
            ctx->pc = 0x1A8FECu;
            goto label_1a8fec;
        }
    }
    ctx->pc = 0x1A8FC4u;
label_1a8fc4:
    // 0x1a8fc4: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1a8fc4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1a8fc8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1a8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1a8fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a8fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fd4: 0x256b8e98  addiu       $t3, $t3, -0x7168
    ctx->pc = 0x1a8fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294938264));
    // 0x1a8fd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8fdc: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a8fe0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1a8fe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fe4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1A8FE4u;
    SET_GPR_U32(ctx, 31, 0x1A8FECu);
    ctx->pc = 0x1A8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FE4u;
    // 0x1a8fe8: 0x240a1000  addiu       $t2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1A8FE4u, 0x1A8FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FECu;
label_1a8fec:
    // 0x1a8fec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8ff0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a8ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8ff4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a8ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8ff8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a8ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8ffc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a8ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9000: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9000u;
        // 0x1a9004: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9008u;
}
