#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294358
// Address: 0x294358 - 0x2943e0
void sub_00294358_0x294358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294358_0x294358");
#endif

    switch (ctx->pc) {
        case 0x294374u: goto label_294374;
        case 0x29438cu: goto label_29438c;
        case 0x2943a4u: goto label_2943a4;
        case 0x2943b8u: goto label_2943b8;
        case 0x2943c8u: goto label_2943c8;
        default: break;
    }

    ctx->pc = 0x294358u;

    // 0x294358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29435c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29436c: 0xc0a4f9c  jal         func_293E70
    ctx->pc = 0x29436Cu;
    SET_GPR_U32(ctx, 31, 0x294374u);
    ctx->pc = 0x294370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29436Cu;
            // 0x294370: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293E70u;
    if (runtime->hasFunction(0x293E70u)) {
        auto targetFn = runtime->lookupFunction(0x293E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294374u; }
        if (ctx->pc != 0x294374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293E70_0x293e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294374u; }
        if (ctx->pc != 0x294374u) { return; }
    }
    ctx->pc = 0x294374u;
label_294374:
    // 0x294374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294378: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x294378u;
    {
        const bool branch_taken_0x294378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294378u;
            // 0x29437c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294378) {
            ctx->pc = 0x2943C8u;
            goto label_2943c8;
        }
    }
    ctx->pc = 0x294380u;
    // 0x294380: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x294380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294384: 0xc0a8874  jal         func_2A21D0
    ctx->pc = 0x294384u;
    SET_GPR_U32(ctx, 31, 0x29438Cu);
    ctx->pc = 0x294388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294384u;
            // 0x294388: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A21D0u;
    if (runtime->hasFunction(0x2A21D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29438Cu; }
        if (ctx->pc != 0x29438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A21D0_0x2a21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29438Cu; }
        if (ctx->pc != 0x29438Cu) { return; }
    }
    ctx->pc = 0x29438Cu;
label_29438c:
    // 0x29438c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29438Cu;
    {
        const bool branch_taken_0x29438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29438Cu;
            // 0x294390: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29438c) {
            ctx->pc = 0x2943C0u;
            goto label_2943c0;
        }
    }
    ctx->pc = 0x294394u;
    // 0x294394: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x294394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294398: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x294398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29439c: 0xc0a8966  jal         func_2A2598
    ctx->pc = 0x29439Cu;
    SET_GPR_U32(ctx, 31, 0x2943A4u);
    ctx->pc = 0x2943A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29439Cu;
            // 0x2943a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2598u;
    if (runtime->hasFunction(0x2A2598u)) {
        auto targetFn = runtime->lookupFunction(0x2A2598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943A4u; }
        if (ctx->pc != 0x2943A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2598_0x2a2598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943A4u; }
        if (ctx->pc != 0x2943A4u) { return; }
    }
    ctx->pc = 0x2943A4u;
label_2943a4:
    // 0x2943a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2943a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2943a8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2943a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2943ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2943acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2943b0: 0xc0a8966  jal         func_2A2598
    ctx->pc = 0x2943B0u;
    SET_GPR_U32(ctx, 31, 0x2943B8u);
    ctx->pc = 0x2943B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2943B0u;
            // 0x2943b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2598u;
    if (runtime->hasFunction(0x2A2598u)) {
        auto targetFn = runtime->lookupFunction(0x2A2598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943B8u; }
        if (ctx->pc != 0x2943B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2598_0x2a2598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943B8u; }
        if (ctx->pc != 0x2943B8u) { return; }
    }
    ctx->pc = 0x2943B8u;
label_2943b8:
    // 0x2943b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2943B8u;
    {
        const bool branch_taken_0x2943b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2943BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2943B8u;
            // 0x2943bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943b8) {
            ctx->pc = 0x2943CCu;
            goto label_2943cc;
        }
    }
    ctx->pc = 0x2943C0u;
label_2943c0:
    // 0x2943c0: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2943C0u;
    SET_GPR_U32(ctx, 31, 0x2943C8u);
    ctx->pc = 0x2943C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2943C0u;
            // 0x2943c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943C8u; }
        if (ctx->pc != 0x2943C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293FC8_0x293fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943C8u; }
        if (ctx->pc != 0x2943C8u) { return; }
    }
    ctx->pc = 0x2943C8u;
label_2943c8:
    // 0x2943c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2943c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2943cc:
    // 0x2943cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2943ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2943d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2943d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2943d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2943d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2943d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2943D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2943DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2943D8u;
            // 0x2943dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2943E0u;
    ctx->pc = 0x2943e0u;
}
