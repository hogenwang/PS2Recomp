#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A7B8
// Address: 0x25a7b8 - 0x25aa40
void sub_0025A7B8_0x25a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A7B8_0x25a7b8");
#endif

    switch (ctx->pc) {
        case 0x25a7ccu: goto label_25a7cc;
        case 0x25a7f0u: goto label_25a7f0;
        case 0x25a804u: goto label_25a804;
        case 0x25a820u: goto label_25a820;
        case 0x25a834u: goto label_25a834;
        case 0x25a858u: goto label_25a858;
        case 0x25a888u: goto label_25a888;
        case 0x25a8e0u: goto label_25a8e0;
        case 0x25a908u: goto label_25a908;
        case 0x25a94cu: goto label_25a94c;
        case 0x25aa08u: goto label_25aa08;
        default: break;
    }

    ctx->pc = 0x25a7b8u;

    // 0x25a7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a7c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a7c4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25A7C4u;
    SET_GPR_U32(ctx, 31, 0x25A7CCu);
    ctx->pc = 0x25A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7C4u;
            // 0x25a7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A7CCu; }
        if (ctx->pc != 0x25A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A7CCu; }
        if (ctx->pc != 0x25A7CCu) { return; }
    }
    ctx->pc = 0x25A7CCu;
label_25a7cc:
    // 0x25a7cc: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x25a7ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25a7d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a7d8: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x25a7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x25a7dc: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x25a7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a7e4: 0x808c698  j           func_231A60
    ctx->pc = 0x25A7E4u;
    ctx->pc = 0x25A7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7E4u;
            // 0x25a7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x25A7ECu;
    // 0x25a7ec: 0x0  nop
    ctx->pc = 0x25a7ecu;
    // NOP
label_25a7f0:
    // 0x25a7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a7f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a7f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a7fc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25A7FCu;
    SET_GPR_U32(ctx, 31, 0x25A804u);
    ctx->pc = 0x25A800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7FCu;
            // 0x25a800: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A804u; }
        if (ctx->pc != 0x25A804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A804u; }
        if (ctx->pc != 0x25A804u) { return; }
    }
    ctx->pc = 0x25A804u;
label_25a804:
    // 0x25a804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25a804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a808: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25a808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25a80c: 0x8c431588  lw          $v1, 0x1588($v0)
    ctx->pc = 0x25a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5512)));
    // 0x25a810: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25A810u;
    {
        const bool branch_taken_0x25a810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A810u;
            // 0x25a814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a810) {
            ctx->pc = 0x25A844u;
            goto label_25a844;
        }
    }
    ctx->pc = 0x25A818u;
    // 0x25a818: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x25a818u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x25a81c: 0x0  nop
    ctx->pc = 0x25a81cu;
    // NOP
label_25a820:
    // 0x25a820: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x25a820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a824: 0x8c700038  lw          $s0, 0x38($v1)
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x25a828: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25a828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25a82c: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25A82Cu;
    SET_GPR_U32(ctx, 31, 0x25A834u);
    ctx->pc = 0x25A830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A82Cu;
            // 0x25a830: 0xa4620028  sh          $v0, 0x28($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (runtime->hasFunction(0x257EE0u)) {
        auto targetFn = runtime->lookupFunction(0x257EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A834u; }
        if (ctx->pc != 0x25A834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257EE0_0x257ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A834u; }
        if (ctx->pc != 0x25A834u) { return; }
    }
    ctx->pc = 0x25A834u;
label_25a834:
    // 0x25a834: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x25a834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a838: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25A838u;
    {
        const bool branch_taken_0x25a838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a838) {
            ctx->pc = 0x25A83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25A838u;
            // 0x25a83c: 0x94620028  lhu         $v0, 0x28($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25A820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a820;
        }
    }
    ctx->pc = 0x25A840u;
    // 0x25a840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a844:
    // 0x25a844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a848: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a850: 0x808c698  j           func_231A60
    ctx->pc = 0x25A850u;
    ctx->pc = 0x25A854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A850u;
            // 0x25a854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x25A858u;
label_25a858:
    // 0x25a858: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25a85c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25a860: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x25a864: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x25a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x25a868: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25a86c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25a870: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25a874: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25a878: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25a87c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25a880: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25A880u;
    SET_GPR_U32(ctx, 31, 0x25A888u);
    ctx->pc = 0x25A884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A880u;
            // 0x25a884: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A888u; }
        if (ctx->pc != 0x25A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A888u; }
        if (ctx->pc != 0x25A888u) { return; }
    }
    ctx->pc = 0x25A888u;
label_25a888:
    // 0x25a888: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25a888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25a88c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25a890: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a894: 0x8c621538  lw          $v0, 0x1538($v1)
    ctx->pc = 0x25a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5432)));
    // 0x25a898: 0x8c851534  lw          $a1, 0x1534($a0)
    ctx->pc = 0x25a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5428)));
    // 0x25a89c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x25a8a0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25a8a4: 0x8cd112e0  lw          $s1, 0x12E0($a2)
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4832)));
    // 0x25a8a8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x25a8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25a8ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x25a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x25a8b0: 0x24c712e0  addiu       $a3, $a2, 0x12E0
    ctx->pc = 0x25a8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4832));
    // 0x25a8b4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A8B4u;
    {
        const bool branch_taken_0x25a8b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8B4u;
            // 0x25a8b8: 0xac621580  sw          $v0, 0x1580($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8b4) {
            ctx->pc = 0x25A8C8u;
            goto label_25a8c8;
        }
    }
    ctx->pc = 0x25A8BCu;
    // 0x25a8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a8c0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x25A8C0u;
    {
        const bool branch_taken_0x25a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8C0u;
            // 0x25a8c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8c0) {
            ctx->pc = 0x25A9B0u;
            goto label_25a9b0;
        }
    }
    ctx->pc = 0x25A8C8u;
label_25a8c8:
    // 0x25a8c8: 0x1227003a  beq         $s1, $a3, . + 4 + (0x3A << 2)
    ctx->pc = 0x25A8C8u;
    {
        const bool branch_taken_0x25a8c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        ctx->pc = 0x25A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8C8u;
            // 0x25a8cc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8c8) {
            ctx->pc = 0x25A9B4u;
            goto label_25a9b4;
        }
    }
    ctx->pc = 0x25A8D0u;
    // 0x25a8d0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x25a8d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8d4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x25a8d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a8d8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x25a8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25a8dc: 0x0  nop
    ctx->pc = 0x25a8dcu;
    // NOP
label_25a8e0:
    // 0x25a8e0: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x25A8E0u;
    {
        const bool branch_taken_0x25a8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8E0u;
            // 0x25a8e4: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8e0) {
            ctx->pc = 0x25A99Cu;
            goto label_25a99c;
        }
    }
    ctx->pc = 0x25A8E8u;
    // 0x25a8e8: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x25a8e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25a8ec: 0x1057002c  beq         $v0, $s7, . + 4 + (0x2C << 2)
    ctx->pc = 0x25A8ECu;
    {
        const bool branch_taken_0x25a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x25A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8ECu;
            // 0x25a8f0: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8ec) {
            ctx->pc = 0x25A9A0u;
            goto label_25a9a0;
        }
    }
    ctx->pc = 0x25A8F4u;
    // 0x25a8f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25a8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8f8: 0x26140008  addiu       $s4, $s0, 0x8
    ctx->pc = 0x25a8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x25a8fc: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x25a8fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x25a900: 0x27d512e0  addiu       $s5, $fp, 0x12E0
    ctx->pc = 0x25a900u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4832));
    // 0x25a904: 0x0  nop
    ctx->pc = 0x25a904u;
    // NOP
label_25a908:
    // 0x25a908: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x25a908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x25a90c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x25a90cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x25a910: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x25a910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25a914: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x25a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25a918: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a91c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25A91Cu;
    {
        const bool branch_taken_0x25a91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A91Cu;
            // 0x25a920: 0x8ec2f990  lw          $v0, -0x670($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a91c) {
            ctx->pc = 0x25A96Cu;
            goto label_25a96c;
        }
    }
    ctx->pc = 0x25A924u;
    // 0x25a924: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25a924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a928: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A928u;
    {
        const bool branch_taken_0x25a928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a928) {
            ctx->pc = 0x25A92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25A928u;
            // 0x25a92c: 0x66730001  daddiu      $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x25A970u;
            goto label_25a970;
        }
    }
    ctx->pc = 0x25A930u;
    // 0x25a930: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25a930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25a934: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x25a934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x25a938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a93c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a940: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25a944: 0xc096bd2  jal         func_25AF48
    ctx->pc = 0x25A944u;
    SET_GPR_U32(ctx, 31, 0x25A94Cu);
    ctx->pc = 0x25A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A944u;
            // 0x25a948: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AF48u;
    if (runtime->hasFunction(0x25AF48u)) {
        auto targetFn = runtime->lookupFunction(0x25AF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A94Cu; }
        if (ctx->pc != 0x25A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AF48_0x25af48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A94Cu; }
        if (ctx->pc != 0x25A94Cu) { return; }
    }
    ctx->pc = 0x25A94Cu;
label_25a94c:
    // 0x25a94c: 0x56550005  bnel        $s2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A94Cu;
    {
        const bool branch_taken_0x25a94c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x25a94c) {
            ctx->pc = 0x25A950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25A94Cu;
            // 0x25a950: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25A964u;
            goto label_25a964;
        }
    }
    ctx->pc = 0x25A954u;
    // 0x25a954: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25a958: 0x14510011  bne         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A958u;
    {
        const bool branch_taken_0x25a958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x25A95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A958u;
            // 0x25a95c: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a958) {
            ctx->pc = 0x25A9A0u;
            goto label_25a9a0;
        }
    }
    ctx->pc = 0x25A960u;
    // 0x25a960: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x25a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_25a964:
    // 0x25a964: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x25A964u;
    {
        const bool branch_taken_0x25a964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x25A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A964u;
            // 0x25a968: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a964) {
            ctx->pc = 0x25A9A0u;
            goto label_25a9a0;
        }
    }
    ctx->pc = 0x25A96Cu;
label_25a96c:
    // 0x25a96c: 0x66730001  daddiu      $s3, $s3, 0x1
    ctx->pc = 0x25a96cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
label_25a970:
    // 0x25a970: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x25a970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a974: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25A974u;
    {
        const bool branch_taken_0x25a974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a974) {
            ctx->pc = 0x25A908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a908;
        }
    }
    ctx->pc = 0x25A97Cu;
    // 0x25a97c: 0x96020098  lhu         $v0, 0x98($s0)
    ctx->pc = 0x25a97cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x25a980: 0x8603009a  lh          $v1, 0x9A($s0)
    ctx->pc = 0x25a980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 154)));
    // 0x25a984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a988: 0x9604009a  lhu         $a0, 0x9A($s0)
    ctx->pc = 0x25a988u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 154)));
    // 0x25a98c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A98Cu;
    {
        const bool branch_taken_0x25a98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A98Cu;
            // 0x25a990: 0xa6020098  sh          $v0, 0x98($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a98c) {
            ctx->pc = 0x25A99Cu;
            goto label_25a99c;
        }
    }
    ctx->pc = 0x25A994u;
    // 0x25a994: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x25a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25a998: 0xa602009a  sh          $v0, 0x9A($s0)
    ctx->pc = 0x25a998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 2));
label_25a99c:
    // 0x25a99c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_25a9a0:
    // 0x25a9a0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x25a9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9a4: 0x246312e0  addiu       $v1, $v1, 0x12E0
    ctx->pc = 0x25a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4832));
    // 0x25a9a8: 0x5623ffcd  bnel        $s1, $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x25A9A8u;
    {
        const bool branch_taken_0x25a9a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a9a8) {
            ctx->pc = 0x25A9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9A8u;
            // 0x25a9ac: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25A8E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a8e0;
        }
    }
    ctx->pc = 0x25A9B0u;
label_25a9b0:
    // 0x25a9b0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x25a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_25a9b4:
    // 0x25a9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a9b8: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25A9B8u;
    {
        const bool branch_taken_0x25a9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9B8u;
            // 0x25a9bc: 0x3c08003a  lui         $t0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9b8) {
            ctx->pc = 0x25AA0Cu;
            goto label_25aa0c;
        }
    }
    ctx->pc = 0x25A9C0u;
    // 0x25a9c0: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x25a9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x25a9c4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25a9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25a9c8: 0x8d0512d4  lw          $a1, 0x12D4($t0)
    ctx->pc = 0x25a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4820)));
    // 0x25a9cc: 0x8d261528  lw          $a2, 0x1528($t1)
    ctx->pc = 0x25a9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 5416)));
    // 0x25a9d0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25a9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25a9d4: 0x8e021540  lw          $v0, 0x1540($s0)
    ctx->pc = 0x25a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5440)));
    // 0x25a9d8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x25a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x25a9dc: 0x8ce40380  lw          $a0, 0x380($a3)
    ctx->pc = 0x25a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 896)));
    // 0x25a9e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25a9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a9e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25a9ec: 0xad0512d4  sw          $a1, 0x12D4($t0)
    ctx->pc = 0x25a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4820), GPR_U32(ctx, 5));
    // 0x25a9f0: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x25a9f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25a9f4: 0xad261528  sw          $a2, 0x1528($t1)
    ctx->pc = 0x25a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 5416), GPR_U32(ctx, 6));
    // 0x25a9f8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A9F8u;
    {
        const bool branch_taken_0x25a9f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9F8u;
            // 0x25a9fc: 0xae021540  sw          $v0, 0x1540($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9f8) {
            ctx->pc = 0x25AA0Cu;
            goto label_25aa0c;
        }
    }
    ctx->pc = 0x25AA00u;
    // 0x25aa00: 0xc095994  jal         func_256650
    ctx->pc = 0x25AA00u;
    SET_GPR_U32(ctx, 31, 0x25AA08u);
    ctx->pc = 0x256650u;
    if (runtime->hasFunction(0x256650u)) {
        auto targetFn = runtime->lookupFunction(0x256650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA08u; }
        if (ctx->pc != 0x25AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00256650_0x256650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA08u; }
        if (ctx->pc != 0x25AA08u) { return; }
    }
    ctx->pc = 0x25AA08u;
label_25aa08:
    // 0x25aa08: 0xae001540  sw          $zero, 0x1540($s0)
    ctx->pc = 0x25aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5440), GPR_U32(ctx, 0));
label_25aa0c:
    // 0x25aa0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa10: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aa14: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x25aa14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25aa18: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25aa18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25aa1c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25aa1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25aa20: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25aa20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25aa24: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25aa24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25aa28: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25aa28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25aa2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25aa2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25aa30: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25aa30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aa34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25aa34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aa38: 0x808c698  j           func_231A60
    ctx->pc = 0x25AA38u;
    ctx->pc = 0x25AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA38u;
            // 0x25aa3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x25AA40u;
    ctx->pc = 0x25aa40u;
}
