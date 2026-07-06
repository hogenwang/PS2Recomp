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

// Function: sub_001EA148
// Address: 0x1ea148 - 0x1ea208
void sub_001EA148_0x1ea148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA148_0x1ea148");
#endif

    switch (ctx->pc) {
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1e4u: goto label_1ea1e4;
        default: break;
    }

    ctx->pc = 0x1ea148u;

    // 0x1ea148: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ea148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ea14c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ea14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ea150: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ea154: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x1ea154u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ea158: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ea158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ea15c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea160: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ea160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ea164: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1ea164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1ea168: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ea168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ea16c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ea16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ea170: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ea170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ea174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ea178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ea17c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1ea17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea180: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ea180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea184: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1ea184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ea188: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ea18c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ea18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea190: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1ea190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ea194: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA194u;
    {
        const bool branch_taken_0x1ea194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA194u;
        // 0x1ea198: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea194) {
            ctx->pc = 0x1EA1A8u;
            goto label_1ea1a8;
        }
    }
    ctx->pc = 0x1EA19Cu;
    // 0x1ea19c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EA1A0u;
    {
        const bool branch_taken_0x1ea1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1a0) {
            ctx->pc = 0x1EA1D4u;
            goto label_1ea1d4;
        }
    }
    ctx->pc = 0x1EA1A8u;
label_1ea1a8:
    // 0x1ea1a8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ea1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ea1ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea1b0: 0xc07a882  jal         func_1EA208
    ctx->pc = 0x1EA1B0u;
    SET_GPR_U32(ctx, 31, 0x1EA1B8u);
    ctx->pc = 0x1EA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1B0u;
    // 0x1ea1b4: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA208u, 0x1EA1B0u, 0x1EA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1B8u;
label_1ea1b8:
    // 0x1ea1b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ea1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA1C4u;
    {
        const bool branch_taken_0x1ea1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1C4u;
        // 0x1ea1c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1c4) {
            ctx->pc = 0x1EA1E8u;
            goto label_1ea1e8;
        }
    }
    ctx->pc = 0x1EA1CCu;
    // 0x1ea1cc: 0xc07a9ca  jal         func_1EA728
    ctx->pc = 0x1EA1CCu;
    SET_GPR_U32(ctx, 31, 0x1EA1D4u);
    ctx->pc = 0x1EA728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA728u, 0x1EA1CCu, 0x1EA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1D4u;
label_1ea1d4:
    // 0x1ea1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ea1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1dc: 0xc07a95e  jal         func_1EA578
    ctx->pc = 0x1EA1DCu;
    SET_GPR_U32(ctx, 31, 0x1EA1E4u);
    ctx->pc = 0x1EA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1DCu;
    // 0x1ea1e0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA578u, 0x1EA1DCu, 0x1EA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1E4u;
label_1ea1e4:
    // 0x1ea1e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1e8:
    // 0x1ea1e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ea1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea1ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ea1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ea1f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ea1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea1f4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ea1f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ea1f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ea1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1FCu;
        // 0x1ea200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA204u;
    // 0x1ea204: 0x0  nop
    ctx->pc = 0x1ea204u;
    // NOP
}
