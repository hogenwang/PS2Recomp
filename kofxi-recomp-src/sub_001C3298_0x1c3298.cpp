#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3298
// Address: 0x1c3298 - 0x1c33c0
void sub_001C3298_0x1c3298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3298_0x1c3298");
#endif

    switch (ctx->pc) {
        case 0x1c32a0u: goto label_1c32a0;
        case 0x1c3350u: goto label_1c3350;
        case 0x1c3360u: goto label_1c3360;
        case 0x1c3370u: goto label_1c3370;
        case 0x1c3380u: goto label_1c3380;
        case 0x1c3390u: goto label_1c3390;
        case 0x1c33a0u: goto label_1c33a0;
        default: break;
    }

    ctx->pc = 0x1c3298u;

label_1c3298:
    // 0x1c3298: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C329Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3298u;
            // 0x1c329c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C32A0u;
label_1c32a0:
    // 0x1c32a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c32a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c32a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c32ac: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C32ACu;
    {
        const bool branch_taken_0x1c32ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32ACu;
            // 0x1c32b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32ac) {
            ctx->pc = 0x1C33B0u;
            goto label_1c33b0;
        }
    }
    ctx->pc = 0x1C32B4u;
    // 0x1c32b4: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1c32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1c32b8: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C32B8u;
    {
        const bool branch_taken_0x1c32b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C32BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32B8u;
            // 0x1c32bc: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32b8) {
            ctx->pc = 0x1C3368u;
            goto label_1c3368;
        }
    }
    ctx->pc = 0x1C32C0u;
    // 0x1c32c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C32C0u;
    {
        const bool branch_taken_0x1c32c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32C0u;
            // 0x1c32c4: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32c0) {
            ctx->pc = 0x1C3308u;
            goto label_1c3308;
        }
    }
    ctx->pc = 0x1C32C8u;
    // 0x1c32c8: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x1c32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1c32cc: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C32CCu;
    {
        const bool branch_taken_0x1c32cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C32D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32CCu;
            // 0x1c32d0: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32cc) {
            ctx->pc = 0x1C3358u;
            goto label_1c3358;
        }
    }
    ctx->pc = 0x1C32D4u;
    // 0x1c32d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C32D4u;
    {
        const bool branch_taken_0x1c32d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32D4u;
            // 0x1c32d8: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32d4) {
            ctx->pc = 0x1C32F0u;
            goto label_1c32f0;
        }
    }
    ctx->pc = 0x1C32DCu;
    // 0x1c32dc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1c32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c32e0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C32E0u;
    {
        const bool branch_taken_0x1c32e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C32E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32E0u;
            // 0x1c32e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e0) {
            ctx->pc = 0x1C3348u;
            goto label_1c3348;
        }
    }
    ctx->pc = 0x1C32E8u;
    // 0x1c32e8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C32E8u;
    {
        const bool branch_taken_0x1c32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32E8u;
            // 0x1c32ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e8) {
            ctx->pc = 0x1C33B4u;
            goto label_1c33b4;
        }
    }
    ctx->pc = 0x1C32F0u;
label_1c32f0:
    // 0x1c32f0: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C32F0u;
    {
        const bool branch_taken_0x1c32f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C32F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32F0u;
            // 0x1c32f4: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32f0) {
            ctx->pc = 0x1C3368u;
            goto label_1c3368;
        }
    }
    ctx->pc = 0x1C32F8u;
    // 0x1c32f8: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C32F8u;
    {
        const bool branch_taken_0x1c32f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C32FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32F8u;
            // 0x1c32fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32f8) {
            ctx->pc = 0x1C3378u;
            goto label_1c3378;
        }
    }
    ctx->pc = 0x1C3300u;
    // 0x1c3300: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C3300u;
    {
        const bool branch_taken_0x1c3300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3300u;
            // 0x1c3304: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3300) {
            ctx->pc = 0x1C33B4u;
            goto label_1c33b4;
        }
    }
    ctx->pc = 0x1C3308u;
label_1c3308:
    // 0x1c3308: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C3308u;
    {
        const bool branch_taken_0x1c3308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3308u;
            // 0x1c330c: 0x28a2012c  slti        $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3308) {
            ctx->pc = 0x1C33A8u;
            goto label_1c33a8;
        }
    }
    ctx->pc = 0x1C3310u;
    // 0x1c3310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3310u;
    {
        const bool branch_taken_0x1c3310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3310u;
            // 0x1c3314: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3310) {
            ctx->pc = 0x1C3330u;
            goto label_1c3330;
        }
    }
    ctx->pc = 0x1C3318u;
    // 0x1c3318: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x1c3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1c331c: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C331Cu;
    {
        const bool branch_taken_0x1c331c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C331Cu;
            // 0x1c3320: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c331c) {
            ctx->pc = 0x1C3378u;
            goto label_1c3378;
        }
    }
    ctx->pc = 0x1C3324u;
    // 0x1c3324: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C3324u;
    {
        const bool branch_taken_0x1c3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3324u;
            // 0x1c3328: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3324) {
            ctx->pc = 0x1C33B4u;
            goto label_1c33b4;
        }
    }
    ctx->pc = 0x1C332Cu;
    // 0x1c332c: 0x0  nop
    ctx->pc = 0x1c332cu;
    // NOP
label_1c3330:
    // 0x1c3330: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3330u;
    {
        const bool branch_taken_0x1c3330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3330u;
            // 0x1c3334: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3330) {
            ctx->pc = 0x1C3388u;
            goto label_1c3388;
        }
    }
    ctx->pc = 0x1C3338u;
    // 0x1c3338: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3338u;
    {
        const bool branch_taken_0x1c3338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3338u;
            // 0x1c333c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3338) {
            ctx->pc = 0x1C3398u;
            goto label_1c3398;
        }
    }
    ctx->pc = 0x1C3340u;
    // 0x1c3340: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C3340u;
    {
        const bool branch_taken_0x1c3340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3340u;
            // 0x1c3344: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3340) {
            ctx->pc = 0x1C33B4u;
            goto label_1c33b4;
        }
    }
    ctx->pc = 0x1C3348u;
label_1c3348:
    // 0x1c3348: 0xc070c90  jal         func_1C3240
    ctx->pc = 0x1C3348u;
    SET_GPR_U32(ctx, 31, 0x1C3350u);
    ctx->pc = 0x1C3240u;
    if (runtime->hasFunction(0x1C3240u)) {
        auto targetFn = runtime->lookupFunction(0x1C3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3350u; }
        if (ctx->pc != 0x1C3350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3240_0x1c3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3350u; }
        if (ctx->pc != 0x1C3350u) { return; }
    }
    ctx->pc = 0x1C3350u;
label_1c3350:
    // 0x1c3350: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3350u;
    {
        const bool branch_taken_0x1c3350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3350u;
            // 0x1c3354: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3350) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C3358u;
label_1c3358:
    // 0x1c3358: 0xc070c94  jal         func_1C3250
    ctx->pc = 0x1C3358u;
    SET_GPR_U32(ctx, 31, 0x1C3360u);
    ctx->pc = 0x1C3250u;
    if (runtime->hasFunction(0x1C3250u)) {
        auto targetFn = runtime->lookupFunction(0x1C3250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3360u; }
        if (ctx->pc != 0x1C3360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3250_0x1c3250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3360u; }
        if (ctx->pc != 0x1C3360u) { return; }
    }
    ctx->pc = 0x1C3360u;
label_1c3360:
    // 0x1c3360: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3360u;
    {
        const bool branch_taken_0x1c3360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3360u;
            // 0x1c3364: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3360) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C3368u;
label_1c3368:
    // 0x1c3368: 0xc070c9c  jal         func_1C3270
    ctx->pc = 0x1C3368u;
    SET_GPR_U32(ctx, 31, 0x1C3370u);
    ctx->pc = 0x1C3270u;
    if (runtime->hasFunction(0x1C3270u)) {
        auto targetFn = runtime->lookupFunction(0x1C3270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3370u; }
        if (ctx->pc != 0x1C3370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3270_0x1c3270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3370u; }
        if (ctx->pc != 0x1C3370u) { return; }
    }
    ctx->pc = 0x1C3370u;
label_1c3370:
    // 0x1c3370: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C3370u;
    {
        const bool branch_taken_0x1c3370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3370u;
            // 0x1c3374: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3370) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C3378u;
label_1c3378:
    // 0x1c3378: 0xc070c9e  jal         func_1C3278
    ctx->pc = 0x1C3378u;
    SET_GPR_U32(ctx, 31, 0x1C3380u);
    ctx->pc = 0x1C3278u;
    if (runtime->hasFunction(0x1C3278u)) {
        auto targetFn = runtime->lookupFunction(0x1C3278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3380u; }
        if (ctx->pc != 0x1C3380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3278_0x1c3278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3380u; }
        if (ctx->pc != 0x1C3380u) { return; }
    }
    ctx->pc = 0x1C3380u;
label_1c3380:
    // 0x1c3380: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C3380u;
    {
        const bool branch_taken_0x1c3380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3380u;
            // 0x1c3384: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3380) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C3388u;
label_1c3388:
    // 0x1c3388: 0xc070ca4  jal         func_1C3290
    ctx->pc = 0x1C3388u;
    SET_GPR_U32(ctx, 31, 0x1C3390u);
    ctx->pc = 0x1C3290u;
    if (runtime->hasFunction(0x1C3290u)) {
        auto targetFn = runtime->lookupFunction(0x1C3290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3390u; }
        if (ctx->pc != 0x1C3390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3290_0x1c3290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3390u; }
        if (ctx->pc != 0x1C3390u) { return; }
    }
    ctx->pc = 0x1C3390u;
label_1c3390:
    // 0x1c3390: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3390u;
    {
        const bool branch_taken_0x1c3390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3390u;
            // 0x1c3394: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3390) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C3398u;
label_1c3398:
    // 0x1c3398: 0xc070ca6  jal         func_1C3298
    ctx->pc = 0x1C3398u;
    SET_GPR_U32(ctx, 31, 0x1C33A0u);
    ctx->pc = 0x1C3298u;
    goto label_1c3298;
    ctx->pc = 0x1C33A0u;
label_1c33a0:
    // 0x1c33a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C33A0u;
    {
        const bool branch_taken_0x1c33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33A0u;
            // 0x1c33a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33a0) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C33A8u;
label_1c33a8:
    // 0x1c33a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c33ac:
    // 0x1c33ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c33acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c33b0:
    // 0x1c33b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c33b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c33b4:
    // 0x1c33b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C33B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C33B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33B4u;
            // 0x1c33b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C33BCu;
    // 0x1c33bc: 0x0  nop
    ctx->pc = 0x1c33bcu;
    // NOP
    ctx->pc = 0x1c33c0u;
}
