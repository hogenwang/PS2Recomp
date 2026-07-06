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

// Function: sub_001F7FC8
// Address: 0x1f7fc8 - 0x1f8068
void sub_001F7FC8_0x1f7fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7FC8_0x1f7fc8");
#endif

    switch (ctx->pc) {
        case 0x1f7fe4u: goto label_1f7fe4;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f8008u: goto label_1f8008;
        case 0x1f801cu: goto label_1f801c;
        case 0x1f8024u: goto label_1f8024;
        case 0x1f8034u: goto label_1f8034;
        case 0x1f8040u: goto label_1f8040;
        default: break;
    }

    ctx->pc = 0x1f7fc8u;

    // 0x1f7fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7fcc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f7fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7fdc: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7FDCu;
    SET_GPR_U32(ctx, 31, 0x1F7FE4u);
    ctx->pc = 0x1F7FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FDCu;
    // 0x1f7fe0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7FDCu, 0x1F7FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FE4u;
label_1f7fe4:
    // 0x1f7fe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7FE4u;
    {
        const bool branch_taken_0x1f7fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FE4u;
        // 0x1f7fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fe4) {
            ctx->pc = 0x1F7FFCu;
            goto label_1f7ffc;
        }
    }
    ctx->pc = 0x1F7FECu;
    // 0x1f7fec: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1F7FECu;
    SET_GPR_U32(ctx, 31, 0x1F7FF4u);
    ctx->pc = 0x1F7FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FECu;
    // 0x1f7ff0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA20u, 0x1F7FECu, 0x1F7FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF4u;
label_1f7ff4:
    // 0x1f7ff4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7FF4u;
    {
        const bool branch_taken_0x1f7ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FF4u;
        // 0x1f7ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ff4) {
            ctx->pc = 0x1F8050u;
            goto label_1f8050;
        }
    }
    ctx->pc = 0x1F7FFCu;
label_1f7ffc:
    // 0x1f7ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8000: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F8000u;
    SET_GPR_U32(ctx, 31, 0x1F8008u);
    ctx->pc = 0x1F8004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8000u;
    // 0x1f8004: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F8000u, 0x1F8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8008u;
label_1f8008:
    // 0x1f8008: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8008u;
    {
        const bool branch_taken_0x1f8008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8008u;
        // 0x1f800c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8008) {
            ctx->pc = 0x1F8030u;
            goto label_1f8030;
        }
    }
    ctx->pc = 0x1F8010u;
    // 0x1f8010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8014: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1F8014u;
    SET_GPR_U32(ctx, 31, 0x1F801Cu);
    ctx->pc = 0x1F8018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8014u;
    // 0x1f8018: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA20u, 0x1F8014u, 0x1F801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F801Cu;
label_1f801c:
    // 0x1f801c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F801Cu;
    {
        const bool branch_taken_0x1f801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F801Cu;
        // 0x1f8020: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f801c) {
            ctx->pc = 0x1F8030u;
            goto label_1f8030;
        }
    }
    ctx->pc = 0x1F8024u;
label_1f8024:
    // 0x1f8024: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F8024u;
    {
        const bool branch_taken_0x1f8024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8024u;
        // 0x1f8028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8024) {
            ctx->pc = 0x1F8050u;
            goto label_1f8050;
        }
    }
    ctx->pc = 0x1F802Cu;
    // 0x1f802c: 0x0  nop
    ctx->pc = 0x1f802cu;
    // NOP
label_1f8030:
    // 0x1f8030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8034:
    // 0x1f8034: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f8038: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1F8038u;
    SET_GPR_U32(ctx, 31, 0x1F8040u);
    ctx->pc = 0x1F803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8038u;
    // 0x1f803c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1F8038u, 0x1F8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8040u;
label_1f8040:
    // 0x1f8040: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F8040u;
    {
        const bool branch_taken_0x1f8040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8040u;
        // 0x1f8044: 0x2e030008  sltiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8040) {
            ctx->pc = 0x1F8024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8024;
        }
    }
    ctx->pc = 0x1F8048u;
    // 0x1f8048: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F8048u;
    {
        const bool branch_taken_0x1f8048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8048u;
        // 0x1f804c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8048) {
            ctx->pc = 0x1F8034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8034;
        }
    }
    ctx->pc = 0x1F8050u;
label_1f8050:
    // 0x1f8050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f805c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F805Cu;
        // 0x1f8060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F805Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8064u;
    // 0x1f8064: 0x0  nop
    ctx->pc = 0x1f8064u;
    // NOP
    if (ctx->pc == 0x1f8064u) { ctx->pc = 0x1f8068u; }
}
