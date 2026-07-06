#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281D58
// Address: 0x281d58 - 0x281fe0
void sub_00281D58_0x281d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281D58_0x281d58");
#endif

    switch (ctx->pc) {
        case 0x281d90u: goto label_281d90;
        case 0x281da0u: goto label_281da0;
        case 0x281db4u: goto label_281db4;
        case 0x281ddcu: goto label_281ddc;
        case 0x281de8u: goto label_281de8;
        case 0x281df4u: goto label_281df4;
        case 0x281e20u: goto label_281e20;
        case 0x281e6cu: goto label_281e6c;
        case 0x281eb4u: goto label_281eb4;
        case 0x281edcu: goto label_281edc;
        case 0x281f18u: goto label_281f18;
        case 0x281f4cu: goto label_281f4c;
        case 0x281f8cu: goto label_281f8c;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fc0u: goto label_281fc0;
        default: break;
    }

    ctx->pc = 0x281d58u;

    // 0x281d58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x281d5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x281d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x281d60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x281d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x281d64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x281d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x281d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x281d6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d70: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x281d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x281d74: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281D74u;
    {
        const bool branch_taken_0x281d74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x281D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D74u;
            // 0x281d78: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d74) {
            ctx->pc = 0x281D84u;
            goto label_281d84;
        }
    }
    ctx->pc = 0x281D7Cu;
    // 0x281d7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x281D7Cu;
    {
        const bool branch_taken_0x281d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D7Cu;
            // 0x281d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d7c) {
            ctx->pc = 0x281E00u;
            goto label_281e00;
        }
    }
    ctx->pc = 0x281D84u;
label_281d84:
    // 0x281d84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x281d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x281d88: 0xc0a016a  jal         func_2805A8
    ctx->pc = 0x281D88u;
    SET_GPR_U32(ctx, 31, 0x281D90u);
    ctx->pc = 0x281D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D88u;
            // 0x281d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2805A8u;
    if (runtime->hasFunction(0x2805A8u)) {
        auto targetFn = runtime->lookupFunction(0x2805A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D90u; }
        if (ctx->pc != 0x281D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002805A8_0x2805a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D90u; }
        if (ctx->pc != 0x281D90u) { return; }
    }
    ctx->pc = 0x281D90u;
label_281d90:
    // 0x281d90: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x281d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x281d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d98: 0xc0a03f8  jal         func_280FE0
    ctx->pc = 0x281D98u;
    SET_GPR_U32(ctx, 31, 0x281DA0u);
    ctx->pc = 0x281D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D98u;
            // 0x281d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280FE0u;
    if (runtime->hasFunction(0x280FE0u)) {
        auto targetFn = runtime->lookupFunction(0x280FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DA0u; }
        if (ctx->pc != 0x281DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280FE0_0x280fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DA0u; }
        if (ctx->pc != 0x281DA0u) { return; }
    }
    ctx->pc = 0x281DA0u;
label_281da0:
    // 0x281da0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x281da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x281da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x281da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281dac: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x281DACu;
    SET_GPR_U32(ctx, 31, 0x281DB4u);
    ctx->pc = 0x281DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281DACu;
            // 0x281db0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DB4u; }
        if (ctx->pc != 0x281DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DB4u; }
        if (ctx->pc != 0x281DB4u) { return; }
    }
    ctx->pc = 0x281DB4u;
label_281db4:
    // 0x281db4: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x281DB4u;
    {
        const bool branch_taken_0x281db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281DB4u;
            // 0x281db8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281db4) {
            ctx->pc = 0x281E00u;
            goto label_281e00;
        }
    }
    ctx->pc = 0x281DBCu;
    // 0x281dbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x281dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x281dc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x281dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281dc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281dc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281dcc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x281dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x281dd0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x281dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281dd4: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x281DD4u;
    SET_GPR_U32(ctx, 31, 0x281DDCu);
    ctx->pc = 0x281DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281DD4u;
            // 0x281dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DDCu; }
        if (ctx->pc != 0x281DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DDCu; }
        if (ctx->pc != 0x281DDCu) { return; }
    }
    ctx->pc = 0x281DDCu;
label_281ddc:
    // 0x281ddc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x281ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x281de0: 0xc0a016a  jal         func_2805A8
    ctx->pc = 0x281DE0u;
    SET_GPR_U32(ctx, 31, 0x281DE8u);
    ctx->pc = 0x281DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281DE0u;
            // 0x281de4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2805A8u;
    if (runtime->hasFunction(0x2805A8u)) {
        auto targetFn = runtime->lookupFunction(0x2805A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DE8u; }
        if (ctx->pc != 0x281DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002805A8_0x2805a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DE8u; }
        if (ctx->pc != 0x281DE8u) { return; }
    }
    ctx->pc = 0x281DE8u;
label_281de8:
    // 0x281de8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x281de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x281dec: 0xc0a03f8  jal         func_280FE0
    ctx->pc = 0x281DECu;
    SET_GPR_U32(ctx, 31, 0x281DF4u);
    ctx->pc = 0x281DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281DECu;
            // 0x281df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280FE0u;
    if (runtime->hasFunction(0x280FE0u)) {
        auto targetFn = runtime->lookupFunction(0x280FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DF4u; }
        if (ctx->pc != 0x281DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280FE0_0x280fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DF4u; }
        if (ctx->pc != 0x281DF4u) { return; }
    }
    ctx->pc = 0x281DF4u;
label_281df4:
    // 0x281df4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x281df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281df8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x281df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281dfc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x281dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_281e00:
    // 0x281e00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x281e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281e04: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x281e04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281e08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x281e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281e0c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x281e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281e10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x281e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281e14: 0x3e00008  jr          $ra
    ctx->pc = 0x281E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E14u;
            // 0x281e18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281E1Cu;
    // 0x281e1c: 0x0  nop
    ctx->pc = 0x281e1cu;
    // NOP
label_281e20:
    // 0x281e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x281e24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x281e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281e28: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x281e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x281e2c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x281e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x281e30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x281e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x281e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x281e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e3c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x281e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x281e40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x281e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x281e44: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x281e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x281e48: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x281e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x281e4c: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x281e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x281e50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281E50u;
    {
        const bool branch_taken_0x281e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E50u;
            // 0x281e54: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e50) {
            ctx->pc = 0x281E64u;
            goto label_281e64;
        }
    }
    ctx->pc = 0x281E58u;
    // 0x281e58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x281e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281e5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281E5Cu;
    {
        const bool branch_taken_0x281e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E5Cu;
            // 0x281e60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e5c) {
            ctx->pc = 0x281E84u;
            goto label_281e84;
        }
    }
    ctx->pc = 0x281E64u;
label_281e64:
    // 0x281e64: 0xc0a096e  jal         func_2825B8
    ctx->pc = 0x281E64u;
    SET_GPR_U32(ctx, 31, 0x281E6Cu);
    ctx->pc = 0x2825B8u;
    if (runtime->hasFunction(0x2825B8u)) {
        auto targetFn = runtime->lookupFunction(0x2825B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E6Cu; }
        if (ctx->pc != 0x281E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002825B8_0x2825b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E6Cu; }
        if (ctx->pc != 0x281E6Cu) { return; }
    }
    ctx->pc = 0x281E6Cu;
label_281e6c:
    // 0x281e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e70: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x281E70u;
    {
        const bool branch_taken_0x281e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x281e70) {
            ctx->pc = 0x281E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281E70u;
            // 0x281e74: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281E84u;
            goto label_281e84;
        }
    }
    ctx->pc = 0x281E78u;
    // 0x281e78: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x281e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x281e7c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x281E7Cu;
    {
        const bool branch_taken_0x281e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E7Cu;
            // 0x281e80: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e7c) {
            ctx->pc = 0x281F74u;
            goto label_281f74;
        }
    }
    ctx->pc = 0x281E84u;
label_281e84:
    // 0x281e84: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x281e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281e88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281E88u;
    {
        const bool branch_taken_0x281e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E88u;
            // 0x281e8c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e88) {
            ctx->pc = 0x281EA0u;
            goto label_281ea0;
        }
    }
    ctx->pc = 0x281E90u;
    // 0x281e90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x281e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x281e94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x281e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x281e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281E98u;
    {
        const bool branch_taken_0x281e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E98u;
            // 0x281e9c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e98) {
            ctx->pc = 0x281EA4u;
            goto label_281ea4;
        }
    }
    ctx->pc = 0x281EA0u;
label_281ea0:
    // 0x281ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281ea4:
    // 0x281ea4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x281ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x281ea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281eac: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x281EACu;
    SET_GPR_U32(ctx, 31, 0x281EB4u);
    ctx->pc = 0x281EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281EACu;
            // 0x281eb0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EB4u; }
        if (ctx->pc != 0x281EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EB4u; }
        if (ctx->pc != 0x281EB4u) { return; }
    }
    ctx->pc = 0x281EB4u;
label_281eb4:
    // 0x281eb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281EB4u;
    {
        const bool branch_taken_0x281eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EB4u;
            // 0x281eb8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281eb4) {
            ctx->pc = 0x281EC8u;
            goto label_281ec8;
        }
    }
    ctx->pc = 0x281EBCu;
    // 0x281ebc: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x281ec0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x281EC0u;
    {
        const bool branch_taken_0x281ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EC0u;
            // 0x281ec4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ec0) {
            ctx->pc = 0x281F74u;
            goto label_281f74;
        }
    }
    ctx->pc = 0x281EC8u;
label_281ec8:
    // 0x281ec8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x281ecc: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x281eccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x281ed0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x281ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ed4: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x281ED4u;
    SET_GPR_U32(ctx, 31, 0x281EDCu);
    ctx->pc = 0x281ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281ED4u;
            // 0x281ed8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280CC0u;
    if (runtime->hasFunction(0x280CC0u)) {
        auto targetFn = runtime->lookupFunction(0x280CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EDCu; }
        if (ctx->pc != 0x281EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280CC0_0x280cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EDCu; }
        if (ctx->pc != 0x281EDCu) { return; }
    }
    ctx->pc = 0x281EDCu;
label_281edc:
    // 0x281edc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281EDCu;
    {
        const bool branch_taken_0x281edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EDCu;
            // 0x281ee0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281edc) {
            ctx->pc = 0x281EF0u;
            goto label_281ef0;
        }
    }
    ctx->pc = 0x281EE4u;
    // 0x281ee4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x281ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x281ee8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x281EE8u;
    {
        const bool branch_taken_0x281ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EE8u;
            // 0x281eec: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ee8) {
            ctx->pc = 0x281F74u;
            goto label_281f74;
        }
    }
    ctx->pc = 0x281EF0u;
label_281ef0:
    // 0x281ef0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x281ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x281ef4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x281ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x281ef8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x281ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281efc: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x281efcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x281f00: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x281f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x281f04: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x281f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x281f08: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x281f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x281f0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x281f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f10: 0xc0a0400  jal         func_281000
    ctx->pc = 0x281F10u;
    SET_GPR_U32(ctx, 31, 0x281F18u);
    ctx->pc = 0x281F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F10u;
            // 0x281f14: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281000u;
    if (runtime->hasFunction(0x281000u)) {
        auto targetFn = runtime->lookupFunction(0x281000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F18u; }
        if (ctx->pc != 0x281F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281000_0x281000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F18u; }
        if (ctx->pc != 0x281F18u) { return; }
    }
    ctx->pc = 0x281F18u;
label_281f18:
    // 0x281f18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281F18u;
    {
        const bool branch_taken_0x281f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F18u;
            // 0x281f1c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f18) {
            ctx->pc = 0x281F2Cu;
            goto label_281f2c;
        }
    }
    ctx->pc = 0x281F20u;
    // 0x281f20: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x281f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x281f24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x281F24u;
    {
        const bool branch_taken_0x281f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F24u;
            // 0x281f28: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f24) {
            ctx->pc = 0x281F74u;
            goto label_281f74;
        }
    }
    ctx->pc = 0x281F2Cu;
label_281f2c:
    // 0x281f2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f30: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x281f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x281f34: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x281f34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x281f38: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x281f3c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x281f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x281f40: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x281f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x281f44: 0xc0a065c  jal         func_281970
    ctx->pc = 0x281F44u;
    SET_GPR_U32(ctx, 31, 0x281F4Cu);
    ctx->pc = 0x281F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F44u;
            // 0x281f48: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F4Cu; }
        if (ctx->pc != 0x281F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F4Cu; }
        if (ctx->pc != 0x281F4Cu) { return; }
    }
    ctx->pc = 0x281F4Cu;
label_281f4c:
    // 0x281f4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281F4Cu;
    {
        const bool branch_taken_0x281f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F4Cu;
            // 0x281f50: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f4c) {
            ctx->pc = 0x281F60u;
            goto label_281f60;
        }
    }
    ctx->pc = 0x281F54u;
    // 0x281f54: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x281f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x281f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281F58u;
    {
        const bool branch_taken_0x281f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F58u;
            // 0x281f5c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f58) {
            ctx->pc = 0x281F74u;
            goto label_281f74;
        }
    }
    ctx->pc = 0x281F60u;
label_281f60:
    // 0x281f60: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x281F60u;
    {
        const bool branch_taken_0x281f60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F60u;
            // 0x281f64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f60) {
            ctx->pc = 0x281F6Cu;
            goto label_281f6c;
        }
    }
    ctx->pc = 0x281F68u;
    // 0x281f68: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x281f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_281f6c:
    // 0x281f6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x281F6Cu;
    {
        const bool branch_taken_0x281f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F6Cu;
            // 0x281f70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f6c) {
            ctx->pc = 0x281FC4u;
            goto label_281fc4;
        }
    }
    ctx->pc = 0x281F74u;
label_281f74:
    // 0x281f74: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x281f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x281f78: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x281f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x281f7c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x281f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x281f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f84: 0xc0a5648  jal         func_295920
    ctx->pc = 0x281F84u;
    SET_GPR_U32(ctx, 31, 0x281F8Cu);
    ctx->pc = 0x281F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F84u;
            // 0x281f88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F8Cu; }
        if (ctx->pc != 0x281F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F8Cu; }
        if (ctx->pc != 0x281F8Cu) { return; }
    }
    ctx->pc = 0x281F8Cu;
label_281f8c:
    // 0x281f8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x281f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x281f90: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x281f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x281f94: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x281F94u;
    SET_GPR_U32(ctx, 31, 0x281F9Cu);
    ctx->pc = 0x281F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F94u;
            // 0x281f98: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F9Cu; }
        if (ctx->pc != 0x281F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F9Cu; }
        if (ctx->pc != 0x281F9Cu) { return; }
    }
    ctx->pc = 0x281F9Cu;
label_281f9c:
    // 0x281f9c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281F9Cu;
    {
        const bool branch_taken_0x281f9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F9Cu;
            // 0x281fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f9c) {
            ctx->pc = 0x281FC4u;
            goto label_281fc4;
        }
    }
    ctx->pc = 0x281FA4u;
    // 0x281fa4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281FA4u;
    {
        const bool branch_taken_0x281fa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x281fa4) {
            ctx->pc = 0x281FB8u;
            goto label_281fb8;
        }
    }
    ctx->pc = 0x281FACu;
    // 0x281fac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x281facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281fb0: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281FB0u;
    {
        const bool branch_taken_0x281fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x281FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281FB0u;
            // 0x281fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fb0) {
            ctx->pc = 0x281FC4u;
            goto label_281fc4;
        }
    }
    ctx->pc = 0x281FB8u;
label_281fb8:
    // 0x281fb8: 0xc0a098c  jal         func_282630
    ctx->pc = 0x281FB8u;
    SET_GPR_U32(ctx, 31, 0x281FC0u);
    ctx->pc = 0x281FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FB8u;
            // 0x281fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282630u;
    if (runtime->hasFunction(0x282630u)) {
        auto targetFn = runtime->lookupFunction(0x282630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FC0u; }
        if (ctx->pc != 0x281FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282630_0x282630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FC0u; }
        if (ctx->pc != 0x281FC0u) { return; }
    }
    ctx->pc = 0x281FC0u;
label_281fc0:
    // 0x281fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281fc4:
    // 0x281fc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x281fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281fc8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x281fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281fcc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x281fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281fd0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x281fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x281FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281FD4u;
            // 0x281fd8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281FDCu;
    // 0x281fdc: 0x0  nop
    ctx->pc = 0x281fdcu;
    // NOP
    ctx->pc = 0x281fe0u;
}
