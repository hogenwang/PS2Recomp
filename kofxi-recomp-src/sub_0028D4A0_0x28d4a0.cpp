#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D4A0
// Address: 0x28d4a0 - 0x28d570
void sub_0028D4A0_0x28d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D4A0_0x28d4a0");
#endif

    switch (ctx->pc) {
        case 0x28d4b0u: goto label_28d4b0;
        case 0x28d4e4u: goto label_28d4e4;
        case 0x28d4f4u: goto label_28d4f4;
        case 0x28d514u: goto label_28d514;
        case 0x28d524u: goto label_28d524;
        case 0x28d52cu: goto label_28d52c;
        case 0x28d53cu: goto label_28d53c;
        case 0x28d554u: goto label_28d554;
        default: break;
    }

    ctx->pc = 0x28d4a0u;

    // 0x28d4a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4A4u;
            // 0x28d4a8: 0x244237c0  addiu       $v0, $v0, 0x37C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D4ACu;
    // 0x28d4ac: 0x0  nop
    ctx->pc = 0x28d4acu;
    // NOP
label_28d4b0:
    // 0x28d4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d4b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28d4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d4c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28d4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d4c8: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28D4C8u;
    {
        const bool branch_taken_0x28d4c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4C8u;
            // 0x28d4cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4c8) {
            ctx->pc = 0x28D558u;
            goto label_28d558;
        }
    }
    ctx->pc = 0x28D4D0u;
    // 0x28d4d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28d4d4: 0x14e2001b  bne         $a3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28D4D4u;
    {
        const bool branch_taken_0x28d4d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4D4u;
            // 0x28d4d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4d4) {
            ctx->pc = 0x28D544u;
            goto label_28d544;
        }
    }
    ctx->pc = 0x28D4DCu;
    // 0x28d4dc: 0xc0b01f8  jal         func_2C07E0
    ctx->pc = 0x28D4DCu;
    SET_GPR_U32(ctx, 31, 0x28D4E4u);
    ctx->pc = 0x2C07E0u;
    if (runtime->hasFunction(0x2C07E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C07E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4E4u; }
        if (ctx->pc != 0x28D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C07E0_0x2c07e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4E4u; }
        if (ctx->pc != 0x28D4E4u) { return; }
    }
    ctx->pc = 0x28D4E4u;
label_28d4e4:
    // 0x28d4e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4ec: 0xc0a355c  jal         func_28D570
    ctx->pc = 0x28D4ECu;
    SET_GPR_U32(ctx, 31, 0x28D4F4u);
    ctx->pc = 0x28D4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4ECu;
            // 0x28d4f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D570u;
    if (runtime->hasFunction(0x28D570u)) {
        auto targetFn = runtime->lookupFunction(0x28D570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4F4u; }
        if (ctx->pc != 0x28D4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D570_0x28d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4F4u; }
        if (ctx->pc != 0x28D4F4u) { return; }
    }
    ctx->pc = 0x28D4F4u;
label_28d4f4:
    // 0x28d4f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4f8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D4F8u;
    {
        const bool branch_taken_0x28d4f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4F8u;
            // 0x28d4fc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4f8) {
            ctx->pc = 0x28D51Cu;
            goto label_28d51c;
        }
    }
    ctx->pc = 0x28D500u;
    // 0x28d500: 0x240500d6  addiu       $a1, $zero, 0xD6
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x28d504: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x28d504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x28d508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d50c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28D50Cu;
    SET_GPR_U32(ctx, 31, 0x28D514u);
    ctx->pc = 0x28D510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D50Cu;
            // 0x28d510: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D514u; }
        if (ctx->pc != 0x28D514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D514u; }
        if (ctx->pc != 0x28D514u) { return; }
    }
    ctx->pc = 0x28D514u;
label_28d514:
    // 0x28d514: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28D514u;
    {
        const bool branch_taken_0x28d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D514u;
            // 0x28d518: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d514) {
            ctx->pc = 0x28D55Cu;
            goto label_28d55c;
        }
    }
    ctx->pc = 0x28D51Cu;
label_28d51c:
    // 0x28d51c: 0xc0b0200  jal         func_2C0800
    ctx->pc = 0x28D51Cu;
    SET_GPR_U32(ctx, 31, 0x28D524u);
    ctx->pc = 0x2C0800u;
    if (runtime->hasFunction(0x2C0800u)) {
        auto targetFn = runtime->lookupFunction(0x2C0800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D524u; }
        if (ctx->pc != 0x28D524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0800_0x2c0800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D524u; }
        if (ctx->pc != 0x28D524u) { return; }
    }
    ctx->pc = 0x28D524u;
label_28d524:
    // 0x28d524: 0xc049802  jal         func_126008
    ctx->pc = 0x28D524u;
    SET_GPR_U32(ctx, 31, 0x28D52Cu);
    ctx->pc = 0x28D528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D524u;
            // 0x28d528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126008u;
    if (runtime->hasFunction(0x126008u)) {
        auto targetFn = runtime->lookupFunction(0x126008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D52Cu; }
        if (ctx->pc != 0x28D52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126008_0x126008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D52Cu; }
        if (ctx->pc != 0x28D52Cu) { return; }
    }
    ctx->pc = 0x28D52Cu;
label_28d52c:
    // 0x28d52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d534: 0xc0a355c  jal         func_28D570
    ctx->pc = 0x28D534u;
    SET_GPR_U32(ctx, 31, 0x28D53Cu);
    ctx->pc = 0x28D538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D534u;
            // 0x28d538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D570u;
    if (runtime->hasFunction(0x28D570u)) {
        auto targetFn = runtime->lookupFunction(0x28D570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D53Cu; }
        if (ctx->pc != 0x28D53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D570_0x28d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D53Cu; }
        if (ctx->pc != 0x28D53Cu) { return; }
    }
    ctx->pc = 0x28D53Cu;
label_28d53c:
    // 0x28d53c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28D53Cu;
    {
        const bool branch_taken_0x28d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D53Cu;
            // 0x28d540: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d53c) {
            ctx->pc = 0x28D558u;
            goto label_28d558;
        }
    }
    ctx->pc = 0x28D544u;
label_28d544:
    // 0x28d544: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x28d544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28d548: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28d548u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28d54c: 0xc0a355c  jal         func_28D570
    ctx->pc = 0x28D54Cu;
    SET_GPR_U32(ctx, 31, 0x28D554u);
    ctx->pc = 0x28D550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D54Cu;
            // 0x28d550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D570u;
    if (runtime->hasFunction(0x28D570u)) {
        auto targetFn = runtime->lookupFunction(0x28D570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D554u; }
        if (ctx->pc != 0x28D554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D570_0x28d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D554u; }
        if (ctx->pc != 0x28D554u) { return; }
    }
    ctx->pc = 0x28D554u;
label_28d554:
    // 0x28d554: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d558:
    // 0x28d558: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x28d558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_28d55c:
    // 0x28d55c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d560: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d568: 0x3e00008  jr          $ra
    ctx->pc = 0x28D568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D568u;
            // 0x28d56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D570u;
    ctx->pc = 0x28d570u;
}
