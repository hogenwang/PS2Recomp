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

// Function: sub_0027F0C8
// Address: 0x27f0c8 - 0x27f1d8
void sub_0027F0C8_0x27f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F0C8_0x27f0c8");
#endif

    switch (ctx->pc) {
        case 0x27f138u: goto label_27f138;
        case 0x27f160u: goto label_27f160;
        case 0x27f180u: goto label_27f180;
        default: break;
    }

    ctx->pc = 0x27f0c8u;

    // 0x27f0c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27f0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27f0cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27f0d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f0d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27f0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27f0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27f0e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27f0e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27f0ec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F0ECu;
    {
        const bool branch_taken_0x27f0ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0ECu;
        // 0x27f0f0: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0ec) {
            ctx->pc = 0x27F0FCu;
            goto label_27f0fc;
        }
    }
    ctx->pc = 0x27F0F4u;
    // 0x27f0f4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x27F0F4u;
    {
        const bool branch_taken_0x27f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0F4u;
        // 0x27f0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0f4) {
            ctx->pc = 0x27F1B4u;
            goto label_27f1b4;
        }
    }
    ctx->pc = 0x27F0FCu;
label_27f0fc:
    // 0x27f0fc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x27f0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f100: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F100u;
    {
        const bool branch_taken_0x27f100 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x27F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F100u;
        // 0x27f104: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f100) {
            ctx->pc = 0x27F124u;
            goto label_27f124;
        }
    }
    ctx->pc = 0x27F108u;
    // 0x27f108: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x27f108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27f10c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27f10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x27f110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F110u;
    {
        const bool branch_taken_0x27f110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F110u;
        // 0x27f114: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f110) {
            ctx->pc = 0x27F128u;
            goto label_27f128;
        }
    }
    ctx->pc = 0x27F118u;
    // 0x27f118: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27f11c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F11Cu;
    {
        const bool branch_taken_0x27f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F11Cu;
        // 0x27f120: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f11c) {
            ctx->pc = 0x27F128u;
            goto label_27f128;
        }
    }
    ctx->pc = 0x27F124u;
label_27f124:
    // 0x27f124: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x27f124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27f128:
    // 0x27f128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27f128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f12c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f130: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x27F130u;
    SET_GPR_U32(ctx, 31, 0x27F138u);
    ctx->pc = 0x27F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F130u;
    // 0x27f134: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x27F130u, 0x27F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F138u;
label_27f138:
    // 0x27f138: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x27F138u;
    {
        const bool branch_taken_0x27f138 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F138u;
        // 0x27f13c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f138) {
            ctx->pc = 0x27F1B4u;
            goto label_27f1b4;
        }
    }
    ctx->pc = 0x27F140u;
    // 0x27f140: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f144: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27f144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f150: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27f154: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x27f154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f158: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x27F158u;
    SET_GPR_U32(ctx, 31, 0x27F160u);
    ctx->pc = 0x27F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F158u;
    // 0x27f15c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x27F158u, 0x27F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F160u;
label_27f160:
    // 0x27f160: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f164: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27f164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f168: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x27f168u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x27f16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f170: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x27f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27f174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f178: 0xc049c48  jal         func_127120
    ctx->pc = 0x27F178u;
    SET_GPR_U32(ctx, 31, 0x27F180u);
    ctx->pc = 0x27F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F178u;
    // 0x27f17c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x27F178u, 0x27F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F180u;
label_27f180:
    // 0x27f180: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f184: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x27f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x27f188: 0x1a400007  blez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F188u;
    {
        const bool branch_taken_0x27f188 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x27F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F188u;
        // 0x27f18c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f188) {
            ctx->pc = 0x27F1A8u;
            goto label_27f1a8;
        }
    }
    ctx->pc = 0x27F190u;
    // 0x27f190: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x27f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x27f194: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f198: 0x90447fff  lbu         $a0, 0x7FFF($v0)
    ctx->pc = 0x27f198u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32767)));
    // 0x27f19c: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x27f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x27f1a0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x27f1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27f1a4: 0xa0447fff  sb          $a0, 0x7FFF($v0)
    ctx->pc = 0x27f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32767), (uint8_t)GPR_U32(ctx, 4));
label_27f1a8:
    // 0x27f1a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f1ac: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x27f1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x27f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_27f1b4:
    // 0x27f1b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27f1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f1b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27f1b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f1bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27f1bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f1c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27f1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f1c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27f1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f1c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27f1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f1cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27f1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D0u;
        // 0x27f1d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1D8u;
}
