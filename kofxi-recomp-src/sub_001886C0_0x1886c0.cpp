#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001886C0
// Address: 0x1886c0 - 0x188930
void sub_001886C0_0x1886c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001886C0_0x1886c0");
#endif

    switch (ctx->pc) {
        case 0x1886f4u: goto label_1886f4;
        case 0x188710u: goto label_188710;
        case 0x188748u: goto label_188748;
        case 0x188754u: goto label_188754;
        case 0x188778u: goto label_188778;
        case 0x188798u: goto label_188798;
        case 0x1887fcu: goto label_1887fc;
        case 0x188854u: goto label_188854;
        case 0x1888b4u: goto label_1888b4;
        case 0x188900u: goto label_188900;
        default: break;
    }

    ctx->pc = 0x1886c0u;

label_1886c0:
    // 0x1886c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1886c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1886c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1886c8: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x1886c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x1886cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1886ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1886d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1886D0u;
    {
        const bool branch_taken_0x1886d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1886d0) {
            ctx->pc = 0x1886D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1886D0u;
            // 0x1886d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1886E0u;
            goto label_1886e0;
        }
    }
    ctx->pc = 0x1886D8u;
    // 0x1886d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1886D8u;
    {
        const bool branch_taken_0x1886d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886D8u;
            // 0x1886dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886d8) {
            ctx->pc = 0x1886F8u;
            goto label_1886f8;
        }
    }
    ctx->pc = 0x1886E0u;
label_1886e0:
    // 0x1886e0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1886e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1886e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886e8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1886ec: 0xc062770  jal         func_189DC0
    ctx->pc = 0x1886ECu;
    SET_GPR_U32(ctx, 31, 0x1886F4u);
    ctx->pc = 0x1886F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1886ECu;
            // 0x1886f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189DC0u;
    if (runtime->hasFunction(0x189DC0u)) {
        auto targetFn = runtime->lookupFunction(0x189DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886F4u; }
        if (ctx->pc != 0x1886F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189DC0_0x189dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886F4u; }
        if (ctx->pc != 0x1886F4u) { return; }
    }
    ctx->pc = 0x1886F4u;
label_1886f4:
    // 0x1886f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1886f8:
    // 0x1886f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1886f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1886fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1886FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886FCu;
            // 0x188700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188704u;
    // 0x188704: 0x0  nop
    ctx->pc = 0x188704u;
    // NOP
    // 0x188708: 0x0  nop
    ctx->pc = 0x188708u;
    // NOP
    // 0x18870c: 0x0  nop
    ctx->pc = 0x18870cu;
    // NOP
label_188710:
    // 0x188710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188714: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188718: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18871c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188728: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x188728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18872c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188730: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x188734: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188738: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188738u;
    {
        const bool branch_taken_0x188738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188738u;
            // 0x18873c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188738) {
            ctx->pc = 0x188758u;
            goto label_188758;
        }
    }
    ctx->pc = 0x188740u;
    // 0x188740: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x188740u;
    SET_GPR_U32(ctx, 31, 0x188748u);
    ctx->pc = 0x188744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188740u;
            // 0x188744: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188748u; }
        if (ctx->pc != 0x188748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188748u; }
        if (ctx->pc != 0x188748u) { return; }
    }
    ctx->pc = 0x188748u;
label_188748:
    // 0x188748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18874c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x18874Cu;
    SET_GPR_U32(ctx, 31, 0x188754u);
    ctx->pc = 0x188750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18874Cu;
            // 0x188750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188754u; }
        if (ctx->pc != 0x188754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188754u; }
        if (ctx->pc != 0x188754u) { return; }
    }
    ctx->pc = 0x188754u;
label_188754:
    // 0x188754: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x188754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_188758:
    // 0x188758: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18875c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188760: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188760u;
    {
        const bool branch_taken_0x188760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188760) {
            ctx->pc = 0x188764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188760u;
            // 0x188764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x188768u;
    // 0x188768: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x188768u;
    {
        const bool branch_taken_0x188768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188768u;
            // 0x18876c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188768) {
            ctx->pc = 0x188914u;
            goto label_188914;
        }
    }
    ctx->pc = 0x188770u;
label_188770:
    // 0x188770: 0xc06224c  jal         func_188930
    ctx->pc = 0x188770u;
    SET_GPR_U32(ctx, 31, 0x188778u);
    ctx->pc = 0x188930u;
    if (runtime->hasFunction(0x188930u)) {
        auto targetFn = runtime->lookupFunction(0x188930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188778u; }
        if (ctx->pc != 0x188778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188930_0x188930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188778u; }
        if (ctx->pc != 0x188778u) { return; }
    }
    ctx->pc = 0x188778u;
label_188778:
    // 0x188778: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18877c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x18877cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188780: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188780u;
    {
        const bool branch_taken_0x188780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188780) {
            ctx->pc = 0x188784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188780u;
            // 0x188784: 0x26440268  addiu       $a0, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188790u;
            goto label_188790;
        }
    }
    ctx->pc = 0x188788u;
    // 0x188788: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x188788u;
    {
        const bool branch_taken_0x188788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188788u;
            // 0x18878c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188788) {
            ctx->pc = 0x188914u;
            goto label_188914;
        }
    }
    ctx->pc = 0x188790u;
label_188790:
    // 0x188790: 0xc058068  jal         func_1601A0
    ctx->pc = 0x188790u;
    SET_GPR_U32(ctx, 31, 0x188798u);
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188798u; }
        if (ctx->pc != 0x188798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188798u; }
        if (ctx->pc != 0x188798u) { return; }
    }
    ctx->pc = 0x188798u;
label_188798:
    // 0x188798: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x188798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18879c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18879cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1887a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1887A0u;
    {
        const bool branch_taken_0x1887a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1887a0) {
            ctx->pc = 0x1887A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1887A0u;
            // 0x1887a4: 0x8e43048c  lw          $v1, 0x48C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1887B0u;
            goto label_1887b0;
        }
    }
    ctx->pc = 0x1887A8u;
    // 0x1887a8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1887A8u;
    {
        const bool branch_taken_0x1887a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887A8u;
            // 0x1887ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887a8) {
            ctx->pc = 0x188914u;
            goto label_188914;
        }
    }
    ctx->pc = 0x1887B0u;
label_1887b0:
    // 0x1887b0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1887b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1887b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1887b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1887B8u;
    {
        const bool branch_taken_0x1887b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887B8u;
            // 0x1887bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887b8) {
            ctx->pc = 0x1887C4u;
            goto label_1887c4;
        }
    }
    ctx->pc = 0x1887C0u;
    // 0x1887c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1887c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1887c4:
    // 0x1887c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1887c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1887c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1887c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1887cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1887CCu;
    {
        const bool branch_taken_0x1887cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887cc) {
            ctx->pc = 0x1887D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1887CCu;
            // 0x1887d0: 0x92430264  lbu         $v1, 0x264($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1887DCu;
            goto label_1887dc;
        }
    }
    ctx->pc = 0x1887D4u;
    // 0x1887d4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1887d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1887d8: 0x92430264  lbu         $v1, 0x264($s2)
    ctx->pc = 0x1887d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 612)));
label_1887dc:
    // 0x1887dc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1887dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1887e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1887e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1887e8: 0xa2430264  sb          $v1, 0x264($s2)
    ctx->pc = 0x1887e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 612), (uint8_t)GPR_U32(ctx, 3));
    // 0x1887ec: 0x8e43049c  lw          $v1, 0x49C($s2)
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
    // 0x1887f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1887f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1887f4: 0xc05a800  jal         func_16A000
    ctx->pc = 0x1887F4u;
    SET_GPR_U32(ctx, 31, 0x1887FCu);
    ctx->pc = 0x1887F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1887F4u;
            // 0x1887f8: 0xae42049c  sw          $v0, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A000u;
    if (runtime->hasFunction(0x16A000u)) {
        auto targetFn = runtime->lookupFunction(0x16A000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887FCu; }
        if (ctx->pc != 0x1887FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A000_0x16a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887FCu; }
        if (ctx->pc != 0x1887FCu) { return; }
    }
    ctx->pc = 0x1887FCu;
label_1887fc:
    // 0x1887fc: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
    // 0x188800: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x188804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188808: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x188808u;
    {
        const bool branch_taken_0x188808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188808) {
            ctx->pc = 0x18886Cu;
            goto label_18886c;
        }
    }
    ctx->pc = 0x188810u;
    // 0x188810: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x188810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x188814: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x188814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x188818: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x188818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x18881c: 0x24633ed0  addiu       $v1, $v1, 0x3ED0
    ctx->pc = 0x18881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16080));
    // 0x188820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188828u;
    {
        const bool branch_taken_0x188828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188828u;
            // 0x18882c: 0x84700000  lh          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188828) {
            ctx->pc = 0x188840u;
            goto label_188840;
        }
    }
    ctx->pc = 0x188830u;
    // 0x188830: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x188830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x188834: 0x24423ed8  addiu       $v0, $v0, 0x3ED8
    ctx->pc = 0x188834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16088));
    // 0x188838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x188838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18883c: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x18883cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188840:
    // 0x188840: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x188840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x188844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188848: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x188848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18884c: 0xc0621b0  jal         func_1886C0
    ctx->pc = 0x18884Cu;
    SET_GPR_U32(ctx, 31, 0x188854u);
    ctx->pc = 0x188850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18884Cu;
            // 0x188850: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C0u;
    goto label_1886c0;
    ctx->pc = 0x188854u;
label_188854:
    // 0x188854: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x188854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x188858: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x188858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x18885c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18885cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188860: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x188860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x188864: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x188864u;
    {
        const bool branch_taken_0x188864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188864u;
            // 0x188868: 0xae430498  sw          $v1, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188864) {
            ctx->pc = 0x188914u;
            goto label_188914;
        }
    }
    ctx->pc = 0x18886Cu;
label_18886c:
    // 0x18886c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x18886cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x188870: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x188870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x188874: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x188874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x188878: 0x24633ec0  addiu       $v1, $v1, 0x3EC0
    ctx->pc = 0x188878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16064));
    // 0x18887c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188884: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x188884u;
    {
        const bool branch_taken_0x188884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188884u;
            // 0x188888: 0x84700000  lh          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188884) {
            ctx->pc = 0x1888CCu;
            goto label_1888cc;
        }
    }
    ctx->pc = 0x18888Cu;
    // 0x18888c: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x18888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x188890: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x188890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x188894: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x188894u;
    {
        const bool branch_taken_0x188894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188894) {
            ctx->pc = 0x188898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188894u;
            // 0x188898: 0x8e440498  lw          $a0, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1888B8u;
            goto label_1888b8;
        }
    }
    ctx->pc = 0x18889Cu;
    // 0x18889c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1888a0: 0x24423ed8  addiu       $v0, $v0, 0x3ED8
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16088));
    // 0x1888a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1888a8: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x1888a8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1888ac: 0xc0621b0  jal         func_1886C0
    ctx->pc = 0x1888ACu;
    SET_GPR_U32(ctx, 31, 0x1888B4u);
    ctx->pc = 0x1888B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888ACu;
            // 0x1888b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C0u;
    goto label_1886c0;
    ctx->pc = 0x1888B4u;
label_1888b4:
    // 0x1888b4: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_1888b8:
    // 0x1888b8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1888b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1888bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1888bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1888c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1888c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1888c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1888C4u;
    {
        const bool branch_taken_0x1888c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888C4u;
            // 0x1888c8: 0xae430498  sw          $v1, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888c4) {
            ctx->pc = 0x188914u;
            goto label_188914;
        }
    }
    ctx->pc = 0x1888CCu;
label_1888cc:
    // 0x1888cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1888ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1888d0: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x1888d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x1888d4: 0x24633ec8  addiu       $v1, $v1, 0x3EC8
    ctx->pc = 0x1888d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16072));
    // 0x1888d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1888d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1888dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1888dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1888e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1888E0u;
    {
        const bool branch_taken_0x1888e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888E0u;
            // 0x1888e4: 0x84700000  lh          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888e0) {
            ctx->pc = 0x188900u;
            goto label_188900;
        }
    }
    ctx->pc = 0x1888E8u;
    // 0x1888e8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1888e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1888ec: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
    // 0x1888f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1888f4: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x1888f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1888f8: 0xc0621b0  jal         func_1886C0
    ctx->pc = 0x1888F8u;
    SET_GPR_U32(ctx, 31, 0x188900u);
    ctx->pc = 0x1888FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888F8u;
            // 0x1888fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C0u;
    goto label_1886c0;
    ctx->pc = 0x188900u;
label_188900:
    // 0x188900: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x188904: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x188904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x188908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x188908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18890c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18890cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x188910: 0xae430498  sw          $v1, 0x498($s2)
    ctx->pc = 0x188910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
label_188914:
    // 0x188914: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18891c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18891cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188924: 0x3e00008  jr          $ra
    ctx->pc = 0x188924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188924u;
            // 0x188928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18892Cu;
    // 0x18892c: 0x0  nop
    ctx->pc = 0x18892cu;
    // NOP
    ctx->pc = 0x188930u;
}
