#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100DC0
// Address: 0x100dc0 - 0x101058
void sub_00100DC0_0x100dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100DC0_0x100dc0");
#endif

    switch (ctx->pc) {
        case 0x100e1cu: goto label_100e1c;
        case 0x100e44u: goto label_100e44;
        case 0x100e60u: goto label_100e60;
        case 0x100e7cu: goto label_100e7c;
        case 0x100e98u: goto label_100e98;
        case 0x100ee0u: goto label_100ee0;
        case 0x100f10u: goto label_100f10;
        case 0x100fb4u: goto label_100fb4;
        default: break;
    }

    ctx->pc = 0x100dc0u;

    // 0x100dc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x100dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x100dc4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x100dc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x100dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x100dcc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x100dccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x100dd0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x100dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x100dd4: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x100dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x100dd8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x100dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x100ddc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x100de0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x100de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x100de4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x100de4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x100de8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x100de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x100dec: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x100decu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x100df0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x100df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x100df4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x100df8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x100df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x100dfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e00: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x100e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x100e04: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
    // 0x100e08: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x100e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x100e0c: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100e10: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x100e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x100e14: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x100E14u;
    SET_GPR_U32(ctx, 31, 0x100E1Cu);
    ctx->pc = 0x100E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E14u;
            // 0x100e18: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003C0u;
    if (runtime->hasFunction(0x1003C0u)) {
        auto targetFn = runtime->lookupFunction(0x1003C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E1Cu; }
        if (ctx->pc != 0x100E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003C0_0x1003c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E1Cu; }
        if (ctx->pc != 0x100E1Cu) { return; }
    }
    ctx->pc = 0x100E1Cu;
label_100e1c:
    // 0x100e1c: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
    // 0x100e20: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x100e20u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
    // 0x100e24: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x100e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x100e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x100e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x100e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e3c: 0xc04013a  jal         func_1004E8
    ctx->pc = 0x100E3Cu;
    SET_GPR_U32(ctx, 31, 0x100E44u);
    ctx->pc = 0x100E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E3Cu;
            // 0x100e40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E8u;
    if (runtime->hasFunction(0x1004E8u)) {
        auto targetFn = runtime->lookupFunction(0x1004E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E44u; }
        if (ctx->pc != 0x100E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E8_0x1004e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E44u; }
        if (ctx->pc != 0x100E44u) { return; }
    }
    ctx->pc = 0x100E44u;
label_100e44:
    // 0x100e44: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x100e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x100e48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x100e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x100e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e58: 0xc04013a  jal         func_1004E8
    ctx->pc = 0x100E58u;
    SET_GPR_U32(ctx, 31, 0x100E60u);
    ctx->pc = 0x100E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E58u;
            // 0x100e5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E8u;
    if (runtime->hasFunction(0x1004E8u)) {
        auto targetFn = runtime->lookupFunction(0x1004E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E60u; }
        if (ctx->pc != 0x100E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E8_0x1004e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E60u; }
        if (ctx->pc != 0x100E60u) { return; }
    }
    ctx->pc = 0x100E60u;
label_100e60:
    // 0x100e60: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x100e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x100e64: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x100e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x100e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e6c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x100e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e70: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x100e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e74: 0xc04027a  jal         func_1009E8
    ctx->pc = 0x100E74u;
    SET_GPR_U32(ctx, 31, 0x100E7Cu);
    ctx->pc = 0x100E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E74u;
            // 0x100e78: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1009E8u;
    if (runtime->hasFunction(0x1009E8u)) {
        auto targetFn = runtime->lookupFunction(0x1009E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E7Cu; }
        if (ctx->pc != 0x100E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001009E8_0x1009e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E7Cu; }
        if (ctx->pc != 0x100E7Cu) { return; }
    }
    ctx->pc = 0x100E7Cu;
label_100e7c:
    // 0x100e7c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x100e7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e80: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x100e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x100e84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x100e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x100e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x100e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e90: 0xc04027a  jal         func_1009E8
    ctx->pc = 0x100E90u;
    SET_GPR_U32(ctx, 31, 0x100E98u);
    ctx->pc = 0x100E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E90u;
            // 0x100e94: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1009E8u;
    if (runtime->hasFunction(0x1009E8u)) {
        auto targetFn = runtime->lookupFunction(0x1009E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E98u; }
        if (ctx->pc != 0x100E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001009E8_0x1009e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E98u; }
        if (ctx->pc != 0x100E98u) { return; }
    }
    ctx->pc = 0x100E98u;
label_100e98:
    // 0x100e98: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x100E98u;
    {
        const bool branch_taken_0x100e98 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E98u;
            // 0x100e9c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e98) {
            ctx->pc = 0x100F10u;
            goto label_100f10;
        }
    }
    ctx->pc = 0x100EA0u;
    // 0x100ea0: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x100ea4: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
    // 0x100ea8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x100ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x100eac: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x100eacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x100eb0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x100eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x100eb4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x100eb8: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x100ebc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x100ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x100ec0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x100ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ec8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x100ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ecc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x100eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ed0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x100ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ed4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x100ed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ed8: 0xc0402f4  jal         func_100BD0
    ctx->pc = 0x100ED8u;
    SET_GPR_U32(ctx, 31, 0x100EE0u);
    ctx->pc = 0x100EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100ED8u;
            // 0x100edc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BD0u;
    if (runtime->hasFunction(0x100BD0u)) {
        auto targetFn = runtime->lookupFunction(0x100BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE0u; }
        if (ctx->pc != 0x100EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BD0_0x100bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE0u; }
        if (ctx->pc != 0x100EE0u) { return; }
    }
    ctx->pc = 0x100EE0u;
label_100ee0:
    // 0x100ee0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x100ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ee8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x100ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100eec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x100eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x100ef0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x100ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x100ef4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x100ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x100ef8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x100ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x100efc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x100efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f00: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x100f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x100f04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f08: 0xc0402f4  jal         func_100BD0
    ctx->pc = 0x100F08u;
    SET_GPR_U32(ctx, 31, 0x100F10u);
    ctx->pc = 0x100F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F08u;
            // 0x100f0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BD0u;
    if (runtime->hasFunction(0x100BD0u)) {
        auto targetFn = runtime->lookupFunction(0x100BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F10u; }
        if (ctx->pc != 0x100F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BD0_0x100bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F10u; }
        if (ctx->pc != 0x100F10u) { return; }
    }
    ctx->pc = 0x100F10u;
label_100f10:
    // 0x100f10: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x100f10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100f14: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x100f18: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x100f18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x100f1c: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x100f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x100f20: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x100f20u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
    // 0x100f24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x100f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x100f28: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x100f28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x100f2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x100f30: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x100f30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x100f34: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x100f34u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x100f38: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x100f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x100f3c: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x100f3cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x100f40: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x100f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x100f44: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x100f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x100f48: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x100f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x100f4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x100f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x100f50: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x100f50u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x100f54: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x100f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x100f58: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x100f58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x100f5c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x100f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x100f60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x100f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100f64: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x100f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x100f68: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x100f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x100f6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x100f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x100f70: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x100f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x100f74: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x100f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x100f78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x100f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x100f7c: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x100f7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x100f80: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x100f80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x100f84: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x100f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x100f88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x100f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x100f8c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x100f8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x100f90: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x100f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x100f94: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x100f94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x100f98: 0xfe460140  sd          $a2, 0x140($s2)
    ctx->pc = 0x100f98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 6));
    // 0x100f9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x100f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fa0: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x100fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
    // 0x100fa4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x100fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fa8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x100fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fac: 0xc040248  jal         func_100920
    ctx->pc = 0x100FACu;
    SET_GPR_U32(ctx, 31, 0x100FB4u);
    ctx->pc = 0x100FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FACu;
            // 0x100fb0: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FB4u; }
        if (ctx->pc != 0x100FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100920_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FB4u; }
        if (ctx->pc != 0x100FB4u) { return; }
    }
    ctx->pc = 0x100FB4u;
label_100fb4:
    // 0x100fb4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100fb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x100fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100fc0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x100fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100fc4: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x100fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x100fc8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x100fc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100fcc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x100fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x100fd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x100fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x100fd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x100fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x100fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x100fdc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100FDCu;
    {
        const bool branch_taken_0x100fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100FDCu;
            // 0x100fe0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fdc) {
            ctx->pc = 0x100FF0u;
            goto label_100ff0;
        }
    }
    ctx->pc = 0x100FE4u;
    // 0x100fe4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x100fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100fe8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x100FE8u;
    {
        const bool branch_taken_0x100fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100FE8u;
            // 0x100fec: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fe8) {
            ctx->pc = 0x10102Cu;
            goto label_10102c;
        }
    }
    ctx->pc = 0x100FF0u;
label_100ff0:
    // 0x100ff0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x100ff4: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x100ff4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x100ff8: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x100ff8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x100ffc: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x100ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x101000: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x101000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x101004: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x101004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x101008: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x101008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10100c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x10100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x101010: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x101010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x101014: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x101014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x101018: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x101018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10101c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10101cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x101020: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x101020u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x101024: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x101024u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
    // 0x101028: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x101028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_10102c:
    // 0x10102c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x10102cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x101030: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x101030u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x101034: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x101034u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101038: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x101038u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10103c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10103cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101040: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x101040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101044: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x101044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101048: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x101048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10104c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10104cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101050: 0x3e00008  jr          $ra
    ctx->pc = 0x101050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101050u;
            // 0x101054: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101058u;
    ctx->pc = 0x101058u;
}
