#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9620
// Address: 0x2a9620 - 0x2a96e0
void sub_002A9620_0x2a9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9620_0x2a9620");
#endif

    switch (ctx->pc) {
        case 0x2a965cu: goto label_2a965c;
        case 0x2a9670u: goto label_2a9670;
        case 0x2a9690u: goto label_2a9690;
        case 0x2a96a0u: goto label_2a96a0;
        case 0x2a96b8u: goto label_2a96b8;
        default: break;
    }

    ctx->pc = 0x2a9620u;

    // 0x2a9620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a9624: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a9628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a9628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a962c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a962cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a9630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a9634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9638: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2a9638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a963c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A963Cu;
    {
        const bool branch_taken_0x2a963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A963Cu;
            // 0x2a9640: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a963c) {
            ctx->pc = 0x2A96C0u;
            goto label_2a96c0;
        }
    }
    ctx->pc = 0x2A9644u;
    // 0x2a9644: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2a9644u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2a9648: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a9648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a964c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a9650: 0x2646caf8  addiu       $a2, $s2, -0x3508
    ctx->pc = 0x2a9650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953720));
    // 0x2a9654: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A9654u;
    SET_GPR_U32(ctx, 31, 0x2A965Cu);
    ctx->pc = 0x2A9658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9654u;
            // 0x2a9658: 0x24070352  addiu       $a3, $zero, 0x352 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 850));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A965Cu; }
        if (ctx->pc != 0x2A965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A965Cu; }
        if (ctx->pc != 0x2A965Cu) { return; }
    }
    ctx->pc = 0x2A965Cu;
label_2a965c:
    // 0x2a965c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2a965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a9660: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A9660u;
    {
        const bool branch_taken_0x2a9660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9660u;
            // 0x2a9664: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9660) {
            ctx->pc = 0x2A96A4u;
            goto label_2a96a4;
        }
    }
    ctx->pc = 0x2A9668u;
    // 0x2a9668: 0xc0a80b0  jal         func_2A02C0
    ctx->pc = 0x2A9668u;
    SET_GPR_U32(ctx, 31, 0x2A9670u);
    ctx->pc = 0x2A02C0u;
    if (runtime->hasFunction(0x2A02C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9670u; }
        if (ctx->pc != 0x2A9670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A02C0_0x2a02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9670u; }
        if (ctx->pc != 0x2A9670u) { return; }
    }
    ctx->pc = 0x2A9670u;
label_2a9670:
    // 0x2a9670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9674: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A9674u;
    {
        const bool branch_taken_0x2a9674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9674u;
            // 0x2a9678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9674) {
            ctx->pc = 0x2A96A4u;
            goto label_2a96a4;
        }
    }
    ctx->pc = 0x2A967Cu;
    // 0x2a967c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2a967cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a9680: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2a9680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a9684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9688: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x2A9688u;
    SET_GPR_U32(ctx, 31, 0x2A9690u);
    ctx->pc = 0x2A968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9688u;
            // 0x2a968c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (runtime->hasFunction(0x2A0370u)) {
        auto targetFn = runtime->lookupFunction(0x2A0370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9690u; }
        if (ctx->pc != 0x2A9690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0370_0x2a0370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9690u; }
        if (ctx->pc != 0x2A9690u) { return; }
    }
    ctx->pc = 0x2A9690u;
label_2a9690:
    // 0x2a9690: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9690u;
    {
        const bool branch_taken_0x2a9690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9690) {
            ctx->pc = 0x2A9694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9690u;
            // 0x2a9694: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A96A4u;
            goto label_2a96a4;
        }
    }
    ctx->pc = 0x2A9698u;
    // 0x2a9698: 0xc0a80c2  jal         func_2A0308
    ctx->pc = 0x2A9698u;
    SET_GPR_U32(ctx, 31, 0x2A96A0u);
    ctx->pc = 0x2A969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9698u;
            // 0x2a969c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0308u;
    if (runtime->hasFunction(0x2A0308u)) {
        auto targetFn = runtime->lookupFunction(0x2A0308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96A0u; }
        if (ctx->pc != 0x2A96A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0308_0x2a0308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96A0u; }
        if (ctx->pc != 0x2A96A0u) { return; }
    }
    ctx->pc = 0x2A96A0u;
label_2a96a0:
    // 0x2a96a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a96a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a96a4:
    // 0x2a96a4: 0x2646caf8  addiu       $a2, $s2, -0x3508
    ctx->pc = 0x2a96a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953720));
    // 0x2a96a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a96ac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a96acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a96b0: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A96B0u;
    SET_GPR_U32(ctx, 31, 0x2A96B8u);
    ctx->pc = 0x2A96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96B0u;
            // 0x2a96b4: 0x24070367  addiu       $a3, $zero, 0x367 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96B8u; }
        if (ctx->pc != 0x2A96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96B8u; }
        if (ctx->pc != 0x2A96B8u) { return; }
    }
    ctx->pc = 0x2A96B8u;
label_2a96b8:
    // 0x2a96b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A96B8u;
    {
        const bool branch_taken_0x2a96b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96B8u;
            // 0x2a96bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a96b8) {
            ctx->pc = 0x2A96C4u;
            goto label_2a96c4;
        }
    }
    ctx->pc = 0x2A96C0u;
label_2a96c0:
    // 0x2a96c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a96c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a96c4:
    // 0x2a96c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a96c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a96c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a96c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a96cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a96ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a96d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a96d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a96d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A96D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96D4u;
            // 0x2a96d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A96DCu;
    // 0x2a96dc: 0x0  nop
    ctx->pc = 0x2a96dcu;
    // NOP
    ctx->pc = 0x2a96e0u;
}
