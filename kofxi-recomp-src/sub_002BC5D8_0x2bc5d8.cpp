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

// Function: sub_002BC5D8
// Address: 0x2bc5d8 - 0x2bc658
void sub_002BC5D8_0x2bc5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC5D8_0x2bc5d8");
#endif

    switch (ctx->pc) {
        case 0x2bc600u: goto label_2bc600;
        case 0x2bc640u: goto label_2bc640;
        default: break;
    }

    ctx->pc = 0x2bc5d8u;

    // 0x2bc5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc5e4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BC5E4u;
    {
        const bool branch_taken_0x2bc5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5E4u;
        // 0x2bc5e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5e4) {
            ctx->pc = 0x2BC614u;
            goto label_2bc614;
        }
    }
    ctx->pc = 0x2BC5ECu;
    // 0x2bc5ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2bc5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc5f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC5F0u;
    {
        const bool branch_taken_0x2bc5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5f0) {
            ctx->pc = 0x2BC5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC5F0u;
            // 0x2bc5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC604u;
            goto label_2bc604;
        }
    }
    ctx->pc = 0x2BC5F8u;
    // 0x2bc5f8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2BC5F8u;
    SET_GPR_U32(ctx, 31, 0x2BC600u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BC5F8u, 0x2BC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC600u;
label_2bc600:
    // 0x2bc600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc604:
    // 0x2bc604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc60c: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2BC60Cu;
    ctx->pc = 0x2BC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC60Cu;
    // 0x2bc610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2BC614u;
label_2bc614:
    // 0x2bc614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc61c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC61Cu;
        // 0x2bc620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC624u;
    // 0x2bc624: 0x0  nop
    ctx->pc = 0x2bc624u;
    // NOP
    // 0x2bc628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc62c: 0x24020301  addiu       $v0, $zero, 0x301
    ctx->pc = 0x2bc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x2bc630: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC630u;
    {
        const bool branch_taken_0x2bc630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC630u;
        // 0x2bc634: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc630) {
            ctx->pc = 0x2BC648u;
            goto label_2bc648;
        }
    }
    ctx->pc = 0x2BC638u;
    // 0x2bc638: 0xc0af196  jal         func_2BC658
    ctx->pc = 0x2BC638u;
    SET_GPR_U32(ctx, 31, 0x2BC640u);
    ctx->pc = 0x2BC658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC658u, 0x2BC638u, 0x2BC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC640u;
label_2bc640:
    // 0x2bc640: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC640u;
    {
        const bool branch_taken_0x2bc640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC640u;
        // 0x2bc644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc640) {
            ctx->pc = 0x2BC650u;
            goto label_2bc650;
        }
    }
    ctx->pc = 0x2BC648u;
label_2bc648:
    // 0x2bc648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc650:
    // 0x2bc650: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC650u;
        // 0x2bc654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC658u;
}
