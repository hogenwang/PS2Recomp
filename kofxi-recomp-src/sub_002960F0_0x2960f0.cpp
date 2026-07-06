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

// Function: sub_002960F0
// Address: 0x2960f0 - 0x2961e8
void sub_002960F0_0x2960f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002960F0_0x2960f0");
#endif

    switch (ctx->pc) {
        case 0x296128u: goto label_296128;
        case 0x296148u: goto label_296148;
        case 0x296174u: goto label_296174;
        case 0x296194u: goto label_296194;
        case 0x2961c4u: goto label_2961c4;
        default: break;
    }

    ctx->pc = 0x2960f0u;

    // 0x2960f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2960f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2960f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2960f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2960f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2960f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2960fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2960fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296108: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x296108u;
    {
        const bool branch_taken_0x296108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296108u;
        // 0x29610c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296108) {
            ctx->pc = 0x29614Cu;
            goto label_29614c;
        }
    }
    ctx->pc = 0x296110u;
    // 0x296110: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x296114: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296114u;
    {
        const bool branch_taken_0x296114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296114) {
            ctx->pc = 0x296128u;
            goto label_296128;
        }
    }
    ctx->pc = 0x29611Cu;
    // 0x29611c: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x29611cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x296120: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296120u;
    SET_GPR_U32(ctx, 31, 0x296128u);
    ctx->pc = 0x296124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296120u;
    // 0x296124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296120u, 0x296128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296128u;
label_296128:
    // 0x296128: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296128u;
    {
        const bool branch_taken_0x296128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x296128) {
            ctx->pc = 0x296140u;
            goto label_296140;
        }
    }
    ctx->pc = 0x296130u;
    // 0x296130: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x296130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x296134: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x296134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x296138: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296138u;
    {
        const bool branch_taken_0x296138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x296138) {
            ctx->pc = 0x29614Cu;
            goto label_29614c;
        }
    }
    ctx->pc = 0x296140u;
label_296140:
    // 0x296140: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296140u;
    SET_GPR_U32(ctx, 31, 0x296148u);
    ctx->pc = 0x296144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296140u;
    // 0x296144: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x296140u, 0x296148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296148u;
label_296148:
    // 0x296148: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x296148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_29614c:
    // 0x29614c: 0x5220001f  beql        $s1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x29614Cu;
    {
        const bool branch_taken_0x29614c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29614c) {
            ctx->pc = 0x296150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29614Cu;
            // 0x296150: 0xfe000088  sd          $zero, 0x88($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2961CCu;
            goto label_2961cc;
        }
    }
    ctx->pc = 0x296154u;
    // 0x296154: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x296154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x296158: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x296158u;
    {
        const bool branch_taken_0x296158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296158) {
            ctx->pc = 0x29619Cu;
            goto label_29619c;
        }
    }
    ctx->pc = 0x296160u;
    // 0x296160: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x296160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x296164: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x296164u;
    {
        const bool branch_taken_0x296164 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x296164) {
            ctx->pc = 0x29619Cu;
            goto label_29619c;
        }
    }
    ctx->pc = 0x29616Cu;
    // 0x29616c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29616Cu;
    SET_GPR_U32(ctx, 31, 0x296174u);
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29616Cu, 0x296174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296174u;
label_296174:
    // 0x296174: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296174u;
    {
        const bool branch_taken_0x296174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296174u;
        // 0x296178: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296174) {
            ctx->pc = 0x29619Cu;
            goto label_29619c;
        }
    }
    ctx->pc = 0x29617Cu;
    // 0x29617c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296180: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x296180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x296184: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x296184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29618c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29618Cu;
    SET_GPR_U32(ctx, 31, 0x296194u);
    ctx->pc = 0x296190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29618Cu;
    // 0x296190: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29618Cu, 0x296194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296194u;
label_296194:
    // 0x296194: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x296194u;
    {
        const bool branch_taken_0x296194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296194u;
        // 0x296198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296194) {
            ctx->pc = 0x2961D4u;
            goto label_2961d4;
        }
    }
    ctx->pc = 0x29619Cu;
label_29619c:
    // 0x29619c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29619Cu;
    {
        const bool branch_taken_0x29619c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29619c) {
            ctx->pc = 0x2961A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29619Cu;
            // 0x2961a0: 0xfe000088  sd          $zero, 0x88($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2961CCu;
            goto label_2961cc;
        }
    }
    ctx->pc = 0x2961A4u;
    // 0x2961a4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2961a8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2961a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2961ac: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x2961acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2961b0: 0x58c00005  blezl       $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2961B0u;
    {
        const bool branch_taken_0x2961b0 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2961b0) {
            ctx->pc = 0x2961B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2961B0u;
            // 0x2961b4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2961C8u;
            goto label_2961c8;
        }
    }
    ctx->pc = 0x2961B8u;
    // 0x2961b8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2961bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2961BCu;
    SET_GPR_U32(ctx, 31, 0x2961C4u);
    ctx->pc = 0x2961C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961BCu;
    // 0x2961c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2961BCu, 0x2961C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961C4u;
label_2961c4:
    // 0x2961c4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2961c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2961c8:
    // 0x2961c8: 0xfe000088  sd          $zero, 0x88($s0)
    ctx->pc = 0x2961c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
label_2961cc:
    // 0x2961cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2961d0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2961d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2961d4:
    // 0x2961d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2961d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2961d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2961d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2961dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2961dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2961e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2961E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961E0u;
        // 0x2961e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961E8u;
}
