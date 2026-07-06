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

// Function: sub_0029B638
// Address: 0x29b638 - 0x29b6c0
void sub_0029B638_0x29b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B638_0x29b638");
#endif

    switch (ctx->pc) {
        case 0x29b650u: goto label_29b650;
        case 0x29b664u: goto label_29b664;
        case 0x29b678u: goto label_29b678;
        case 0x29b68cu: goto label_29b68c;
        default: break;
    }

    ctx->pc = 0x29b638u;

    // 0x29b638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b648: 0xc0a0e94  jal         func_283A50
    ctx->pc = 0x29B648u;
    SET_GPR_U32(ctx, 31, 0x29B650u);
    ctx->pc = 0x29B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B648u;
    // 0x29b64c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A50u, 0x29B648u, 0x29B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B650u;
label_29b650:
    // 0x29b650: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x29b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x29b654: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B654u;
    {
        const bool branch_taken_0x29b654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b654) {
            ctx->pc = 0x29B658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B654u;
            // 0x29b658: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B668u;
            goto label_29b668;
        }
    }
    ctx->pc = 0x29B65Cu;
    // 0x29b65c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B65Cu;
    SET_GPR_U32(ctx, 31, 0x29B664u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29B65Cu, 0x29B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B664u;
label_29b664:
    // 0x29b664: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x29b664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_29b668:
    // 0x29b668: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B668u;
    {
        const bool branch_taken_0x29b668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b668) {
            ctx->pc = 0x29B66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B668u;
            // 0x29b66c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B67Cu;
            goto label_29b67c;
        }
    }
    ctx->pc = 0x29B670u;
    // 0x29b670: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B670u;
    SET_GPR_U32(ctx, 31, 0x29B678u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29B670u, 0x29B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B678u;
label_29b678:
    // 0x29b678: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_29b67c:
    // 0x29b67c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B67Cu;
    {
        const bool branch_taken_0x29b67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b67c) {
            ctx->pc = 0x29B680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B67Cu;
            // 0x29b680: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B690u;
            goto label_29b690;
        }
    }
    ctx->pc = 0x29B684u;
    // 0x29b684: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B684u;
    SET_GPR_U32(ctx, 31, 0x29B68Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29B684u, 0x29B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B68Cu;
label_29b68c:
    // 0x29b68c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x29b68cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_29b690:
    // 0x29b690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b698: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b698u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b69c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B69Cu;
    {
        const bool branch_taken_0x29b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B69Cu;
        // 0x29b6a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b69c) {
            ctx->pc = 0x29B6B4u;
            goto label_29b6b4;
        }
    }
    ctx->pc = 0x29B6A4u;
    // 0x29b6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b6ac: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x29B6ACu;
    ctx->pc = 0x29B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6ACu;
    // 0x29b6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x29B6B4u;
label_29b6b4:
    // 0x29b6b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6B8u;
        // 0x29b6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B6C0u;
}
