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

// Function: sub_0025A1E8
// Address: 0x25a1e8 - 0x25a328
void sub_0025A1E8_0x25a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A1E8_0x25a1e8");
#endif

    switch (ctx->pc) {
        case 0x25a23cu: goto label_25a23c;
        case 0x25a26cu: goto label_25a26c;
        case 0x25a298u: goto label_25a298;
        case 0x25a2a0u: goto label_25a2a0;
        case 0x25a2fcu: goto label_25a2fc;
        case 0x25a310u: goto label_25a310;
        default: break;
    }

    ctx->pc = 0x25a1e8u;

    // 0x25a1e8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25a1ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A1ECu;
    {
        const bool branch_taken_0x25a1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a1ec) {
            ctx->pc = 0x25A1FCu;
            goto label_25a1fc;
        }
    }
    ctx->pc = 0x25A1F4u;
    // 0x25a1f4: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x25a1f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x25a1f8: 0xfc620088  sd          $v0, 0x88($v1)
    ctx->pc = 0x25a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 2));
label_25a1fc:
    // 0x25a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A204u;
    // 0x25a204: 0x0  nop
    ctx->pc = 0x25a204u;
    // NOP
    // 0x25a208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a20c: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25a210: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a214: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25a218: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25a21c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a220: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a224: 0x248412e0  addiu       $a0, $a0, 0x12E0
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    // 0x25a228: 0x24e7a248  addiu       $a3, $a3, -0x5DB8
    ctx->pc = 0x25a228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943304));
    // 0x25a22c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x25a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a230: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x25a230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x25a234: 0xc093098  jal         func_24C260
    ctx->pc = 0x25A234u;
    SET_GPR_U32(ctx, 31, 0x25A23Cu);
    ctx->pc = 0x25A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A234u;
    // 0x25a238: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C260u, 0x25A234u, 0x25A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A23Cu;
label_25a23c:
    // 0x25a23c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a240: 0x3e00008  jr          $ra
    ctx->pc = 0x25A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A240u;
        // 0x25a244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A248u;
    // 0x25a248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a24c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25a250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a254: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25a254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a258: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25a25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a264: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x25A264u;
    SET_GPR_U32(ctx, 31, 0x25A26Cu);
    ctx->pc = 0x25A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A264u;
    // 0x25a268: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB98u, 0x25A264u, 0x25A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A26Cu;
label_25a26c:
    // 0x25a26c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x25A26Cu;
    {
        const bool branch_taken_0x25a26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A26Cu;
        // 0x25a270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a26c) {
            ctx->pc = 0x25A310u;
            goto label_25a310;
        }
    }
    ctx->pc = 0x25A274u;
    // 0x25a274: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x25A274u;
    {
        const bool branch_taken_0x25a274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a274) {
            ctx->pc = 0x25A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A274u;
            // 0x25a278: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A304u;
            goto label_25a304;
        }
    }
    ctx->pc = 0x25A27Cu;
    // 0x25a27c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x25a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x25a280: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25a284: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25A284u;
    {
        const bool branch_taken_0x25a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a284) {
            ctx->pc = 0x25A288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A284u;
            // 0x25a288: 0xdc840060  ld          $a0, 0x60($a0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A2B0u;
            goto label_25a2b0;
        }
    }
    ctx->pc = 0x25A28Cu;
    // 0x25a28c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a290: 0xc093130  jal         func_24C4C0
    ctx->pc = 0x25A290u;
    SET_GPR_U32(ctx, 31, 0x25A298u);
    ctx->pc = 0x25A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A290u;
    // 0x25a294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C4C0u, 0x25A290u, 0x25A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A298u;
label_25a298:
    // 0x25a298: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x25A298u;
    SET_GPR_U32(ctx, 31, 0x25A2A0u);
    ctx->pc = 0x25A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A298u;
    // 0x25a29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB98u, 0x25A298u, 0x25A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2A0u;
label_25a2a0:
    // 0x25a2a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2a4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25A2A4u;
    {
        const bool branch_taken_0x25a2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2A4u;
        // 0x25a2a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2a4) {
            ctx->pc = 0x25A314u;
            goto label_25a314;
        }
    }
    ctx->pc = 0x25A2ACu;
    // 0x25a2ac: 0xdc840060  ld          $a0, 0x60($a0)
    ctx->pc = 0x25a2acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 96)));
label_25a2b0:
    // 0x25a2b0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25A2B0u;
    {
        const bool branch_taken_0x25a2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2B0u;
        // 0x25a2b4: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2b0) {
            ctx->pc = 0x25A300u;
            goto label_25a300;
        }
    }
    ctx->pc = 0x25A2B8u;
    // 0x25a2b8: 0x8c6212c8  lw          $v0, 0x12C8($v1)
    ctx->pc = 0x25a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4808)));
    // 0x25a2bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25A2BCu;
    {
        const bool branch_taken_0x25a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a2bc) {
            ctx->pc = 0x25A2F4u;
            goto label_25a2f4;
        }
    }
    ctx->pc = 0x25A2C4u;
    // 0x25a2c4: 0x4307c  dsll32      $a2, $a0, 1
    ctx->pc = 0x25a2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 1));
    // 0x25a2c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x25a2c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x25a2cc: 0x2403111c  addiu       $v1, $zero, 0x111C
    ctx->pc = 0x25a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4380));
    // 0x25a2d0: 0x66282b  sltu        $a1, $v1, $a2
    ctx->pc = 0x25a2d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x25a2d4: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x25a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
    // 0x25a2d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25a2d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25a2dc: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x25a2dcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x25a2e0: 0x43202b  sltu        $a0, $v0, $v1
    ctx->pc = 0x25a2e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a2e4: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x25a2e4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x25a2e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25a2ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25A2ECu;
    {
        const bool branch_taken_0x25a2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2ECu;
        // 0x25a2f0: 0x2103e  dsrl32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2ec) {
            ctx->pc = 0x25A2FCu;
            goto label_25a2fc;
        }
    }
    ctx->pc = 0x25A2F4u;
label_25a2f4:
    // 0x25a2f4: 0xc048082  jal         func_120208
    ctx->pc = 0x25A2F4u;
    SET_GPR_U32(ctx, 31, 0x25A2FCu);
    ctx->pc = 0x25A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2F4u;
    // 0x25a2f8: 0x8c6512c8  lw          $a1, 0x12C8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x25A2F4u, 0x25A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2FCu;
label_25a2fc:
    // 0x25a2fc: 0xfe220088  sd          $v0, 0x88($s1)
    ctx->pc = 0x25a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 2));
label_25a300:
    // 0x25a300: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x25a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_25a304:
    // 0x25a304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a308: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25A308u;
    SET_GPR_U32(ctx, 31, 0x25A310u);
    ctx->pc = 0x25A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A308u;
    // 0x25a30c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x25A308u, 0x25A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A310u;
label_25a310:
    // 0x25a310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25a310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25a314:
    // 0x25a314: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25a314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a320: 0x3e00008  jr          $ra
    ctx->pc = 0x25A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A320u;
        // 0x25a324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A328u;
}
