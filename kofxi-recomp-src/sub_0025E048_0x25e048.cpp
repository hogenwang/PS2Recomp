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

// Function: sub_0025E048
// Address: 0x25e048 - 0x25e278
void sub_0025E048_0x25e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E048_0x25e048");
#endif

    switch (ctx->pc) {
        case 0x25e048u: goto label_25e048;
        case 0x25e04cu: goto label_25e04c;
        case 0x25e050u: goto label_25e050;
        case 0x25e054u: goto label_25e054;
        case 0x25e058u: goto label_25e058;
        case 0x25e05cu: goto label_25e05c;
        case 0x25e060u: goto label_25e060;
        case 0x25e064u: goto label_25e064;
        case 0x25e068u: goto label_25e068;
        case 0x25e06cu: goto label_25e06c;
        case 0x25e070u: goto label_25e070;
        case 0x25e074u: goto label_25e074;
        case 0x25e078u: goto label_25e078;
        case 0x25e07cu: goto label_25e07c;
        case 0x25e080u: goto label_25e080;
        case 0x25e084u: goto label_25e084;
        case 0x25e088u: goto label_25e088;
        case 0x25e08cu: goto label_25e08c;
        case 0x25e090u: goto label_25e090;
        case 0x25e094u: goto label_25e094;
        case 0x25e098u: goto label_25e098;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e0a0u: goto label_25e0a0;
        case 0x25e0a4u: goto label_25e0a4;
        case 0x25e0a8u: goto label_25e0a8;
        case 0x25e0acu: goto label_25e0ac;
        case 0x25e0b0u: goto label_25e0b0;
        case 0x25e0b4u: goto label_25e0b4;
        case 0x25e0b8u: goto label_25e0b8;
        case 0x25e0bcu: goto label_25e0bc;
        case 0x25e0c0u: goto label_25e0c0;
        case 0x25e0c4u: goto label_25e0c4;
        case 0x25e0c8u: goto label_25e0c8;
        case 0x25e0ccu: goto label_25e0cc;
        case 0x25e0d0u: goto label_25e0d0;
        case 0x25e0d4u: goto label_25e0d4;
        case 0x25e0d8u: goto label_25e0d8;
        case 0x25e0dcu: goto label_25e0dc;
        case 0x25e0e0u: goto label_25e0e0;
        case 0x25e0e4u: goto label_25e0e4;
        case 0x25e0e8u: goto label_25e0e8;
        case 0x25e0ecu: goto label_25e0ec;
        case 0x25e0f0u: goto label_25e0f0;
        case 0x25e0f4u: goto label_25e0f4;
        case 0x25e0f8u: goto label_25e0f8;
        case 0x25e0fcu: goto label_25e0fc;
        case 0x25e100u: goto label_25e100;
        case 0x25e104u: goto label_25e104;
        case 0x25e108u: goto label_25e108;
        case 0x25e10cu: goto label_25e10c;
        case 0x25e110u: goto label_25e110;
        case 0x25e114u: goto label_25e114;
        case 0x25e118u: goto label_25e118;
        case 0x25e11cu: goto label_25e11c;
        case 0x25e120u: goto label_25e120;
        case 0x25e124u: goto label_25e124;
        case 0x25e128u: goto label_25e128;
        case 0x25e12cu: goto label_25e12c;
        case 0x25e130u: goto label_25e130;
        case 0x25e134u: goto label_25e134;
        case 0x25e138u: goto label_25e138;
        case 0x25e13cu: goto label_25e13c;
        case 0x25e140u: goto label_25e140;
        case 0x25e144u: goto label_25e144;
        case 0x25e148u: goto label_25e148;
        case 0x25e14cu: goto label_25e14c;
        case 0x25e150u: goto label_25e150;
        case 0x25e154u: goto label_25e154;
        case 0x25e158u: goto label_25e158;
        case 0x25e15cu: goto label_25e15c;
        case 0x25e160u: goto label_25e160;
        case 0x25e164u: goto label_25e164;
        case 0x25e168u: goto label_25e168;
        case 0x25e16cu: goto label_25e16c;
        case 0x25e170u: goto label_25e170;
        case 0x25e174u: goto label_25e174;
        case 0x25e178u: goto label_25e178;
        case 0x25e17cu: goto label_25e17c;
        case 0x25e180u: goto label_25e180;
        case 0x25e184u: goto label_25e184;
        case 0x25e188u: goto label_25e188;
        case 0x25e18cu: goto label_25e18c;
        case 0x25e190u: goto label_25e190;
        case 0x25e194u: goto label_25e194;
        case 0x25e198u: goto label_25e198;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1a0u: goto label_25e1a0;
        case 0x25e1a4u: goto label_25e1a4;
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e250u: goto label_25e250;
        case 0x25e254u: goto label_25e254;
        case 0x25e258u: goto label_25e258;
        case 0x25e25cu: goto label_25e25c;
        case 0x25e260u: goto label_25e260;
        case 0x25e264u: goto label_25e264;
        case 0x25e268u: goto label_25e268;
        case 0x25e26cu: goto label_25e26c;
        case 0x25e270u: goto label_25e270;
        case 0x25e274u: goto label_25e274;
        default: break;
    }

    ctx->pc = 0x25e048u;

label_25e048:
    // 0x25e048: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25e04c:
    // 0x25e04c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_25e050:
    // 0x25e050: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_25e054:
    // 0x25e054: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25e054u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25e058:
    // 0x25e058: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_25e05c:
    // 0x25e05c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25e05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25e060:
    // 0x25e060: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_25e064:
    // 0x25e064: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25e064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25e068:
    // 0x25e068: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_25e06c:
    // 0x25e06c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25e06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25e070:
    // 0x25e070: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_25e074:
    // 0x25e074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e078:
    // 0x25e078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_25e07c:
    // 0x25e07c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_25e080:
    // 0x25e080: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_25e084:
    // 0x25e084: 0xc09728e  jal         func_25CA38
label_25e088:
    if (ctx->pc == 0x25E088u) {
        ctx->pc = 0x25E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E084u;
        // 0x25e088: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E08Cu;
        goto label_25e08c;
    }
    ctx->pc = 0x25E084u;
    SET_GPR_U32(ctx, 31, 0x25E08Cu);
    ctx->pc = 0x25E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E084u;
    // 0x25e088: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25E084u, 0x25E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E08Cu;
label_25e08c:
    // 0x25e08c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25e08cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e090:
    // 0x25e090: 0x12a0006e  beqz        $s5, . + 4 + (0x6E << 2)
label_25e094:
    if (ctx->pc == 0x25E094u) {
        ctx->pc = 0x25E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E090u;
        // 0x25e094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E098u;
        goto label_25e098;
    }
    ctx->pc = 0x25E090u;
    {
        const bool branch_taken_0x25e090 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E090u;
        // 0x25e094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e090) {
            ctx->pc = 0x25E24Cu;
            goto label_25e24c;
        }
    }
    ctx->pc = 0x25E098u;
label_25e098:
    // 0x25e098: 0xc08c0ca  jal         func_230328
label_25e09c:
    if (ctx->pc == 0x25E09Cu) {
        ctx->pc = 0x25E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E098u;
        // 0x25e09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0A0u;
        goto label_25e0a0;
    }
    ctx->pc = 0x25E098u;
    SET_GPR_U32(ctx, 31, 0x25E0A0u);
    ctx->pc = 0x25E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E098u;
    // 0x25e09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25E098u, 0x25E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0A0u;
label_25e0a0:
    // 0x25e0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e0a4:
    // 0x25e0a4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_25e0a8:
    if (ctx->pc == 0x25E0A8u) {
        ctx->pc = 0x25E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0A4u;
        // 0x25e0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0ACu;
        goto label_25e0ac;
    }
    ctx->pc = 0x25E0A4u;
    {
        const bool branch_taken_0x25e0a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0A4u;
        // 0x25e0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0a4) {
            ctx->pc = 0x25E0B4u;
            goto label_25e0b4;
        }
    }
    ctx->pc = 0x25E0ACu;
label_25e0ac:
    // 0x25e0ac: 0x10000062  b           . + 4 + (0x62 << 2)
label_25e0b0:
    if (ctx->pc == 0x25E0B0u) {
        ctx->pc = 0x25E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0ACu;
        // 0x25e0b0: 0x24160009  addiu       $s6, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0B4u;
        goto label_25e0b4;
    }
    ctx->pc = 0x25E0ACu;
    {
        const bool branch_taken_0x25e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0ACu;
        // 0x25e0b0: 0x24160009  addiu       $s6, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0ac) {
            ctx->pc = 0x25E238u;
            goto label_25e238;
        }
    }
    ctx->pc = 0x25E0B4u;
label_25e0b4:
    // 0x25e0b4: 0xc0973a6  jal         func_25CE98
label_25e0b8:
    if (ctx->pc == 0x25E0B8u) {
        ctx->pc = 0x25E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0B4u;
        // 0x25e0b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0BCu;
        goto label_25e0bc;
    }
    ctx->pc = 0x25E0B4u;
    SET_GPR_U32(ctx, 31, 0x25E0BCu);
    ctx->pc = 0x25E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0B4u;
    // 0x25e0b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25E0B4u, 0x25E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0BCu;
label_25e0bc:
    // 0x25e0bc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_25e0c0:
    if (ctx->pc == 0x25E0C0u) {
        ctx->pc = 0x25E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0BCu;
        // 0x25e0c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0C4u;
        goto label_25e0c4;
    }
    ctx->pc = 0x25E0BCu;
    {
        const bool branch_taken_0x25e0bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0BCu;
        // 0x25e0c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0bc) {
            ctx->pc = 0x25E0C8u;
            goto label_25e0c8;
        }
    }
    ctx->pc = 0x25E0C4u;
label_25e0c4:
    // 0x25e0c4: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x25e0c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25e0c8:
    // 0x25e0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e0cc:
    // 0x25e0cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e0d0:
    // 0x25e0d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25e0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e0d4:
    // 0x25e0d4: 0xc08bf82  jal         func_22FE08
label_25e0d8:
    if (ctx->pc == 0x25E0D8u) {
        ctx->pc = 0x25E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0D4u;
        // 0x25e0d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0DCu;
        goto label_25e0dc;
    }
    ctx->pc = 0x25E0D4u;
    SET_GPR_U32(ctx, 31, 0x25E0DCu);
    ctx->pc = 0x25E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0D4u;
    // 0x25e0d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE08u, 0x25E0D4u, 0x25E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0DCu;
label_25e0dc:
    // 0x25e0dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25e0dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e0e0:
    // 0x25e0e0: 0x16c00051  bnez        $s6, . + 4 + (0x51 << 2)
label_25e0e4:
    if (ctx->pc == 0x25E0E4u) {
        ctx->pc = 0x25E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0E0u;
        // 0x25e0e4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0E8u;
        goto label_25e0e8;
    }
    ctx->pc = 0x25E0E0u;
    {
        const bool branch_taken_0x25e0e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0E0u;
        // 0x25e0e4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0e0) {
            ctx->pc = 0x25E228u;
            goto label_25e228;
        }
    }
    ctx->pc = 0x25E0E8u;
label_25e0e8:
    // 0x25e0e8: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_25e0ec:
    if (ctx->pc == 0x25E0ECu) {
        ctx->pc = 0x25E0F0u;
        goto label_25e0f0;
    }
    ctx->pc = 0x25E0E8u;
    {
        const bool branch_taken_0x25e0e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0e8) {
            ctx->pc = 0x25E228u;
            goto label_25e228;
        }
    }
    ctx->pc = 0x25E0F0u;
label_25e0f0:
    // 0x25e0f0: 0x1280004d  beqz        $s4, . + 4 + (0x4D << 2)
label_25e0f4:
    if (ctx->pc == 0x25E0F4u) {
        ctx->pc = 0x25E0F8u;
        goto label_25e0f8;
    }
    ctx->pc = 0x25E0F0u;
    {
        const bool branch_taken_0x25e0f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0f0) {
            ctx->pc = 0x25E228u;
            goto label_25e228;
        }
    }
    ctx->pc = 0x25E0F8u;
label_25e0f8:
    // 0x25e0f8: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
label_25e0fc:
    if (ctx->pc == 0x25E0FCu) {
        ctx->pc = 0x25E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0F8u;
        // 0x25e0fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E100u;
        goto label_25e100;
    }
    ctx->pc = 0x25E0F8u;
    {
        const bool branch_taken_0x25e0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0F8u;
        // 0x25e0fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0f8) {
            ctx->pc = 0x25E238u;
            goto label_25e238;
        }
    }
    ctx->pc = 0x25E100u;
label_25e100:
    // 0x25e100: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x25e100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_25e104:
    // 0x25e104: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_25e108:
    if (ctx->pc == 0x25E108u) {
        ctx->pc = 0x25E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E104u;
        // 0x25e108: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E10Cu;
        goto label_25e10c;
    }
    ctx->pc = 0x25E104u;
    {
        const bool branch_taken_0x25e104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E104u;
        // 0x25e108: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e104) {
            ctx->pc = 0x25E220u;
            goto label_25e220;
        }
    }
    ctx->pc = 0x25E10Cu;
label_25e10c:
    // 0x25e10c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x25e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25e110:
    // 0x25e110: 0x2938023  subu        $s0, $s4, $s3
    ctx->pc = 0x25e110u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_25e114:
    // 0x25e114: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x25e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25e118:
    // 0x25e118: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x25e118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_25e11c:
    // 0x25e11c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25e11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e120:
    // 0x25e120: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x25e120u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_25e124:
    // 0x25e124: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e128:
    // 0x25e128: 0xc08b4f8  jal         func_22D3E0
label_25e12c:
    if (ctx->pc == 0x25E12Cu) {
        ctx->pc = 0x25E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E128u;
        // 0x25e12c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E130u;
        goto label_25e130;
    }
    ctx->pc = 0x25E128u;
    SET_GPR_U32(ctx, 31, 0x25E130u);
    ctx->pc = 0x25E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E128u;
    // 0x25e12c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25E128u, 0x25E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E130u;
label_25e130:
    // 0x25e130: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x25e130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_25e134:
    // 0x25e134: 0xc08c682  jal         func_231A08
label_25e138:
    if (ctx->pc == 0x25E138u) {
        ctx->pc = 0x25E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E134u;
        // 0x25e138: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E13Cu;
        goto label_25e13c;
    }
    ctx->pc = 0x25E134u;
    SET_GPR_U32(ctx, 31, 0x25E13Cu);
    ctx->pc = 0x25E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E134u;
    // 0x25e138: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25E134u, 0x25E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E13Cu;
label_25e13c:
    // 0x25e13c: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x25e13cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_25e140:
    // 0x25e140: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25e140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e144:
    // 0x25e144: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x25e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_25e148:
    // 0x25e148: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25e14c:
    if (ctx->pc == 0x25E14Cu) {
        ctx->pc = 0x25E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E148u;
        // 0x25e14c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E150u;
        goto label_25e150;
    }
    ctx->pc = 0x25E148u;
    {
        const bool branch_taken_0x25e148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E148u;
        // 0x25e14c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e148) {
            ctx->pc = 0x25E170u;
            goto label_25e170;
        }
    }
    ctx->pc = 0x25E150u;
label_25e150:
    // 0x25e150: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x25e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_25e154:
    // 0x25e154: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_25e158:
    if (ctx->pc == 0x25E158u) {
        ctx->pc = 0x25E15Cu;
        goto label_25e15c;
    }
    ctx->pc = 0x25E154u;
    {
        const bool branch_taken_0x25e154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e154) {
            ctx->pc = 0x25E170u;
            goto label_25e170;
        }
    }
    ctx->pc = 0x25E15Cu;
label_25e15c:
    // 0x25e15c: 0xc08a9d6  jal         func_22A758
label_25e160:
    if (ctx->pc == 0x25E160u) {
        ctx->pc = 0x25E164u;
        goto label_25e164;
    }
    ctx->pc = 0x25E15Cu;
    SET_GPR_U32(ctx, 31, 0x25E164u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25E15Cu, 0x25E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E164u;
label_25e164:
    // 0x25e164: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25e164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_25e168:
    // 0x25e168: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x25e168u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_25e16c:
    // 0x25e16c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x25e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25e170:
    // 0x25e170: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_25e174:
    if (ctx->pc == 0x25E174u) {
        ctx->pc = 0x25E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E170u;
        // 0x25e174: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E178u;
        goto label_25e178;
    }
    ctx->pc = 0x25E170u;
    {
        const bool branch_taken_0x25e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e170) {
            ctx->pc = 0x25E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E170u;
            // 0x25e174: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E1F4u;
            goto label_25e1f4;
        }
    }
    ctx->pc = 0x25E178u;
label_25e178:
    // 0x25e178: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_25e17c:
    // 0x25e17c: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_25e180:
    if (ctx->pc == 0x25E180u) {
        ctx->pc = 0x25E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E17Cu;
        // 0x25e180: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E184u;
        goto label_25e184;
    }
    ctx->pc = 0x25E17Cu;
    {
        const bool branch_taken_0x25e17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x25E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E17Cu;
        // 0x25e180: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e17c) {
            ctx->pc = 0x25E1A0u;
            goto label_25e1a0;
        }
    }
    ctx->pc = 0x25E184u;
label_25e184:
    // 0x25e184: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x25e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_25e188:
    // 0x25e188: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x25e188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_25e18c:
    // 0x25e18c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x25e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_25e190:
    // 0x25e190: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_25e194:
    // 0x25e194: 0x10000012  b           . + 4 + (0x12 << 2)
label_25e198:
    if (ctx->pc == 0x25E198u) {
        ctx->pc = 0x25E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E194u;
        // 0x25e198: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E19Cu;
        goto label_25e19c;
    }
    ctx->pc = 0x25E194u;
    {
        const bool branch_taken_0x25e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E194u;
        // 0x25e198: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e194) {
            ctx->pc = 0x25E1E0u;
            goto label_25e1e0;
        }
    }
    ctx->pc = 0x25E19Cu;
label_25e19c:
    // 0x25e19c: 0x0  nop
    ctx->pc = 0x25e19cu;
    // NOP
label_25e1a0:
    // 0x25e1a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_25e1a4:
    if (ctx->pc == 0x25E1A4u) {
        ctx->pc = 0x25E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1A0u;
        // 0x25e1a4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1A8u;
        goto label_25e1a8;
    }
    ctx->pc = 0x25E1A0u;
    {
        const bool branch_taken_0x25e1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e1a0) {
            ctx->pc = 0x25E1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E1A0u;
            // 0x25e1a4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E1B8u;
            goto label_25e1b8;
        }
    }
    ctx->pc = 0x25E1A8u;
label_25e1a8:
    // 0x25e1a8: 0xc098560  jal         func_261580
label_25e1ac:
    if (ctx->pc == 0x25E1ACu) {
        ctx->pc = 0x25E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1A8u;
        // 0x25e1ac: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1B0u;
        goto label_25e1b0;
    }
    ctx->pc = 0x25E1A8u;
    SET_GPR_U32(ctx, 31, 0x25E1B0u);
    ctx->pc = 0x25E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1A8u;
    // 0x25e1ac: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25E1A8u, 0x25E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1B0u;
label_25e1b0:
    // 0x25e1b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_25e1b4:
    if (ctx->pc == 0x25E1B4u) {
        ctx->pc = 0x25E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1B0u;
        // 0x25e1b4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1B8u;
        goto label_25e1b8;
    }
    ctx->pc = 0x25E1B0u;
    {
        const bool branch_taken_0x25e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1B0u;
        // 0x25e1b4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1b0) {
            ctx->pc = 0x25E1E4u;
            goto label_25e1e4;
        }
    }
    ctx->pc = 0x25E1B8u;
label_25e1b8:
    // 0x25e1b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25e1bc:
    if (ctx->pc == 0x25E1BCu) {
        ctx->pc = 0x25E1C0u;
        goto label_25e1c0;
    }
    ctx->pc = 0x25E1B8u;
    {
        const bool branch_taken_0x25e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e1b8) {
            ctx->pc = 0x25E1D8u;
            goto label_25e1d8;
        }
    }
    ctx->pc = 0x25E1C0u;
label_25e1c0:
    // 0x25e1c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_25e1c4:
    // 0x25e1c4: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x25e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_25e1c8:
    // 0x25e1c8: 0x40f809  jalr        $v0
label_25e1cc:
    if (ctx->pc == 0x25E1CCu) {
        ctx->pc = 0x25E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1C8u;
        // 0x25e1cc: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1D0u;
        goto label_25e1d0;
    }
    ctx->pc = 0x25E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E1D0u);
        ctx->pc = 0x25E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1C8u;
        // 0x25e1cc: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E1C8u, 0x25E1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E1D0u;
label_25e1d0:
    // 0x25e1d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_25e1d4:
    if (ctx->pc == 0x25E1D4u) {
        ctx->pc = 0x25E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1D0u;
        // 0x25e1d4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1D8u;
        goto label_25e1d8;
    }
    ctx->pc = 0x25E1D0u;
    {
        const bool branch_taken_0x25e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1D0u;
        // 0x25e1d4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1d0) {
            ctx->pc = 0x25E1E4u;
            goto label_25e1e4;
        }
    }
    ctx->pc = 0x25E1D8u;
label_25e1d8:
    // 0x25e1d8: 0xc098560  jal         func_261580
label_25e1dc:
    if (ctx->pc == 0x25E1DCu) {
        ctx->pc = 0x25E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1D8u;
        // 0x25e1dc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1E0u;
        goto label_25e1e0;
    }
    ctx->pc = 0x25E1D8u;
    SET_GPR_U32(ctx, 31, 0x25E1E0u);
    ctx->pc = 0x25E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1D8u;
    // 0x25e1dc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25E1D8u, 0x25E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1E0u;
label_25e1e0:
    // 0x25e1e0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x25e1e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_25e1e4:
    // 0x25e1e4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x25e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_25e1e8:
    // 0x25e1e8: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x25e1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_25e1ec:
    // 0x25e1ec: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x25e1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_25e1f0:
    // 0x25e1f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25e1f4:
    // 0x25e1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e1f8:
    // 0x25e1f8: 0xc098560  jal         func_261580
label_25e1fc:
    if (ctx->pc == 0x25E1FCu) {
        ctx->pc = 0x25E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1F8u;
        // 0x25e1fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E200u;
        goto label_25e200;
    }
    ctx->pc = 0x25E1F8u;
    SET_GPR_U32(ctx, 31, 0x25E200u);
    ctx->pc = 0x25E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1F8u;
    // 0x25e1fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25E1F8u, 0x25E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E200u;
label_25e200:
    // 0x25e200: 0xc08c698  jal         func_231A60
label_25e204:
    if (ctx->pc == 0x25E204u) {
        ctx->pc = 0x25E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E200u;
        // 0x25e204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E208u;
        goto label_25e208;
    }
    ctx->pc = 0x25E200u;
    SET_GPR_U32(ctx, 31, 0x25E208u);
    ctx->pc = 0x25E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E200u;
    // 0x25e204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25E200u, 0x25E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E208u;
label_25e208:
    // 0x25e208: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25e20c:
    // 0x25e20c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_25e210:
    if (ctx->pc == 0x25E210u) {
        ctx->pc = 0x25E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E20Cu;
        // 0x25e210: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E214u;
        goto label_25e214;
    }
    ctx->pc = 0x25E20Cu;
    {
        const bool branch_taken_0x25e20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E20Cu;
        // 0x25e210: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e20c) {
            ctx->pc = 0x25E220u;
            goto label_25e220;
        }
    }
    ctx->pc = 0x25E214u;
label_25e214:
    // 0x25e214: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x25e214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_25e218:
    // 0x25e218: 0x5440ffbd  bnel        $v0, $zero, . + 4 + (-0x43 << 2)
label_25e21c:
    if (ctx->pc == 0x25E21Cu) {
        ctx->pc = 0x25E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E218u;
        // 0x25e21c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E220u;
        goto label_25e220;
    }
    ctx->pc = 0x25E218u;
    {
        const bool branch_taken_0x25e218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e218) {
            ctx->pc = 0x25E21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E218u;
            // 0x25e21c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e110;
        }
    }
    ctx->pc = 0x25E220u;
label_25e220:
    // 0x25e220: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_25e224:
    if (ctx->pc == 0x25E224u) {
        ctx->pc = 0x25E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E220u;
        // 0x25e224: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E228u;
        goto label_25e228;
    }
    ctx->pc = 0x25E220u;
    {
        const bool branch_taken_0x25e220 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e220) {
            ctx->pc = 0x25E224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E220u;
            // 0x25e224: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E228u;
            goto label_25e228;
        }
    }
    ctx->pc = 0x25E228u;
label_25e228:
    // 0x25e228: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_25e22c:
    if (ctx->pc == 0x25E22Cu) {
        ctx->pc = 0x25E230u;
        goto label_25e230;
    }
    ctx->pc = 0x25E228u;
    {
        const bool branch_taken_0x25e228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e228) {
            ctx->pc = 0x25E238u;
            goto label_25e238;
        }
    }
    ctx->pc = 0x25E230u;
label_25e230:
    // 0x25e230: 0xc08a996  jal         func_22A658
label_25e234:
    if (ctx->pc == 0x25E234u) {
        ctx->pc = 0x25E238u;
        goto label_25e238;
    }
    ctx->pc = 0x25E230u;
    SET_GPR_U32(ctx, 31, 0x25E238u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x25E230u, 0x25E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E238u;
label_25e238:
    // 0x25e238: 0xc0973ac  jal         func_25CEB0
label_25e23c:
    if (ctx->pc == 0x25E23Cu) {
        ctx->pc = 0x25E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E238u;
        // 0x25e23c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E240u;
        goto label_25e240;
    }
    ctx->pc = 0x25E238u;
    SET_GPR_U32(ctx, 31, 0x25E240u);
    ctx->pc = 0x25E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E238u;
    // 0x25e23c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25E238u, 0x25E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E240u;
label_25e240:
    // 0x25e240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25e244:
    // 0x25e244: 0xc0972da  jal         func_25CB68
label_25e248:
    if (ctx->pc == 0x25E248u) {
        ctx->pc = 0x25E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E244u;
        // 0x25e248: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E24Cu;
        goto label_25e24c;
    }
    ctx->pc = 0x25E244u;
    SET_GPR_U32(ctx, 31, 0x25E24Cu);
    ctx->pc = 0x25E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E244u;
    // 0x25e248: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25E244u, 0x25E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E24Cu;
label_25e24c:
    // 0x25e24c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25e24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25e250:
    // 0x25e250: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25e250u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25e254:
    // 0x25e254: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25e254u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25e258:
    // 0x25e258: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25e258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25e25c:
    // 0x25e25c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25e25cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25e260:
    // 0x25e260: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25e260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25e264:
    // 0x25e264: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25e264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e268:
    // 0x25e268: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25e268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e26c:
    // 0x25e26c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25e26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e270:
    // 0x25e270: 0x3e00008  jr          $ra
label_25e274:
    if (ctx->pc == 0x25E274u) {
        ctx->pc = 0x25E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E270u;
        // 0x25e274: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E278u;
        goto label_fallthrough_0x25e270;
    }
    ctx->pc = 0x25E270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E270u;
        // 0x25e274: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e270:
    ctx->pc = 0x25E278u;
}
