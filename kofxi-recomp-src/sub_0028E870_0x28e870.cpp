#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E870
// Address: 0x28e870 - 0x28e950
void sub_0028E870_0x28e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E870_0x28e870");
#endif

    switch (ctx->pc) {
        case 0x28e870u: goto label_28e870;
        case 0x28e874u: goto label_28e874;
        case 0x28e878u: goto label_28e878;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e880u: goto label_28e880;
        case 0x28e884u: goto label_28e884;
        case 0x28e888u: goto label_28e888;
        case 0x28e88cu: goto label_28e88c;
        case 0x28e890u: goto label_28e890;
        case 0x28e894u: goto label_28e894;
        case 0x28e898u: goto label_28e898;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8a0u: goto label_28e8a0;
        case 0x28e8a4u: goto label_28e8a4;
        case 0x28e8a8u: goto label_28e8a8;
        case 0x28e8acu: goto label_28e8ac;
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8b4u: goto label_28e8b4;
        case 0x28e8b8u: goto label_28e8b8;
        case 0x28e8bcu: goto label_28e8bc;
        case 0x28e8c0u: goto label_28e8c0;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        default: break;
    }

    ctx->pc = 0x28e870u;

label_28e870:
    // 0x28e870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28e874:
    // 0x28e874: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e878:
    // 0x28e878: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_28e87c:
    // 0x28e87c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_28e880:
    // 0x28e880: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28e880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28e884:
    // 0x28e884: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_28e888:
    // 0x28e888: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28e888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28e88c:
    // 0x28e88c: 0x8c4245f8  lw          $v0, 0x45F8($v0)
    ctx->pc = 0x28e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17912)));
label_28e890:
    // 0x28e890: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28e890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e894:
    // 0x28e894: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e898:
    if (ctx->pc == 0x28E898u) {
        ctx->pc = 0x28E898u;
            // 0x28e898: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->pc = 0x28E89Cu;
        goto label_28e89c;
    }
    ctx->pc = 0x28E894u;
    {
        const bool branch_taken_0x28e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E894u;
            // 0x28e898: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e894) {
            ctx->pc = 0x28E8BCu;
            goto label_28e8bc;
        }
    }
    ctx->pc = 0x28E89Cu;
label_28e89c:
    // 0x28e89c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e8a0:
    // 0x28e8a0: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x28e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_28e8a4:
    // 0x28e8a4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e8a8:
    // 0x28e8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8ac:
    // 0x28e8ac: 0xc0a5648  jal         func_295920
label_28e8b0:
    if (ctx->pc == 0x28E8B0u) {
        ctx->pc = 0x28E8B0u;
            // 0x28e8b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E8B4u;
        goto label_28e8b4;
    }
    ctx->pc = 0x28E8ACu;
    SET_GPR_U32(ctx, 31, 0x28E8B4u);
    ctx->pc = 0x28E8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8ACu;
            // 0x28e8b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8B4u; }
        if (ctx->pc != 0x28E8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8B4u; }
        if (ctx->pc != 0x28E8B4u) { return; }
    }
    ctx->pc = 0x28E8B4u;
label_28e8b4:
    // 0x28e8b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_28e8b8:
    if (ctx->pc == 0x28E8B8u) {
        ctx->pc = 0x28E8B8u;
            // 0x28e8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E8BCu;
        goto label_28e8bc;
    }
    ctx->pc = 0x28E8B4u;
    {
        const bool branch_taken_0x28e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8B4u;
            // 0x28e8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8b4) {
            ctx->pc = 0x28E8F0u;
            goto label_28e8f0;
        }
    }
    ctx->pc = 0x28E8BCu;
label_28e8bc:
    // 0x28e8bc: 0x40f809  jalr        $v0
label_28e8c0:
    if (ctx->pc == 0x28E8C0u) {
        ctx->pc = 0x28E8C0u;
            // 0x28e8c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E8C4u;
        goto label_28e8c4;
    }
    ctx->pc = 0x28E8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E8C4u);
        ctx->pc = 0x28E8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8BCu;
            // 0x28e8c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E8C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E8C4u; }
            if (ctx->pc != 0x28E8C4u) { return; }
        }
        }
    }
    ctx->pc = 0x28E8C4u;
label_28e8c4:
    // 0x28e8c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28e8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e8c8:
    // 0x28e8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e8cc:
    // 0x28e8cc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_28e8d0:
    if (ctx->pc == 0x28E8D0u) {
        ctx->pc = 0x28E8D0u;
            // 0x28e8d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E8D4u;
        goto label_28e8d4;
    }
    ctx->pc = 0x28E8CCu;
    {
        const bool branch_taken_0x28e8cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8CCu;
            // 0x28e8d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8cc) {
            ctx->pc = 0x28E8F0u;
            goto label_28e8f0;
        }
    }
    ctx->pc = 0x28E8D4u;
label_28e8d4:
    // 0x28e8d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28e8d8:
    // 0x28e8d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28e8dc:
    // 0x28e8dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28e8e0:
    // 0x28e8e0: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x28e8e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28e8e4:
    // 0x28e8e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x28e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_28e8e8:
    // 0x28e8e8: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x28e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_28e8ec:
    // 0x28e8ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28e8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e8f0:
    // 0x28e8f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28e8f4:
    // 0x28e8f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28e8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28e8f8:
    // 0x28e8f8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28e8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28e8fc:
    // 0x28e8fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28e8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28e900:
    // 0x28e900: 0x3e00008  jr          $ra
label_28e904:
    if (ctx->pc == 0x28E904u) {
        ctx->pc = 0x28E904u;
            // 0x28e904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28E908u;
        goto label_28e908;
    }
    ctx->pc = 0x28E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E900u;
            // 0x28e904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E908u;
label_28e908:
    // 0x28e908: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e90c:
    // 0x28e90c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e910:
    // 0x28e910: 0x8c4245fc  lw          $v0, 0x45FC($v0)
    ctx->pc = 0x28e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17916)));
label_28e914:
    // 0x28e914: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e918:
    if (ctx->pc == 0x28E918u) {
        ctx->pc = 0x28E918u;
            // 0x28e918: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E91Cu;
        goto label_28e91c;
    }
    ctx->pc = 0x28E914u;
    {
        const bool branch_taken_0x28e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E914u;
            // 0x28e918: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e914) {
            ctx->pc = 0x28E93Cu;
            goto label_28e93c;
        }
    }
    ctx->pc = 0x28E91Cu;
label_28e91c:
    // 0x28e91c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e920:
    // 0x28e920: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x28e920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_28e924:
    // 0x28e924: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e928:
    // 0x28e928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e92c:
    // 0x28e92c: 0xc0a5648  jal         func_295920
label_28e930:
    if (ctx->pc == 0x28E930u) {
        ctx->pc = 0x28E930u;
            // 0x28e930: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E934u;
        goto label_28e934;
    }
    ctx->pc = 0x28E92Cu;
    SET_GPR_U32(ctx, 31, 0x28E934u);
    ctx->pc = 0x28E930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E92Cu;
            // 0x28e930: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E934u; }
        if (ctx->pc != 0x28E934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E934u; }
        if (ctx->pc != 0x28E934u) { return; }
    }
    ctx->pc = 0x28E934u;
label_28e934:
    // 0x28e934: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e938:
    if (ctx->pc == 0x28E938u) {
        ctx->pc = 0x28E938u;
            // 0x28e938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E93Cu;
        goto label_28e93c;
    }
    ctx->pc = 0x28E934u;
    {
        const bool branch_taken_0x28e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E934u;
            // 0x28e938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e934) {
            ctx->pc = 0x28E944u;
            goto label_28e944;
        }
    }
    ctx->pc = 0x28E93Cu;
label_28e93c:
    // 0x28e93c: 0x40f809  jalr        $v0
label_28e940:
    if (ctx->pc == 0x28E940u) {
        ctx->pc = 0x28E944u;
        goto label_28e944;
    }
    ctx->pc = 0x28E93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E944u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E944u; }
            if (ctx->pc != 0x28E944u) { return; }
        }
        }
    }
    ctx->pc = 0x28E944u;
label_28e944:
    // 0x28e944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e948:
    // 0x28e948: 0x3e00008  jr          $ra
label_28e94c:
    if (ctx->pc == 0x28E94Cu) {
        ctx->pc = 0x28E94Cu;
            // 0x28e94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E950u;
        goto label_fallthrough_0x28e948;
    }
    ctx->pc = 0x28E948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E948u;
            // 0x28e94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e948:
    ctx->pc = 0x28E950u;
    ctx->pc = 0x28e950u;
}
