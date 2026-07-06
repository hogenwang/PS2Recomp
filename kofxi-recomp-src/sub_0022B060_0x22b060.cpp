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

// Function: sub_0022B060
// Address: 0x22b060 - 0x22b158
void sub_0022B060_0x22b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B060_0x22b060");
#endif

    switch (ctx->pc) {
        case 0x22b0a8u: goto label_22b0a8;
        case 0x22b0b0u: goto label_22b0b0;
        case 0x22b0ccu: goto label_22b0cc;
        case 0x22b0e8u: goto label_22b0e8;
        case 0x22b0f8u: goto label_22b0f8;
        case 0x22b124u: goto label_22b124;
        default: break;
    }

    ctx->pc = 0x22b060u;

    // 0x22b060: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22b064: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22b064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22b068: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22b06c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22b06cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b070: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22b070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22b074: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22b074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b078: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22b078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22b07c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22b07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b080: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22b084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b088: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22b08c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B08Cu;
    {
        const bool branch_taken_0x22b08c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B08Cu;
        // 0x22b090: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b08c) {
            ctx->pc = 0x22B09Cu;
            goto label_22b09c;
        }
    }
    ctx->pc = 0x22B094u;
    // 0x22b094: 0x6610007  bgez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B094u;
    {
        const bool branch_taken_0x22b094 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B094u;
        // 0x22b098: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b094) {
            ctx->pc = 0x22B0B4u;
            goto label_22b0b4;
        }
    }
    ctx->pc = 0x22B09Cu;
label_22b09c:
    // 0x22b09c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22b0a0: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22B0A0u;
    SET_GPR_U32(ctx, 31, 0x22B0A8u);
    ctx->pc = 0x22B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0A0u;
    // 0x22b0a4: 0x248445b8  addiu       $a0, $a0, 0x45B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22B0A0u, 0x22B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0A8u;
label_22b0a8:
    // 0x22b0a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22B0A8u;
    {
        const bool branch_taken_0x22b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0A8u;
        // 0x22b0ac: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0a8) {
            ctx->pc = 0x22B0B4u;
            goto label_22b0b4;
        }
    }
    ctx->pc = 0x22B0B0u;
label_22b0b0:
    // 0x22b0b0: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x22b0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_22b0b4:
    // 0x22b0b4: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22B0B4u;
    {
        const bool branch_taken_0x22b0b4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x22b0b4) {
            ctx->pc = 0x22B0DCu;
            goto label_22b0dc;
        }
    }
    ctx->pc = 0x22B0BCu;
    // 0x22b0bc: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B0BCu;
    {
        const bool branch_taken_0x22b0bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b0bc) {
            ctx->pc = 0x22B0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B0BCu;
            // 0x22b0c0: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B0D0u;
            goto label_22b0d0;
        }
    }
    ctx->pc = 0x22B0C4u;
    // 0x22b0c4: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22B0C4u;
    SET_GPR_U32(ctx, 31, 0x22B0CCu);
    ctx->pc = 0x22B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0C4u;
    // 0x22b0c8: 0x260445b8  addiu       $a0, $s0, 0x45B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22B0C4u, 0x22B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0CCu;
label_22b0cc:
    // 0x22b0cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22b0d0:
    // 0x22b0d0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x22b0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b0d4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x22B0D4u;
    {
        const bool branch_taken_0x22b0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0d4) {
            ctx->pc = 0x22B0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B0D4u;
            // 0x22b0d8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b0b0;
        }
    }
    ctx->pc = 0x22B0DCu;
label_22b0dc:
    // 0x22b0dc: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x22B0DCu;
    {
        const bool branch_taken_0x22b0dc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x22B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0DCu;
        // 0x22b0e0: 0x3c15003f  lui         $s5, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0dc) {
            ctx->pc = 0x22B130u;
            goto label_22b130;
        }
    }
    ctx->pc = 0x22B0E4u;
    // 0x22b0e4: 0x0  nop
    ctx->pc = 0x22b0e4u;
    // NOP
label_22b0e8:
    // 0x22b0e8: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B0E8u;
    {
        const bool branch_taken_0x22b0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b0e8) {
            ctx->pc = 0x22B0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B0E8u;
            // 0x22b0ec: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B0FCu;
            goto label_22b0fc;
        }
    }
    ctx->pc = 0x22B0F0u;
    // 0x22b0f0: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22B0F0u;
    SET_GPR_U32(ctx, 31, 0x22B0F8u);
    ctx->pc = 0x22B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0F0u;
    // 0x22b0f4: 0x26a445b8  addiu       $a0, $s5, 0x45B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22B0F0u, 0x22B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0F8u;
label_22b0f8:
    // 0x22b0f8: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x22b0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22b0fc:
    // 0x22b0fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b100: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x22b100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22b104: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x22b104u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22b108: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x22b108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x22b10c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x22b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x22b110: 0x262800a  movz        $s0, $s3, $v0
    ctx->pc = 0x22b110u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x22b114: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22b118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b11c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22B11Cu;
    SET_GPR_U32(ctx, 31, 0x22B124u);
    ctx->pc = 0x22B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B11Cu;
    // 0x22b120: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22B11Cu, 0x22B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B124u;
label_22b124:
    // 0x22b124: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x22b124u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22b128: 0x1e60ffef  bgtz        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22B128u;
    {
        const bool branch_taken_0x22b128 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x22B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B128u;
        // 0x22b12c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b128) {
            ctx->pc = 0x22B0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b0e8;
        }
    }
    ctx->pc = 0x22B130u;
label_22b130:
    // 0x22b130: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22b130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b134: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22b134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b138: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22b138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b13c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22b13cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b140: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b144: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B14Cu;
        // 0x22b150: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B154u;
    // 0x22b154: 0x0  nop
    ctx->pc = 0x22b154u;
    // NOP
    if (ctx->pc == 0x22b154u) { ctx->pc = 0x22b158u; }
}
