#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D4990
// Address: 0x2d4990 - 0x2d4b70
void sub_002D4990_0x2d4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4990_0x2d4990");
#endif

    switch (ctx->pc) {
        case 0x2d49d4u: goto label_2d49d4;
        case 0x2d49e0u: goto label_2d49e0;
        case 0x2d4a00u: goto label_2d4a00;
        case 0x2d4a1cu: goto label_2d4a1c;
        case 0x2d4a28u: goto label_2d4a28;
        case 0x2d4a30u: goto label_2d4a30;
        case 0x2d4a40u: goto label_2d4a40;
        case 0x2d4a50u: goto label_2d4a50;
        case 0x2d4a60u: goto label_2d4a60;
        case 0x2d4a64u: goto label_2d4a64;
        case 0x2d4a68u: goto label_2d4a68;
        case 0x2d4a74u: goto label_2d4a74;
        case 0x2d4aa4u: goto label_2d4aa4;
        case 0x2d4b04u: goto label_2d4b04;
        case 0x2d4b10u: goto label_2d4b10;
        default: break;
    }

    ctx->pc = 0x2d4990u;

    // 0x2d4990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d4994: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2d4994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d4998: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d499c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d499cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49a0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d49a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d49a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d49a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d49ac: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2d49acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2d49b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d49b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d49b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d49b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d49b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d49b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d49bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d49bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d49c0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d49c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d49c4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d49c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d49c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d49cc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d49d0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2d49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2d49d4:
    // 0x2d49d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d49d8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2d49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2d49dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2d49e0:
    // 0x2d49e0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d49e4: 0x18e00037  blez        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D49E4u;
    {
        const bool branch_taken_0x2d49e4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2D49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49E4u;
            // 0x2d49e8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49e4) {
            ctx->pc = 0x2D4AC4u;
            goto label_2d4ac4;
        }
    }
    ctx->pc = 0x2D49ECu;
    // 0x2d49ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d49f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d49f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d49f4: 0x4f03e  dsrl32      $fp, $a0, 0
    ctx->pc = 0x2d49f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2d49f8: 0x82b824  and         $s7, $a0, $v0
    ctx->pc = 0x2d49f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2d49fc: 0x0  nop
    ctx->pc = 0x2d49fcu;
    // NOP
label_2d4a00:
    // 0x2d4a00: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4a04: 0x1598c0  sll         $s3, $s5, 3
    ctx->pc = 0x2d4a04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d4a08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a0c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d4a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d4a10: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2d4a14: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x2d4a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4a18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2d4a1c:
    // 0x2d4a1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d4a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d4a20: 0x202a024  and         $s4, $s0, $v0
    ctx->pc = 0x2d4a20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d4a24: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2d4a24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_2d4a28:
    // 0x2d4a28: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4A28u;
    SET_GPR_U32(ctx, 31, 0x2D4A30u);
    ctx->pc = 0x2D4A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4A28u;
            // 0x2d4a2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A30u; }
        if (ctx->pc != 0x2D4A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A30u; }
        if (ctx->pc != 0x2D4A30u) { return; }
    }
    ctx->pc = 0x2D4A30u;
label_2d4a30:
    // 0x2d4a30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d4a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a38: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4A38u;
    SET_GPR_U32(ctx, 31, 0x2D4A40u);
    ctx->pc = 0x2D4A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4A38u;
            // 0x2d4a3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A40u; }
        if (ctx->pc != 0x2D4A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A40u; }
        if (ctx->pc != 0x2D4A40u) { return; }
    }
    ctx->pc = 0x2D4A40u;
label_2d4a40:
    // 0x2d4a40: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a48: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4A48u;
    SET_GPR_U32(ctx, 31, 0x2D4A50u);
    ctx->pc = 0x2D4A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4A48u;
            // 0x2d4a4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A50u; }
        if (ctx->pc != 0x2D4A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A50u; }
        if (ctx->pc != 0x2D4A50u) { return; }
    }
    ctx->pc = 0x2D4A50u;
label_2d4a50:
    // 0x2d4a50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d4a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d4a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a58: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4A58u;
    SET_GPR_U32(ctx, 31, 0x2D4A60u);
    ctx->pc = 0x2D4A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4A58u;
            // 0x2d4a5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A60u; }
        if (ctx->pc != 0x2D4A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4A60u; }
        if (ctx->pc != 0x2D4A60u) { return; }
    }
    ctx->pc = 0x2D4A60u;
label_2d4a60:
    // 0x2d4a60: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d4a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2d4a64:
    // 0x2d4a64: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x2d4a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
label_2d4a68:
    // 0x2d4a68: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4a6c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x2d4a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d4a70: 0x223282d  daddu       $a1, $s1, $v1
    ctx->pc = 0x2d4a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
label_2d4a74:
    // 0x2d4a74: 0x50802b  sltu        $s0, $v0, $s0
    ctx->pc = 0x2d4a74u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d4a78: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x2d4a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2d4a7c: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x2d4a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d4a80: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x2d4a80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4a84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4a88: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x2d4a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d4a8c: 0xb0880b  movn        $s1, $a1, $s0
    ctx->pc = 0x2d4a8cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x2d4a90: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2d4a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d4a94: 0x243902d  daddu       $s2, $s2, $v1
    ctx->pc = 0x2d4a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d4a98: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2d4a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2d4a9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d4a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4aa0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2d4aa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d4aa4:
    // 0x2d4aa4: 0x256902d  daddu       $s2, $s2, $s6
    ctx->pc = 0x2d4aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 22));
    // 0x2d4aa8: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x2d4aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d4aac: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x2d4aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2d4ab0: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x2d4ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d4ab4: 0x2a4182a  slt         $v1, $s5, $a0
    ctx->pc = 0x2d4ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d4ab8: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x2d4ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x2d4abc: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D4ABCu;
    {
        const bool branch_taken_0x2d4abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4ABCu;
            // 0x2d4ac0: 0x222b02d  daddu       $s6, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4abc) {
            ctx->pc = 0x2D4A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4a00;
        }
    }
    ctx->pc = 0x2D4AC4u;
label_2d4ac4:
    // 0x2d4ac4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4ac8: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x2d4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d4acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4ad0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d4ad0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4ad4: 0x76182d  daddu       $v1, $v1, $s6
    ctx->pc = 0x2d4ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 22));
    // 0x2d4ad8: 0x76202b  sltu        $a0, $v1, $s6
    ctx->pc = 0x2d4ad8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2d4adc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D4ADCu;
    {
        const bool branch_taken_0x2d4adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4ADCu;
            // 0x2d4ae0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4adc) {
            ctx->pc = 0x2D4B40u;
            goto label_2d4b40;
        }
    }
    ctx->pc = 0x2D4AE4u;
    // 0x2d4ae4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4ae8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d4ae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d4aec: 0x1598c0  sll         $s3, $s5, 3
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d4af0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4af4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x2d4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d4af8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d4af8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4afc: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4AFCu;
    {
        const bool branch_taken_0x2d4afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d4afc) {
            ctx->pc = 0x2D4B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4AFCu;
            // 0x2d4b00: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4B30u;
            goto label_2d4b30;
        }
    }
    ctx->pc = 0x2D4B04u;
label_2d4b04:
    // 0x2d4b04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d4b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d4b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d4b10:
    // 0x2d4b10: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2d4b10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2d4b14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2d4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2d4b18: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d4b1c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4b1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4b20: 0x0  nop
    ctx->pc = 0x2d4b20u;
    // NOP
    // 0x2d4b24: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4B24u;
    {
        const bool branch_taken_0x2d4b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D4B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4B24u;
            // 0x2d4b28: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b24) {
            ctx->pc = 0x2D4B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4b10;
        }
    }
    ctx->pc = 0x2D4B2Cu;
    // 0x2d4b2c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4b30:
    // 0x2d4b30: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2d4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2d4b34: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4b34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4b38: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2d4b38u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2d4b3c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d4b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2d4b40:
    // 0x2d4b40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d4b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4b44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d4b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4b48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d4b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4b4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d4b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4b50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d4b50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4b54: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d4b54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b58: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d4b58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4b5c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d4b5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d4b60: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d4b60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4b64: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d4b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d4b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4B68u;
            // 0x2d4b6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4B70u;
    ctx->pc = 0x2d4b70u;
}
