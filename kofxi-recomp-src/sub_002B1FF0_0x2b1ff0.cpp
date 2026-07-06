#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1FF0
// Address: 0x2b1ff0 - 0x2b2158
void sub_002B1FF0_0x2b1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1FF0_0x2b1ff0");
#endif

    switch (ctx->pc) {
        case 0x2b2020u: goto label_2b2020;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b2054u: goto label_2b2054;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b20b4u: goto label_2b20b4;
        case 0x2b20c4u: goto label_2b20c4;
        case 0x2b20d0u: goto label_2b20d0;
        case 0x2b20e0u: goto label_2b20e0;
        case 0x2b2108u: goto label_2b2108;
        case 0x2b211cu: goto label_2b211c;
        default: break;
    }

    ctx->pc = 0x2b1ff0u;

    // 0x2b1ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b1ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b1ff4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b1ff8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b1ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b1ffc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b1ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2004: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b2004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2008: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b2008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b200c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2010: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b2014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b2018: 0xc0a2e20  jal         func_28B880
    ctx->pc = 0x2B2018u;
    SET_GPR_U32(ctx, 31, 0x2B2020u);
    ctx->pc = 0x2B201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2018u;
            // 0x2b201c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B880u;
    if (runtime->hasFunction(0x28B880u)) {
        auto targetFn = runtime->lookupFunction(0x28B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2020u; }
        if (ctx->pc != 0x2B2020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B880_0x28b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2020u; }
        if (ctx->pc != 0x2B2020u) { return; }
    }
    ctx->pc = 0x2B2020u;
label_2b2020:
    // 0x2b2020: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x2B2020u;
    SET_GPR_U32(ctx, 31, 0x2B2028u);
    ctx->pc = 0x2B2024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2020u;
            // 0x2b2024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (runtime->hasFunction(0x284F78u)) {
        auto targetFn = runtime->lookupFunction(0x284F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2028u; }
        if (ctx->pc != 0x2B2028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F78_0x284f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2028u; }
        if (ctx->pc != 0x2B2028u) { return; }
    }
    ctx->pc = 0x2B2028u;
label_2b2028:
    // 0x2b2028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b202c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B202Cu;
    {
        const bool branch_taken_0x2b202c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B202Cu;
            // 0x2b2030: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b202c) {
            ctx->pc = 0x2B2044u;
            goto label_2b2044;
        }
    }
    ctx->pc = 0x2B2034u;
    // 0x2b2034: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2038: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2b2038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2b203c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B203Cu;
    {
        const bool branch_taken_0x2b203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B203Cu;
            // 0x2b2040: 0x24060807  addiu       $a2, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b203c) {
            ctx->pc = 0x2B20A8u;
            goto label_2b20a8;
        }
    }
    ctx->pc = 0x2B2044u;
label_2b2044:
    // 0x2b2044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2048: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2b2048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2b204c: 0xc0a1558  jal         func_285560
    ctx->pc = 0x2B204Cu;
    SET_GPR_U32(ctx, 31, 0x2B2054u);
    ctx->pc = 0x2B2050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B204Cu;
            // 0x2b2050: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2054u; }
        if (ctx->pc != 0x2B2054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2054u; }
        if (ctx->pc != 0x2B2054u) { return; }
    }
    ctx->pc = 0x2B2054u;
label_2b2054:
    // 0x2b2054: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2054u;
    {
        const bool branch_taken_0x2b2054 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2054u;
            // 0x2b2058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2054) {
            ctx->pc = 0x2B206Cu;
            goto label_2b206c;
        }
    }
    ctx->pc = 0x2B205Cu;
    // 0x2b205c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2060: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2b2060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2b2064: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2064u;
    {
        const bool branch_taken_0x2b2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2064u;
            // 0x2b2068: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2064) {
            ctx->pc = 0x2B20A8u;
            goto label_2b20a8;
        }
    }
    ctx->pc = 0x2B206Cu;
label_2b206c:
    // 0x2b206c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B206Cu;
    {
        const bool branch_taken_0x2b206c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B206Cu;
            // 0x2b2070: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b206c) {
            ctx->pc = 0x2B20A0u;
            goto label_2b20a0;
        }
    }
    ctx->pc = 0x2B2074u;
    // 0x2b2074: 0x8e6600d8  lw          $a2, 0xD8($s3)
    ctx->pc = 0x2b2074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x2b2078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b207c: 0xc0a7468  jal         func_29D1A0
    ctx->pc = 0x2B207Cu;
    SET_GPR_U32(ctx, 31, 0x2B2084u);
    ctx->pc = 0x2B2080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B207Cu;
            // 0x2b2080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D1A0u;
    if (runtime->hasFunction(0x29D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2084u; }
        if (ctx->pc != 0x2B2084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D1A0_0x29d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2084u; }
        if (ctx->pc != 0x2B2084u) { return; }
    }
    ctx->pc = 0x2B2084u;
label_2b2084:
    // 0x2b2084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2088: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B2088u;
    {
        const bool branch_taken_0x2b2088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2088u;
            // 0x2b208c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2088) {
            ctx->pc = 0x2B20BCu;
            goto label_2b20bc;
        }
    }
    ctx->pc = 0x2B2090u;
    // 0x2b2090: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b2090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2094: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2b2094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2b2098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2098u;
    {
        const bool branch_taken_0x2b2098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2098u;
            // 0x2b209c: 0x24060809  addiu       $a2, $zero, 0x809 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2098) {
            ctx->pc = 0x2B20A8u;
            goto label_2b20a8;
        }
    }
    ctx->pc = 0x2B20A0u;
label_2b20a0:
    // 0x2b20a0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2b20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2b20a4: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x2b20a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_2b20a8:
    // 0x2b20a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b20a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b20ac: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B20ACu;
    SET_GPR_U32(ctx, 31, 0x2B20B4u);
    ctx->pc = 0x2B20B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20ACu;
            // 0x2b20b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20B4u; }
        if (ctx->pc != 0x2B20B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20B4u; }
        if (ctx->pc != 0x2B20B4u) { return; }
    }
    ctx->pc = 0x2B20B4u;
label_2b20b4:
    // 0x2b20b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B20B4u;
    {
        const bool branch_taken_0x2b20b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20b4) {
            ctx->pc = 0x2B20D0u;
            goto label_2b20d0;
        }
    }
    ctx->pc = 0x2B20BCu;
label_2b20bc:
    // 0x2b20bc: 0xc0ac7da  jal         func_2B1F68
    ctx->pc = 0x2B20BCu;
    SET_GPR_U32(ctx, 31, 0x2B20C4u);
    ctx->pc = 0x2B20C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20BCu;
            // 0x2b20c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1F68u;
    if (runtime->hasFunction(0x2B1F68u)) {
        auto targetFn = runtime->lookupFunction(0x2B1F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20C4u; }
        if (ctx->pc != 0x2B20C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1F68_0x2b1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20C4u; }
        if (ctx->pc != 0x2B20C4u) { return; }
    }
    ctx->pc = 0x2B20C4u;
label_2b20c4:
    // 0x2b20c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b20c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b20c8: 0xc0a3d02  jal         func_28F408
    ctx->pc = 0x2B20C8u;
    SET_GPR_U32(ctx, 31, 0x2B20D0u);
    ctx->pc = 0x2B20CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20C8u;
            // 0x2b20cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20D0u; }
        if (ctx->pc != 0x2B20D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20D0u; }
        if (ctx->pc != 0x2B20D0u) { return; }
    }
    ctx->pc = 0x2B20D0u;
label_2b20d0:
    // 0x2b20d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B20D0u;
    {
        const bool branch_taken_0x2b20d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B20D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20D0u;
            // 0x2b20d4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20d0) {
            ctx->pc = 0x2B20E4u;
            goto label_2b20e4;
        }
    }
    ctx->pc = 0x2B20D8u;
    // 0x2b20d8: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2B20D8u;
    SET_GPR_U32(ctx, 31, 0x2B20E0u);
    ctx->pc = 0x2B20DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20D8u;
            // 0x2b20dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (runtime->hasFunction(0x2850C0u)) {
        auto targetFn = runtime->lookupFunction(0x2850C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20E0u; }
        if (ctx->pc != 0x2B20E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002850C0_0x2850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20E0u; }
        if (ctx->pc != 0x2B20E0u) { return; }
    }
    ctx->pc = 0x2B20E0u;
label_2b20e0:
    // 0x2b20e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2b20e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b20e4:
    // 0x2b20e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b20e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b20e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b20e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b20ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b20ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b20f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b20f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b20f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b20f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b20f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b20f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b20fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B20FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20FCu;
            // 0x2b2100: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2104u;
    // 0x2b2104: 0x0  nop
    ctx->pc = 0x2b2104u;
    // NOP
label_2b2108:
    // 0x2b2108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b210c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b210cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2114: 0xc0ac856  jal         func_2B2158
    ctx->pc = 0x2B2114u;
    SET_GPR_U32(ctx, 31, 0x2B211Cu);
    ctx->pc = 0x2B2118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2114u;
            // 0x2b2118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (runtime->hasFunction(0x2B2158u)) {
        auto targetFn = runtime->lookupFunction(0x2B2158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B211Cu; }
        if (ctx->pc != 0x2B211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2158_0x2b2158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B211Cu; }
        if (ctx->pc != 0x2B211Cu) { return; }
    }
    ctx->pc = 0x2B211Cu;
label_2b211c:
    // 0x2b211c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b211cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2120: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2120u;
    {
        const bool branch_taken_0x2b2120 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B2124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2120u;
            // 0x2b2124: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2120) {
            ctx->pc = 0x2B2148u;
            goto label_2b2148;
        }
    }
    ctx->pc = 0x2B2128u;
    // 0x2b2128: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b212c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b2130: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b2130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b2134: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2b2134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b2138: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2b2138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b213c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2b213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2b2140: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2b2140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b2144: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2b2144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_2b2148:
    // 0x2b2148: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2b2148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b214c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b214cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2150: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2150u;
            // 0x2b2154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2158u;
    ctx->pc = 0x2b2158u;
}
