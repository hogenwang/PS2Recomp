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

// Function: sub_0028F060
// Address: 0x28f060 - 0x28f258
void sub_0028F060_0x28f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F060_0x28f060");
#endif

    switch (ctx->pc) {
        case 0x28f060u: goto label_28f060;
        case 0x28f064u: goto label_28f064;
        case 0x28f068u: goto label_28f068;
        case 0x28f06cu: goto label_28f06c;
        case 0x28f070u: goto label_28f070;
        case 0x28f074u: goto label_28f074;
        case 0x28f078u: goto label_28f078;
        case 0x28f07cu: goto label_28f07c;
        case 0x28f080u: goto label_28f080;
        case 0x28f084u: goto label_28f084;
        case 0x28f088u: goto label_28f088;
        case 0x28f08cu: goto label_28f08c;
        case 0x28f090u: goto label_28f090;
        case 0x28f094u: goto label_28f094;
        case 0x28f098u: goto label_28f098;
        case 0x28f09cu: goto label_28f09c;
        case 0x28f0a0u: goto label_28f0a0;
        case 0x28f0a4u: goto label_28f0a4;
        case 0x28f0a8u: goto label_28f0a8;
        case 0x28f0acu: goto label_28f0ac;
        case 0x28f0b0u: goto label_28f0b0;
        case 0x28f0b4u: goto label_28f0b4;
        case 0x28f0b8u: goto label_28f0b8;
        case 0x28f0bcu: goto label_28f0bc;
        case 0x28f0c0u: goto label_28f0c0;
        case 0x28f0c4u: goto label_28f0c4;
        case 0x28f0c8u: goto label_28f0c8;
        case 0x28f0ccu: goto label_28f0cc;
        case 0x28f0d0u: goto label_28f0d0;
        case 0x28f0d4u: goto label_28f0d4;
        case 0x28f0d8u: goto label_28f0d8;
        case 0x28f0dcu: goto label_28f0dc;
        case 0x28f0e0u: goto label_28f0e0;
        case 0x28f0e4u: goto label_28f0e4;
        case 0x28f0e8u: goto label_28f0e8;
        case 0x28f0ecu: goto label_28f0ec;
        case 0x28f0f0u: goto label_28f0f0;
        case 0x28f0f4u: goto label_28f0f4;
        case 0x28f0f8u: goto label_28f0f8;
        case 0x28f0fcu: goto label_28f0fc;
        case 0x28f100u: goto label_28f100;
        case 0x28f104u: goto label_28f104;
        case 0x28f108u: goto label_28f108;
        case 0x28f10cu: goto label_28f10c;
        case 0x28f110u: goto label_28f110;
        case 0x28f114u: goto label_28f114;
        case 0x28f118u: goto label_28f118;
        case 0x28f11cu: goto label_28f11c;
        case 0x28f120u: goto label_28f120;
        case 0x28f124u: goto label_28f124;
        case 0x28f128u: goto label_28f128;
        case 0x28f12cu: goto label_28f12c;
        case 0x28f130u: goto label_28f130;
        case 0x28f134u: goto label_28f134;
        case 0x28f138u: goto label_28f138;
        case 0x28f13cu: goto label_28f13c;
        case 0x28f140u: goto label_28f140;
        case 0x28f144u: goto label_28f144;
        case 0x28f148u: goto label_28f148;
        case 0x28f14cu: goto label_28f14c;
        case 0x28f150u: goto label_28f150;
        case 0x28f154u: goto label_28f154;
        case 0x28f158u: goto label_28f158;
        case 0x28f15cu: goto label_28f15c;
        case 0x28f160u: goto label_28f160;
        case 0x28f164u: goto label_28f164;
        case 0x28f168u: goto label_28f168;
        case 0x28f16cu: goto label_28f16c;
        case 0x28f170u: goto label_28f170;
        case 0x28f174u: goto label_28f174;
        case 0x28f178u: goto label_28f178;
        case 0x28f17cu: goto label_28f17c;
        case 0x28f180u: goto label_28f180;
        case 0x28f184u: goto label_28f184;
        case 0x28f188u: goto label_28f188;
        case 0x28f18cu: goto label_28f18c;
        case 0x28f190u: goto label_28f190;
        case 0x28f194u: goto label_28f194;
        case 0x28f198u: goto label_28f198;
        case 0x28f19cu: goto label_28f19c;
        case 0x28f1a0u: goto label_28f1a0;
        case 0x28f1a4u: goto label_28f1a4;
        case 0x28f1a8u: goto label_28f1a8;
        case 0x28f1acu: goto label_28f1ac;
        case 0x28f1b0u: goto label_28f1b0;
        case 0x28f1b4u: goto label_28f1b4;
        case 0x28f1b8u: goto label_28f1b8;
        case 0x28f1bcu: goto label_28f1bc;
        case 0x28f1c0u: goto label_28f1c0;
        case 0x28f1c4u: goto label_28f1c4;
        case 0x28f1c8u: goto label_28f1c8;
        case 0x28f1ccu: goto label_28f1cc;
        case 0x28f1d0u: goto label_28f1d0;
        case 0x28f1d4u: goto label_28f1d4;
        case 0x28f1d8u: goto label_28f1d8;
        case 0x28f1dcu: goto label_28f1dc;
        case 0x28f1e0u: goto label_28f1e0;
        case 0x28f1e4u: goto label_28f1e4;
        case 0x28f1e8u: goto label_28f1e8;
        case 0x28f1ecu: goto label_28f1ec;
        case 0x28f1f0u: goto label_28f1f0;
        case 0x28f1f4u: goto label_28f1f4;
        case 0x28f1f8u: goto label_28f1f8;
        case 0x28f1fcu: goto label_28f1fc;
        case 0x28f200u: goto label_28f200;
        case 0x28f204u: goto label_28f204;
        case 0x28f208u: goto label_28f208;
        case 0x28f20cu: goto label_28f20c;
        case 0x28f210u: goto label_28f210;
        case 0x28f214u: goto label_28f214;
        case 0x28f218u: goto label_28f218;
        case 0x28f21cu: goto label_28f21c;
        case 0x28f220u: goto label_28f220;
        case 0x28f224u: goto label_28f224;
        case 0x28f228u: goto label_28f228;
        case 0x28f22cu: goto label_28f22c;
        case 0x28f230u: goto label_28f230;
        case 0x28f234u: goto label_28f234;
        case 0x28f238u: goto label_28f238;
        case 0x28f23cu: goto label_28f23c;
        case 0x28f240u: goto label_28f240;
        case 0x28f244u: goto label_28f244;
        case 0x28f248u: goto label_28f248;
        case 0x28f24cu: goto label_28f24c;
        case 0x28f250u: goto label_28f250;
        case 0x28f254u: goto label_28f254;
        default: break;
    }

    ctx->pc = 0x28f060u;

label_28f060:
    // 0x28f060: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f064:
    // 0x28f064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f068:
    // 0x28f068: 0x8c424654  lw          $v0, 0x4654($v0)
    ctx->pc = 0x28f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18004)));
label_28f06c:
    // 0x28f06c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f070:
    if (ctx->pc == 0x28F070u) {
        ctx->pc = 0x28F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F06Cu;
        // 0x28f070: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F074u;
        goto label_28f074;
    }
    ctx->pc = 0x28F06Cu;
    {
        const bool branch_taken_0x28f06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F06Cu;
        // 0x28f070: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f06c) {
            ctx->pc = 0x28F094u;
            goto label_28f094;
        }
    }
    ctx->pc = 0x28F074u;
label_28f074:
    // 0x28f074: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f078:
    // 0x28f078: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_28f07c:
    // 0x28f07c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f080:
    // 0x28f080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f084:
    // 0x28f084: 0xc0a5648  jal         func_295920
label_28f088:
    if (ctx->pc == 0x28F088u) {
        ctx->pc = 0x28F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F084u;
        // 0x28f088: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F08Cu;
        goto label_28f08c;
    }
    ctx->pc = 0x28F084u;
    SET_GPR_U32(ctx, 31, 0x28F08Cu);
    ctx->pc = 0x28F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F084u;
    // 0x28f088: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F084u, 0x28F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F08Cu;
label_28f08c:
    // 0x28f08c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f090:
    if (ctx->pc == 0x28F090u) {
        ctx->pc = 0x28F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F08Cu;
        // 0x28f090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F094u;
        goto label_28f094;
    }
    ctx->pc = 0x28F08Cu;
    {
        const bool branch_taken_0x28f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F08Cu;
        // 0x28f090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f08c) {
            ctx->pc = 0x28F09Cu;
            goto label_28f09c;
        }
    }
    ctx->pc = 0x28F094u;
label_28f094:
    // 0x28f094: 0x40f809  jalr        $v0
label_28f098:
    if (ctx->pc == 0x28F098u) {
        ctx->pc = 0x28F09Cu;
        goto label_28f09c;
    }
    ctx->pc = 0x28F094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F09Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F094u, 0x28F09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F09Cu;
label_28f09c:
    // 0x28f09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f0a0:
    // 0x28f0a0: 0x3e00008  jr          $ra
label_28f0a4:
    if (ctx->pc == 0x28F0A4u) {
        ctx->pc = 0x28F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A0u;
        // 0x28f0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0A8u;
        goto label_28f0a8;
    }
    ctx->pc = 0x28F0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A0u;
        // 0x28f0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F0A8u;
label_28f0a8:
    // 0x28f0a8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f0ac:
    // 0x28f0ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f0b0:
    // 0x28f0b0: 0x8c424658  lw          $v0, 0x4658($v0)
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18008)));
label_28f0b4:
    // 0x28f0b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f0b8:
    if (ctx->pc == 0x28F0B8u) {
        ctx->pc = 0x28F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0B4u;
        // 0x28f0b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0BCu;
        goto label_28f0bc;
    }
    ctx->pc = 0x28F0B4u;
    {
        const bool branch_taken_0x28f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0B4u;
        // 0x28f0b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0b4) {
            ctx->pc = 0x28F0DCu;
            goto label_28f0dc;
        }
    }
    ctx->pc = 0x28F0BCu;
label_28f0bc:
    // 0x28f0bc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f0c0:
    // 0x28f0c0: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_28f0c4:
    // 0x28f0c4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f0c8:
    // 0x28f0c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f0cc:
    // 0x28f0cc: 0xc0a5648  jal         func_295920
label_28f0d0:
    if (ctx->pc == 0x28F0D0u) {
        ctx->pc = 0x28F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0CCu;
        // 0x28f0d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0D4u;
        goto label_28f0d4;
    }
    ctx->pc = 0x28F0CCu;
    SET_GPR_U32(ctx, 31, 0x28F0D4u);
    ctx->pc = 0x28F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0CCu;
    // 0x28f0d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F0CCu, 0x28F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0D4u;
label_28f0d4:
    // 0x28f0d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f0d8:
    if (ctx->pc == 0x28F0D8u) {
        ctx->pc = 0x28F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D4u;
        // 0x28f0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0DCu;
        goto label_28f0dc;
    }
    ctx->pc = 0x28F0D4u;
    {
        const bool branch_taken_0x28f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D4u;
        // 0x28f0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0d4) {
            ctx->pc = 0x28F0E4u;
            goto label_28f0e4;
        }
    }
    ctx->pc = 0x28F0DCu;
label_28f0dc:
    // 0x28f0dc: 0x40f809  jalr        $v0
label_28f0e0:
    if (ctx->pc == 0x28F0E0u) {
        ctx->pc = 0x28F0E4u;
        goto label_28f0e4;
    }
    ctx->pc = 0x28F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F0E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0DCu, 0x28F0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F0E4u;
label_28f0e4:
    // 0x28f0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f0e8:
    // 0x28f0e8: 0x3e00008  jr          $ra
label_28f0ec:
    if (ctx->pc == 0x28F0ECu) {
        ctx->pc = 0x28F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0E8u;
        // 0x28f0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0F0u;
        goto label_28f0f0;
    }
    ctx->pc = 0x28F0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0E8u;
        // 0x28f0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F0F0u;
label_28f0f0:
    // 0x28f0f0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f0f4:
    // 0x28f0f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f0f8:
    // 0x28f0f8: 0x8c42465c  lw          $v0, 0x465C($v0)
    ctx->pc = 0x28f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18012)));
label_28f0fc:
    // 0x28f0fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f100:
    if (ctx->pc == 0x28F100u) {
        ctx->pc = 0x28F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0FCu;
        // 0x28f100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F104u;
        goto label_28f104;
    }
    ctx->pc = 0x28F0FCu;
    {
        const bool branch_taken_0x28f0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0FCu;
        // 0x28f100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0fc) {
            ctx->pc = 0x28F124u;
            goto label_28f124;
        }
    }
    ctx->pc = 0x28F104u;
label_28f104:
    // 0x28f104: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f108:
    // 0x28f108: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x28f108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_28f10c:
    // 0x28f10c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f110:
    // 0x28f110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f114:
    // 0x28f114: 0xc0a5648  jal         func_295920
label_28f118:
    if (ctx->pc == 0x28F118u) {
        ctx->pc = 0x28F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F114u;
        // 0x28f118: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F11Cu;
        goto label_28f11c;
    }
    ctx->pc = 0x28F114u;
    SET_GPR_U32(ctx, 31, 0x28F11Cu);
    ctx->pc = 0x28F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F114u;
    // 0x28f118: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F114u, 0x28F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F11Cu;
label_28f11c:
    // 0x28f11c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f120:
    if (ctx->pc == 0x28F120u) {
        ctx->pc = 0x28F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F11Cu;
        // 0x28f120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F124u;
        goto label_28f124;
    }
    ctx->pc = 0x28F11Cu;
    {
        const bool branch_taken_0x28f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F11Cu;
        // 0x28f120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f11c) {
            ctx->pc = 0x28F12Cu;
            goto label_28f12c;
        }
    }
    ctx->pc = 0x28F124u;
label_28f124:
    // 0x28f124: 0x40f809  jalr        $v0
label_28f128:
    if (ctx->pc == 0x28F128u) {
        ctx->pc = 0x28F12Cu;
        goto label_28f12c;
    }
    ctx->pc = 0x28F124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F12Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F124u, 0x28F12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F12Cu;
label_28f12c:
    // 0x28f12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f130:
    // 0x28f130: 0x3e00008  jr          $ra
label_28f134:
    if (ctx->pc == 0x28F134u) {
        ctx->pc = 0x28F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F130u;
        // 0x28f134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F138u;
        goto label_28f138;
    }
    ctx->pc = 0x28F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F130u;
        // 0x28f134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F138u;
label_28f138:
    // 0x28f138: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f13c:
    // 0x28f13c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f140:
    // 0x28f140: 0x8c424660  lw          $v0, 0x4660($v0)
    ctx->pc = 0x28f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18016)));
label_28f144:
    // 0x28f144: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f148:
    if (ctx->pc == 0x28F148u) {
        ctx->pc = 0x28F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F144u;
        // 0x28f148: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F14Cu;
        goto label_28f14c;
    }
    ctx->pc = 0x28F144u;
    {
        const bool branch_taken_0x28f144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F144u;
        // 0x28f148: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f144) {
            ctx->pc = 0x28F16Cu;
            goto label_28f16c;
        }
    }
    ctx->pc = 0x28F14Cu;
label_28f14c:
    // 0x28f14c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f150:
    // 0x28f150: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x28f150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_28f154:
    // 0x28f154: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f158:
    // 0x28f158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f15c:
    // 0x28f15c: 0xc0a5648  jal         func_295920
label_28f160:
    if (ctx->pc == 0x28F160u) {
        ctx->pc = 0x28F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F15Cu;
        // 0x28f160: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F164u;
        goto label_28f164;
    }
    ctx->pc = 0x28F15Cu;
    SET_GPR_U32(ctx, 31, 0x28F164u);
    ctx->pc = 0x28F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F15Cu;
    // 0x28f160: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F15Cu, 0x28F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F164u;
label_28f164:
    // 0x28f164: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f168:
    if (ctx->pc == 0x28F168u) {
        ctx->pc = 0x28F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F164u;
        // 0x28f168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F16Cu;
        goto label_28f16c;
    }
    ctx->pc = 0x28F164u;
    {
        const bool branch_taken_0x28f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F164u;
        // 0x28f168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f164) {
            ctx->pc = 0x28F174u;
            goto label_28f174;
        }
    }
    ctx->pc = 0x28F16Cu;
label_28f16c:
    // 0x28f16c: 0x40f809  jalr        $v0
label_28f170:
    if (ctx->pc == 0x28F170u) {
        ctx->pc = 0x28F174u;
        goto label_28f174;
    }
    ctx->pc = 0x28F16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F16Cu, 0x28F174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F174u;
label_28f174:
    // 0x28f174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f178:
    // 0x28f178: 0x3e00008  jr          $ra
label_28f17c:
    if (ctx->pc == 0x28F17Cu) {
        ctx->pc = 0x28F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F178u;
        // 0x28f17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F180u;
        goto label_28f180;
    }
    ctx->pc = 0x28F178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F178u;
        // 0x28f17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F180u;
label_28f180:
    // 0x28f180: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f184:
    // 0x28f184: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f188:
    // 0x28f188: 0x8c424664  lw          $v0, 0x4664($v0)
    ctx->pc = 0x28f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18020)));
label_28f18c:
    // 0x28f18c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f190:
    if (ctx->pc == 0x28F190u) {
        ctx->pc = 0x28F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F18Cu;
        // 0x28f190: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F194u;
        goto label_28f194;
    }
    ctx->pc = 0x28F18Cu;
    {
        const bool branch_taken_0x28f18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F18Cu;
        // 0x28f190: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f18c) {
            ctx->pc = 0x28F1B4u;
            goto label_28f1b4;
        }
    }
    ctx->pc = 0x28F194u;
label_28f194:
    // 0x28f194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f198:
    // 0x28f198: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f19c:
    // 0x28f19c: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x28f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_28f1a0:
    // 0x28f1a0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f1a4:
    // 0x28f1a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f1a8:
    // 0x28f1a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28f1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f1ac:
    // 0x28f1ac: 0x80a5648  j           func_295920
label_28f1b0:
    if (ctx->pc == 0x28F1B0u) {
        ctx->pc = 0x28F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1ACu;
        // 0x28f1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F1B4u;
        goto label_28f1b4;
    }
    ctx->pc = 0x28F1ACu;
    ctx->pc = 0x28F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1ACu;
    // 0x28f1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28F1B4u;
label_28f1b4:
    // 0x28f1b4: 0x40f809  jalr        $v0
label_28f1b8:
    if (ctx->pc == 0x28F1B8u) {
        ctx->pc = 0x28F1BCu;
        goto label_28f1bc;
    }
    ctx->pc = 0x28F1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F1BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1B4u, 0x28F1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F1BCu;
label_28f1bc:
    // 0x28f1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f1c0:
    // 0x28f1c0: 0x3e00008  jr          $ra
label_28f1c4:
    if (ctx->pc == 0x28F1C4u) {
        ctx->pc = 0x28F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1C0u;
        // 0x28f1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F1C8u;
        goto label_28f1c8;
    }
    ctx->pc = 0x28F1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1C0u;
        // 0x28f1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F1C8u;
label_28f1c8:
    // 0x28f1c8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f1cc:
    // 0x28f1cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f1d0:
    // 0x28f1d0: 0x8c424668  lw          $v0, 0x4668($v0)
    ctx->pc = 0x28f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18024)));
label_28f1d4:
    // 0x28f1d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f1d8:
    if (ctx->pc == 0x28F1D8u) {
        ctx->pc = 0x28F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1D4u;
        // 0x28f1d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F1DCu;
        goto label_28f1dc;
    }
    ctx->pc = 0x28F1D4u;
    {
        const bool branch_taken_0x28f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1D4u;
        // 0x28f1d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1d4) {
            ctx->pc = 0x28F1FCu;
            goto label_28f1fc;
        }
    }
    ctx->pc = 0x28F1DCu;
label_28f1dc:
    // 0x28f1dc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f1e0:
    // 0x28f1e0: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x28f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_28f1e4:
    // 0x28f1e4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f1e8:
    // 0x28f1e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f1ec:
    // 0x28f1ec: 0xc0a5648  jal         func_295920
label_28f1f0:
    if (ctx->pc == 0x28F1F0u) {
        ctx->pc = 0x28F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1ECu;
        // 0x28f1f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F1F4u;
        goto label_28f1f4;
    }
    ctx->pc = 0x28F1ECu;
    SET_GPR_U32(ctx, 31, 0x28F1F4u);
    ctx->pc = 0x28F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1ECu;
    // 0x28f1f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F1ECu, 0x28F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1F4u;
label_28f1f4:
    // 0x28f1f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f1f8:
    if (ctx->pc == 0x28F1F8u) {
        ctx->pc = 0x28F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1F4u;
        // 0x28f1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F1FCu;
        goto label_28f1fc;
    }
    ctx->pc = 0x28F1F4u;
    {
        const bool branch_taken_0x28f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1F4u;
        // 0x28f1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1f4) {
            ctx->pc = 0x28F204u;
            goto label_28f204;
        }
    }
    ctx->pc = 0x28F1FCu;
label_28f1fc:
    // 0x28f1fc: 0x40f809  jalr        $v0
label_28f200:
    if (ctx->pc == 0x28F200u) {
        ctx->pc = 0x28F204u;
        goto label_28f204;
    }
    ctx->pc = 0x28F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1FCu, 0x28F204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F204u;
label_28f204:
    // 0x28f204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f208:
    // 0x28f208: 0x3e00008  jr          $ra
label_28f20c:
    if (ctx->pc == 0x28F20Cu) {
        ctx->pc = 0x28F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F208u;
        // 0x28f20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F210u;
        goto label_28f210;
    }
    ctx->pc = 0x28F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F208u;
        // 0x28f20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F210u;
label_28f210:
    // 0x28f210: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f214:
    // 0x28f214: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f218:
    // 0x28f218: 0x8c42466c  lw          $v0, 0x466C($v0)
    ctx->pc = 0x28f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18028)));
label_28f21c:
    // 0x28f21c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f220:
    if (ctx->pc == 0x28F220u) {
        ctx->pc = 0x28F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F21Cu;
        // 0x28f220: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F224u;
        goto label_28f224;
    }
    ctx->pc = 0x28F21Cu;
    {
        const bool branch_taken_0x28f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F21Cu;
        // 0x28f220: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f21c) {
            ctx->pc = 0x28F244u;
            goto label_28f244;
        }
    }
    ctx->pc = 0x28F224u;
label_28f224:
    // 0x28f224: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f228:
    // 0x28f228: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x28f228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_28f22c:
    // 0x28f22c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f230:
    // 0x28f230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f234:
    // 0x28f234: 0xc0a5648  jal         func_295920
label_28f238:
    if (ctx->pc == 0x28F238u) {
        ctx->pc = 0x28F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F234u;
        // 0x28f238: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F23Cu;
        goto label_28f23c;
    }
    ctx->pc = 0x28F234u;
    SET_GPR_U32(ctx, 31, 0x28F23Cu);
    ctx->pc = 0x28F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F234u;
    // 0x28f238: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F234u, 0x28F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F23Cu;
label_28f23c:
    // 0x28f23c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f240:
    if (ctx->pc == 0x28F240u) {
        ctx->pc = 0x28F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F23Cu;
        // 0x28f240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F244u;
        goto label_28f244;
    }
    ctx->pc = 0x28F23Cu;
    {
        const bool branch_taken_0x28f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F23Cu;
        // 0x28f240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f23c) {
            ctx->pc = 0x28F24Cu;
            goto label_28f24c;
        }
    }
    ctx->pc = 0x28F244u;
label_28f244:
    // 0x28f244: 0x40f809  jalr        $v0
label_28f248:
    if (ctx->pc == 0x28F248u) {
        ctx->pc = 0x28F24Cu;
        goto label_28f24c;
    }
    ctx->pc = 0x28F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F24Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F244u, 0x28F24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F24Cu;
label_28f24c:
    // 0x28f24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f250:
    // 0x28f250: 0x3e00008  jr          $ra
label_28f254:
    if (ctx->pc == 0x28F254u) {
        ctx->pc = 0x28F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F250u;
        // 0x28f254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F258u;
        goto label_fallthrough_0x28f250;
    }
    ctx->pc = 0x28F250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F250u;
        // 0x28f254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f250:
    ctx->pc = 0x28F258u;
}
