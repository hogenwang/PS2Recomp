#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262718
// Address: 0x262718 - 0x262808
void sub_00262718_0x262718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262718_0x262718");
#endif

    switch (ctx->pc) {
        case 0x262758u: goto label_262758;
        case 0x262768u: goto label_262768;
        case 0x262778u: goto label_262778;
        case 0x262790u: goto label_262790;
        case 0x2627a0u: goto label_2627a0;
        case 0x2627b0u: goto label_2627b0;
        case 0x2627d8u: goto label_2627d8;
        case 0x2627f4u: goto label_2627f4;
        default: break;
    }

    ctx->pc = 0x262718u;

    // 0x262718: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x262718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26271c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x26271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262720: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x262720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262724: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x262724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x262728: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x262728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26272c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x26272cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262730: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x262730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x262734: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x262734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262738: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x262738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26273c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26273cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262740: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262744: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x262744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262748: 0x8c51d770  lw          $s1, -0x2890($v0)
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956912)));
    // 0x26274c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26274cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262750: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x262750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x262754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_262758:
    // 0x262758: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x262758u;
    {
        const bool branch_taken_0x262758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262758u;
            // 0x26275c: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262758) {
            ctx->pc = 0x2627A8u;
            goto label_2627a8;
        }
    }
    ctx->pc = 0x262760u;
    // 0x262760: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x262760u;
    SET_GPR_U32(ctx, 31, 0x262768u);
    ctx->pc = 0x262764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262760u;
            // 0x262764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262768u; }
        if (ctx->pc != 0x262768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262768u; }
        if (ctx->pc != 0x262768u) { return; }
    }
    ctx->pc = 0x262768u;
label_262768:
    // 0x262768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26276c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26276cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262770: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x262770u;
    SET_GPR_U32(ctx, 31, 0x262778u);
    ctx->pc = 0x262774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262770u;
            // 0x262774: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262778u; }
        if (ctx->pc != 0x262778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262778u; }
        if (ctx->pc != 0x262778u) { return; }
    }
    ctx->pc = 0x262778u;
label_262778:
    // 0x262778: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x262778u;
    {
        const bool branch_taken_0x262778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262778) {
            ctx->pc = 0x26277Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262778u;
            // 0x26277c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262758;
        }
    }
    ctx->pc = 0x262780u;
    // 0x262780: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x262780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x262784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262788: 0xc04a966  jal         func_12A598
    ctx->pc = 0x262788u;
    SET_GPR_U32(ctx, 31, 0x262790u);
    ctx->pc = 0x26278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262788u;
            // 0x26278c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262790u; }
        if (ctx->pc != 0x262790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262790u; }
        if (ctx->pc != 0x262790u) { return; }
    }
    ctx->pc = 0x262790u;
label_262790:
    // 0x262790: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x262794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262798: 0xc04a966  jal         func_12A598
    ctx->pc = 0x262798u;
    SET_GPR_U32(ctx, 31, 0x2627A0u);
    ctx->pc = 0x26279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262798u;
            // 0x26279c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2627A0u; }
        if (ctx->pc != 0x2627A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2627A0u; }
        if (ctx->pc != 0x2627A0u) { return; }
    }
    ctx->pc = 0x2627A0u;
label_2627a0:
    // 0x2627a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2627A0u;
    {
        const bool branch_taken_0x2627a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2627A0u;
            // 0x2627a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627a0) {
            ctx->pc = 0x2627ACu;
            goto label_2627ac;
        }
    }
    ctx->pc = 0x2627A8u;
label_2627a8:
    // 0x2627a8: 0x2402ffe4  addiu       $v0, $zero, -0x1C
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_2627ac:
    // 0x2627ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2627acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2627b0:
    // 0x2627b0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2627b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2627b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2627b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2627b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2627b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2627bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2627bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2627c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2627c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2627c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2627c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2627c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2627c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2627cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2627CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2627D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2627CCu;
            // 0x2627d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2627D4u;
    // 0x2627d4: 0x0  nop
    ctx->pc = 0x2627d4u;
    // NOP
label_2627d8:
    // 0x2627d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2627d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2627dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2627dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2627e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2627e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2627e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2627e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2627e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2627e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2627ec: 0xc098a0c  jal         func_262830
    ctx->pc = 0x2627ECu;
    SET_GPR_U32(ctx, 31, 0x2627F4u);
    ctx->pc = 0x2627F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2627ECu;
            // 0x2627f0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262830u;
    if (runtime->hasFunction(0x262830u)) {
        auto targetFn = runtime->lookupFunction(0x262830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2627F4u; }
        if (ctx->pc != 0x2627F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262830_0x262830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2627F4u; }
        if (ctx->pc != 0x2627F4u) { return; }
    }
    ctx->pc = 0x2627F4u;
label_2627f4:
    // 0x2627f4: 0xf  sync
    ctx->pc = 0x2627f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2627f8: 0x42000038  ei
    ctx->pc = 0x2627f8u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x2627fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2627fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262800: 0x3e00008  jr          $ra
    ctx->pc = 0x262800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262800u;
            // 0x262804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262808u;
    ctx->pc = 0x262808u;
}
