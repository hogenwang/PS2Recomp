#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032DEE0
// Address: 0x32dee0 - 0x32e0f0
void sub_0032DEE0_0x32dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DEE0_0x32dee0");
#endif

    switch (ctx->pc) {
        case 0x32df80u: goto label_32df80;
        case 0x32df88u: goto label_32df88;
        case 0x32df98u: goto label_32df98;
        case 0x32dfa4u: goto label_32dfa4;
        case 0x32dff4u: goto label_32dff4;
        case 0x32dffcu: goto label_32dffc;
        case 0x32e010u: goto label_32e010;
        case 0x32e01cu: goto label_32e01c;
        case 0x32e02cu: goto label_32e02c;
        case 0x32e0a0u: goto label_32e0a0;
        case 0x32e0a8u: goto label_32e0a8;
        case 0x32e0b8u: goto label_32e0b8;
        case 0x32e0c4u: goto label_32e0c4;
        default: break;
    }

    ctx->pc = 0x32dee0u;

    // 0x32dee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32dee4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32dee8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32deec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32deecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32def0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32def4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32def4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32def8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32def8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32defc: 0x8c634790  lw          $v1, 0x4790($v1)
    ctx->pc = 0x32defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18320)));
    // 0x32df00: 0x12430075  beq         $s2, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x32DF00u;
    {
        const bool branch_taken_0x32df00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x32DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF00u;
            // 0x32df04: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df00) {
            ctx->pc = 0x32E0D8u;
            goto label_32e0d8;
        }
    }
    ctx->pc = 0x32DF08u;
    // 0x32df08: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x32df08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32df0c: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x32DF0Cu;
    {
        const bool branch_taken_0x32df0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32df0c) {
            ctx->pc = 0x32DF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF0Cu;
            // 0x32df10: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x32DFB0u;
            goto label_32dfb0;
        }
    }
    ctx->pc = 0x32DF14u;
    // 0x32df14: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x32df14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x32df18: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x32DF18u;
    {
        const bool branch_taken_0x32df18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32df18) {
            ctx->pc = 0x32DFACu;
            goto label_32dfac;
        }
    }
    ctx->pc = 0x32DF20u;
    // 0x32df20: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x32df20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32df24: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x32df24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x32df28: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x32df28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32df2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DF2Cu;
    {
        const bool branch_taken_0x32df2c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x32DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF2Cu;
            // 0x32df30: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df2c) {
            ctx->pc = 0x32DF3Cu;
            goto label_32df3c;
        }
    }
    ctx->pc = 0x32DF34u;
    // 0x32df34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32df38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32df38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_32df3c:
    // 0x32df3c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x32df3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x32df40: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x32df40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32df44: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x32df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x32df48: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x32df48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32df4c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32df50: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32df50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32df54: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x32df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32df58: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x32df58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32df5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32df60: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x32df60u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x32df64: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x32df64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32df68: 0x2484e760  addiu       $a0, $a0, -0x18A0
    ctx->pc = 0x32df68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
    // 0x32df6c: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x32df6cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x32df70: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x32df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x32df74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32df74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df78: 0xc040532  jal         func_1014C8
    ctx->pc = 0x32DF78u;
    SET_GPR_U32(ctx, 31, 0x32DF80u);
    ctx->pc = 0x32DF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF78u;
            // 0x32df7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF80u; }
        if (ctx->pc != 0x32DF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF80u; }
        if (ctx->pc != 0x32DF80u) { return; }
    }
    ctx->pc = 0x32DF80u;
label_32df80:
    // 0x32df80: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32DF80u;
    SET_GPR_U32(ctx, 31, 0x32DF88u);
    ctx->pc = 0x32DF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF80u;
            // 0x32df84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF88u; }
        if (ctx->pc != 0x32DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF88u; }
        if (ctx->pc != 0x32DF88u) { return; }
    }
    ctx->pc = 0x32DF88u;
label_32df88:
    // 0x32df88: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32df88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32df8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32df8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df90: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x32DF90u;
    SET_GPR_U32(ctx, 31, 0x32DF98u);
    ctx->pc = 0x32DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF90u;
            // 0x32df94: 0x2484e760  addiu       $a0, $a0, -0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF98u; }
        if (ctx->pc != 0x32DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF98u; }
        if (ctx->pc != 0x32DF98u) { return; }
    }
    ctx->pc = 0x32DF98u;
label_32df98:
    // 0x32df98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df9c: 0xc040454  jal         func_101150
    ctx->pc = 0x32DF9Cu;
    SET_GPR_U32(ctx, 31, 0x32DFA4u);
    ctx->pc = 0x32DFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF9Cu;
            // 0x32dfa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DFA4u; }
        if (ctx->pc != 0x32DFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DFA4u; }
        if (ctx->pc != 0x32DFA4u) { return; }
    }
    ctx->pc = 0x32DFA4u;
label_32dfa4:
    // 0x32dfa4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x32DFA4u;
    {
        const bool branch_taken_0x32dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dfa4) {
            ctx->pc = 0x32E0D0u;
            goto label_32e0d0;
        }
    }
    ctx->pc = 0x32DFACu;
label_32dfac:
    // 0x32dfac: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x32dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_32dfb0:
    // 0x32dfb0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x32dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32dfb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32dfb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32dfbc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x32dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x32dfc0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x32dfc4: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x32dfc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32dfc8: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x32dfc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32dfcc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32dfd0: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x32dfd0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x32dfd4: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x32dfd4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x32dfd8: 0x2484e760  addiu       $a0, $a0, -0x18A0
    ctx->pc = 0x32dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
    // 0x32dfdc: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x32dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x32dfe0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x32dfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32dfe4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x32dfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32dfe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32dfe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dfec: 0xc040532  jal         func_1014C8
    ctx->pc = 0x32DFECu;
    SET_GPR_U32(ctx, 31, 0x32DFF4u);
    ctx->pc = 0x32DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFECu;
            // 0x32dff0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DFF4u; }
        if (ctx->pc != 0x32DFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DFF4u; }
        if (ctx->pc != 0x32DFF4u) { return; }
    }
    ctx->pc = 0x32DFF4u;
label_32dff4:
    // 0x32dff4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32DFF4u;
    SET_GPR_U32(ctx, 31, 0x32DFFCu);
    ctx->pc = 0x32DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFF4u;
            // 0x32dff8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DFFCu; }
        if (ctx->pc != 0x32DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DFFCu; }
        if (ctx->pc != 0x32DFFCu) { return; }
    }
    ctx->pc = 0x32DFFCu;
label_32dffc:
    // 0x32dffc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32e000: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x32e000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x32e004: 0x2484e760  addiu       $a0, $a0, -0x18A0
    ctx->pc = 0x32e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
    // 0x32e008: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x32E008u;
    SET_GPR_U32(ctx, 31, 0x32E010u);
    ctx->pc = 0x32E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E008u;
            // 0x32e00c: 0x24a5f3c0  addiu       $a1, $a1, -0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E010u; }
        if (ctx->pc != 0x32E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E010u; }
        if (ctx->pc != 0x32E010u) { return; }
    }
    ctx->pc = 0x32E010u;
label_32e010:
    // 0x32e010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e014: 0xc040454  jal         func_101150
    ctx->pc = 0x32E014u;
    SET_GPR_U32(ctx, 31, 0x32E01Cu);
    ctx->pc = 0x32E018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E014u;
            // 0x32e018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E01Cu; }
        if (ctx->pc != 0x32E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E01Cu; }
        if (ctx->pc != 0x32E01Cu) { return; }
    }
    ctx->pc = 0x32E01Cu;
label_32e01c:
    // 0x32e01c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x32e01cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32e020: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x32E020u;
    {
        const bool branch_taken_0x32e020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e020) {
            ctx->pc = 0x32E0D0u;
            goto label_32e0d0;
        }
    }
    ctx->pc = 0x32E028u;
    // 0x32e028: 0x96460002  lhu         $a2, 0x2($s2)
    ctx->pc = 0x32e028u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_32e02c:
    // 0x32e02c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x32e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e030: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x32e030u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32e034: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x32e034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32e038: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x32e038u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x32e03c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x32e03cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32e040: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32E040u;
    {
        const bool branch_taken_0x32e040 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x32E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E040u;
            // 0x32e044: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e040) {
            ctx->pc = 0x32E050u;
            goto label_32e050;
        }
    }
    ctx->pc = 0x32E048u;
    // 0x32e048: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e04c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32e04cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_32e050:
    // 0x32e050: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x32e050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x32e054: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x32e054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32e058: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x32e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32e05c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32e060: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x32e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x32e064: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x32e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x32e068: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x32e068u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32e06c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32e070: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32e070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32e074: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x32e074u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e078: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x32e078u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x32e07c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x32e07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x32e080: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x32e080u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x32e084: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32e084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32e088: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x32e088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32e08c: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x32e08cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e090: 0x2484e760  addiu       $a0, $a0, -0x18A0
    ctx->pc = 0x32e090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
    // 0x32e094: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x32e094u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x32e098: 0xc040532  jal         func_1014C8
    ctx->pc = 0x32E098u;
    SET_GPR_U32(ctx, 31, 0x32E0A0u);
    ctx->pc = 0x32E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E098u;
            // 0x32e09c: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0A0u; }
        if (ctx->pc != 0x32E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0A0u; }
        if (ctx->pc != 0x32E0A0u) { return; }
    }
    ctx->pc = 0x32E0A0u;
label_32e0a0:
    // 0x32e0a0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32E0A0u;
    SET_GPR_U32(ctx, 31, 0x32E0A8u);
    ctx->pc = 0x32E0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0A0u;
            // 0x32e0a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0A8u; }
        if (ctx->pc != 0x32E0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0A8u; }
        if (ctx->pc != 0x32E0A8u) { return; }
    }
    ctx->pc = 0x32E0A8u;
label_32e0a8:
    // 0x32e0a8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32e0ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32e0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0b0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x32E0B0u;
    SET_GPR_U32(ctx, 31, 0x32E0B8u);
    ctx->pc = 0x32E0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0B0u;
            // 0x32e0b4: 0x2484e760  addiu       $a0, $a0, -0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0B8u; }
        if (ctx->pc != 0x32E0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0B8u; }
        if (ctx->pc != 0x32E0B8u) { return; }
    }
    ctx->pc = 0x32E0B8u;
label_32e0b8:
    // 0x32e0b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32e0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0bc: 0xc040454  jal         func_101150
    ctx->pc = 0x32E0BCu;
    SET_GPR_U32(ctx, 31, 0x32E0C4u);
    ctx->pc = 0x32E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0BCu;
            // 0x32e0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0C4u; }
        if (ctx->pc != 0x32E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0C4u; }
        if (ctx->pc != 0x32E0C4u) { return; }
    }
    ctx->pc = 0x32E0C4u;
label_32e0c4:
    // 0x32e0c4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x32e0c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32e0c8: 0x5460ffd8  bnel        $v1, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x32E0C8u;
    {
        const bool branch_taken_0x32e0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e0c8) {
            ctx->pc = 0x32E0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0C8u;
            // 0x32e0cc: 0x96460002  lhu         $a2, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E02Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e02c;
        }
    }
    ctx->pc = 0x32E0D0u;
label_32e0d0:
    // 0x32e0d0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32e0d4: 0xac724790  sw          $s2, 0x4790($v1)
    ctx->pc = 0x32e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18320), GPR_U32(ctx, 18));
label_32e0d8:
    // 0x32e0d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32e0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e0dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e0e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0E8u;
            // 0x32e0ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32E0F0u;
    ctx->pc = 0x32e0f0u;
}
