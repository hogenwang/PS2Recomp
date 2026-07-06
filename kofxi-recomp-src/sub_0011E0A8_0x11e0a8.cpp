#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E0A8
// Address: 0x11e0a8 - 0x11e200
void sub_0011E0A8_0x11e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E0A8_0x11e0a8");
#endif

    switch (ctx->pc) {
        case 0x11e0f8u: goto label_11e0f8;
        case 0x11e11cu: goto label_11e11c;
        case 0x11e158u: goto label_11e158;
        case 0x11e17cu: goto label_11e17c;
        case 0x11e18cu: goto label_11e18c;
        case 0x11e1a4u: goto label_11e1a4;
        case 0x11e1d0u: goto label_11e1d0;
        case 0x11e1f4u: goto label_11e1f4;
        default: break;
    }

    ctx->pc = 0x11e0a8u;

    // 0x11e0a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11e0ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e0b0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11e0b4: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11e0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11e0b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11e0bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11e0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11e0c4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11e0c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11e0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11e0cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e0d0: 0x16800016  bnez        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x11E0D0u;
    {
        const bool branch_taken_0x11e0d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0D0u;
            // 0x11e0d4: 0x8e51b990  lw          $s1, -0x4670($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0d0) {
            ctx->pc = 0x11E12Cu;
            goto label_11e12c;
        }
    }
    ctx->pc = 0x11E0D8u;
    // 0x11e0d8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11e0dc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11e0e0: 0xac62dd40  sw          $v0, -0x22C0($v1)
    ctx->pc = 0x11e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958400), GPR_U32(ctx, 2));
    // 0x11e0e4: 0x2470dd40  addiu       $s0, $v1, -0x22C0
    ctx->pc = 0x11e0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
    // 0x11e0e8: 0xae40b990  sw          $zero, -0x4670($s2)
    ctx->pc = 0x11e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949264), GPR_U32(ctx, 0));
    // 0x11e0ec: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x11e0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x11e0f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11e0f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_11e0f8:
    // 0x11e0f8: 0x2664db00  addiu       $a0, $s3, -0x2500
    ctx->pc = 0x11e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957824));
    // 0x11e0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e104: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11e104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e108: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11e108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e10c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11e10cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e110: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11e110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e114: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E114u;
    SET_GPR_U32(ctx, 31, 0x11E11Cu);
    ctx->pc = 0x11E118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E114u;
            // 0x11e118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E11Cu; }
        if (ctx->pc != 0x11E11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E11Cu; }
        if (ctx->pc != 0x11E11Cu) { return; }
    }
    ctx->pc = 0x11E11Cu;
label_11e11c:
    // 0x11e11c: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11E11Cu;
    {
        const bool branch_taken_0x11e11c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11e11c) {
            ctx->pc = 0x11E120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E11Cu;
            // 0x11e120: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e0f8;
        }
    }
    ctx->pc = 0x11E124u;
    // 0x11e124: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E124u;
    {
        const bool branch_taken_0x11e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E124u;
            // 0x11e128: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e124) {
            ctx->pc = 0x11E1A8u;
            goto label_11e1a8;
        }
    }
    ctx->pc = 0x11E12Cu;
label_11e12c:
    // 0x11e12c: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E12Cu;
    {
        const bool branch_taken_0x11e12c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E12Cu;
            // 0x11e130: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e12c) {
            ctx->pc = 0x11E184u;
            goto label_11e184;
        }
    }
    ctx->pc = 0x11E134u;
    // 0x11e134: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11e138: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x11e138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11e13c: 0xac43dd40  sw          $v1, -0x22C0($v0)
    ctx->pc = 0x11e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 3));
    // 0x11e140: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11e144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e148: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x11e14c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x11e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x11e150: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e154: 0x0  nop
    ctx->pc = 0x11e154u;
    // NOP
label_11e158:
    // 0x11e158: 0x2664db00  addiu       $a0, $s3, -0x2500
    ctx->pc = 0x11e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957824));
    // 0x11e15c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e164: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11e164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e168: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11e168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e16c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11e16cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e170: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11e170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e174: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E174u;
    SET_GPR_U32(ctx, 31, 0x11E17Cu);
    ctx->pc = 0x11E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E174u;
            // 0x11e178: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E17Cu; }
        if (ctx->pc != 0x11E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E17Cu; }
        if (ctx->pc != 0x11E17Cu) { return; }
    }
    ctx->pc = 0x11E17Cu;
label_11e17c:
    // 0x11e17c: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11E17Cu;
    {
        const bool branch_taken_0x11e17c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11e17c) {
            ctx->pc = 0x11E180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E17Cu;
            // 0x11e180: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e158;
        }
    }
    ctx->pc = 0x11E184u;
label_11e184:
    // 0x11e184: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11E184u;
    SET_GPR_U32(ctx, 31, 0x11E18Cu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E18Cu; }
        if (ctx->pc != 0x11E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E18Cu; }
        if (ctx->pc != 0x11E18Cu) { return; }
    }
    ctx->pc = 0x11E18Cu;
label_11e18c:
    // 0x11e18c: 0xaebcddc0  sw          $gp, -0x2240($s5)
    ctx->pc = 0x11e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294958528), GPR_U32(ctx, 28));
    // 0x11e190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e194: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E194u;
    {
        const bool branch_taken_0x11e194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E194u;
            // 0x11e198: 0xae54b990  sw          $s4, -0x4670($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294949264), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e194) {
            ctx->pc = 0x11E1A4u;
            goto label_11e1a4;
        }
    }
    ctx->pc = 0x11E19Cu;
    // 0x11e19c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11E19Cu;
    SET_GPR_U32(ctx, 31, 0x11E1A4u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E1A4u; }
        if (ctx->pc != 0x11E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E1A4u; }
        if (ctx->pc != 0x11E1A4u) { return; }
    }
    ctx->pc = 0x11E1A4u;
label_11e1a4:
    // 0x11e1a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11e1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e1a8:
    // 0x11e1a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11e1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e1ac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11e1acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e1b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11e1b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e1b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11e1b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e1b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e1b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e1bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11e1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e1c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1C4u;
            // 0x11e1c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E1CCu;
    // 0x11e1cc: 0x0  nop
    ctx->pc = 0x11e1ccu;
    // NOP
label_11e1d0:
    // 0x11e1d0: 0x3402c348  ori         $v0, $zero, 0xC348
    ctx->pc = 0x11e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49992);
    // 0x11e1d4: 0x2483bedd  addiu       $v1, $a0, -0x4123
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950621));
    // 0x11e1d8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11e1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11e1dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E1DCu;
    {
        const bool branch_taken_0x11e1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1DCu;
            // 0x11e1e0: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1dc) {
            ctx->pc = 0x11E1F4u;
            goto label_11e1f4;
        }
    }
    ctx->pc = 0x11E1E4u;
    // 0x11e1e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E1E4u;
    {
        const bool branch_taken_0x11e1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1E4u;
            // 0x11e1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1e4) {
            ctx->pc = 0x11E1F8u;
            goto label_11e1f8;
        }
    }
    ctx->pc = 0x11E1ECu;
    // 0x11e1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1ECu;
            // 0x11e1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E1F4u;
label_11e1f4:
    // 0x11e1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e1f8:
    // 0x11e1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1F8u;
            // 0x11e1fc: 0xac64b994  sw          $a0, -0x466C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949268), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E200u;
    ctx->pc = 0x11e200u;
}
