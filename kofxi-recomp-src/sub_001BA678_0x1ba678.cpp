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

// Function: sub_001BA678
// Address: 0x1ba678 - 0x1ba710
void sub_001BA678_0x1ba678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA678_0x1ba678");
#endif

    switch (ctx->pc) {
        case 0x1ba6c4u: goto label_1ba6c4;
        case 0x1ba6ecu: goto label_1ba6ec;
        case 0x1ba6f4u: goto label_1ba6f4;
        case 0x1ba6fcu: goto label_1ba6fc;
        default: break;
    }

    ctx->pc = 0x1ba678u;

    // 0x1ba678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba67c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ba67cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba680: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA680u;
    {
        const bool branch_taken_0x1ba680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA680u;
        // 0x1ba684: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba680) {
            ctx->pc = 0x1BA6A0u;
            goto label_1ba6a0;
        }
    }
    ctx->pc = 0x1BA688u;
    // 0x1ba688: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba690: 0x24848418  addiu       $a0, $a0, -0x7BE8
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935576));
    // 0x1ba694: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BA694u;
    ctx->pc = 0x1BA698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA694u;
    // 0x1ba698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA69Cu;
    // 0x1ba69c: 0x0  nop
    ctx->pc = 0x1ba69cu;
    // NOP
label_1ba6a0:
    // 0x1ba6a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ba6a4: 0xa465003e  sh          $a1, 0x3E($v1)
    ctx->pc = 0x1ba6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ba6a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA6A8u;
    {
        const bool branch_taken_0x1ba6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6A8u;
        // 0x1ba6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6a8) {
            ctx->pc = 0x1BA6C4u;
            goto label_1ba6c4;
        }
    }
    ctx->pc = 0x1BA6B0u;
    // 0x1ba6b0: 0x8466003c  lh          $a2, 0x3C($v1)
    ctx->pc = 0x1ba6b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1ba6b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1ba6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1ba6b8: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1ba6b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1ba6bc: 0xc06de5a  jal         func_1B7968
    ctx->pc = 0x1BA6BCu;
    SET_GPR_U32(ctx, 31, 0x1BA6C4u);
    ctx->pc = 0x1BA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6BCu;
    // 0x1ba6c0: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7968u, 0x1BA6BCu, 0x1BA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6C4u;
label_1ba6c4:
    // 0x1ba6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6C8u;
        // 0x1ba6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA6D0u;
    // 0x1ba6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6D0u;
        // 0x1ba6d4: 0x8482003e  lh          $v0, 0x3E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA6D8u;
    // 0x1ba6d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba6dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba6e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba6e4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA6E4u;
    SET_GPR_U32(ctx, 31, 0x1BA6ECu);
    ctx->pc = 0x1BA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6E4u;
    // 0x1ba6e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA6E4u, 0x1BA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6ECu;
label_1ba6ec:
    // 0x1ba6ec: 0xc06e9c4  jal         func_1BA710
    ctx->pc = 0x1BA6ECu;
    SET_GPR_U32(ctx, 31, 0x1BA6F4u);
    ctx->pc = 0x1BA6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6ECu;
    // 0x1ba6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA710u, 0x1BA6ECu, 0x1BA6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6F4u;
label_1ba6f4:
    // 0x1ba6f4: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BA6F4u;
    SET_GPR_U32(ctx, 31, 0x1BA6FCu);
    ctx->pc = 0x1BA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6F4u;
    // 0x1ba6f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BA6F4u, 0x1BA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6FCu;
label_1ba6fc:
    // 0x1ba6fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba700: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba708: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA708u;
        // 0x1ba70c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA710u;
}
