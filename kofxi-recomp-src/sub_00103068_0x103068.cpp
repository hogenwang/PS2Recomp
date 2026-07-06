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

// Function: sub_00103068
// Address: 0x103068 - 0x103168
void sub_00103068_0x103068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103068_0x103068");
#endif

    switch (ctx->pc) {
        case 0x1030a4u: goto label_1030a4;
        case 0x103108u: goto label_103108;
        default: break;
    }

    ctx->pc = 0x103068u;

    // 0x103068: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10306c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103070: 0x34423810  ori         $v0, $v0, 0x3810
    ctx->pc = 0x103070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14352);
    // 0x103074: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103078: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x103078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10307c: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x10307cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x103080: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x103080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x103084: 0x3e00008  jr          $ra
    ctx->pc = 0x103084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103084u;
        // 0x103088: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10308Cu;
    // 0x10308c: 0x0  nop
    ctx->pc = 0x10308cu;
    // NOP
    // 0x103090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10309c: 0xc040c5a  jal         func_103168
    ctx->pc = 0x10309Cu;
    SET_GPR_U32(ctx, 31, 0x1030A4u);
    ctx->pc = 0x1030A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10309Cu;
    // 0x1030a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103168u, 0x10309Cu, 0x1030A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030A4u;
label_1030a4:
    // 0x1030a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1030A4u;
    {
        const bool branch_taken_0x1030a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A4u;
        // 0x1030a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030a4) {
            ctx->pc = 0x1030B4u;
            goto label_1030b4;
        }
    }
    ctx->pc = 0x1030ACu;
    // 0x1030ac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1030ACu;
    {
        const bool branch_taken_0x1030ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1030ac) {
            ctx->pc = 0x1030BCu;
            goto label_1030bc;
        }
    }
    ctx->pc = 0x1030B4u;
label_1030b4:
    // 0x1030b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1030B4u;
    {
        const bool branch_taken_0x1030b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030B4u;
        // 0x1030b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030b4) {
            ctx->pc = 0x1030E8u;
            goto label_1030e8;
        }
    }
    ctx->pc = 0x1030BCu;
label_1030bc:
    // 0x1030bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1030BCu;
    {
        const bool branch_taken_0x1030bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1030C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030BCu;
        // 0x1030c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030bc) {
            ctx->pc = 0x1030CCu;
            goto label_1030cc;
        }
    }
    ctx->pc = 0x1030C4u;
    // 0x1030c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1030C4u;
    {
        const bool branch_taken_0x1030c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030C4u;
        // 0x1030c8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030c4) {
            ctx->pc = 0x1030DCu;
            goto label_1030dc;
        }
    }
    ctx->pc = 0x1030CCu;
label_1030cc:
    // 0x1030cc: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1030CCu;
    {
        const bool branch_taken_0x1030cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1030D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030CCu;
        // 0x1030d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030cc) {
            ctx->pc = 0x1030E8u;
            goto label_1030e8;
        }
    }
    ctx->pc = 0x1030D4u;
    // 0x1030d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1030d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1030d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1030d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1030dc:
    // 0x1030dc: 0x34423810  ori         $v0, $v0, 0x3810
    ctx->pc = 0x1030dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14352);
    // 0x1030e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1030e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1030e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1030e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1030e8:
    // 0x1030e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1030e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1030ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1030ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1030f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1030F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1030F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F0u;
        // 0x1030f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1030F8u;
    // 0x1030f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1030fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1030fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103100: 0xc040c5a  jal         func_103168
    ctx->pc = 0x103100u;
    SET_GPR_U32(ctx, 31, 0x103108u);
    ctx->pc = 0x103168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103168u, 0x103100u, 0x103108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103108u;
label_103108:
    // 0x103108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10310c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10310Cu;
    {
        const bool branch_taken_0x10310c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x103110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10310Cu;
        // 0x103110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10310c) {
            ctx->pc = 0x103128u;
            goto label_103128;
        }
    }
    ctx->pc = 0x103114u;
    // 0x103114: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103118: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10311c: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x10311cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x103120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103124: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x103124u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
label_103128:
    // 0x103128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10312c: 0x3e00008  jr          $ra
    ctx->pc = 0x10312Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10312Cu;
        // 0x103130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10312Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103134u;
    // 0x103134: 0x0  nop
    ctx->pc = 0x103134u;
    // NOP
    // 0x103138: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x103138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10313c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x10313cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x103140: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x103140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x103144: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103148: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x103148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10314c: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x10314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x103150: 0x3e00008  jr          $ra
    ctx->pc = 0x103150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103150u;
        // 0x103154: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103158u;
    // 0x103158: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10315c: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x10315cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x103160: 0x3e00008  jr          $ra
    ctx->pc = 0x103160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103160u;
        // 0x103164: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103168u;
}
