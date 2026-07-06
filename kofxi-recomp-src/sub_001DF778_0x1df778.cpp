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

// Function: sub_001DF778
// Address: 0x1df778 - 0x1df830
void sub_001DF778_0x1df778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF778_0x1df778");
#endif

    switch (ctx->pc) {
        case 0x1df7e0u: goto label_1df7e0;
        case 0x1df7e8u: goto label_1df7e8;
        case 0x1df804u: goto label_1df804;
        default: break;
    }

    ctx->pc = 0x1df778u;

    // 0x1df778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1df780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df788: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1df788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df78c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1df78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1df790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df798: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1df79c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1df79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1df7a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF7A0u;
    {
        const bool branch_taken_0x1df7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7A0u;
        // 0x1df7a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7a0) {
            ctx->pc = 0x1DF7B8u;
            goto label_1df7b8;
        }
    }
    ctx->pc = 0x1DF7A8u;
    // 0x1df7a8: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DF7A8u;
    {
        const bool branch_taken_0x1df7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7a8) {
            ctx->pc = 0x1DF7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF7A8u;
            // 0x1df7ac: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF7B0u;
    // 0x1df7b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF7B0u;
    {
        const bool branch_taken_0x1df7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B0u;
        // 0x1df7b4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7b0) {
            ctx->pc = 0x1DF7D8u;
            goto label_1df7d8;
        }
    }
    ctx->pc = 0x1DF7B8u;
label_1df7b8:
    // 0x1df7b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1df7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df7bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF7BCu;
    {
        const bool branch_taken_0x1df7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7BCu;
        // 0x1df7c0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7bc) {
            ctx->pc = 0x1DF7D8u;
            goto label_1df7d8;
        }
    }
    ctx->pc = 0x1DF7C4u;
    // 0x1df7c4: 0x80a2006c  lb          $v0, 0x6C($a1)
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x1df7c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF7C8u;
    {
        const bool branch_taken_0x1df7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7c8) {
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF7D0u;
    // 0x1df7d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF7D0u;
    {
        const bool branch_taken_0x1df7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7D0u;
        // 0x1df7d4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7d0) {
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF7D8u;
label_1df7d8:
    // 0x1df7d8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DF7D8u;
    SET_GPR_U32(ctx, 31, 0x1DF7E0u);
    ctx->pc = 0x1DF7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7D8u;
    // 0x1df7dc: 0x2484caf8  addiu       $a0, $a0, -0x3508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DF7D8u, 0x1DF7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7E0u;
label_1df7e0:
    // 0x1df7e0: 0xc0782a4  jal         func_1E0A90
    ctx->pc = 0x1DF7E0u;
    SET_GPR_U32(ctx, 31, 0x1DF7E8u);
    ctx->pc = 0x1E0A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0A90u, 0x1DF7E0u, 0x1DF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7E8u;
label_1df7e8:
    // 0x1df7e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df7f0: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF7F0u;
            // 0x1df7f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF814u;
            goto label_1df814;
        }
    }
    ctx->pc = 0x1DF7F8u;
    // 0x1df7f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7fc: 0xc080bca  jal         func_202F28
    ctx->pc = 0x1DF7FCu;
    SET_GPR_U32(ctx, 31, 0x1DF804u);
    ctx->pc = 0x1DF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7FCu;
    // 0x1df800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202F28u, 0x1DF7FCu, 0x1DF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF804u;
label_1df804:
    // 0x1df804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df808: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1df808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1df80c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1df80cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1df810: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1df810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df814:
    // 0x1df814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df81c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df81cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df820: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1df820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df828: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF828u;
        // 0x1df82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF830u;
}
