#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002863E0
// Address: 0x2863e0 - 0x286628
void sub_002863E0_0x2863e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002863E0_0x2863e0");
#endif

    switch (ctx->pc) {
        case 0x286458u: goto label_286458;
        case 0x286474u: goto label_286474;
        case 0x286490u: goto label_286490;
        case 0x286498u: goto label_286498;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864c0u: goto label_2864c0;
        case 0x2864e0u: goto label_2864e0;
        case 0x2864f4u: goto label_2864f4;
        case 0x28650cu: goto label_28650c;
        case 0x286518u: goto label_286518;
        case 0x28652cu: goto label_28652c;
        case 0x28657cu: goto label_28657c;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865e8u: goto label_2865e8;
        default: break;
    }

    ctx->pc = 0x2863e0u;

    // 0x2863e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2863e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2863e4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2863e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2863e8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2863e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2863ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2863ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2863f0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2863f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2863f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2863f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2863f8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2863f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2863fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2863fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x286400: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x286400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x286404: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x286404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286408: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x286408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28640c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x286410: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x286410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286414: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x286414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x286418: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28641c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28641cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x286420: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x286420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286424: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x286424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x286428: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x286428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x28642c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x28642cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x286430: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x286430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x286434: 0x24470068  addiu       $a3, $v0, 0x68
    ctx->pc = 0x286434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x286438: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28643c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x28643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x286440: 0x2446002c  addiu       $a2, $v0, 0x2C
    ctx->pc = 0x286440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x286444: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x286448: 0x244a021  addu        $s4, $s2, $a0
    ctx->pc = 0x286448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x28644c: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x28644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x286450: 0x243f021  addu        $fp, $s2, $v1
    ctx->pc = 0x286450u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x286454: 0x242b021  addu        $s6, $s2, $v0
    ctx->pc = 0x286454u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_286458:
    // 0x286458: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x28645c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286460: 0x246a821  addu        $s5, $s2, $a2
    ctx->pc = 0x286460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x286464: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286464u;
    {
        const bool branch_taken_0x286464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286464u;
            // 0x286468: 0x2479821  addu        $s3, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286464) {
            ctx->pc = 0x28647Cu;
            goto label_28647c;
        }
    }
    ctx->pc = 0x28646Cu;
    // 0x28646c: 0xc0a1a8c  jal         func_286A30
    ctx->pc = 0x28646Cu;
    SET_GPR_U32(ctx, 31, 0x286474u);
    ctx->pc = 0x286A30u;
    if (runtime->hasFunction(0x286A30u)) {
        auto targetFn = runtime->lookupFunction(0x286A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286474u; }
        if (ctx->pc != 0x286474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A30_0x286a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286474u; }
        if (ctx->pc != 0x286474u) { return; }
    }
    ctx->pc = 0x286474u;
label_286474:
    // 0x286474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286474u;
    {
        const bool branch_taken_0x286474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286474u;
            // 0x286478: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286474) {
            ctx->pc = 0x286484u;
            goto label_286484;
        }
    }
    ctx->pc = 0x28647Cu;
label_28647c:
    // 0x28647c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286480: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x286480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_286484:
    // 0x286484: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x286484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286488: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x286488u;
    {
        const bool branch_taken_0x286488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286488u;
            // 0x28648c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286488) {
            ctx->pc = 0x2865C8u;
            goto label_2865c8;
        }
    }
    ctx->pc = 0x286490u;
label_286490:
    // 0x286490: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x286490u;
    SET_GPR_U32(ctx, 31, 0x286498u);
    ctx->pc = 0x286494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286490u;
            // 0x286494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286498u; }
        if (ctx->pc != 0x286498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286498u; }
        if (ctx->pc != 0x286498u) { return; }
    }
    ctx->pc = 0x286498u;
label_286498:
    // 0x286498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28649c: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x28649Cu;
    SET_GPR_U32(ctx, 31, 0x2864A4u);
    ctx->pc = 0x2864A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28649Cu;
            // 0x2864a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864A4u; }
        if (ctx->pc != 0x2864A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864A4u; }
        if (ctx->pc != 0x2864A4u) { return; }
    }
    ctx->pc = 0x2864A4u;
label_2864a4:
    // 0x2864a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2864a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864a8: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x2864A8u;
    SET_GPR_U32(ctx, 31, 0x2864B0u);
    ctx->pc = 0x2864ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2864A8u;
            // 0x2864ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (runtime->hasFunction(0x286C70u)) {
        auto targetFn = runtime->lookupFunction(0x286C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864B0u; }
        if (ctx->pc != 0x2864B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C70_0x286c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864B0u; }
        if (ctx->pc != 0x2864B0u) { return; }
    }
    ctx->pc = 0x2864B0u;
label_2864b0:
    // 0x2864b0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2864B0u;
    {
        const bool branch_taken_0x2864b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2864B0u;
            // 0x2864b4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864b0) {
            ctx->pc = 0x2865C8u;
            goto label_2865c8;
        }
    }
    ctx->pc = 0x2864B8u;
    // 0x2864b8: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x2864B8u;
    SET_GPR_U32(ctx, 31, 0x2864C0u);
    ctx->pc = 0x2864BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2864B8u;
            // 0x2864bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (runtime->hasFunction(0x286C70u)) {
        auto targetFn = runtime->lookupFunction(0x286C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864C0u; }
        if (ctx->pc != 0x2864C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C70_0x286c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864C0u; }
        if (ctx->pc != 0x2864C0u) { return; }
    }
    ctx->pc = 0x2864C0u;
label_2864c0:
    // 0x2864c0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2864C0u;
            // 0x2864c4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x2865CCu;
            goto label_2865cc;
        }
    }
    ctx->pc = 0x2864C8u;
    // 0x2864c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2864c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2864cc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2864CCu;
    {
        const bool branch_taken_0x2864cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2864CCu;
            // 0x2864d0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864cc) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x2864D4u;
    // 0x2864d4: 0x50570020  beql        $v0, $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x2864D4u;
    {
        const bool branch_taken_0x2864d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2864d4) {
            ctx->pc = 0x2864D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2864D4u;
            // 0x2864d8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286558u;
            goto label_286558;
        }
    }
    ctx->pc = 0x2864DCu;
    // 0x2864dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2864dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2864e0:
    // 0x2864e0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2864e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864ec: 0xc0a1748  jal         func_285D20
    ctx->pc = 0x2864ECu;
    SET_GPR_U32(ctx, 31, 0x2864F4u);
    ctx->pc = 0x2864F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2864ECu;
            // 0x2864f0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285D20u;
    if (runtime->hasFunction(0x285D20u)) {
        auto targetFn = runtime->lookupFunction(0x285D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864F4u; }
        if (ctx->pc != 0x2864F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285D20_0x285d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2864F4u; }
        if (ctx->pc != 0x2864F4u) { return; }
    }
    ctx->pc = 0x2864F4u;
label_2864f4:
    // 0x2864f4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2864F4u;
    {
        const bool branch_taken_0x2864f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2864F4u;
            // 0x2864f8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864f4) {
            ctx->pc = 0x2865C8u;
            goto label_2865c8;
        }
    }
    ctx->pc = 0x2864FCu;
    // 0x2864fc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2864fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286500: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x286500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286508: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x286508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28650c:
    // 0x28650c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286510: 0xc0a1f22  jal         func_287C88
    ctx->pc = 0x286510u;
    SET_GPR_U32(ctx, 31, 0x286518u);
    ctx->pc = 0x286514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286510u;
            // 0x286514: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C88u;
    if (runtime->hasFunction(0x287C88u)) {
        auto targetFn = runtime->lookupFunction(0x287C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286518u; }
        if (ctx->pc != 0x286518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287C88_0x287c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286518u; }
        if (ctx->pc != 0x286518u) { return; }
    }
    ctx->pc = 0x286518u;
label_286518:
    // 0x286518: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x286518u;
    {
        const bool branch_taken_0x286518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286518u;
            // 0x28651c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286518) {
            ctx->pc = 0x2865C8u;
            goto label_2865c8;
        }
    }
    ctx->pc = 0x286520u;
    // 0x286520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286524: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x286524u;
    SET_GPR_U32(ctx, 31, 0x28652Cu);
    ctx->pc = 0x286528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286524u;
            // 0x286528: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (runtime->hasFunction(0x2857E8u)) {
        auto targetFn = runtime->lookupFunction(0x2857E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28652Cu; }
        if (ctx->pc != 0x28652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002857E8_0x2857e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28652Cu; }
        if (ctx->pc != 0x28652Cu) { return; }
    }
    ctx->pc = 0x28652Cu;
label_28652c:
    // 0x28652c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28652Cu;
    {
        const bool branch_taken_0x28652c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28652Cu;
            // 0x286530: 0x17b823  negu        $s7, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28652c) {
            ctx->pc = 0x2865C8u;
            goto label_2865c8;
        }
    }
    ctx->pc = 0x286534u;
    // 0x286534: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x286534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286538: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28653c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x28653cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286540: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x286540u;
    {
        const bool branch_taken_0x286540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286540u;
            // 0x286544: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286540) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x286548u;
    // 0x286548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28654c: 0x1462ffe4  bne         $v1, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28654Cu;
            // 0x286550: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28654c) {
            ctx->pc = 0x2864E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2864e0;
        }
    }
    ctx->pc = 0x286554u;
    // 0x286554: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x286554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_286558:
    // 0x286558: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x286558u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28655c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x28655Cu;
    {
        const bool branch_taken_0x28655c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28655Cu;
            // 0x286560: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28655c) {
            ctx->pc = 0x2864E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2864e0;
        }
    }
    ctx->pc = 0x286564u;
label_286564:
    // 0x286564: 0x6e30008  bgezl       $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x286564u;
    {
        const bool branch_taken_0x286564 = (GPR_S32(ctx, 23) >= 0);
        if (branch_taken_0x286564) {
            ctx->pc = 0x286568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286564u;
            // 0x286568: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286588u;
            goto label_286588;
        }
    }
    ctx->pc = 0x28656Cu;
    // 0x28656c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x28656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286574: 0xc0a16fa  jal         func_285BE8
    ctx->pc = 0x286574u;
    SET_GPR_U32(ctx, 31, 0x28657Cu);
    ctx->pc = 0x286578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286574u;
            // 0x286578: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (runtime->hasFunction(0x285BE8u)) {
        auto targetFn = runtime->lookupFunction(0x285BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28657Cu; }
        if (ctx->pc != 0x28657Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285BE8_0x285be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28657Cu; }
        if (ctx->pc != 0x28657Cu) { return; }
    }
    ctx->pc = 0x28657Cu;
label_28657c:
    // 0x28657c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28657Cu;
    {
        const bool branch_taken_0x28657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28657Cu;
            // 0x286580: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28657c) {
            ctx->pc = 0x2865CCu;
            goto label_2865cc;
        }
    }
    ctx->pc = 0x286584u;
    // 0x286584: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_286588:
    // 0x286588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28658c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28658Cu;
    {
        const bool branch_taken_0x28658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28658Cu;
            // 0x286590: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28658c) {
            ctx->pc = 0x2865CCu;
            goto label_2865cc;
        }
    }
    ctx->pc = 0x286594u;
    // 0x286594: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x286598: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x286598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28659c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x28659cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2865a0: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2865A0u;
    {
        const bool branch_taken_0x2865a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2865A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2865A0u;
            // 0x2865a4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865a0) {
            ctx->pc = 0x2865CCu;
            goto label_2865cc;
        }
    }
    ctx->pc = 0x2865A8u;
    // 0x2865a8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2865ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2865acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2865b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2865b4: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x2865B4u;
    SET_GPR_U32(ctx, 31, 0x2865BCu);
    ctx->pc = 0x2865B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2865B4u;
            // 0x2865b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (runtime->hasFunction(0x2863A8u)) {
        auto targetFn = runtime->lookupFunction(0x2863A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865BCu; }
        if (ctx->pc != 0x2865BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002863A8_0x2863a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865BCu; }
        if (ctx->pc != 0x2865BCu) { return; }
    }
    ctx->pc = 0x2865BCu;
label_2865bc:
    // 0x2865bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2865bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2865c0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2865c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2865c4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2865c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2865c8:
    // 0x2865c8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2865c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2865cc:
    // 0x2865cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2865CCu;
    {
        const bool branch_taken_0x2865cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2865cc) {
            ctx->pc = 0x2865D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2865CCu;
            // 0x2865d0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2865ECu;
            goto label_2865ec;
        }
    }
    ctx->pc = 0x2865D4u;
    // 0x2865d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2865d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2865d8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2865D8u;
    {
        const bool branch_taken_0x2865d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2865d8) {
            ctx->pc = 0x2865DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2865D8u;
            // 0x2865dc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2865ECu;
            goto label_2865ec;
        }
    }
    ctx->pc = 0x2865E0u;
    // 0x2865e0: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2865E0u;
    SET_GPR_U32(ctx, 31, 0x2865E8u);
    ctx->pc = 0x2865E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2865E0u;
            // 0x2865e4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865E8u; }
        if (ctx->pc != 0x2865E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865E8u; }
        if (ctx->pc != 0x2865E8u) { return; }
    }
    ctx->pc = 0x2865E8u;
label_2865e8:
    // 0x2865e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2865e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2865ec:
    // 0x2865ec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2865f0: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x2865f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2865f4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2865f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2865f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2865f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2865fc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2865fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286600: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x286600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x286604: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x286604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286608: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x286608u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28660c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286610: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x286610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286614: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x286614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286618: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x286618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28661c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28661cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286620: 0x3e00008  jr          $ra
    ctx->pc = 0x286620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286620u;
            // 0x286624: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286628u;
    ctx->pc = 0x286628u;
}
