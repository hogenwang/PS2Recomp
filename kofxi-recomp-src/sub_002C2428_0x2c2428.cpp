#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2428
// Address: 0x2c2428 - 0x2c24f0
void sub_002C2428_0x2c2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2428_0x2c2428");
#endif

    switch (ctx->pc) {
        case 0x2c2438u: goto label_2c2438;
        case 0x2c2440u: goto label_2c2440;
        case 0x2c2468u: goto label_2c2468;
        case 0x2c2480u: goto label_2c2480;
        case 0x2c2490u: goto label_2c2490;
        case 0x2c24a0u: goto label_2c24a0;
        case 0x2c24b4u: goto label_2c24b4;
        default: break;
    }

    ctx->pc = 0x2c2428u;

    // 0x2c2428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2428u;
    {
        const bool branch_taken_0x2c2428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C242Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2428u;
            // 0x2c242c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2428) {
            ctx->pc = 0x2C2438u;
            goto label_2c2438;
        }
    }
    ctx->pc = 0x2C2430u;
    // 0x2c2430: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2430u;
            // 0x2c2434: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2438u;
label_2c2438:
    // 0x2c2438: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2440u;
label_2c2440:
    // 0x2c2440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c2444: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c2448: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c2448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c244c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c2450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c2454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2458: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c2458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c245c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c245cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2460: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2C2460u;
    SET_GPR_U32(ctx, 31, 0x2C2468u);
    ctx->pc = 0x2C2464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2460u;
            // 0x2c2464: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2468u; }
        if (ctx->pc != 0x2C2468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2468u; }
        if (ctx->pc != 0x2C2468u) { return; }
    }
    ctx->pc = 0x2C2468u;
label_2c2468:
    // 0x2c2468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c246c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c2470: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2470u;
    {
        const bool branch_taken_0x2c2470 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2470u;
            // 0x2c2474: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2470) {
            ctx->pc = 0x2C24CCu;
            goto label_2c24cc;
        }
    }
    ctx->pc = 0x2C2478u;
    // 0x2c2478: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2c2478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c247c: 0x0  nop
    ctx->pc = 0x2c247cu;
    // NOP
label_2c2480:
    // 0x2c2480: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c2480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c2484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2488: 0xc0b010a  jal         func_2C0428
    ctx->pc = 0x2C2488u;
    SET_GPR_U32(ctx, 31, 0x2C2490u);
    ctx->pc = 0x2C248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2488u;
            // 0x2c248c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0428u;
    if (runtime->hasFunction(0x2C0428u)) {
        auto targetFn = runtime->lookupFunction(0x2C0428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2490u; }
        if (ctx->pc != 0x2C2490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0428_0x2c0428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2490u; }
        if (ctx->pc != 0x2C2490u) { return; }
    }
    ctx->pc = 0x2C2490u;
label_2c2490:
    // 0x2c2490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2490u;
    {
        const bool branch_taken_0x2c2490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2490u;
            // 0x2c2494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2490) {
            ctx->pc = 0x2C24A8u;
            goto label_2c24a8;
        }
    }
    ctx->pc = 0x2C2498u;
    // 0x2c2498: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2C2498u;
    SET_GPR_U32(ctx, 31, 0x2C24A0u);
    ctx->pc = 0x2C249Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2498u;
            // 0x2c249c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24A0u; }
        if (ctx->pc != 0x2C24A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24A0u; }
        if (ctx->pc != 0x2C24A0u) { return; }
    }
    ctx->pc = 0x2C24A0u;
label_2c24a0:
    // 0x2c24a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C24A0u;
    {
        const bool branch_taken_0x2c24a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c24a0) {
            ctx->pc = 0x2C24A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24A0u;
            // 0x2c24a4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C24BCu;
            goto label_2c24bc;
        }
    }
    ctx->pc = 0x2C24A8u;
label_2c24a8:
    // 0x2c24a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c24a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24ac: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2C24ACu;
    SET_GPR_U32(ctx, 31, 0x2C24B4u);
    ctx->pc = 0x2C24B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24ACu;
            // 0x2c24b0: 0x26652578  addiu       $a1, $s3, 0x2578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24B4u; }
        if (ctx->pc != 0x2C24B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24B4u; }
        if (ctx->pc != 0x2C24B4u) { return; }
    }
    ctx->pc = 0x2C24B4u;
label_2c24b4:
    // 0x2c24b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C24B4u;
    {
        const bool branch_taken_0x2c24b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24B4u;
            // 0x2c24b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24b4) {
            ctx->pc = 0x2C24D0u;
            goto label_2c24d0;
        }
    }
    ctx->pc = 0x2C24BCu;
label_2c24bc:
    // 0x2c24bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c24bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c24c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c24c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c24c4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C24C4u;
    {
        const bool branch_taken_0x2c24c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c24c4) {
            ctx->pc = 0x2C24C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24C4u;
            // 0x2c24c8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2480;
        }
    }
    ctx->pc = 0x2C24CCu;
label_2c24cc:
    // 0x2c24cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c24ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c24d0:
    // 0x2c24d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c24d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c24d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c24d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c24d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c24d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c24dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c24dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c24e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c24e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c24e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C24E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C24E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24E4u;
            // 0x2c24e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C24ECu;
    // 0x2c24ec: 0x0  nop
    ctx->pc = 0x2c24ecu;
    // NOP
    ctx->pc = 0x2c24f0u;
}
