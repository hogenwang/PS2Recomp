#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB960
// Address: 0x1eb960 - 0x1ebaa0
void sub_001EB960_0x1eb960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB960_0x1eb960");
#endif

    switch (ctx->pc) {
        case 0x1eb988u: goto label_1eb988;
        case 0x1eb9d0u: goto label_1eb9d0;
        case 0x1eb9e8u: goto label_1eb9e8;
        case 0x1eba20u: goto label_1eba20;
        case 0x1eba7cu: goto label_1eba7c;
        default: break;
    }

    ctx->pc = 0x1eb960u;

    // 0x1eb960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb964: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eb964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eb968: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb96c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eb96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eb970: 0x26500d88  addiu       $s0, $s2, 0xD88
    ctx->pc = 0x1eb970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1eb974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb978: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eb978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eb97c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eb97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1eb980: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EB980u;
    SET_GPR_U32(ctx, 31, 0x1EB988u);
    ctx->pc = 0x1EB984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB980u;
            // 0x1eb984: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB988u; }
        if (ctx->pc != 0x1EB988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB988u; }
        if (ctx->pc != 0x1EB988u) { return; }
    }
    ctx->pc = 0x1EB988u;
label_1eb988:
    // 0x1eb988: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x1eb988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1eb98c: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x1eb98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1eb990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb994: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1eb994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1eb998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb99c: 0xae060164  sw          $a2, 0x164($s0)
    ctx->pc = 0x1eb99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 6));
    // 0x1eb9a0: 0x2467001f  addiu       $a3, $v1, 0x1F
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1eb9a4: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1eb9a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1eb9a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1eb9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb9ac: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x1eb9acu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1eb9b0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1eb9b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1eb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1eb9b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb9bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb9c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1eb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eb9c4: 0xac460ef4  sw          $a2, 0xEF4($v0)
    ctx->pc = 0x1eb9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3828), GPR_U32(ctx, 6));
    // 0x1eb9c8: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EB9C8u;
    SET_GPR_U32(ctx, 31, 0x1EB9D0u);
    ctx->pc = 0x1EB9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9C8u;
            // 0x1eb9cc: 0xae030168  sw          $v1, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9D0u; }
        if (ctx->pc != 0x1EB9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9D0u; }
        if (ctx->pc != 0x1EB9D0u) { return; }
    }
    ctx->pc = 0x1EB9D0u;
label_1eb9d0:
    // 0x1eb9d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eb9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb9d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eb9d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb9d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eb9d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb9dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1eb9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9E0u;
            // 0x1eb9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB9E8u;
label_1eb9e8:
    // 0x1eb9e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb9ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eb9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eb9f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb9f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eb9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eb9f8: 0x26300d88  addiu       $s0, $s1, 0xD88
    ctx->pc = 0x1eb9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1eb9fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eba04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1eba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1eba08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1eba08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba0c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1eba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1eba10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eba10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba14: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1eba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1eba18: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EBA18u;
    SET_GPR_U32(ctx, 31, 0x1EBA20u);
    ctx->pc = 0x1EBA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA18u;
            // 0x1eba1c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA20u; }
        if (ctx->pc != 0x1EBA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA20u; }
        if (ctx->pc != 0x1EBA20u) { return; }
    }
    ctx->pc = 0x1EBA20u;
label_1eba20:
    // 0x1eba20: 0x8e0701f4  lw          $a3, 0x1F4($s0)
    ctx->pc = 0x1eba20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1eba24: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x1eba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1eba28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba2c: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x1eba30: 0x28e50000  slti        $a1, $a3, 0x0
    ctx->pc = 0x1eba30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1eba34: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1eba34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba38: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1eba38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1eba3c: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1eba3cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1eba40: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x1eba40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1eba44: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EBA44u;
    {
        const bool branch_taken_0x1eba44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA44u;
            // 0x1eba48: 0x21143  sra         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba44) {
            ctx->pc = 0x1EBA74u;
            goto label_1eba74;
        }
    }
    ctx->pc = 0x1EBA4Cu;
    // 0x1eba4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1eba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1eba50: 0xae1201ec  sw          $s2, 0x1EC($s0)
    ctx->pc = 0x1eba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 18));
    // 0x1eba54: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x1eba54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1eba58: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1eba58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eba5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eba60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eba64: 0xac530f84  sw          $s3, 0xF84($v0)
    ctx->pc = 0x1eba64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3972), GPR_U32(ctx, 19));
    // 0x1eba68: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x1eba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1eba6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eba70: 0xae0301f4  sw          $v1, 0x1F4($s0)
    ctx->pc = 0x1eba70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 3));
label_1eba74:
    // 0x1eba74: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EBA74u;
    SET_GPR_U32(ctx, 31, 0x1EBA7Cu);
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA7Cu; }
        if (ctx->pc != 0x1EBA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA7Cu; }
        if (ctx->pc != 0x1EBA7Cu) { return; }
    }
    ctx->pc = 0x1EBA7Cu;
label_1eba7c:
    // 0x1eba7c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1eba7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eba80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eba84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eba84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eba88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eba88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eba8c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1eba8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eba90: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1eba90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eba94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1eba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eba98: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA98u;
            // 0x1eba9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBAA0u;
    ctx->pc = 0x1ebaa0u;
}
