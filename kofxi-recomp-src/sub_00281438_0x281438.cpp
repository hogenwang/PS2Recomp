#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281438
// Address: 0x281438 - 0x281508
void sub_00281438_0x281438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281438_0x281438");
#endif

    switch (ctx->pc) {
        case 0x281464u: goto label_281464;
        case 0x281494u: goto label_281494;
        case 0x28149cu: goto label_28149c;
        case 0x2814b8u: goto label_2814b8;
        case 0x2814d0u: goto label_2814d0;
        case 0x2814f0u: goto label_2814f0;
        default: break;
    }

    ctx->pc = 0x281438u;

    // 0x281438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28143c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x281440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281444: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x281444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28144c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x28144Cu;
    {
        const bool branch_taken_0x28144c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x281450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28144Cu;
            // 0x281450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28144c) {
            ctx->pc = 0x2814F0u;
            goto label_2814f0;
        }
    }
    ctx->pc = 0x281454u;
    // 0x281454: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x281454u;
    {
        const bool branch_taken_0x281454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x281454) {
            ctx->pc = 0x281458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281454u;
            // 0x281458: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281474u;
            goto label_281474;
        }
    }
    ctx->pc = 0x28145Cu;
    // 0x28145c: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x28145Cu;
    SET_GPR_U32(ctx, 31, 0x281464u);
    ctx->pc = 0x281460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28145Cu;
            // 0x281460: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281464u; }
        if (ctx->pc != 0x281464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281464u; }
        if (ctx->pc != 0x281464u) { return; }
    }
    ctx->pc = 0x281464u;
label_281464:
    // 0x281464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281468: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x281468u;
    {
        const bool branch_taken_0x281468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281468u;
            // 0x28146c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281468) {
            ctx->pc = 0x2814F4u;
            goto label_2814f4;
        }
    }
    ctx->pc = 0x281470u;
    // 0x281470: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x281470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_281474:
    // 0x281474: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x281474u;
    {
        const bool branch_taken_0x281474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281474) {
            ctx->pc = 0x281494u;
            goto label_281494;
        }
    }
    ctx->pc = 0x28147Cu;
    // 0x28147c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281480: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x281480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x281484: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x281484u;
    {
        const bool branch_taken_0x281484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281484) {
            ctx->pc = 0x281488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281484u;
            // 0x281488: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2814A8u;
            goto label_2814a8;
        }
    }
    ctx->pc = 0x28148Cu;
    // 0x28148c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28148Cu;
    SET_GPR_U32(ctx, 31, 0x281494u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281494u; }
        if (ctx->pc != 0x281494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281494u; }
        if (ctx->pc != 0x281494u) { return; }
    }
    ctx->pc = 0x281494u;
label_281494:
    // 0x281494: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x281494u;
    SET_GPR_U32(ctx, 31, 0x28149Cu);
    ctx->pc = 0x281498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281494u;
            // 0x281498: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28149Cu; }
        if (ctx->pc != 0x28149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28149Cu; }
        if (ctx->pc != 0x28149Cu) { return; }
    }
    ctx->pc = 0x28149Cu;
label_28149c:
    // 0x28149c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28149Cu;
    {
        const bool branch_taken_0x28149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28149Cu;
            // 0x2814a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28149c) {
            ctx->pc = 0x2814F0u;
            goto label_2814f0;
        }
    }
    ctx->pc = 0x2814A4u;
    // 0x2814a4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2814a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2814a8:
    // 0x2814a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2814a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2814acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2814b0: 0xc0a8e7a  jal         func_2A39E8
    ctx->pc = 0x2814B0u;
    SET_GPR_U32(ctx, 31, 0x2814B8u);
    ctx->pc = 0x2814B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814B0u;
            // 0x2814b4: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A39E8u;
    if (runtime->hasFunction(0x2A39E8u)) {
        auto targetFn = runtime->lookupFunction(0x2A39E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814B8u; }
        if (ctx->pc != 0x2814B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A39E8_0x2a39e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814B8u; }
        if (ctx->pc != 0x2814B8u) { return; }
    }
    ctx->pc = 0x2814B8u;
label_2814b8:
    // 0x2814b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2814B8u;
    {
        const bool branch_taken_0x2814b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2814BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814B8u;
            // 0x2814bc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814b8) {
            ctx->pc = 0x2814DCu;
            goto label_2814dc;
        }
    }
    ctx->pc = 0x2814C0u;
    // 0x2814c0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2814c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2814c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2814c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2814c8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2814C8u;
    SET_GPR_U32(ctx, 31, 0x2814D0u);
    ctx->pc = 0x2814CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814C8u;
            // 0x2814cc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814D0u; }
        if (ctx->pc != 0x2814D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814D0u; }
        if (ctx->pc != 0x2814D0u) { return; }
    }
    ctx->pc = 0x2814D0u;
label_2814d0:
    // 0x2814d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2814d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2814d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2814D4u;
    {
        const bool branch_taken_0x2814d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814D4u;
            // 0x2814d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814d4) {
            ctx->pc = 0x2814F4u;
            goto label_2814f4;
        }
    }
    ctx->pc = 0x2814DCu;
label_2814dc:
    // 0x2814dc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2814dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2814e0: 0x2406007b  addiu       $a2, $zero, 0x7B
    ctx->pc = 0x2814e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2814e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2814e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814e8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2814E8u;
    SET_GPR_U32(ctx, 31, 0x2814F0u);
    ctx->pc = 0x2814ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814E8u;
            // 0x2814ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814F0u; }
        if (ctx->pc != 0x2814F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814F0u; }
        if (ctx->pc != 0x2814F0u) { return; }
    }
    ctx->pc = 0x2814F0u;
label_2814f0:
    // 0x2814f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2814f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2814f4:
    // 0x2814f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2814f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2814f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2814f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2814fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2814fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281500: 0x3e00008  jr          $ra
    ctx->pc = 0x281500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281500u;
            // 0x281504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281508u;
    ctx->pc = 0x281508u;
}
