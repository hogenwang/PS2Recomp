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

// Function: sub_002EB420
// Address: 0x2eb420 - 0x2eb4d8
void sub_002EB420_0x2eb420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB420_0x2eb420");
#endif

    switch (ctx->pc) {
        case 0x2eb464u: goto label_2eb464;
        case 0x2eb48cu: goto label_2eb48c;
        case 0x2eb4b4u: goto label_2eb4b4;
        case 0x2eb4d4u: goto label_2eb4d4;
        default: break;
    }

    ctx->pc = 0x2eb420u;

    // 0x2eb420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eb420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eb424: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2eb424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x2eb428: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eb428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2eb42c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eb42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eb430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb434: 0x8ca40640  lw          $a0, 0x640($a1)
    ctx->pc = 0x2eb434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2eb438: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2eb438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2eb43c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2eb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2eb440: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2eb440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2eb444: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EB444u;
    {
        const bool branch_taken_0x2eb444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB444u;
        // 0x2eb448: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb444) {
            ctx->pc = 0x2EB4C8u;
            goto label_2eb4c8;
        }
    }
    ctx->pc = 0x2EB44Cu;
    // 0x2eb44c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EB44Cu;
    {
        const bool branch_taken_0x2eb44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB44Cu;
        // 0x2eb450: 0xaca30640  sw          $v1, 0x640($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb44c) {
            ctx->pc = 0x2EB4C8u;
            goto label_2eb4c8;
        }
    }
    ctx->pc = 0x2EB454u;
    // 0x2eb454: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2eb454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2eb458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eb458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb45c: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x2eb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x2eb460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2eb464:
    // 0x2eb464: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2eb464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eb468: 0x800008  jr          $a0
    ctx->pc = 0x2EB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EB470u: goto label_2eb470;
            case 0x2EB4C8u: goto label_2eb4c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB468u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EB470u;
label_2eb470:
    // 0x2eb470: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2eb474: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x2eb474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2eb478: 0x8e042e8c  lw          $a0, 0x2E8C($s0)
    ctx->pc = 0x2eb478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11916)));
    // 0x2eb47c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2eb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2eb480: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2eb480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2eb484: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2EB484u;
    SET_GPR_U32(ctx, 31, 0x2EB48Cu);
    ctx->pc = 0x2EB488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB484u;
    // 0x2eb488: 0xae022680  sw          $v0, 0x2680($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 9856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2EB484u, 0x2EB48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB48Cu;
label_2eb48c:
    // 0x2eb48c: 0x26072680  addiu       $a3, $s0, 0x2680
    ctx->pc = 0x2eb48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 9856));
    // 0x2eb490: 0x26042648  addiu       $a0, $s0, 0x2648
    ctx->pc = 0x2eb490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9800));
    // 0x2eb494: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2eb494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb49c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2eb49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb4a0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2eb4a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb4a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2eb4a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eb4ac: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2EB4ACu;
    SET_GPR_U32(ctx, 31, 0x2EB4B4u);
    ctx->pc = 0x2EB4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4ACu;
    // 0x2eb4b0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C48u, 0x2EB4ACu, 0x2EB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4B4u;
label_2eb4b4:
    // 0x2eb4b4: 0x8e042e8c  lw          $a0, 0x2E8C($s0)
    ctx->pc = 0x2eb4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11916)));
    // 0x2eb4b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eb4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb4bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb4c0: 0x8043320  j           func_10CC80
    ctx->pc = 0x2EB4C0u;
    ctx->pc = 0x2EB4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4C0u;
    // 0x2eb4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x2EB4C8u;
label_2eb4c8:
    // 0x2eb4c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eb4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb4cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb4d0: 0x3e00008  jr          $ra
label_2eb4d4:
    if (ctx->pc == 0x2EB4D4u) {
        ctx->pc = 0x2EB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4D0u;
        // 0x2eb4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4D8u;
        goto label_fallthrough_0x2eb4d0;
    }
    ctx->pc = 0x2EB4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4D0u;
        // 0x2eb4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eb4d0:
    ctx->pc = 0x2EB4D8u;
}
