#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173330
// Address: 0x173330 - 0x1735d0
void sub_00173330_0x173330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173330_0x173330");
#endif

    switch (ctx->pc) {
        case 0x173354u: goto label_173354;
        case 0x173540u: goto label_173540;
        default: break;
    }

    ctx->pc = 0x173330u;

    // 0x173330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x173334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x173338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17333c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x173340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173348: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x173348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17334c: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x17334Cu;
    SET_GPR_U32(ctx, 31, 0x173354u);
    ctx->pc = 0x173350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17334Cu;
    // 0x173350: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x17334Cu, 0x173354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173354u;
label_173354:
    // 0x173354: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x173354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x173358: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x173358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x17335c: 0x723023  subu        $a2, $v1, $s2
    ctx->pc = 0x17335cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x173360: 0x24a548c0  addiu       $a1, $a1, 0x48C0
    ctx->pc = 0x173360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18624));
    // 0x173364: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x173364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x173368: 0x306400f0  andi        $a0, $v1, 0xF0
    ctx->pc = 0x173368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x17336c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x17336cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x173370: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x173370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x173374: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x173374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173378u;
    {
        const bool branch_taken_0x173378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173378u;
        // 0x17337c: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173378) {
            ctx->pc = 0x173388u;
            goto label_173388;
        }
    }
    ctx->pc = 0x173380u;
    // 0x173380: 0x3224ff0f  andi        $a0, $s1, 0xFF0F
    ctx->pc = 0x173380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65295);
    // 0x173384: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x173384u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_173388:
    // 0x173388: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x173388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x17338c: 0x30a40100  andi        $a0, $a1, 0x100
    ctx->pc = 0x17338cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x173390: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x173390u;
    {
        const bool branch_taken_0x173390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173390) {
            ctx->pc = 0x173394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173390u;
            // 0x173394: 0xa460000e  sh          $zero, 0xE($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17339Cu;
            goto label_17339c;
        }
    }
    ctx->pc = 0x173398u;
    // 0x173398: 0xa470000e  sh          $s0, 0xE($v1)
    ctx->pc = 0x173398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 16));
label_17339c:
    // 0x17339c: 0x30a40200  andi        $a0, $a1, 0x200
    ctx->pc = 0x17339cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x1733a0: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1733A0u;
    {
        const bool branch_taken_0x1733a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733a0) {
            ctx->pc = 0x1733A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1733A0u;
            // 0x1733a4: 0xa4600010  sh          $zero, 0x10($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1733ACu;
            goto label_1733ac;
        }
    }
    ctx->pc = 0x1733A8u;
    // 0x1733a8: 0xa4700010  sh          $s0, 0x10($v1)
    ctx->pc = 0x1733a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 16));
label_1733ac:
    // 0x1733ac: 0x30a40400  andi        $a0, $a1, 0x400
    ctx->pc = 0x1733acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x1733b0: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1733B0u;
    {
        const bool branch_taken_0x1733b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733b0) {
            ctx->pc = 0x1733B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1733B0u;
            // 0x1733b4: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1733BCu;
            goto label_1733bc;
        }
    }
    ctx->pc = 0x1733B8u;
    // 0x1733b8: 0xa4700012  sh          $s0, 0x12($v1)
    ctx->pc = 0x1733b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 16));
label_1733bc:
    // 0x1733bc: 0x30a40800  andi        $a0, $a1, 0x800
    ctx->pc = 0x1733bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x1733c0: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1733C0u;
    {
        const bool branch_taken_0x1733c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733c0) {
            ctx->pc = 0x1733C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1733C0u;
            // 0x1733c4: 0xa4600014  sh          $zero, 0x14($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1733CCu;
            goto label_1733cc;
        }
    }
    ctx->pc = 0x1733C8u;
    // 0x1733c8: 0xa4700014  sh          $s0, 0x14($v1)
    ctx->pc = 0x1733c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 16));
label_1733cc:
    // 0x1733cc: 0x30a41000  andi        $a0, $a1, 0x1000
    ctx->pc = 0x1733ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x1733d0: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1733D0u;
    {
        const bool branch_taken_0x1733d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733d0) {
            ctx->pc = 0x1733D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1733D0u;
            // 0x1733d4: 0xa4600016  sh          $zero, 0x16($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1733DCu;
            goto label_1733dc;
        }
    }
    ctx->pc = 0x1733D8u;
    // 0x1733d8: 0xa4700016  sh          $s0, 0x16($v1)
    ctx->pc = 0x1733d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 16));
label_1733dc:
    // 0x1733dc: 0x30a42000  andi        $a0, $a1, 0x2000
    ctx->pc = 0x1733dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x1733e0: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1733E0u;
    {
        const bool branch_taken_0x1733e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733e0) {
            ctx->pc = 0x1733E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1733E0u;
            // 0x1733e4: 0xa4600018  sh          $zero, 0x18($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1733ECu;
            goto label_1733ec;
        }
    }
    ctx->pc = 0x1733E8u;
    // 0x1733e8: 0xa4700018  sh          $s0, 0x18($v1)
    ctx->pc = 0x1733e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 16));
label_1733ec:
    // 0x1733ec: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x1733ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x1733f0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x1733f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x1733f4: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x1733f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1733f8: 0x24a548a0  addiu       $a1, $a1, 0x48A0
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18592));
    // 0x1733fc: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x173400: 0x248448a2  addiu       $a0, $a0, 0x48A2
    ctx->pc = 0x173400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18594));
    // 0x173404: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173408: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x173408u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17340c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x17340cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173414: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x173414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x173418: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x173418u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17341c: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x17341cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x173420: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x173420u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x173424: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x173424u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x173428: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x173428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x17342c: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x17342cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x173430: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x173430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x173434: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x173434u;
    {
        const bool branch_taken_0x173434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x173438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173434u;
        // 0x173438: 0xa4d10000  sh          $s1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173434) {
            ctx->pc = 0x173448u;
            goto label_173448;
        }
    }
    ctx->pc = 0x17343Cu;
    // 0x17343c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x17343cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x173440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173440u;
    {
        const bool branch_taken_0x173440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173440u;
        // 0x173444: 0x3087ffff  andi        $a3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173440) {
            ctx->pc = 0x17344Cu;
            goto label_17344c;
        }
    }
    ctx->pc = 0x173448u;
label_173448:
    // 0x173448: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x173448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17344c:
    // 0x17344c: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x17344cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x173450: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x173450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x173454: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x173454u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x173458: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x173458u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17345c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x17345cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x173460: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x173460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x173464: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x173464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x173468: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x173468u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x17346c: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x17346cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x173470: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x173470u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x173474: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x173474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x173478: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x173478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x17347c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x17347cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x173480: 0x94650006  lhu         $a1, 0x6($v1)
    ctx->pc = 0x173480u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x173484: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x173484u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x173488: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x173488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17348c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17348Cu;
    {
        const bool branch_taken_0x17348c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17348c) {
            ctx->pc = 0x173490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17348Cu;
            // 0x173490: 0x94640222  lhu         $a0, 0x222($v1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 546)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1734A4u;
            goto label_1734a4;
        }
    }
    ctx->pc = 0x173494u;
    // 0x173494: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x173494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173498: 0xa4640220  sh          $a0, 0x220($v1)
    ctx->pc = 0x173498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 544), (uint16_t)GPR_U32(ctx, 4));
    // 0x17349c: 0xa4600222  sh          $zero, 0x222($v1)
    ctx->pc = 0x17349cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x1734a0: 0x94640222  lhu         $a0, 0x222($v1)
    ctx->pc = 0x1734a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 546)));
label_1734a4:
    // 0x1734a4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1734A4u;
    {
        const bool branch_taken_0x1734a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1734a4) {
            ctx->pc = 0x1734A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1734A4u;
            // 0x1734a8: 0xa460000a  sh          $zero, 0xA($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1734B4u;
            goto label_1734b4;
        }
    }
    ctx->pc = 0x1734ACu;
    // 0x1734ac: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x1734acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1734b0: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x1734b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
label_1734b4:
    // 0x1734b4: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x1734b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1734b8: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x1734b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1734bc: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x1734bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1734c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1734C0u;
    {
        const bool branch_taken_0x1734c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734C0u;
        // 0x1734c4: 0x9466001a  lhu         $a2, 0x1A($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734c0) {
            ctx->pc = 0x173504u;
            goto label_173504;
        }
    }
    ctx->pc = 0x1734C8u;
    // 0x1734c8: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x1734c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1734cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1734d0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1734d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1734d4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1734D4u;
    {
        const bool branch_taken_0x1734d4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1734D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734D4u;
        // 0x1734d8: 0x30a4003f  andi        $a0, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734d4) {
            ctx->pc = 0x1734E8u;
            goto label_1734e8;
        }
    }
    ctx->pc = 0x1734DCu;
    // 0x1734dc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1734DCu;
    {
        const bool branch_taken_0x1734dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1734dc) {
            ctx->pc = 0x1734E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1734DCu;
            // 0x1734e0: 0xa464001a  sh          $a0, 0x1A($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1734ECu;
            goto label_1734ec;
        }
    }
    ctx->pc = 0x1734E4u;
    // 0x1734e4: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_1734e8:
    // 0x1734e8: 0xa464001a  sh          $a0, 0x1A($v1)
    ctx->pc = 0x1734e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 4));
label_1734ec:
    // 0x1734ec: 0x9464001a  lhu         $a0, 0x1A($v1)
    ctx->pc = 0x1734ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1734f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1734f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1734f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1734f8: 0xa491001e  sh          $s1, 0x1E($a0)
    ctx->pc = 0x1734f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 17));
    // 0x1734fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1734FCu;
    {
        const bool branch_taken_0x1734fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734FCu;
        // 0x173500: 0xa490001c  sh          $s0, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734fc) {
            ctx->pc = 0x17351Cu;
            goto label_17351c;
        }
    }
    ctx->pc = 0x173504u;
label_173504:
    // 0x173504: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x173504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x173508: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17350c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x173510: 0x94a4001c  lhu         $a0, 0x1C($a1)
    ctx->pc = 0x173510u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x173514: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x173518: 0xa4a4001c  sh          $a0, 0x1C($a1)
    ctx->pc = 0x173518u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 4));
label_17351c:
    // 0x17351c: 0x3208ffff  andi        $t0, $s0, 0xFFFF
    ctx->pc = 0x17351cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x173520: 0x29010041  slti        $at, $t0, 0x41
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x173524: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173524u;
    {
        const bool branch_taken_0x173524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173524) {
            ctx->pc = 0x173528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173524u;
            // 0x173528: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17352Cu;
            goto label_17352c;
        }
    }
    ctx->pc = 0x17352Cu;
label_17352c:
    // 0x17352c: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17352Cu;
    {
        const bool branch_taken_0x17352c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x173530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17352Cu;
        // 0x173530: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17352c) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x173534u;
    // 0x173534: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x173534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x173538: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17353c: 0x9464011c  lhu         $a0, 0x11C($v1)
    ctx->pc = 0x17353cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 284)));
label_173540:
    // 0x173540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x173544: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x173544u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x173548: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x173548u;
    {
        const bool branch_taken_0x173548 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x17354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173548u;
        // 0x17354c: 0x30e4003f  andi        $a0, $a3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173548) {
            ctx->pc = 0x17355Cu;
            goto label_17355c;
        }
    }
    ctx->pc = 0x173550u;
    // 0x173550: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173550u;
    {
        const bool branch_taken_0x173550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173550) {
            ctx->pc = 0x173554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173550u;
            // 0x173554: 0xa464011c  sh          $a0, 0x11C($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 284), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173560u;
            goto label_173560;
        }
    }
    ctx->pc = 0x173558u;
    // 0x173558: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x173558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_17355c:
    // 0x17355c: 0xa464011c  sh          $a0, 0x11C($v1)
    ctx->pc = 0x17355cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 284), (uint16_t)GPR_U32(ctx, 4));
label_173560:
    // 0x173560: 0x9464011c  lhu         $a0, 0x11C($v1)
    ctx->pc = 0x173560u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x173564: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x173564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173568: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17356c: 0xa4910120  sh          $s1, 0x120($a0)
    ctx->pc = 0x17356cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 17));
    // 0x173570: 0xa486011e  sh          $a2, 0x11E($a0)
    ctx->pc = 0x173570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 6));
    // 0x173574: 0x9464021e  lhu         $a0, 0x21E($v1)
    ctx->pc = 0x173574u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 542)));
    // 0x173578: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x173578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17357c: 0xa464021e  sh          $a0, 0x21E($v1)
    ctx->pc = 0x17357cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 542), (uint16_t)GPR_U32(ctx, 4));
    // 0x173580: 0x9464021e  lhu         $a0, 0x21E($v1)
    ctx->pc = 0x173580u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 542)));
    // 0x173584: 0x28840008  slti        $a0, $a0, 0x8
    ctx->pc = 0x173584u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x173588: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173588u;
    {
        const bool branch_taken_0x173588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x173588) {
            ctx->pc = 0x173598u;
            goto label_173598;
        }
    }
    ctx->pc = 0x173590u;
    // 0x173590: 0xa465021e  sh          $a1, 0x21E($v1)
    ctx->pc = 0x173590u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 542), (uint16_t)GPR_U32(ctx, 5));
    // 0x173594: 0x0  nop
    ctx->pc = 0x173594u;
    // NOP
label_173598:
    // 0x173598: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x173598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17359c: 0x128202a  slt         $a0, $t1, $t0
    ctx->pc = 0x17359cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1735a0: 0x5480ffe7  bnel        $a0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1735A0u;
    {
        const bool branch_taken_0x1735a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1735a0) {
            ctx->pc = 0x1735A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1735A0u;
            // 0x1735a4: 0x9464011c  lhu         $a0, 0x11C($v1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_173540;
        }
    }
    ctx->pc = 0x1735A8u;
label_1735a8:
    // 0x1735a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1735ac: 0xa464022c  sh          $a0, 0x22C($v1)
    ctx->pc = 0x1735acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 4));
    // 0x1735b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1735b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1735b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1735b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1735b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1735b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1735bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1735bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1735c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1735C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1735C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735C0u;
        // 0x1735c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1735C8u;
    // 0x1735c8: 0x0  nop
    ctx->pc = 0x1735c8u;
    // NOP
    // 0x1735cc: 0x0  nop
    ctx->pc = 0x1735ccu;
    // NOP
    if (ctx->pc == 0x1735ccu) { ctx->pc = 0x1735d0u; }
}
