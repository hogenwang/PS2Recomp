#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C0C8
// Address: 0x26c0c8 - 0x26c230
void sub_0026C0C8_0x26c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C0C8_0x26c0c8");
#endif

    switch (ctx->pc) {
        case 0x26c0fcu: goto label_26c0fc;
        case 0x26c10cu: goto label_26c10c;
        case 0x26c124u: goto label_26c124;
        case 0x26c148u: goto label_26c148;
        case 0x26c178u: goto label_26c178;
        case 0x26c1bcu: goto label_26c1bc;
        case 0x26c1ccu: goto label_26c1cc;
        case 0x26c1d4u: goto label_26c1d4;
        case 0x26c1f0u: goto label_26c1f0;
        case 0x26c208u: goto label_26c208;
        default: break;
    }

    ctx->pc = 0x26c0c8u;

    // 0x26c0c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26c0cc: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x26c0d0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x26c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26c0d4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x26c0d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26c0d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26c0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0e0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26c0e4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26c0e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26c0f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26c0f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26C0F4u;
    SET_GPR_U32(ctx, 31, 0x26C0FCu);
    ctx->pc = 0x26C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0F4u;
            // 0x26c0f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0FCu; }
        if (ctx->pc != 0x26C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0FCu; }
        if (ctx->pc != 0x26C0FCu) { return; }
    }
    ctx->pc = 0x26C0FCu;
label_26c0fc:
    // 0x26c0fc: 0x27b0000e  addiu       $s0, $sp, 0xE
    ctx->pc = 0x26c0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 14));
    // 0x26c100: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x26c100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c104: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C104u;
    SET_GPR_U32(ctx, 31, 0x26C10Cu);
    ctx->pc = 0x26C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C104u;
            // 0x26c108: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C10Cu; }
        if (ctx->pc != 0x26C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C10Cu; }
        if (ctx->pc != 0x26C10Cu) { return; }
    }
    ctx->pc = 0x26C10Cu;
label_26c10c:
    // 0x26c10c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26c10cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c110: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x26c110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26c114: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26c114u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26c118: 0xa3a3000e  sb          $v1, 0xE($sp)
    ctx->pc = 0x26c118u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c11c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C11Cu;
    SET_GPR_U32(ctx, 31, 0x26C124u);
    ctx->pc = 0x26C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C11Cu;
            // 0x26c120: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C124u; }
        if (ctx->pc != 0x26C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C124u; }
        if (ctx->pc != 0x26C124u) { return; }
    }
    ctx->pc = 0x26C124u;
label_26c124:
    // 0x26c124: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26c128: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26c128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26c12c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26c130: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x26c130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c134: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c138: 0xa2060004  sb          $a2, 0x4($s0)
    ctx->pc = 0x26c138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x26c13c: 0xa2050005  sb          $a1, 0x5($s0)
    ctx->pc = 0x26c13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x26c140: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C140u;
    SET_GPR_U32(ctx, 31, 0x26C148u);
    ctx->pc = 0x26C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C140u;
            // 0x26c144: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C148u; }
        if (ctx->pc != 0x26C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C148u; }
        if (ctx->pc != 0x26C148u) { return; }
    }
    ctx->pc = 0x26C148u;
label_26c148:
    // 0x26c148: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26c148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26c14c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x26c14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26c150: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x26c150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c154: 0x27ae001c  addiu       $t6, $sp, 0x1C
    ctx->pc = 0x26c154u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26c158: 0x27b20026  addiu       $s2, $sp, 0x26
    ctx->pc = 0x26c158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    // 0x26c15c: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x26c15cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c160: 0x27ab0016  addiu       $t3, $sp, 0x16
    ctx->pc = 0x26c160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
    // 0x26c164: 0x37aa0006  ori         $t2, $sp, 0x6
    ctx->pc = 0x26c164u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    // 0x26c168: 0x2689006a  addiu       $t1, $s4, 0x6A
    ctx->pc = 0x26c168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 106));
    // 0x26c16c: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x26c16cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26c170: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c174: 0x0  nop
    ctx->pc = 0x26c174u;
    // NOP
label_26c178:
    // 0x26c178: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x26c17c: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x26c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x26c180: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x26c180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c184: 0x1682821  addu        $a1, $t3, $t0
    ctx->pc = 0x26c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x26c188: 0x1883021  addu        $a2, $t4, $t0
    ctx->pc = 0x26c188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x26c18c: 0x2283821  addu        $a3, $s1, $t0
    ctx->pc = 0x26c18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x26c190: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x26c190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c194: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26c194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26c198: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x26c198u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c19c: 0x29020006  slti        $v0, $t0, 0x6
    ctx->pc = 0x26c19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26c1a0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x26c1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c1a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26C1A4u;
    {
        const bool branch_taken_0x26c1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1A4u;
            // 0x26c1a8: 0xa0ed0000  sb          $t5, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1a4) {
            ctx->pc = 0x26C178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c178;
        }
    }
    ctx->pc = 0x26C1ACu;
    // 0x26c1ac: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x26c1acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x26c1b0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x26c1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1b4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26C1B4u;
    SET_GPR_U32(ctx, 31, 0x26C1BCu);
    ctx->pc = 0x26C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1B4u;
            // 0x26c1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1BCu; }
        if (ctx->pc != 0x26C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1BCu; }
        if (ctx->pc != 0x26C1BCu) { return; }
    }
    ctx->pc = 0x26C1BCu;
label_26c1bc:
    // 0x26c1bc: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x26c1bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x26c1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1c4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26C1C4u;
    SET_GPR_U32(ctx, 31, 0x26C1CCu);
    ctx->pc = 0x26C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1C4u;
            // 0x26c1c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1CCu; }
        if (ctx->pc != 0x26C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1CCu; }
        if (ctx->pc != 0x26C1CCu) { return; }
    }
    ctx->pc = 0x26C1CCu;
label_26c1cc:
    // 0x26c1cc: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C1CCu;
    SET_GPR_U32(ctx, 31, 0x26C1D4u);
    ctx->pc = 0x26C1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1CCu;
            // 0x26c1d0: 0x24040806  addiu       $a0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1D4u; }
        if (ctx->pc != 0x26C1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1D4u; }
        if (ctx->pc != 0x26C1D4u) { return; }
    }
    ctx->pc = 0x26C1D4u;
label_26c1d4:
    // 0x26c1d4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x26c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x26c1d8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26c1dc: 0xa223000d  sb          $v1, 0xD($s1)
    ctx->pc = 0x26c1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c1e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1e4: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x26c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x26c1e8: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x26C1E8u;
    SET_GPR_U32(ctx, 31, 0x26C1F0u);
    ctx->pc = 0x26C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1E8u;
            // 0x26c1ec: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1F0u; }
        if (ctx->pc != 0x26C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1F0u; }
        if (ctx->pc != 0x26C1F0u) { return; }
    }
    ctx->pc = 0x26C1F0u;
label_26c1f0:
    // 0x26c1f0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C1F0u;
    {
        const bool branch_taken_0x26c1f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1F0u;
            // 0x26c1f4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1f0) {
            ctx->pc = 0x26C20Cu;
            goto label_26c20c;
        }
    }
    ctx->pc = 0x26C1F8u;
    // 0x26c1f8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c1fc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c200: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C200u;
    SET_GPR_U32(ctx, 31, 0x26C208u);
    ctx->pc = 0x26C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C200u;
            // 0x26c204: 0x24a58a80  addiu       $a1, $a1, -0x7580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C208u; }
        if (ctx->pc != 0x26C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C208u; }
        if (ctx->pc != 0x26C208u) { return; }
    }
    ctx->pc = 0x26C208u;
label_26c208:
    // 0x26c208: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26c208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26c20c:
    // 0x26c20c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c210: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26c210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c214: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26c214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c218: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26c218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c21c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26c21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c220: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26c220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c224: 0x3e00008  jr          $ra
    ctx->pc = 0x26C224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C224u;
            // 0x26c228: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C22Cu;
    // 0x26c22c: 0x0  nop
    ctx->pc = 0x26c22cu;
    // NOP
    ctx->pc = 0x26c230u;
}
