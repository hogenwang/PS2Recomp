#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001284A8
// Address: 0x1284a8 - 0x128580
void sub_001284A8_0x1284a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001284A8_0x1284a8");
#endif

    switch (ctx->pc) {
        case 0x1284e8u: goto label_1284e8;
        case 0x1284f8u: goto label_1284f8;
        case 0x128518u: goto label_128518;
        case 0x128558u: goto label_128558;
        default: break;
    }

    ctx->pc = 0x1284a8u;

    // 0x1284a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1284ac: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1284acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1284b0: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x1284b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x1284b4: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x1284b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x1284b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1284b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1284bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1284bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284c0: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x1284c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x1284c4: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1284c8: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x1284c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x1284cc: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x1284ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x1284d0: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x1284d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x1284d4: 0xffab0048  sd          $t3, 0x48($sp)
    ctx->pc = 0x1284d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x1284d8: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x1284d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x1284dc: 0x8dc40008  lw          $a0, 0x8($t6)
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x1284e0: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x1284E0u;
    SET_GPR_U32(ctx, 31, 0x1284E8u);
    ctx->pc = 0x1284E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284E0u;
            // 0x1284e4: 0xac8e0054  sw          $t6, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (runtime->hasFunction(0x12BEC8u)) {
        auto targetFn = runtime->lookupFunction(0x12BEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284E8u; }
        if (ctx->pc != 0x1284E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BEC8_0x12bec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284E8u; }
        if (ctx->pc != 0x1284E8u) { return; }
    }
    ctx->pc = 0x1284E8u;
label_1284e8:
    // 0x1284e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1284e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1284ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1284ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284ECu;
            // 0x1284f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1284F4u;
    // 0x1284f4: 0x0  nop
    ctx->pc = 0x1284f4u;
    // NOP
label_1284f8:
    // 0x1284f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1284f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1284fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1284fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x128500: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x128500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x128504: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x128508: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12850c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12850cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128510: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x128510u;
    SET_GPR_U32(ctx, 31, 0x128518u);
    ctx->pc = 0x128514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128510u;
            // 0x128514: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128518u; }
        if (ctx->pc != 0x128518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128518u; }
        if (ctx->pc != 0x128518u) { return; }
    }
    ctx->pc = 0x128518u;
label_128518:
    // 0x128518: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x128518u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12851c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x12851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x128520: 0x25efba90  addiu       $t7, $t7, -0x4570
    ctx->pc = 0x128520u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949520));
    // 0x128524: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x128524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x128528: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x128528u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12852c: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x12852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
    // 0x128530: 0xafae001c  sw          $t6, 0x1C($sp)
    ctx->pc = 0x128530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 14));
    // 0x128534: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x128534u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128538: 0x27af0010  addiu       $t7, $sp, 0x10
    ctx->pc = 0x128538u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12853c: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x12853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x128540: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x128540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128544: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x128544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x128548: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x128548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x12854c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128550: 0xc0496c0  jal         func_125B00
    ctx->pc = 0x128550u;
    SET_GPR_U32(ctx, 31, 0x128558u);
    ctx->pc = 0x128554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128550u;
            // 0x128554: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B00u;
    if (runtime->hasFunction(0x125B00u)) {
        auto targetFn = runtime->lookupFunction(0x125B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128558u; }
        if (ctx->pc != 0x128558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B00_0x125b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128558u; }
        if (ctx->pc != 0x128558u) { return; }
    }
    ctx->pc = 0x128558u;
label_128558:
    // 0x128558: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x128558u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12855c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12855cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128560: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128564: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x128564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x128568: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12856c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128570: 0x1ee100a  movz        $v0, $t7, $t6
    ctx->pc = 0x128570u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x128574: 0x3e00008  jr          $ra
    ctx->pc = 0x128574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128574u;
            // 0x128578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12857Cu;
    // 0x12857c: 0x0  nop
    ctx->pc = 0x12857cu;
    // NOP
    ctx->pc = 0x128580u;
}
