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

// Function: sub_0022E130
// Address: 0x22e130 - 0x22e2e0
void sub_0022E130_0x22e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E130_0x22e130");
#endif

    switch (ctx->pc) {
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        case 0x22e198u: goto label_22e198;
        case 0x22e19cu: goto label_22e19c;
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        case 0x22e230u: goto label_22e230;
        case 0x22e234u: goto label_22e234;
        case 0x22e238u: goto label_22e238;
        case 0x22e23cu: goto label_22e23c;
        case 0x22e240u: goto label_22e240;
        case 0x22e244u: goto label_22e244;
        case 0x22e248u: goto label_22e248;
        case 0x22e24cu: goto label_22e24c;
        case 0x22e250u: goto label_22e250;
        case 0x22e254u: goto label_22e254;
        case 0x22e258u: goto label_22e258;
        case 0x22e25cu: goto label_22e25c;
        case 0x22e260u: goto label_22e260;
        case 0x22e264u: goto label_22e264;
        case 0x22e268u: goto label_22e268;
        case 0x22e26cu: goto label_22e26c;
        case 0x22e270u: goto label_22e270;
        case 0x22e274u: goto label_22e274;
        case 0x22e278u: goto label_22e278;
        case 0x22e27cu: goto label_22e27c;
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        default: break;
    }

    ctx->pc = 0x22e130u;

label_22e130:
    // 0x22e130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22e134:
    // 0x22e134: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22e138:
    // 0x22e138: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22e13c:
    // 0x22e13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e140:
    // 0x22e140: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22e144:
    // 0x22e144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22e148:
    // 0x22e148: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22e148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e14c:
    // 0x22e14c: 0xc08c682  jal         func_231A08
label_22e150:
    if (ctx->pc == 0x22E150u) {
        ctx->pc = 0x22E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E14Cu;
        // 0x22e150: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E154u;
        goto label_22e154;
    }
    ctx->pc = 0x22E14Cu;
    SET_GPR_U32(ctx, 31, 0x22E154u);
    ctx->pc = 0x22E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E14Cu;
    // 0x22e150: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E14Cu, 0x22E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E154u;
label_22e154:
    // 0x22e154: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22e154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e158:
    // 0x22e158: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x22e158u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_22e15c:
    // 0x22e15c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22e160:
    // 0x22e160: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_22e164:
    if (ctx->pc == 0x22E164u) {
        ctx->pc = 0x22E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E160u;
        // 0x22e164: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E168u;
        goto label_22e168;
    }
    ctx->pc = 0x22E160u;
    {
        const bool branch_taken_0x22e160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e160) {
            ctx->pc = 0x22E164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E160u;
            // 0x22e164: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E1C0u;
            goto label_22e1c0;
        }
    }
    ctx->pc = 0x22E168u;
label_22e168:
    // 0x22e168: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x22e168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22e16c:
    // 0x22e16c: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_22e170:
    if (ctx->pc == 0x22E170u) {
        ctx->pc = 0x22E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E16Cu;
        // 0x22e170: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E174u;
        goto label_22e174;
    }
    ctx->pc = 0x22E16Cu;
    {
        const bool branch_taken_0x22e16c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e16c) {
            ctx->pc = 0x22E170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E16Cu;
            // 0x22e170: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E1B4u;
            goto label_22e1b4;
        }
    }
    ctx->pc = 0x22E174u;
label_22e174:
    // 0x22e174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e178:
    // 0x22e178: 0xc08c1d4  jal         func_230750
label_22e17c:
    if (ctx->pc == 0x22E17Cu) {
        ctx->pc = 0x22E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E178u;
        // 0x22e17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E180u;
        goto label_22e180;
    }
    ctx->pc = 0x22E178u;
    SET_GPR_U32(ctx, 31, 0x22E180u);
    ctx->pc = 0x22E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E178u;
    // 0x22e17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230750u, 0x22E178u, 0x22E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E180u;
label_22e180:
    // 0x22e180: 0xc08b8b8  jal         func_22E2E0
label_22e184:
    if (ctx->pc == 0x22E184u) {
        ctx->pc = 0x22E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E180u;
        // 0x22e184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E188u;
        goto label_22e188;
    }
    ctx->pc = 0x22E180u;
    SET_GPR_U32(ctx, 31, 0x22E188u);
    ctx->pc = 0x22E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E180u;
    // 0x22e184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2E0u, 0x22E180u, 0x22E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E188u;
label_22e188:
    // 0x22e188: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x22e188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22e18c:
    // 0x22e18c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_22e190:
    if (ctx->pc == 0x22E190u) {
        ctx->pc = 0x22E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E18Cu;
        // 0x22e190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E194u;
        goto label_22e194;
    }
    ctx->pc = 0x22E18Cu;
    {
        const bool branch_taken_0x22e18c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e18c) {
            ctx->pc = 0x22E190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E18Cu;
            // 0x22e190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e178;
        }
    }
    ctx->pc = 0x22E194u;
label_22e194:
    // 0x22e194: 0x10000007  b           . + 4 + (0x7 << 2)
label_22e198:
    if (ctx->pc == 0x22E198u) {
        ctx->pc = 0x22E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E194u;
        // 0x22e198: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E19Cu;
        goto label_22e19c;
    }
    ctx->pc = 0x22E194u;
    {
        const bool branch_taken_0x22e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E194u;
        // 0x22e198: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e194) {
            ctx->pc = 0x22E1B4u;
            goto label_22e1b4;
        }
    }
    ctx->pc = 0x22E19Cu;
label_22e19c:
    // 0x22e19c: 0x0  nop
    ctx->pc = 0x22e19cu;
    // NOP
label_22e1a0:
    // 0x22e1a0: 0xc08c1d4  jal         func_230750
label_22e1a4:
    if (ctx->pc == 0x22E1A4u) {
        ctx->pc = 0x22E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1A0u;
        // 0x22e1a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1A8u;
        goto label_22e1a8;
    }
    ctx->pc = 0x22E1A0u;
    SET_GPR_U32(ctx, 31, 0x22E1A8u);
    ctx->pc = 0x22E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1A0u;
    // 0x22e1a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230750u, 0x22E1A0u, 0x22E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1A8u;
label_22e1a8:
    // 0x22e1a8: 0xc08b8b8  jal         func_22E2E0
label_22e1ac:
    if (ctx->pc == 0x22E1ACu) {
        ctx->pc = 0x22E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1A8u;
        // 0x22e1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1B0u;
        goto label_22e1b0;
    }
    ctx->pc = 0x22E1A8u;
    SET_GPR_U32(ctx, 31, 0x22E1B0u);
    ctx->pc = 0x22E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1A8u;
    // 0x22e1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2E0u, 0x22E1A8u, 0x22E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1B0u;
label_22e1b0:
    // 0x22e1b0: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x22e1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22e1b4:
    // 0x22e1b4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_22e1b8:
    if (ctx->pc == 0x22E1B8u) {
        ctx->pc = 0x22E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1B4u;
        // 0x22e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1BCu;
        goto label_22e1bc;
    }
    ctx->pc = 0x22E1B4u;
    {
        const bool branch_taken_0x22e1b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e1b4) {
            ctx->pc = 0x22E1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E1B4u;
            // 0x22e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E1A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e1a0;
        }
    }
    ctx->pc = 0x22E1BCu;
label_22e1bc:
    // 0x22e1bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x22e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22e1c0:
    // 0x22e1c0: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_22e1c4:
    if (ctx->pc == 0x22E1C4u) {
        ctx->pc = 0x22E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1C0u;
        // 0x22e1c4: 0x96230006  lhu         $v1, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1C8u;
        goto label_22e1c8;
    }
    ctx->pc = 0x22E1C0u;
    {
        const bool branch_taken_0x22e1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1c0) {
            ctx->pc = 0x22E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E1C0u;
            // 0x22e1c4: 0x96230006  lhu         $v1, 0x6($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E1C8u;
label_22e1c8:
    // 0x22e1c8: 0x96240006  lhu         $a0, 0x6($s1)
    ctx->pc = 0x22e1c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22e1cc:
    // 0x22e1cc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x22e1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_22e1d0:
    // 0x22e1d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_22e1d4:
    if (ctx->pc == 0x22E1D4u) {
        ctx->pc = 0x22E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1D0u;
        // 0x22e1d4: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1D8u;
        goto label_22e1d8;
    }
    ctx->pc = 0x22E1D0u;
    {
        const bool branch_taken_0x22e1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1D0u;
        // 0x22e1d4: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1d0) {
            ctx->pc = 0x22E258u;
            goto label_22e258;
        }
    }
    ctx->pc = 0x22E1D8u;
label_22e1d8:
    // 0x22e1d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_22e1dc:
    if (ctx->pc == 0x22E1DCu) {
        ctx->pc = 0x22E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1D8u;
        // 0x22e1dc: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1E0u;
        goto label_22e1e0;
    }
    ctx->pc = 0x22E1D8u;
    {
        const bool branch_taken_0x22e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e1d8) {
            ctx->pc = 0x22E1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E1D8u;
            // 0x22e1dc: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E1F8u;
            goto label_22e1f8;
        }
    }
    ctx->pc = 0x22E1E0u;
label_22e1e0:
    // 0x22e1e0: 0xc08b938  jal         func_22E4E0
label_22e1e4:
    if (ctx->pc == 0x22E1E4u) {
        ctx->pc = 0x22E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1E0u;
        // 0x22e1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1E8u;
        goto label_22e1e8;
    }
    ctx->pc = 0x22E1E0u;
    SET_GPR_U32(ctx, 31, 0x22E1E8u);
    ctx->pc = 0x22E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1E0u;
    // 0x22e1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E4E0u, 0x22E1E0u, 0x22E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1E8u;
label_22e1e8:
    // 0x22e1e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22e1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e1ec:
    // 0x22e1ec: 0x5640001a  bnel        $s2, $zero, . + 4 + (0x1A << 2)
label_22e1f0:
    if (ctx->pc == 0x22E1F0u) {
        ctx->pc = 0x22E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1ECu;
        // 0x22e1f0: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1F4u;
        goto label_22e1f4;
    }
    ctx->pc = 0x22E1ECu;
    {
        const bool branch_taken_0x22e1ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e1ec) {
            ctx->pc = 0x22E1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E1ECu;
            // 0x22e1f0: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E258u;
            goto label_22e258;
        }
    }
    ctx->pc = 0x22E1F4u;
label_22e1f4:
    // 0x22e1f4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x22e1f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_22e1f8:
    // 0x22e1f8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x22e1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_22e1fc:
    // 0x22e1fc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_22e200:
    if (ctx->pc == 0x22E200u) {
        ctx->pc = 0x22E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1FCu;
        // 0x22e200: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E204u;
        goto label_22e204;
    }
    ctx->pc = 0x22E1FCu;
    {
        const bool branch_taken_0x22e1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1fc) {
            ctx->pc = 0x22E200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E1FCu;
            // 0x22e200: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E258u;
            goto label_22e258;
        }
    }
    ctx->pc = 0x22E204u;
label_22e204:
    // 0x22e204: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x22e204u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_22e208:
    // 0x22e208: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x22e208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
label_22e20c:
    // 0x22e20c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x22e20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_22e210:
    // 0x22e210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22e210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22e214:
    // 0x22e214: 0x50430010  beql        $v0, $v1, . + 4 + (0x10 << 2)
label_22e218:
    if (ctx->pc == 0x22E218u) {
        ctx->pc = 0x22E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E214u;
        // 0x22e218: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E21Cu;
        goto label_22e21c;
    }
    ctx->pc = 0x22E214u;
    {
        const bool branch_taken_0x22e214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e214) {
            ctx->pc = 0x22E218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E214u;
            // 0x22e218: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E258u;
            goto label_22e258;
        }
    }
    ctx->pc = 0x22E21Cu;
label_22e21c:
    // 0x22e21c: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x22e21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_22e220:
    // 0x22e220: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x22e220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22e224:
    // 0x22e224: 0x0  nop
    ctx->pc = 0x22e224u;
    // NOP
label_22e228:
    // 0x22e228: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22e22c:
    // 0x22e22c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_22e230:
    if (ctx->pc == 0x22E230u) {
        ctx->pc = 0x22E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E22Cu;
        // 0x22e230: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E234u;
        goto label_22e234;
    }
    ctx->pc = 0x22E22Cu;
    {
        const bool branch_taken_0x22e22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e22c) {
            ctx->pc = 0x22E230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E22Cu;
            // 0x22e230: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E258u;
            goto label_22e258;
        }
    }
    ctx->pc = 0x22E234u;
label_22e234:
    // 0x22e234: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x22e234u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22e238:
    // 0x22e238: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x22e238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22e23c:
    // 0x22e23c: 0x2812  mflo        $a1
    ctx->pc = 0x22e23cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_22e240:
    // 0x22e240: 0xc08b65c  jal         func_22D970
label_22e244:
    if (ctx->pc == 0x22E244u) {
        ctx->pc = 0x22E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E240u;
        // 0x22e244: 0x26240036  addiu       $a0, $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E248u;
        goto label_22e248;
    }
    ctx->pc = 0x22E240u;
    SET_GPR_U32(ctx, 31, 0x22E248u);
    ctx->pc = 0x22E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E240u;
    // 0x22e244: 0x26240036  addiu       $a0, $s1, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x22E240u, 0x22E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E248u;
label_22e248:
    // 0x22e248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22e248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e24c:
    // 0x22e24c: 0x5240fff6  beql        $s2, $zero, . + 4 + (-0xA << 2)
label_22e250:
    if (ctx->pc == 0x22E250u) {
        ctx->pc = 0x22E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E24Cu;
        // 0x22e250: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E254u;
        goto label_22e254;
    }
    ctx->pc = 0x22E24Cu;
    {
        const bool branch_taken_0x22e24c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e24c) {
            ctx->pc = 0x22E250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E24Cu;
            // 0x22e250: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e228;
        }
    }
    ctx->pc = 0x22E254u;
label_22e254:
    // 0x22e254: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x22e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22e258:
    // 0x22e258: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_22e25c:
    if (ctx->pc == 0x22E25Cu) {
        ctx->pc = 0x22E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E258u;
        // 0x22e25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E260u;
        goto label_22e260;
    }
    ctx->pc = 0x22E258u;
    {
        const bool branch_taken_0x22e258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E258u;
        // 0x22e25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e258) {
            ctx->pc = 0x22E280u;
            goto label_22e280;
        }
    }
    ctx->pc = 0x22E260u;
label_22e260:
    // 0x22e260: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22e264:
    // 0x22e264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e268:
    // 0x22e268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e26c:
    // 0x22e26c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e270:
    // 0x22e270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e274:
    // 0x22e274: 0x40f809  jalr        $v0
label_22e278:
    if (ctx->pc == 0x22E278u) {
        ctx->pc = 0x22E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E274u;
        // 0x22e278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E27Cu;
        goto label_22e27c;
    }
    ctx->pc = 0x22E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E27Cu);
        ctx->pc = 0x22E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E274u;
        // 0x22e278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E274u, 0x22E27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E27Cu;
label_22e27c:
    // 0x22e27c: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x22e27cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_22e280:
    // 0x22e280: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x22e280u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22e284:
    // 0x22e284: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22e288:
    // 0x22e288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22e28c:
    if (ctx->pc == 0x22E28Cu) {
        ctx->pc = 0x22E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E288u;
        // 0x22e28c: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E290u;
        goto label_22e290;
    }
    ctx->pc = 0x22E288u;
    {
        const bool branch_taken_0x22e288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E288u;
        // 0x22e28c: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e288) {
            ctx->pc = 0x22E2A4u;
            goto label_22e2a4;
        }
    }
    ctx->pc = 0x22E290u;
label_22e290:
    // 0x22e290: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22e290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_22e294:
    // 0x22e294: 0xc08b5e0  jal         func_22D780
label_22e298:
    if (ctx->pc == 0x22E298u) {
        ctx->pc = 0x22E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E294u;
        // 0x22e298: 0x24844668  addiu       $a0, $a0, 0x4668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E29Cu;
        goto label_22e29c;
    }
    ctx->pc = 0x22E294u;
    SET_GPR_U32(ctx, 31, 0x22E29Cu);
    ctx->pc = 0x22E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E294u;
    // 0x22e298: 0x24844668  addiu       $a0, $a0, 0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22E294u, 0x22E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E29Cu;
label_22e29c:
    // 0x22e29c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x22e29cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22e2a0:
    // 0x22e2a0: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x22e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_22e2a4:
    // 0x22e2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e2a8:
    // 0x22e2a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22e2ac:
    // 0x22e2ac: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x22e2acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_22e2b0:
    // 0x22e2b0: 0xc08b822  jal         func_22E088
label_22e2b4:
    if (ctx->pc == 0x22E2B4u) {
        ctx->pc = 0x22E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B0u;
        // 0x22e2b4: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2B8u;
        goto label_22e2b8;
    }
    ctx->pc = 0x22E2B0u;
    SET_GPR_U32(ctx, 31, 0x22E2B8u);
    ctx->pc = 0x22E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2B0u;
    // 0x22e2b4: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E088u, 0x22E2B0u, 0x22E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2B8u;
label_22e2b8:
    // 0x22e2b8: 0xc08c698  jal         func_231A60
label_22e2bc:
    if (ctx->pc == 0x22E2BCu) {
        ctx->pc = 0x22E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B8u;
        // 0x22e2bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2C0u;
        goto label_22e2c0;
    }
    ctx->pc = 0x22E2B8u;
    SET_GPR_U32(ctx, 31, 0x22E2C0u);
    ctx->pc = 0x22E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2B8u;
    // 0x22e2bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E2B8u, 0x22E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2C0u;
label_22e2c0:
    // 0x22e2c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22e2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e2c4:
    // 0x22e2c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e2c8:
    // 0x22e2c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e2c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e2cc:
    // 0x22e2cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e2d0:
    // 0x22e2d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e2d4:
    // 0x22e2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e2d8:
    // 0x22e2d8: 0x3e00008  jr          $ra
label_22e2dc:
    if (ctx->pc == 0x22E2DCu) {
        ctx->pc = 0x22E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2D8u;
        // 0x22e2dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2E0u;
        goto label_fallthrough_0x22e2d8;
    }
    ctx->pc = 0x22E2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2D8u;
        // 0x22e2dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e2d8:
    ctx->pc = 0x22E2E0u;
}
