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

// Function: sub_0022C328
// Address: 0x22c328 - 0x22c3c8
void sub_0022C328_0x22c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C328_0x22c328");
#endif

    switch (ctx->pc) {
        case 0x22c350u: goto label_22c350;
        case 0x22c380u: goto label_22c380;
        case 0x22c390u: goto label_22c390;
        case 0x22c3a0u: goto label_22c3a0;
        case 0x22c3b0u: goto label_22c3b0;
        default: break;
    }

    ctx->pc = 0x22c328u;

    // 0x22c328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c32c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22c32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22c330: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22c334: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22c338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c33c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22c33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c340: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22c344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22c344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c348: 0xc08b052  jal         func_22C148
    ctx->pc = 0x22C348u;
    SET_GPR_U32(ctx, 31, 0x22C350u);
    ctx->pc = 0x22C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C348u;
    // 0x22c34c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C148u, 0x22C348u, 0x22C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C350u;
label_22c350:
    // 0x22c350: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x22c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22c354: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x22c354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x22c358: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x22c358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x22c35c: 0x2cc30038  sltiu       $v1, $a2, 0x38
    ctx->pc = 0x22c35cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
    // 0x22c360: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C360u;
    {
        const bool branch_taken_0x22c360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C360u;
        // 0x22c364: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c360) {
            ctx->pc = 0x22C36Cu;
            goto label_22c36c;
        }
    }
    ctx->pc = 0x22C368u;
    // 0x22c368: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x22c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_22c36c:
    // 0x22c36c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x22c36cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22c370: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x22c370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x22c374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c378: 0xc08b08e  jal         func_22C238
    ctx->pc = 0x22C378u;
    SET_GPR_U32(ctx, 31, 0x22C380u);
    ctx->pc = 0x22C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C378u;
    // 0x22c37c: 0x24a545e8  addiu       $a1, $a1, 0x45E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x22C378u, 0x22C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C380u;
label_22c380:
    // 0x22c380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c384: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22c384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c388: 0xc08b08e  jal         func_22C238
    ctx->pc = 0x22C388u;
    SET_GPR_U32(ctx, 31, 0x22C390u);
    ctx->pc = 0x22C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C388u;
    // 0x22c38c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x22C388u, 0x22C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C390u;
label_22c390:
    // 0x22c390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22c394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c398: 0xc08b052  jal         func_22C148
    ctx->pc = 0x22C398u;
    SET_GPR_U32(ctx, 31, 0x22C3A0u);
    ctx->pc = 0x22C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C398u;
    // 0x22c39c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C148u, 0x22C398u, 0x22C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3A0u;
label_22c3a0:
    // 0x22c3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c3a8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x22C3A8u;
    SET_GPR_U32(ctx, 31, 0x22C3B0u);
    ctx->pc = 0x22C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3A8u;
    // 0x22c3ac: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x22C3A8u, 0x22C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3B0u;
label_22c3b0:
    // 0x22c3b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c3b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22c3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c3b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22c3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3BCu;
        // 0x22c3c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C3C4u;
    // 0x22c3c4: 0x0  nop
    ctx->pc = 0x22c3c4u;
    // NOP
}
