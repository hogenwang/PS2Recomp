#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010E870
// Address: 0x10e870 - 0x10ea48
void sub_0010E870_0x10e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E870_0x10e870");
#endif

    switch (ctx->pc) {
        case 0x10e870u: goto label_10e870;
        case 0x10e874u: goto label_10e874;
        case 0x10e878u: goto label_10e878;
        case 0x10e87cu: goto label_10e87c;
        case 0x10e880u: goto label_10e880;
        case 0x10e884u: goto label_10e884;
        case 0x10e888u: goto label_10e888;
        case 0x10e88cu: goto label_10e88c;
        case 0x10e890u: goto label_10e890;
        case 0x10e894u: goto label_10e894;
        case 0x10e898u: goto label_10e898;
        case 0x10e89cu: goto label_10e89c;
        case 0x10e8a0u: goto label_10e8a0;
        case 0x10e8a4u: goto label_10e8a4;
        case 0x10e8a8u: goto label_10e8a8;
        case 0x10e8acu: goto label_10e8ac;
        case 0x10e8b0u: goto label_10e8b0;
        case 0x10e8b4u: goto label_10e8b4;
        case 0x10e8b8u: goto label_10e8b8;
        case 0x10e8bcu: goto label_10e8bc;
        case 0x10e8c0u: goto label_10e8c0;
        case 0x10e8c4u: goto label_10e8c4;
        case 0x10e8c8u: goto label_10e8c8;
        case 0x10e8ccu: goto label_10e8cc;
        case 0x10e8d0u: goto label_10e8d0;
        case 0x10e8d4u: goto label_10e8d4;
        case 0x10e8d8u: goto label_10e8d8;
        case 0x10e8dcu: goto label_10e8dc;
        case 0x10e8e0u: goto label_10e8e0;
        case 0x10e8e4u: goto label_10e8e4;
        case 0x10e8e8u: goto label_10e8e8;
        case 0x10e8ecu: goto label_10e8ec;
        case 0x10e8f0u: goto label_10e8f0;
        case 0x10e8f4u: goto label_10e8f4;
        case 0x10e8f8u: goto label_10e8f8;
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e900u: goto label_10e900;
        case 0x10e904u: goto label_10e904;
        case 0x10e908u: goto label_10e908;
        case 0x10e90cu: goto label_10e90c;
        case 0x10e910u: goto label_10e910;
        case 0x10e914u: goto label_10e914;
        case 0x10e918u: goto label_10e918;
        case 0x10e91cu: goto label_10e91c;
        case 0x10e920u: goto label_10e920;
        case 0x10e924u: goto label_10e924;
        case 0x10e928u: goto label_10e928;
        case 0x10e92cu: goto label_10e92c;
        case 0x10e930u: goto label_10e930;
        case 0x10e934u: goto label_10e934;
        case 0x10e938u: goto label_10e938;
        case 0x10e93cu: goto label_10e93c;
        case 0x10e940u: goto label_10e940;
        case 0x10e944u: goto label_10e944;
        case 0x10e948u: goto label_10e948;
        case 0x10e94cu: goto label_10e94c;
        case 0x10e950u: goto label_10e950;
        case 0x10e954u: goto label_10e954;
        case 0x10e958u: goto label_10e958;
        case 0x10e95cu: goto label_10e95c;
        case 0x10e960u: goto label_10e960;
        case 0x10e964u: goto label_10e964;
        case 0x10e968u: goto label_10e968;
        case 0x10e96cu: goto label_10e96c;
        case 0x10e970u: goto label_10e970;
        case 0x10e974u: goto label_10e974;
        case 0x10e978u: goto label_10e978;
        case 0x10e97cu: goto label_10e97c;
        case 0x10e980u: goto label_10e980;
        case 0x10e984u: goto label_10e984;
        case 0x10e988u: goto label_10e988;
        case 0x10e98cu: goto label_10e98c;
        case 0x10e990u: goto label_10e990;
        case 0x10e994u: goto label_10e994;
        case 0x10e998u: goto label_10e998;
        case 0x10e99cu: goto label_10e99c;
        case 0x10e9a0u: goto label_10e9a0;
        case 0x10e9a4u: goto label_10e9a4;
        case 0x10e9a8u: goto label_10e9a8;
        case 0x10e9acu: goto label_10e9ac;
        case 0x10e9b0u: goto label_10e9b0;
        case 0x10e9b4u: goto label_10e9b4;
        case 0x10e9b8u: goto label_10e9b8;
        case 0x10e9bcu: goto label_10e9bc;
        case 0x10e9c0u: goto label_10e9c0;
        case 0x10e9c4u: goto label_10e9c4;
        case 0x10e9c8u: goto label_10e9c8;
        case 0x10e9ccu: goto label_10e9cc;
        case 0x10e9d0u: goto label_10e9d0;
        case 0x10e9d4u: goto label_10e9d4;
        case 0x10e9d8u: goto label_10e9d8;
        case 0x10e9dcu: goto label_10e9dc;
        case 0x10e9e0u: goto label_10e9e0;
        case 0x10e9e4u: goto label_10e9e4;
        case 0x10e9e8u: goto label_10e9e8;
        case 0x10e9ecu: goto label_10e9ec;
        case 0x10e9f0u: goto label_10e9f0;
        case 0x10e9f4u: goto label_10e9f4;
        case 0x10e9f8u: goto label_10e9f8;
        case 0x10e9fcu: goto label_10e9fc;
        case 0x10ea00u: goto label_10ea00;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea08u: goto label_10ea08;
        case 0x10ea0cu: goto label_10ea0c;
        case 0x10ea10u: goto label_10ea10;
        case 0x10ea14u: goto label_10ea14;
        case 0x10ea18u: goto label_10ea18;
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea20u: goto label_10ea20;
        case 0x10ea24u: goto label_10ea24;
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea2cu: goto label_10ea2c;
        case 0x10ea30u: goto label_10ea30;
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea38u: goto label_10ea38;
        case 0x10ea3cu: goto label_10ea3c;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea44u: goto label_10ea44;
        default: break;
    }

    ctx->pc = 0x10e870u;

label_10e870:
    // 0x10e870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10e874:
    // 0x10e874: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_10e878:
    // 0x10e878: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_10e87c:
    // 0x10e87c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10e87cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10e880:
    // 0x10e880: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_10e884:
    // 0x10e884: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10e884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e888:
    // 0x10e888: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_10e88c:
    // 0x10e88c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10e88cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e890:
    // 0x10e890: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_10e894:
    // 0x10e894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e898:
    // 0x10e898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10e89c:
    // 0x10e89c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10e89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10e8a0:
    // 0x10e8a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10e8a4:
    // 0x10e8a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_10e8a8:
    // 0x10e8a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10e8ac:
    // 0x10e8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e8b0:
    if (ctx->pc == 0x10E8B0u) {
        ctx->pc = 0x10E8B0u;
            // 0x10e8b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E8B4u;
        goto label_10e8b4;
    }
    ctx->pc = 0x10E8ACu;
    {
        const bool branch_taken_0x10e8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8ACu;
            // 0x10e8b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8ac) {
            ctx->pc = 0x10E8BCu;
            goto label_10e8bc;
        }
    }
    ctx->pc = 0x10E8B4u;
label_10e8b4:
    // 0x10e8b4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_10e8b8:
    if (ctx->pc == 0x10E8B8u) {
        ctx->pc = 0x10E8B8u;
            // 0x10e8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E8BCu;
        goto label_10e8bc;
    }
    ctx->pc = 0x10E8B4u;
    {
        const bool branch_taken_0x10e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8B4u;
            // 0x10e8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8b4) {
            ctx->pc = 0x10EA20u;
            goto label_10ea20;
        }
    }
    ctx->pc = 0x10E8BCu;
label_10e8bc:
    // 0x10e8bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10e8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e8c0:
    // 0x10e8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e8c4:
    // 0x10e8c4: 0xc048b9e  jal         func_122E78
label_10e8c8:
    if (ctx->pc == 0x10E8C8u) {
        ctx->pc = 0x10E8C8u;
            // 0x10e8c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E8CCu;
        goto label_10e8cc;
    }
    ctx->pc = 0x10E8C4u;
    SET_GPR_U32(ctx, 31, 0x10E8CCu);
    ctx->pc = 0x10E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8C4u;
            // 0x10e8c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (runtime->hasFunction(0x122E78u)) {
        auto targetFn = runtime->lookupFunction(0x122E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8CCu; }
        if (ctx->pc != 0x10E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122E78_0x122e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8CCu; }
        if (ctx->pc != 0x10E8CCu) { return; }
    }
    ctx->pc = 0x10E8CCu;
label_10e8cc:
    // 0x10e8cc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_10e8d0:
    if (ctx->pc == 0x10E8D0u) {
        ctx->pc = 0x10E8D0u;
            // 0x10e8d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E8D4u;
        goto label_10e8d4;
    }
    ctx->pc = 0x10E8CCu;
    {
        const bool branch_taken_0x10e8cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8CCu;
            // 0x10e8d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8cc) {
            ctx->pc = 0x10E900u;
            goto label_10e900;
        }
    }
    ctx->pc = 0x10E8D4u;
label_10e8d4:
    // 0x10e8d4: 0xc048a5c  jal         func_122970
label_10e8d8:
    if (ctx->pc == 0x10E8D8u) {
        ctx->pc = 0x10E8D8u;
            // 0x10e8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E8DCu;
        goto label_10e8dc;
    }
    ctx->pc = 0x10E8D4u;
    SET_GPR_U32(ctx, 31, 0x10E8DCu);
    ctx->pc = 0x10E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8D4u;
            // 0x10e8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8DCu; }
        if (ctx->pc != 0x10E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8DCu; }
        if (ctx->pc != 0x10E8DCu) { return; }
    }
    ctx->pc = 0x10E8DCu;
label_10e8dc:
    // 0x10e8dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e8e0:
    // 0x10e8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e8e4:
    // 0x10e8e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10e8e8:
    // 0x10e8e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e8ec:
    // 0x10e8ec: 0x2a0f809  jalr        $s5
label_10e8f0:
    if (ctx->pc == 0x10E8F0u) {
        ctx->pc = 0x10E8F0u;
            // 0x10e8f0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x10E8F4u;
        goto label_10e8f4;
    }
    ctx->pc = 0x10E8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x10E8F4u);
        ctx->pc = 0x10E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8ECu;
            // 0x10e8f0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E8F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E8F4u; }
            if (ctx->pc != 0x10E8F4u) { return; }
        }
        }
    }
    ctx->pc = 0x10E8F4u;
label_10e8f4:
    // 0x10e8f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10e8f8:
    // 0x10e8f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10e8fc:
    // 0x10e8fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_10e900:
    // 0x10e900: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x10e900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_10e904:
    // 0x10e904: 0xdc25a5c8  ld          $a1, -0x5A38($at)
    ctx->pc = 0x10e904u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944200)));
label_10e908:
    // 0x10e908: 0xc048b9e  jal         func_122E78
label_10e90c:
    if (ctx->pc == 0x10E90Cu) {
        ctx->pc = 0x10E90Cu;
            // 0x10e90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E910u;
        goto label_10e910;
    }
    ctx->pc = 0x10E908u;
    SET_GPR_U32(ctx, 31, 0x10E910u);
    ctx->pc = 0x10E90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E908u;
            // 0x10e90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (runtime->hasFunction(0x122E78u)) {
        auto targetFn = runtime->lookupFunction(0x122E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E910u; }
        if (ctx->pc != 0x10E910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122E78_0x122e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E910u; }
        if (ctx->pc != 0x10E910u) { return; }
    }
    ctx->pc = 0x10E910u;
label_10e910:
    // 0x10e910: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_10e914:
    if (ctx->pc == 0x10E914u) {
        ctx->pc = 0x10E914u;
            // 0x10e914: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x10E918u;
        goto label_10e918;
    }
    ctx->pc = 0x10E910u;
    {
        const bool branch_taken_0x10e910 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E910u;
            // 0x10e914: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e910) {
            ctx->pc = 0x10E954u;
            goto label_10e954;
        }
    }
    ctx->pc = 0x10E918u;
label_10e918:
    // 0x10e918: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e91c:
    if (ctx->pc == 0x10E91Cu) {
        ctx->pc = 0x10E920u;
        goto label_10e920;
    }
    ctx->pc = 0x10E918u;
    {
        const bool branch_taken_0x10e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e918) {
            ctx->pc = 0x10E934u;
            goto label_10e934;
        }
    }
    ctx->pc = 0x10E920u;
label_10e920:
    // 0x10e920: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x10e920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_10e924:
    // 0x10e924: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x10e924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10e928:
    // 0x10e928: 0xc048a76  jal         func_1229D8
label_10e92c:
    if (ctx->pc == 0x10E92Cu) {
        ctx->pc = 0x10E92Cu;
            // 0x10e92c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x10E930u;
        goto label_10e930;
    }
    ctx->pc = 0x10E928u;
    SET_GPR_U32(ctx, 31, 0x10E930u);
    ctx->pc = 0x10E92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E928u;
            // 0x10e92c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E930u; }
        if (ctx->pc != 0x10E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E930u; }
        if (ctx->pc != 0x10E930u) { return; }
    }
    ctx->pc = 0x10E930u;
label_10e930:
    // 0x10e930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e934:
    // 0x10e934: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_10e938:
    // 0x10e938: 0xdc25a5d0  ld          $a1, -0x5A30($at)
    ctx->pc = 0x10e938u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944208)));
label_10e93c:
    // 0x10e93c: 0xc048b9e  jal         func_122E78
label_10e940:
    if (ctx->pc == 0x10E940u) {
        ctx->pc = 0x10E940u;
            // 0x10e940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E944u;
        goto label_10e944;
    }
    ctx->pc = 0x10E93Cu;
    SET_GPR_U32(ctx, 31, 0x10E944u);
    ctx->pc = 0x10E940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E93Cu;
            // 0x10e940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (runtime->hasFunction(0x122E78u)) {
        auto targetFn = runtime->lookupFunction(0x122E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E944u; }
        if (ctx->pc != 0x10E944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122E78_0x122e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E944u; }
        if (ctx->pc != 0x10E944u) { return; }
    }
    ctx->pc = 0x10E944u;
label_10e944:
    // 0x10e944: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_10e948:
    if (ctx->pc == 0x10E948u) {
        ctx->pc = 0x10E948u;
            // 0x10e948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E94Cu;
        goto label_10e94c;
    }
    ctx->pc = 0x10E944u;
    {
        const bool branch_taken_0x10e944 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E944u;
            // 0x10e948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e944) {
            ctx->pc = 0x10E920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e920;
        }
    }
    ctx->pc = 0x10E94Cu;
label_10e94c:
    // 0x10e94c: 0x10000015  b           . + 4 + (0x15 << 2)
label_10e950:
    if (ctx->pc == 0x10E950u) {
        ctx->pc = 0x10E954u;
        goto label_10e954;
    }
    ctx->pc = 0x10E94Cu;
    {
        const bool branch_taken_0x10e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e94c) {
            ctx->pc = 0x10E9A4u;
            goto label_10e9a4;
        }
    }
    ctx->pc = 0x10E954u;
label_10e954:
    // 0x10e954: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x10e954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_10e958:
    // 0x10e958: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x10e958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10e95c:
    // 0x10e95c: 0xc048b9e  jal         func_122E78
label_10e960:
    if (ctx->pc == 0x10E960u) {
        ctx->pc = 0x10E960u;
            // 0x10e960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E964u;
        goto label_10e964;
    }
    ctx->pc = 0x10E95Cu;
    SET_GPR_U32(ctx, 31, 0x10E964u);
    ctx->pc = 0x10E960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E95Cu;
            // 0x10e960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (runtime->hasFunction(0x122E78u)) {
        auto targetFn = runtime->lookupFunction(0x122E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E964u; }
        if (ctx->pc != 0x10E964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122E78_0x122e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E964u; }
        if (ctx->pc != 0x10E964u) { return; }
    }
    ctx->pc = 0x10E964u;
label_10e964:
    // 0x10e964: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_10e968:
    if (ctx->pc == 0x10E968u) {
        ctx->pc = 0x10E968u;
            // 0x10e968: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x10E96Cu;
        goto label_10e96c;
    }
    ctx->pc = 0x10E964u;
    {
        const bool branch_taken_0x10e964 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E964u;
            // 0x10e968: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e964) {
            ctx->pc = 0x10E9A4u;
            goto label_10e9a4;
        }
    }
    ctx->pc = 0x10E96Cu;
label_10e96c:
    // 0x10e96c: 0x10000007  b           . + 4 + (0x7 << 2)
label_10e970:
    if (ctx->pc == 0x10E970u) {
        ctx->pc = 0x10E974u;
        goto label_10e974;
    }
    ctx->pc = 0x10E96Cu;
    {
        const bool branch_taken_0x10e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e96c) {
            ctx->pc = 0x10E98Cu;
            goto label_10e98c;
        }
    }
    ctx->pc = 0x10E974u;
label_10e974:
    // 0x10e974: 0x0  nop
    ctx->pc = 0x10e974u;
    // NOP
label_10e978:
    // 0x10e978: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x10e978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_10e97c:
    // 0x10e97c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x10e97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10e980:
    // 0x10e980: 0xc048b0a  jal         func_122C28
label_10e984:
    if (ctx->pc == 0x10E984u) {
        ctx->pc = 0x10E984u;
            // 0x10e984: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x10E988u;
        goto label_10e988;
    }
    ctx->pc = 0x10E980u;
    SET_GPR_U32(ctx, 31, 0x10E988u);
    ctx->pc = 0x10E984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E980u;
            // 0x10e984: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E988u; }
        if (ctx->pc != 0x10E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E988u; }
        if (ctx->pc != 0x10E988u) { return; }
    }
    ctx->pc = 0x10E988u;
label_10e988:
    // 0x10e988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e98c:
    // 0x10e98c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x10e98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_10e990:
    // 0x10e990: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x10e990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10e994:
    // 0x10e994: 0xc048b9e  jal         func_122E78
label_10e998:
    if (ctx->pc == 0x10E998u) {
        ctx->pc = 0x10E998u;
            // 0x10e998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E99Cu;
        goto label_10e99c;
    }
    ctx->pc = 0x10E994u;
    SET_GPR_U32(ctx, 31, 0x10E99Cu);
    ctx->pc = 0x10E998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E994u;
            // 0x10e998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (runtime->hasFunction(0x122E78u)) {
        auto targetFn = runtime->lookupFunction(0x122E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E99Cu; }
        if (ctx->pc != 0x10E99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122E78_0x122e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E99Cu; }
        if (ctx->pc != 0x10E99Cu) { return; }
    }
    ctx->pc = 0x10E99Cu;
label_10e99c:
    // 0x10e99c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_10e9a0:
    if (ctx->pc == 0x10E9A0u) {
        ctx->pc = 0x10E9A0u;
            // 0x10e9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E9A4u;
        goto label_10e9a4;
    }
    ctx->pc = 0x10E99Cu;
    {
        const bool branch_taken_0x10e99c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E99Cu;
            // 0x10e9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e99c) {
            ctx->pc = 0x10E978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e978;
        }
    }
    ctx->pc = 0x10E9A4u;
label_10e9a4:
    // 0x10e9a4: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_10e9a8:
    // 0x10e9a8: 0xdc25a5d8  ld          $a1, -0x5A28($at)
    ctx->pc = 0x10e9a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944216)));
label_10e9ac:
    // 0x10e9ac: 0xc048a76  jal         func_1229D8
label_10e9b0:
    if (ctx->pc == 0x10E9B0u) {
        ctx->pc = 0x10E9B0u;
            // 0x10e9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B4u;
        goto label_10e9b4;
    }
    ctx->pc = 0x10E9ACu;
    SET_GPR_U32(ctx, 31, 0x10E9B4u);
    ctx->pc = 0x10E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9ACu;
            // 0x10e9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9B4u; }
        if (ctx->pc != 0x10E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9B4u; }
        if (ctx->pc != 0x10E9B4u) { return; }
    }
    ctx->pc = 0x10E9B4u;
label_10e9b4:
    // 0x10e9b4: 0xc0480ee  jal         func_1203B8
label_10e9b8:
    if (ctx->pc == 0x10E9B8u) {
        ctx->pc = 0x10E9B8u;
            // 0x10e9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E9BCu;
        goto label_10e9bc;
    }
    ctx->pc = 0x10E9B4u;
    SET_GPR_U32(ctx, 31, 0x10E9BCu);
    ctx->pc = 0x10E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9B4u;
            // 0x10e9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1203B8u;
    if (runtime->hasFunction(0x1203B8u)) {
        auto targetFn = runtime->lookupFunction(0x1203B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9BCu; }
        if (ctx->pc != 0x10E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001203B8_0x1203b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9BCu; }
        if (ctx->pc != 0x10E9BCu) { return; }
    }
    ctx->pc = 0x10E9BCu;
label_10e9bc:
    // 0x10e9bc: 0xc0439f8  jal         func_10E7E0
label_10e9c0:
    if (ctx->pc == 0x10E9C0u) {
        ctx->pc = 0x10E9C0u;
            // 0x10e9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E9C4u;
        goto label_10e9c4;
    }
    ctx->pc = 0x10E9BCu;
    SET_GPR_U32(ctx, 31, 0x10E9C4u);
    ctx->pc = 0x10E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9BCu;
            // 0x10e9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E7E0u;
    if (runtime->hasFunction(0x10E7E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9C4u; }
        if (ctx->pc != 0x10E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E7E0_0x10e7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9C4u; }
        if (ctx->pc != 0x10E9C4u) { return; }
    }
    ctx->pc = 0x10E9C4u;
label_10e9c4:
    // 0x10e9c4: 0x2667a5b0  addiu       $a3, $s3, -0x5A50
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944176));
label_10e9c8:
    // 0x10e9c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10e9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e9cc:
    // 0x10e9cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10e9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e9d0:
    // 0x10e9d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10e9d4:
    // 0x10e9d4: 0xc043e02  jal         func_10F808
label_10e9d8:
    if (ctx->pc == 0x10E9D8u) {
        ctx->pc = 0x10E9D8u;
            // 0x10e9d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E9DCu;
        goto label_10e9dc;
    }
    ctx->pc = 0x10E9D4u;
    SET_GPR_U32(ctx, 31, 0x10E9DCu);
    ctx->pc = 0x10E9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9D4u;
            // 0x10e9d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F808u;
    if (runtime->hasFunction(0x10F808u)) {
        auto targetFn = runtime->lookupFunction(0x10F808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9DCu; }
        if (ctx->pc != 0x10E9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F808_0x10f808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9DCu; }
        if (ctx->pc != 0x10E9DCu) { return; }
    }
    ctx->pc = 0x10E9DCu;
label_10e9dc:
    // 0x10e9dc: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_10e9e0:
    if (ctx->pc == 0x10E9E0u) {
        ctx->pc = 0x10E9E0u;
            // 0x10e9e0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x10E9E4u;
        goto label_10e9e4;
    }
    ctx->pc = 0x10E9DCu;
    {
        const bool branch_taken_0x10e9dc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x10E9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9DCu;
            // 0x10e9e0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9dc) {
            ctx->pc = 0x10E9FCu;
            goto label_10e9fc;
        }
    }
    ctx->pc = 0x10E9E4u;
label_10e9e4:
    // 0x10e9e4: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
label_10e9e8:
    // 0x10e9e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e9ec:
    // 0x10e9ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10e9f0:
    // 0x10e9f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10e9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e9f4:
    // 0x10e9f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e9f8:
    if (ctx->pc == 0x10E9F8u) {
        ctx->pc = 0x10E9F8u;
            // 0x10e9f8: 0x24e7a5b8  addiu       $a3, $a3, -0x5A48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944184));
        ctx->pc = 0x10E9FCu;
        goto label_10e9fc;
    }
    ctx->pc = 0x10E9F4u;
    {
        const bool branch_taken_0x10e9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9F4u;
            // 0x10e9f8: 0x24e7a5b8  addiu       $a3, $a3, -0x5A48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9f4) {
            ctx->pc = 0x10EA10u;
            goto label_10ea10;
        }
    }
    ctx->pc = 0x10E9FCu;
label_10e9fc:
    // 0x10e9fc: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x10e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
label_10ea00:
    // 0x10ea00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10ea04:
    // 0x10ea04: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10ea04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10ea08:
    // 0x10ea08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10ea08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ea0c:
    // 0x10ea0c: 0x24e7a5c0  addiu       $a3, $a3, -0x5A40
    ctx->pc = 0x10ea0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944192));
label_10ea10:
    // 0x10ea10: 0xc043e02  jal         func_10F808
label_10ea14:
    if (ctx->pc == 0x10EA14u) {
        ctx->pc = 0x10EA14u;
            // 0x10ea14: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EA18u;
        goto label_10ea18;
    }
    ctx->pc = 0x10EA10u;
    SET_GPR_U32(ctx, 31, 0x10EA18u);
    ctx->pc = 0x10EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA10u;
            // 0x10ea14: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F808u;
    if (runtime->hasFunction(0x10F808u)) {
        auto targetFn = runtime->lookupFunction(0x10F808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA18u; }
        if (ctx->pc != 0x10EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F808_0x10f808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA18u; }
        if (ctx->pc != 0x10EA18u) { return; }
    }
    ctx->pc = 0x10EA18u;
label_10ea18:
    // 0x10ea18: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_10ea1c:
    // 0x10ea1c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10ea1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10ea20:
    // 0x10ea20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10ea24:
    // 0x10ea24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10ea24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10ea28:
    // 0x10ea28: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10ea28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10ea2c:
    // 0x10ea2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10ea2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10ea30:
    // 0x10ea30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10ea30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10ea34:
    // 0x10ea34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ea34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ea38:
    // 0x10ea38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ea38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ea3c:
    // 0x10ea3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ea3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ea40:
    // 0x10ea40: 0x3e00008  jr          $ra
label_10ea44:
    if (ctx->pc == 0x10EA44u) {
        ctx->pc = 0x10EA44u;
            // 0x10ea44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x10EA48u;
        goto label_fallthrough_0x10ea40;
    }
    ctx->pc = 0x10EA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA40u;
            // 0x10ea44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10ea40:
    ctx->pc = 0x10EA48u;
    ctx->pc = 0x10ea48u;
}
