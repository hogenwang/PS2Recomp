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

// Function: sub_0025D108
// Address: 0x25d108 - 0x25d3b8
void sub_0025D108_0x25d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D108_0x25d108");
#endif

    switch (ctx->pc) {
        case 0x25d14cu: goto label_25d14c;
        case 0x25d168u: goto label_25d168;
        case 0x25d184u: goto label_25d184;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1f8u: goto label_25d1f8;
        case 0x25d220u: goto label_25d220;
        case 0x25d22cu: goto label_25d22c;
        case 0x25d27cu: goto label_25d27c;
        case 0x25d28cu: goto label_25d28c;
        case 0x25d2a4u: goto label_25d2a4;
        case 0x25d2b8u: goto label_25d2b8;
        case 0x25d2ccu: goto label_25d2cc;
        case 0x25d2d8u: goto label_25d2d8;
        case 0x25d2f0u: goto label_25d2f0;
        case 0x25d300u: goto label_25d300;
        case 0x25d32cu: goto label_25d32c;
        case 0x25d348u: goto label_25d348;
        case 0x25d35cu: goto label_25d35c;
        case 0x25d364u: goto label_25d364;
        case 0x25d36cu: goto label_25d36c;
        case 0x25d378u: goto label_25d378;
        default: break;
    }

    ctx->pc = 0x25d108u;

    // 0x25d108: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25d108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25d10c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x25d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x25d110: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25d114: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x25d114u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d118: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25d11c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25d11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d120: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x25d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25d124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25d124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d128: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25d12c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x25d12cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d130: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25d134: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25d138: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25d138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d13c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25d13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25d140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d144: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D144u;
    SET_GPR_U32(ctx, 31, 0x25D14Cu);
    ctx->pc = 0x25D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D144u;
    // 0x25d148: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25D144u, 0x25D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D14Cu;
label_25d14c:
    // 0x25d14c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25d14cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d150: 0x12c0008c  beqz        $s6, . + 4 + (0x8C << 2)
    ctx->pc = 0x25D150u;
    {
        const bool branch_taken_0x25d150 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D150u;
        // 0x25d154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d150) {
            ctx->pc = 0x25D384u;
            goto label_25d384;
        }
    }
    ctx->pc = 0x25D158u;
    // 0x25d158: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25D158u;
    {
        const bool branch_taken_0x25d158 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d158) {
            ctx->pc = 0x25D15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D158u;
            // 0x25d15c: 0x8fd50000  lw          $s5, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D160u;
            goto label_25d160;
        }
    }
    ctx->pc = 0x25D160u;
label_25d160:
    // 0x25d160: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25D160u;
    SET_GPR_U32(ctx, 31, 0x25D168u);
    ctx->pc = 0x25D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D160u;
    // 0x25d164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25D160u, 0x25D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D168u;
label_25d168:
    // 0x25d168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d16c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D16Cu;
    {
        const bool branch_taken_0x25d16c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D16Cu;
        // 0x25d170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d16c) {
            ctx->pc = 0x25D17Cu;
            goto label_25d17c;
        }
    }
    ctx->pc = 0x25D174u;
    // 0x25d174: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x25D174u;
    {
        const bool branch_taken_0x25d174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D174u;
        // 0x25d178: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d174) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D17Cu;
label_25d17c:
    // 0x25d17c: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25D17Cu;
    SET_GPR_U32(ctx, 31, 0x25D184u);
    ctx->pc = 0x25D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D17Cu;
    // 0x25d180: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25D17Cu, 0x25D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D184u;
label_25d184:
    // 0x25d184: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25D184u;
    SET_GPR_U32(ctx, 31, 0x25D18Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25D184u, 0x25D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D18Cu;
label_25d18c:
    // 0x25d18c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25d190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25d190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d194: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x25d194u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x25d198: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x25d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x25d19c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D19Cu;
    {
        const bool branch_taken_0x25d19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d19c) {
            ctx->pc = 0x25D1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D19Cu;
            // 0x25d1a0: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D1B8u;
            goto label_25d1b8;
        }
    }
    ctx->pc = 0x25D1A4u;
    // 0x25d1a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1a8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D1A8u;
    SET_GPR_U32(ctx, 31, 0x25D1B0u);
    ctx->pc = 0x25D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1A8u;
    // 0x25d1ac: 0x2412005f  addiu       $s2, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D1A8u, 0x25D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1B0u;
label_25d1b0:
    // 0x25d1b0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x25D1B0u;
    {
        const bool branch_taken_0x25d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d1b0) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D1B8u;
label_25d1b8:
    // 0x25d1b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25d1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25d1bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D1BCu;
    {
        const bool branch_taken_0x25d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d1bc) {
            ctx->pc = 0x25D1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D1BCu;
            // 0x25d1c0: 0x96030006  lhu         $v1, 0x6($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D1D8u;
            goto label_25d1d8;
        }
    }
    ctx->pc = 0x25D1C4u;
    // 0x25d1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1c8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D1C8u;
    SET_GPR_U32(ctx, 31, 0x25D1D0u);
    ctx->pc = 0x25D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1C8u;
    // 0x25d1cc: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D1C8u, 0x25D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1D0u;
label_25d1d0:
    // 0x25d1d0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x25D1D0u;
    {
        const bool branch_taken_0x25d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d1d0) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D1D8u;
label_25d1d8:
    // 0x25d1d8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x25d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x25d1dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D1DCu;
    {
        const bool branch_taken_0x25d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1DCu;
        // 0x25d1e0: 0x86020032  lh          $v0, 0x32($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1dc) {
            ctx->pc = 0x25D200u;
            goto label_25d200;
        }
    }
    ctx->pc = 0x25D1E4u;
    // 0x25d1e4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x25D1E4u;
    {
        const bool branch_taken_0x25d1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d1e4) {
            ctx->pc = 0x25D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D1E4u;
            // 0x25d1e8: 0x96020038  lhu         $v0, 0x38($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D264u;
            goto label_25d264;
        }
    }
    ctx->pc = 0x25D1ECu;
    // 0x25d1ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1f0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D1F0u;
    SET_GPR_U32(ctx, 31, 0x25D1F8u);
    ctx->pc = 0x25D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1F0u;
    // 0x25d1f4: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D1F0u, 0x25D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1F8u;
label_25d1f8:
    // 0x25d1f8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25D1F8u;
    {
        const bool branch_taken_0x25d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d1f8) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D200u;
label_25d200:
    // 0x25d200: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25D200u;
    {
        const bool branch_taken_0x25d200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D200u;
        // 0x25d204: 0x96020038  lhu         $v0, 0x38($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d200) {
            ctx->pc = 0x25D264u;
            goto label_25d264;
        }
    }
    ctx->pc = 0x25D208u;
    // 0x25d208: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x25D208u;
    {
        const bool branch_taken_0x25d208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d208) {
            ctx->pc = 0x25D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D208u;
            // 0x25d20c: 0x96120038  lhu         $s2, 0x38($s0) (Delay Slot)
            SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D270u;
            goto label_25d270;
        }
    }
    ctx->pc = 0x25D210u;
    // 0x25d210: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x25d210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25d214: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25D214u;
    {
        const bool branch_taken_0x25d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D214u;
        // 0x25d218: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d214) {
            ctx->pc = 0x25D25Cu;
            goto label_25d25c;
        }
    }
    ctx->pc = 0x25D21Cu;
    // 0x25d21c: 0x26110036  addiu       $s1, $s0, 0x36
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
label_25d220:
    // 0x25d220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d224: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x25D224u;
    SET_GPR_U32(ctx, 31, 0x25D22Cu);
    ctx->pc = 0x25D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D224u;
    // 0x25d228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x25D224u, 0x25D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D22Cu;
label_25d22c:
    // 0x25d22c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25d22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d230: 0x16400043  bnez        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x25D230u;
    {
        const bool branch_taken_0x25d230 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d230) {
            ctx->pc = 0x25D340u;
            goto label_25d340;
        }
    }
    ctx->pc = 0x25D238u;
    // 0x25d238: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x25d238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x25d23c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D23Cu;
    {
        const bool branch_taken_0x25d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D23Cu;
        // 0x25d240: 0x96020038  lhu         $v0, 0x38($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d23c) {
            ctx->pc = 0x25D264u;
            goto label_25d264;
        }
    }
    ctx->pc = 0x25D244u;
    // 0x25d244: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25D244u;
    {
        const bool branch_taken_0x25d244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d244) {
            ctx->pc = 0x25D248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D244u;
            // 0x25d248: 0x96120038  lhu         $s2, 0x38($s0) (Delay Slot)
            SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D270u;
            goto label_25d270;
        }
    }
    ctx->pc = 0x25D24Cu;
    // 0x25d24c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25d24cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25d250: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x25d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x25d254: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x25D254u;
    {
        const bool branch_taken_0x25d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D254u;
        // 0x25d258: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d254) {
            ctx->pc = 0x25D220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d220;
        }
    }
    ctx->pc = 0x25D25Cu;
label_25d25c:
    // 0x25d25c: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x25d25cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d260: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x25d260u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_25d264:
    // 0x25d264: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D264u;
    {
        const bool branch_taken_0x25d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d264) {
            ctx->pc = 0x25D284u;
            goto label_25d284;
        }
    }
    ctx->pc = 0x25D26Cu;
    // 0x25d26c: 0x96120038  lhu         $s2, 0x38($s0)
    ctx->pc = 0x25d26cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_25d270:
    // 0x25d270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d274: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D274u;
    SET_GPR_U32(ctx, 31, 0x25D27Cu);
    ctx->pc = 0x25D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D274u;
    // 0x25d278: 0xa6000038  sh          $zero, 0x38($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D274u, 0x25D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D27Cu;
label_25d27c:
    // 0x25d27c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x25D27Cu;
    {
        const bool branch_taken_0x25d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d27c) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D284u;
label_25d284:
    // 0x25d284: 0xc08c0b6  jal         func_2302D8
    ctx->pc = 0x25D284u;
    SET_GPR_U32(ctx, 31, 0x25D28Cu);
    ctx->pc = 0x2302D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2302D8u, 0x25D284u, 0x25D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D28Cu;
label_25d28c:
    // 0x25d28c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d290: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D290u;
    {
        const bool branch_taken_0x25d290 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x25d290) {
            ctx->pc = 0x25D294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D290u;
            // 0x25d294: 0x8e170020  lw          $s7, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D2ACu;
            goto label_25d2ac;
        }
    }
    ctx->pc = 0x25D298u;
    // 0x25d298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d29c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D29Cu;
    SET_GPR_U32(ctx, 31, 0x25D2A4u);
    ctx->pc = 0x25D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D29Cu;
    // 0x25d2a0: 0x24120018  addiu       $s2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D29Cu, 0x25D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2A4u;
label_25d2a4:
    // 0x25d2a4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25D2A4u;
    {
        const bool branch_taken_0x25d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d2a4) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D2ACu;
label_25d2ac:
    // 0x25d2ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d2b0: 0xc08c1d4  jal         func_230750
    ctx->pc = 0x25D2B0u;
    SET_GPR_U32(ctx, 31, 0x25D2B8u);
    ctx->pc = 0x25D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2B0u;
    // 0x25d2b4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230750u, 0x25D2B0u, 0x25D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2B8u;
label_25d2b8:
    // 0x25d2b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D2B8u;
    {
        const bool branch_taken_0x25d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d2b8) {
            ctx->pc = 0x25D2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D2B8u;
            // 0x25d2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D2D0u;
            goto label_25d2d0;
        }
    }
    ctx->pc = 0x25D2C0u;
    // 0x25d2c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25d2c4: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x25D2C4u;
    SET_GPR_U32(ctx, 31, 0x25D2CCu);
    ctx->pc = 0x25D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2C4u;
    // 0x25d2c8: 0x24847120  addiu       $a0, $a0, 0x7120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x25D2C4u, 0x25D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2CCu;
label_25d2cc:
    // 0x25d2cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d2d0:
    // 0x25d2d0: 0xc08a922  jal         func_22A488
    ctx->pc = 0x25D2D0u;
    SET_GPR_U32(ctx, 31, 0x25D2D8u);
    ctx->pc = 0x25D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2D0u;
    // 0x25d2d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x25D2D0u, 0x25D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2D8u;
label_25d2d8:
    // 0x25d2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D2DCu;
    {
        const bool branch_taken_0x25d2dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2DCu;
        // 0x25d2e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2dc) {
            ctx->pc = 0x25D2F8u;
            goto label_25d2f8;
        }
    }
    ctx->pc = 0x25D2E4u;
    // 0x25d2e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2e8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D2E8u;
    SET_GPR_U32(ctx, 31, 0x25D2F0u);
    ctx->pc = 0x25D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2E8u;
    // 0x25d2ec: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D2E8u, 0x25D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2F0u;
label_25d2f0:
    // 0x25d2f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25D2F0u;
    {
        const bool branch_taken_0x25d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d2f0) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D2F8u;
label_25d2f8:
    // 0x25d2f8: 0xc08b8c4  jal         func_22E310
    ctx->pc = 0x25D2F8u;
    SET_GPR_U32(ctx, 31, 0x25D300u);
    ctx->pc = 0x25D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2F8u;
    // 0x25d2fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E310u, 0x25D2F8u, 0x25D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D300u;
label_25d300:
    // 0x25d300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25d300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d304: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x25D304u;
    {
        const bool branch_taken_0x25d304 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D304u;
        // 0x25d308: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d304) {
            ctx->pc = 0x25D338u;
            goto label_25d338;
        }
    }
    ctx->pc = 0x25D30Cu;
    // 0x25d30c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D30Cu;
    {
        const bool branch_taken_0x25d30c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D30Cu;
        // 0x25d310: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d30c) {
            ctx->pc = 0x25D330u;
            goto label_25d330;
        }
    }
    ctx->pc = 0x25D314u;
    // 0x25d314: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25d318: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x25d318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25d31c: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x25d31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x25d320: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x25d320u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x25d324: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25D324u;
    SET_GPR_U32(ctx, 31, 0x25D32Cu);
    ctx->pc = 0x25D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D324u;
    // 0x25d328: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25D324u, 0x25D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D32Cu;
label_25d32c:
    // 0x25d32c: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x25d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_25d330:
    // 0x25d330: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D330u;
    {
        const bool branch_taken_0x25d330 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D330u;
        // 0x25d334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d330) {
            ctx->pc = 0x25D350u;
            goto label_25d350;
        }
    }
    ctx->pc = 0x25D338u;
label_25d338:
    // 0x25d338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25D338u;
    {
        const bool branch_taken_0x25d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D338u;
        // 0x25d33c: 0xaee200cc  sw          $v0, 0xCC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d338) {
            ctx->pc = 0x25D354u;
            goto label_25d354;
        }
    }
    ctx->pc = 0x25D340u;
label_25d340:
    // 0x25d340: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D340u;
    SET_GPR_U32(ctx, 31, 0x25D348u);
    ctx->pc = 0x25D344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D340u;
    // 0x25d344: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D340u, 0x25D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D348u;
label_25d348:
    // 0x25d348: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25D348u;
    {
        const bool branch_taken_0x25d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d348) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D350u;
label_25d350:
    // 0x25d350: 0xaef100cc  sw          $s1, 0xCC($s7)
    ctx->pc = 0x25d350u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 204), GPR_U32(ctx, 17));
label_25d354:
    // 0x25d354: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25D354u;
    SET_GPR_U32(ctx, 31, 0x25D35Cu);
    ctx->pc = 0x25D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D354u;
    // 0x25d358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25D354u, 0x25D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D35Cu;
label_25d35c:
    // 0x25d35c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D35Cu;
    SET_GPR_U32(ctx, 31, 0x25D364u);
    ctx->pc = 0x25D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D35Cu;
    // 0x25d360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D35Cu, 0x25D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D364u;
label_25d364:
    // 0x25d364: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25D364u;
    SET_GPR_U32(ctx, 31, 0x25D36Cu);
    ctx->pc = 0x25D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D364u;
    // 0x25d368: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25D364u, 0x25D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D36Cu;
label_25d36c:
    // 0x25d36c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d370: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D370u;
    SET_GPR_U32(ctx, 31, 0x25D378u);
    ctx->pc = 0x25D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D370u;
    // 0x25d374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25D370u, 0x25D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D378u;
label_25d378:
    // 0x25d378: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D378u;
    {
        const bool branch_taken_0x25d378 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25d378) {
            ctx->pc = 0x25D37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D378u;
            // 0x25d37c: 0x8ee200cc  lw          $v0, 0xCC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D384u;
            goto label_25d384;
        }
    }
    ctx->pc = 0x25D380u;
    // 0x25d380: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25d384:
    // 0x25d384: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25d384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d388: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x25d388u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d38c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x25d38cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d390: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25d390u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d394: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25d394u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d398: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25d398u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d39c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25d39cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d3a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25d3a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d3a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25d3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25D3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3ACu;
        // 0x25d3b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D3B4u;
    // 0x25d3b4: 0x0  nop
    ctx->pc = 0x25d3b4u;
    // NOP
    if (ctx->pc == 0x25d3b4u) { ctx->pc = 0x25d3b8u; }
}
