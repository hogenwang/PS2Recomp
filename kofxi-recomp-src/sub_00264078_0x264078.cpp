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

// Function: sub_00264078
// Address: 0x264078 - 0x264160
void sub_00264078_0x264078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264078_0x264078");
#endif

    switch (ctx->pc) {
        case 0x2640ecu: goto label_2640ec;
        default: break;
    }

    ctx->pc = 0x264078u;

    // 0x264078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26407c: 0x2c820080  sltiu       $v0, $a0, 0x80
    ctx->pc = 0x26407cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x264080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264080u;
    {
        const bool branch_taken_0x264080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264080u;
        // 0x264084: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264080) {
            ctx->pc = 0x2640A4u;
            goto label_2640a4;
        }
    }
    ctx->pc = 0x264088u;
    // 0x264088: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x264088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x26408c: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x26408cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x264090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x264090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x264094: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x264094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x264098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26409c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26409Cu;
    {
        const bool branch_taken_0x26409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26409Cu;
        // 0x2640a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26409c) {
            ctx->pc = 0x2640E4u;
            goto label_2640e4;
        }
    }
    ctx->pc = 0x2640A4u;
label_2640a4:
    // 0x2640a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2640a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2640a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2640a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2640ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2640ACu;
    {
        const bool branch_taken_0x2640ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2640ac) {
            ctx->pc = 0x2640B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2640ACu;
            // 0x2640b0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2640C4u;
            goto label_2640c4;
        }
    }
    ctx->pc = 0x2640B4u;
    // 0x2640b4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2640b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2640b8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2640b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2640bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2640BCu;
    {
        const bool branch_taken_0x2640bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640BCu;
        // 0x2640c0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640bc) {
            ctx->pc = 0x2640E0u;
            goto label_2640e0;
        }
    }
    ctx->pc = 0x2640C4u;
label_2640c4:
    // 0x2640c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2640c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2640c8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2640c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2640cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2640CCu;
    {
        const bool branch_taken_0x2640cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2640cc) {
            ctx->pc = 0x2640D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2640CCu;
            // 0x2640d0: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2640E0u;
            goto label_2640e0;
        }
    }
    ctx->pc = 0x2640D4u;
    // 0x2640d4: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x2640d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2640d8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2640d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2640dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2640dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2640e0:
    // 0x2640e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2640e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2640e4:
    // 0x2640e4: 0xc08a254  jal         func_228950
    ctx->pc = 0x2640E4u;
    SET_GPR_U32(ctx, 31, 0x2640ECu);
    ctx->pc = 0x2640E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640E4u;
    // 0x2640e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2640E4u, 0x2640ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640ECu;
label_2640ec:
    // 0x2640ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2640ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2640f0: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x2640f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2640f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2640f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2640f8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2640f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2640fc: 0x34e700ff  ori         $a3, $a3, 0xFF
    ctx->pc = 0x2640fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    // 0x264100: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x264100u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264104: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x264104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x264108: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x264108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x26410c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x26410cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x264110: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x264110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x264114: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x264114u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x264118: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x264118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x26411c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x26411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x264120: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x264120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264124: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x264124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x264128: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x264128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x26412c: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x26412cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x264130: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x264130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x264134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x264134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264138: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x264138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26413c: 0x34a500ff  ori         $a1, $a1, 0xFF
    ctx->pc = 0x26413cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    // 0x264140: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x264140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x264144: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x264144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x264148: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x264148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x26414c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x264150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264154: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x264154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264158: 0x3e00008  jr          $ra
    ctx->pc = 0x264158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264158u;
        // 0x26415c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264160u;
}
