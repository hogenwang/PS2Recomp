#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2430
// Address: 0x2a2430 - 0x2a24b8
void sub_002A2430_0x2a2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2430_0x2a2430");
#endif

    switch (ctx->pc) {
        case 0x2a2478u: goto label_2a2478;
        case 0x2a2488u: goto label_2a2488;
        default: break;
    }

    ctx->pc = 0x2a2430u;

    // 0x2a2430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2434: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a243c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a243cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2440: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2444: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a2444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2448: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2a2448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a244c: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x2a244cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a2450: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A2450u;
    {
        const bool branch_taken_0x2a2450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2450u;
            // 0x2a2454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2450) {
            ctx->pc = 0x2A24A4u;
            goto label_2a24a4;
        }
    }
    ctx->pc = 0x2A2458u;
    // 0x2a2458: 0x5e000003  bgtzl       $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2458u;
    {
        const bool branch_taken_0x2a2458 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2a2458) {
            ctx->pc = 0x2A245Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2458u;
            // 0x2a245c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2468u;
            goto label_2a2468;
        }
    }
    ctx->pc = 0x2A2460u;
    // 0x2a2460: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2460u;
    {
        const bool branch_taken_0x2a2460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2460u;
            // 0x2a2464: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2460) {
            ctx->pc = 0x2A24A8u;
            goto label_2a24a8;
        }
    }
    ctx->pc = 0x2A2468u;
label_2a2468:
    // 0x2a2468: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2468u;
    {
        const bool branch_taken_0x2a2468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2468u;
            // 0x2a246c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2468) {
            ctx->pc = 0x2A2480u;
            goto label_2a2480;
        }
    }
    ctx->pc = 0x2A2470u;
    // 0x2a2470: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A2470u;
    SET_GPR_U32(ctx, 31, 0x2A2478u);
    ctx->pc = 0x2A2474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2470u;
            // 0x2a2474: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2478u; }
        if (ctx->pc != 0x2A2478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2478u; }
        if (ctx->pc != 0x2A2478u) { return; }
    }
    ctx->pc = 0x2A2478u;
label_2a2478:
    // 0x2a2478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2478u;
    {
        const bool branch_taken_0x2a2478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2478u;
            // 0x2a247c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2478) {
            ctx->pc = 0x2A248Cu;
            goto label_2a248c;
        }
    }
    ctx->pc = 0x2A2480u;
label_2a2480:
    // 0x2a2480: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x2A2480u;
    SET_GPR_U32(ctx, 31, 0x2A2488u);
    ctx->pc = 0x2A2484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2480u;
            // 0x2a2484: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (runtime->hasFunction(0x2A3000u)) {
        auto targetFn = runtime->lookupFunction(0x2A3000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2488u; }
        if (ctx->pc != 0x2A2488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3000_0x2a3000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2488u; }
        if (ctx->pc != 0x2A2488u) { return; }
    }
    ctx->pc = 0x2A2488u;
label_2a2488:
    // 0x2a2488: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a2488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a248c:
    // 0x2a248c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A248Cu;
    {
        const bool branch_taken_0x2a248c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a248c) {
            ctx->pc = 0x2A2490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A248Cu;
            // 0x2a2490: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A249Cu;
            goto label_2a249c;
        }
    }
    ctx->pc = 0x2A2494u;
    // 0x2a2494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2494u;
    {
        const bool branch_taken_0x2a2494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2494u;
            // 0x2a2498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2494) {
            ctx->pc = 0x2A24A4u;
            goto label_2a24a4;
        }
    }
    ctx->pc = 0x2A249Cu;
label_2a249c:
    // 0x2a249c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a249cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24a0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2a24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2a24a4:
    // 0x2a24a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a24a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a24a8:
    // 0x2a24a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a24a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a24ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a24acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a24b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A24B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A24B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A24B0u;
            // 0x2a24b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A24B8u;
    ctx->pc = 0x2a24b8u;
}
