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

// Function: sub_00283760
// Address: 0x283760 - 0x2837e8
void sub_00283760_0x283760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283760_0x283760");
#endif

    switch (ctx->pc) {
        case 0x283798u: goto label_283798;
        case 0x2837d0u: goto label_2837d0;
        default: break;
    }

    ctx->pc = 0x283760u;

    // 0x283760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283764: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28376c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28376cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283778: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x283778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28377c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x283780: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x283780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283784: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x283784u;
    {
        const bool branch_taken_0x283784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283784) {
            ctx->pc = 0x283788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283784u;
            // 0x283788: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2837A8u;
            goto label_2837a8;
        }
    }
    ctx->pc = 0x28378Cu;
    // 0x28378c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x28378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x283790: 0xc0a0e14  jal         func_283850
    ctx->pc = 0x283790u;
    SET_GPR_U32(ctx, 31, 0x283798u);
    ctx->pc = 0x283794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283790u;
    // 0x283794: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283850u, 0x283790u, 0x283798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283798u;
label_283798:
    // 0x283798: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x283798u;
    {
        const bool branch_taken_0x283798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283798u;
        // 0x28379c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283798) {
            ctx->pc = 0x2837D8u;
            goto label_2837d8;
        }
    }
    ctx->pc = 0x2837A0u;
    // 0x2837a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2837a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2837a4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2837a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_2837a8:
    // 0x2837a8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2837a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2837ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2837acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2837b0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2837b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2837b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2837b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2837b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2837b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2837bc: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x2837bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2837c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2837c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2837c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2837c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2837c8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2837C8u;
    SET_GPR_U32(ctx, 31, 0x2837D0u);
    ctx->pc = 0x2837CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837C8u;
    // 0x2837cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2837C8u, 0x2837D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837D0u;
label_2837d0:
    // 0x2837d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2837d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2837d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2837d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2837d8:
    // 0x2837d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2837d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2837dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2837dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2837e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2837E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837E0u;
        // 0x2837e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2837E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2837E8u;
}
