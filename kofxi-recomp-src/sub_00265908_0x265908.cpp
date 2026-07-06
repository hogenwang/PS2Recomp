#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265908
// Address: 0x265908 - 0x265ab8
void sub_00265908_0x265908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265908_0x265908");
#endif

    switch (ctx->pc) {
        case 0x265938u: goto label_265938;
        case 0x265974u: goto label_265974;
        case 0x265998u: goto label_265998;
        case 0x2659c0u: goto label_2659c0;
        case 0x2659dcu: goto label_2659dc;
        case 0x2659ecu: goto label_2659ec;
        case 0x265a08u: goto label_265a08;
        case 0x265a30u: goto label_265a30;
        case 0x265a54u: goto label_265a54;
        default: break;
    }

    ctx->pc = 0x265908u;

    // 0x265908: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x265908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26590c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x265910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265914: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x265914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x265918: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x265918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26591c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x26591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x265920: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x265920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x265924: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x265924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265928: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x265928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26592c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x265930: 0xc098552  jal         func_261548
    ctx->pc = 0x265930u;
    SET_GPR_U32(ctx, 31, 0x265938u);
    ctx->pc = 0x265934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265930u;
            // 0x265934: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265938u; }
        if (ctx->pc != 0x265938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265938u; }
        if (ctx->pc != 0x265938u) { return; }
    }
    ctx->pc = 0x265938u;
label_265938:
    // 0x265938: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x265938u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26593c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x26593cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x265940: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x265940u;
    {
        const bool branch_taken_0x265940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265940u;
            // 0x265944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265940) {
            ctx->pc = 0x265A94u;
            goto label_265a94;
        }
    }
    ctx->pc = 0x265948u;
    // 0x265948: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x265948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26594c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265950: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x265950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x265954: 0x240502c0  addiu       $a1, $zero, 0x2C0
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x265958: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x265958u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x26595c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x26595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265960: 0x26b317f0  addiu       $s3, $s5, 0x17F0
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 6128));
    // 0x265964: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x265964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x265968: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x265968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26596c: 0xc0996ae  jal         func_265AB8
    ctx->pc = 0x26596Cu;
    SET_GPR_U32(ctx, 31, 0x265974u);
    ctx->pc = 0x265970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26596Cu;
            // 0x265970: 0xfc450008  sd          $a1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265AB8u;
    if (runtime->hasFunction(0x265AB8u)) {
        auto targetFn = runtime->lookupFunction(0x265AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265974u; }
        if (ctx->pc != 0x265974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265AB8_0x265ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265974u; }
        if (ctx->pc != 0x265974u) { return; }
    }
    ctx->pc = 0x265974u;
label_265974:
    // 0x265974: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x265974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x265978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26597c: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x26597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x265980: 0xa4620034  sh          $v0, 0x34($v1)
    ctx->pc = 0x265980u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x265984: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x265984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265988: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x265988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x26598c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x26598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265990: 0xc08a262  jal         func_228988
    ctx->pc = 0x265990u;
    SET_GPR_U32(ctx, 31, 0x265998u);
    ctx->pc = 0x265994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265990u;
            // 0x265994: 0xa0650015  sb          $a1, 0x15($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265998u; }
        if (ctx->pc != 0x265998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265998u; }
        if (ctx->pc != 0x265998u) { return; }
    }
    ctx->pc = 0x265998u;
label_265998:
    // 0x265998: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x265998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26599c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2659a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2659a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2659a4: 0xa4620016  sh          $v0, 0x16($v1)
    ctx->pc = 0x2659a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2659a8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2659a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2659ac: 0xa0440014  sb          $a0, 0x14($v0)
    ctx->pc = 0x2659acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x2659b0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2659b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2659b4: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x2659b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x2659b8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2659b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2659bc: 0xfc400038  sd          $zero, 0x38($v0)
    ctx->pc = 0x2659bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
label_2659c0:
    // 0x2659c0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2659c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2659c4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2659C4u;
    {
        const bool branch_taken_0x2659c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659C4u;
            // 0x2659c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659c4) {
            ctx->pc = 0x265A58u;
            goto label_265a58;
        }
    }
    ctx->pc = 0x2659CCu;
    // 0x2659cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2659ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2659d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2659d4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2659D4u;
    SET_GPR_U32(ctx, 31, 0x2659DCu);
    ctx->pc = 0x2659D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2659D4u;
            // 0x2659d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659DCu; }
        if (ctx->pc != 0x2659DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659DCu; }
        if (ctx->pc != 0x2659DCu) { return; }
    }
    ctx->pc = 0x2659DCu;
label_2659dc:
    // 0x2659dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2659dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2659e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2659e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659e4: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2659E4u;
    SET_GPR_U32(ctx, 31, 0x2659ECu);
    ctx->pc = 0x2659E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2659E4u;
            // 0x2659e8: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659ECu; }
        if (ctx->pc != 0x2659ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659ECu; }
        if (ctx->pc != 0x2659ECu) { return; }
    }
    ctx->pc = 0x2659ECu;
label_2659ec:
    // 0x2659ec: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2659ECu;
    {
        const bool branch_taken_0x2659ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2659F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659ECu;
            // 0x2659f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659ec) {
            ctx->pc = 0x265A10u;
            goto label_265a10;
        }
    }
    ctx->pc = 0x2659F4u;
    // 0x2659f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2659f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2659f8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2659f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659fc: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x2659fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x265a00: 0xc08a262  jal         func_228988
    ctx->pc = 0x265A00u;
    SET_GPR_U32(ctx, 31, 0x265A08u);
    ctx->pc = 0x265A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A00u;
            // 0x265a04: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A08u; }
        if (ctx->pc != 0x265A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A08u; }
        if (ctx->pc != 0x265A08u) { return; }
    }
    ctx->pc = 0x265A08u;
label_265a08:
    // 0x265a08: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x265a08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x265a0c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x265a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_265a10:
    // 0x265a10: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x265A10u;
    {
        const bool branch_taken_0x265a10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A10u;
            // 0x265a14: 0x148900  sll         $s1, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a10) {
            ctx->pc = 0x265A58u;
            goto label_265a58;
        }
    }
    ctx->pc = 0x265A18u;
    // 0x265a18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x265a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a20: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x265a24: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x265a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x265a28: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x265A28u;
    SET_GPR_U32(ctx, 31, 0x265A30u);
    ctx->pc = 0x265A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A28u;
            // 0x265a2c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A30u; }
        if (ctx->pc != 0x265A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A30u; }
        if (ctx->pc != 0x265A30u) { return; }
    }
    ctx->pc = 0x265A30u;
label_265a30:
    // 0x265a30: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x265a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x265a34: 0x2c630011  sltiu       $v1, $v1, 0x11
    ctx->pc = 0x265a34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x265a38: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A38u;
    {
        const bool branch_taken_0x265a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A38u;
            // 0x265a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a38) {
            ctx->pc = 0x265A54u;
            goto label_265a54;
        }
    }
    ctx->pc = 0x265A40u;
    // 0x265a40: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x265a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265a44: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x265a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x265a48: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x265a48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x265a4c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x265A4Cu;
    SET_GPR_U32(ctx, 31, 0x265A54u);
    ctx->pc = 0x265A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A4Cu;
            // 0x265a50: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A54u; }
        if (ctx->pc != 0x265A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A54u; }
        if (ctx->pc != 0x265A54u) { return; }
    }
    ctx->pc = 0x265A54u;
label_265a54:
    // 0x265a54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x265a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_265a58:
    // 0x265a58: 0x26a217f0  addiu       $v0, $s5, 0x17F0
    ctx->pc = 0x265a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6128));
    // 0x265a5c: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265A5Cu;
    {
        const bool branch_taken_0x265a5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x265A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A5Cu;
            // 0x265a60: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a5c) {
            ctx->pc = 0x265A6Cu;
            goto label_265a6c;
        }
    }
    ctx->pc = 0x265A64u;
    // 0x265a64: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x265A64u;
    {
        const bool branch_taken_0x265a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A64u;
            // 0x265a68: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a64) {
            ctx->pc = 0x2659C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2659c0;
        }
    }
    ctx->pc = 0x265A6Cu;
label_265a6c:
    // 0x265a6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x265A6Cu;
    {
        const bool branch_taken_0x265a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265a6c) {
            ctx->pc = 0x265A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265A6Cu;
            // 0x265a70: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x265A80u;
            goto label_265a80;
        }
    }
    ctx->pc = 0x265A74u;
    // 0x265a74: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x265a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x265a78: 0xac540010  sw          $s4, 0x10($v0)
    ctx->pc = 0x265a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 20));
    // 0x265a7c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x265a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_265a80:
    // 0x265a80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x265a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x265a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a88: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x265a88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x265a8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x265a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x265a90: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x265a90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
label_265a94:
    // 0x265a94: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x265a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265a98: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x265a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265a9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x265a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265aa0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x265aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265aa4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x265aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265aa8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x265aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265aac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x265aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x265AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AB0u;
            // 0x265ab4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265AB8u;
    ctx->pc = 0x265ab8u;
}
