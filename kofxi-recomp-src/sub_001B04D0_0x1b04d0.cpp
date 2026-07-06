#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B04D0
// Address: 0x1b04d0 - 0x1b0588
void sub_001B04D0_0x1b04d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B04D0_0x1b04d0");
#endif

    switch (ctx->pc) {
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0518u: goto label_1b0518;
        case 0x1b0530u: goto label_1b0530;
        case 0x1b0538u: goto label_1b0538;
        case 0x1b0548u: goto label_1b0548;
        case 0x1b0570u: goto label_1b0570;
        default: break;
    }

    ctx->pc = 0x1b04d0u;

    // 0x1b04d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b04d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b04d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b04d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b04dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b04dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b04e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b04e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b04e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b04ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b04ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b04f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b04f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b04f4: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B04F4u;
    SET_GPR_U32(ctx, 31, 0x1B04FCu);
    ctx->pc = 0x1B04F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04F4u;
            // 0x1b04f8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04FCu; }
        if (ctx->pc != 0x1B04FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04FCu; }
        if (ctx->pc != 0x1B04FCu) { return; }
    }
    ctx->pc = 0x1B04FCu;
label_1b04fc:
    // 0x1b04fc: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B04FCu;
    {
        const bool branch_taken_0x1b04fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04FCu;
            // 0x1b0500: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04fc) {
            ctx->pc = 0x1B0570u;
            goto label_1b0570;
        }
    }
    ctx->pc = 0x1B0504u;
    // 0x1b0504: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x1b0504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b0508: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0508u;
    {
        const bool branch_taken_0x1b0508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0508) {
            ctx->pc = 0x1B050Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0508u;
            // 0x1b050c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B051Cu;
            goto label_1b051c;
        }
    }
    ctx->pc = 0x1B0510u;
    // 0x1b0510: 0xc06c2cc  jal         func_1B0B30
    ctx->pc = 0x1B0510u;
    SET_GPR_U32(ctx, 31, 0x1B0518u);
    ctx->pc = 0x1B0514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0510u;
            // 0x1b0514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B30u;
    if (runtime->hasFunction(0x1B0B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0518u; }
        if (ctx->pc != 0x1B0518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0B30_0x1b0b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0518u; }
        if (ctx->pc != 0x1B0518u) { return; }
    }
    ctx->pc = 0x1B0518u;
label_1b0518:
    // 0x1b0518: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1b0518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b051c:
    // 0x1b051c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B051Cu;
    {
        const bool branch_taken_0x1b051c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B051Cu;
            // 0x1b0520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b051c) {
            ctx->pc = 0x1B0538u;
            goto label_1b0538;
        }
    }
    ctx->pc = 0x1B0524u;
    // 0x1b0524: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1b0524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0528: 0xc06daf6  jal         func_1B6BD8
    ctx->pc = 0x1B0528u;
    SET_GPR_U32(ctx, 31, 0x1B0530u);
    ctx->pc = 0x1B052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0528u;
            // 0x1b052c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD8u;
    if (runtime->hasFunction(0x1B6BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0530u; }
        if (ctx->pc != 0x1B0530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6BD8_0x1b6bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0530u; }
        if (ctx->pc != 0x1B0530u) { return; }
    }
    ctx->pc = 0x1B0530u;
label_1b0530:
    // 0x1b0530: 0xc06da54  jal         func_1B6950
    ctx->pc = 0x1B0530u;
    SET_GPR_U32(ctx, 31, 0x1B0538u);
    ctx->pc = 0x1B0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0530u;
            // 0x1b0534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6950u;
    if (runtime->hasFunction(0x1B6950u)) {
        auto targetFn = runtime->lookupFunction(0x1B6950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0538u; }
        if (ctx->pc != 0x1B0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6950_0x1b6950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0538u; }
        if (ctx->pc != 0x1B0538u) { return; }
    }
    ctx->pc = 0x1B0538u;
label_1b0538:
    // 0x1b0538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b053c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b053cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0540: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1B0540u;
    SET_GPR_U32(ctx, 31, 0x1B0548u);
    ctx->pc = 0x1B0544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0540u;
            // 0x1b0544: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0548u; }
        if (ctx->pc != 0x1B0548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0548u; }
        if (ctx->pc != 0x1B0548u) { return; }
    }
    ctx->pc = 0x1B0548u;
label_1b0548:
    // 0x1b0548: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b0548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b054c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b054cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b055c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b055cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0560: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0564: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b0564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0568: 0x806bb22  j           func_1AEC88
    ctx->pc = 0x1B0568u;
    ctx->pc = 0x1B056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0568u;
            // 0x1b056c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AEC88_0x1aec88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0570u;
label_1b0570:
    // 0x1b0570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b057c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B057Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B057Cu;
            // 0x1b0580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0584u;
    // 0x1b0584: 0x0  nop
    ctx->pc = 0x1b0584u;
    // NOP
    ctx->pc = 0x1b0588u;
}
