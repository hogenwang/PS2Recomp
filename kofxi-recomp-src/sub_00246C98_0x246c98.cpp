#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00246C98
// Address: 0x246c98 - 0x247298
void sub_00246C98_0x246c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246C98_0x246c98");
#endif

    switch (ctx->pc) {
        case 0x246d00u: goto label_246d00;
        case 0x246d60u: goto label_246d60;
        case 0x246d70u: goto label_246d70;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d9cu: goto label_246d9c;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246decu: goto label_246dec;
        case 0x246e08u: goto label_246e08;
        case 0x246e20u: goto label_246e20;
        case 0x246e28u: goto label_246e28;
        case 0x246e44u: goto label_246e44;
        case 0x246e54u: goto label_246e54;
        case 0x246e7cu: goto label_246e7c;
        case 0x246ea4u: goto label_246ea4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246edcu: goto label_246edc;
        case 0x246ef0u: goto label_246ef0;
        case 0x246f10u: goto label_246f10;
        case 0x246f74u: goto label_246f74;
        case 0x246f8cu: goto label_246f8c;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fbcu: goto label_246fbc;
        case 0x247044u: goto label_247044;
        case 0x24709cu: goto label_24709c;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470f0u: goto label_2470f0;
        case 0x24710cu: goto label_24710c;
        case 0x247140u: goto label_247140;
        case 0x2471ccu: goto label_2471cc;
        case 0x247234u: goto label_247234;
        case 0x247244u: goto label_247244;
        case 0x247254u: goto label_247254;
        case 0x24725cu: goto label_24725c;
        case 0x24727cu: goto label_24727c;
        default: break;
    }

    ctx->pc = 0x246c98u;

    // 0x246c98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x246c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c9c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x246c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x246ca0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x246ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x246ca4: 0x246767f0  addiu       $a3, $v1, 0x67F0
    ctx->pc = 0x246ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 26608));
    // 0x246ca8: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x246ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x246cac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246cb0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x246cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x246cb4: 0x2588adf8  addiu       $t0, $t4, -0x5208
    ctx->pc = 0x246cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4294946296));
    // 0x246cb8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x246cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x246cbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x246cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x246cc0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x246cc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246cc4: 0x125202a  slt         $a0, $t1, $a1
    ctx->pc = 0x246cc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x246cc8: 0xa183adf8  sb          $v1, -0x5208($t4)
    ctx->pc = 0x246cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294946296), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ccc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x246cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x246cd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x246cd4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x246cd8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x246cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x246cdc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x246cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246ce0: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x246ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ce4: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x246CE4u;
    {
        const bool branch_taken_0x246ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246CE4u;
            // 0x246ce8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ce4) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246CECu;
    // 0x246cec: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x246cecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cf0: 0x240d003a  addiu       $t5, $zero, 0x3A
    ctx->pc = 0x246cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x246cf4: 0x25070002  addiu       $a3, $t0, 0x2
    ctx->pc = 0x246cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x246cf8: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x246cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x246cfc: 0xa0edfffe  sb          $t5, -0x2($a3)
    ctx->pc = 0x246cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967294), (uint8_t)GPR_U32(ctx, 13));
label_246d00:
    // 0x246d00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x246d04: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x246d08: 0x125202a  slt         $a0, $t1, $a1
    ctx->pc = 0x246d08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x246d0c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x246d0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x246d10: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x246d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x246d14: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x246d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x246d18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x246d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246d1c: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x246d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x246d20: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x246d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x246d24: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x246d24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x246d28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x246d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x246d2c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x246d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x246d30: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x246d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x246d34: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x246d34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246d38: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x246d38u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x246d3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246D3Cu;
    {
        const bool branch_taken_0x246d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246D3Cu;
            // 0x246d40: 0x24e70003  addiu       $a3, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d3c) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246D44u;
    // 0x246d44: 0x29220010  slti        $v0, $t1, 0x10
    ctx->pc = 0x246d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x246d48: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x246D48u;
    {
        const bool branch_taken_0x246d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d48) {
            ctx->pc = 0x246D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x246D48u;
            // 0x246d4c: 0xa0edfffe  sb          $t5, -0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4294967294), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x246D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x246D50u;
label_246d50:
    // 0x246d50: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x246d50u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d54: 0x3e00008  jr          $ra
    ctx->pc = 0x246D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246D54u;
            // 0x246d58: 0x2582adf8  addiu       $v0, $t4, -0x5208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294946296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x246D5Cu;
    // 0x246d5c: 0x0  nop
    ctx->pc = 0x246d5cu;
    // NOP
label_246d60:
    // 0x246d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246d68: 0xc08c682  jal         func_231A08
    ctx->pc = 0x246D68u;
    SET_GPR_U32(ctx, 31, 0x246D70u);
    ctx->pc = 0x246D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D68u;
            // 0x246d6c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D70u; }
        if (ctx->pc != 0x246D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D70u; }
        if (ctx->pc != 0x246D70u) { return; }
    }
    ctx->pc = 0x246D70u;
label_246d70:
    // 0x246d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d74: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x246d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x246d78: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x246d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x246d7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246D7Cu;
    {
        const bool branch_taken_0x246d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246D7Cu;
            // 0x246d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d7c) {
            ctx->pc = 0x246D94u;
            goto label_246d94;
        }
    }
    ctx->pc = 0x246D84u;
    // 0x246d84: 0xc08c698  jal         func_231A60
    ctx->pc = 0x246D84u;
    SET_GPR_U32(ctx, 31, 0x246D8Cu);
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D8Cu; }
        if (ctx->pc != 0x246D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D8Cu; }
        if (ctx->pc != 0x246D8Cu) { return; }
    }
    ctx->pc = 0x246D8Cu;
label_246d8c:
    // 0x246d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246D8Cu;
    {
        const bool branch_taken_0x246d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246D8Cu;
            // 0x246d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d8c) {
            ctx->pc = 0x246DA0u;
            goto label_246da0;
        }
    }
    ctx->pc = 0x246D94u;
label_246d94:
    // 0x246d94: 0xc08c698  jal         func_231A60
    ctx->pc = 0x246D94u;
    SET_GPR_U32(ctx, 31, 0x246D9Cu);
    ctx->pc = 0x246D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D94u;
            // 0x246d98: 0xac620140  sw          $v0, 0x140($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D9Cu; }
        if (ctx->pc != 0x246D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D9Cu; }
        if (ctx->pc != 0x246D9Cu) { return; }
    }
    ctx->pc = 0x246D9Cu;
label_246d9c:
    // 0x246d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246da0:
    // 0x246da0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246DA0u;
    {
        const bool branch_taken_0x246da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246DA0u;
            // 0x246da4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246da0) {
            ctx->pc = 0x246DC4u;
            goto label_246dc4;
        }
    }
    ctx->pc = 0x246DA8u;
    // 0x246da8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x246da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x246dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246db4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x246db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x246db8: 0x24a56808  addiu       $a1, $a1, 0x6808
    ctx->pc = 0x246db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
    // 0x246dbc: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x246DBCu;
    ctx->pc = 0x246DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246DBCu;
            // 0x246dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x246DC4u;
label_246dc4:
    // 0x246dc4: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x246dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x246dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246DC8u;
    {
        const bool branch_taken_0x246dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246DC8u;
            // 0x246dcc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dc8) {
            ctx->pc = 0x246DFCu;
            goto label_246dfc;
        }
    }
    ctx->pc = 0x246DD0u;
    // 0x246dd0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x246dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x246dd4: 0x0  nop
    ctx->pc = 0x246dd4u;
    // NOP
label_246dd8:
    // 0x246dd8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x246dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x246ddc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246DDCu;
    {
        const bool branch_taken_0x246ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246DDCu;
            // 0x246de0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ddc) {
            ctx->pc = 0x246DECu;
            goto label_246dec;
        }
    }
    ctx->pc = 0x246DE4u;
    // 0x246de4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x246DE4u;
    SET_GPR_U32(ctx, 31, 0x246DECu);
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246DECu; }
        if (ctx->pc != 0x246DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246DECu; }
        if (ctx->pc != 0x246DECu) { return; }
    }
    ctx->pc = 0x246DECu;
label_246dec:
    // 0x246dec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246df0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x246DF0u;
    {
        const bool branch_taken_0x246df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246df0) {
            ctx->pc = 0x246DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x246DF0u;
            // 0x246df4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x246DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246dd8;
        }
    }
    ctx->pc = 0x246DF8u;
    // 0x246df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_246dfc:
    // 0x246dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246e00: 0x809216e  j           func_2485B8
    ctx->pc = 0x246E00u;
    ctx->pc = 0x246E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E00u;
            // 0x246e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (runtime->hasFunction(0x2485B8u)) {
        auto targetFn = runtime->lookupFunction(0x2485B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002485B8_0x2485b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x246E08u;
label_246e08:
    // 0x246e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x246e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x246e0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x246e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x246e10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x246e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x246e14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x246e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x246e18: 0xc08c682  jal         func_231A08
    ctx->pc = 0x246E18u;
    SET_GPR_U32(ctx, 31, 0x246E20u);
    ctx->pc = 0x246E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E18u;
            // 0x246e1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E20u; }
        if (ctx->pc != 0x246E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E20u; }
        if (ctx->pc != 0x246E20u) { return; }
    }
    ctx->pc = 0x246E20u;
label_246e20:
    // 0x246e20: 0xc08c682  jal         func_231A08
    ctx->pc = 0x246E20u;
    SET_GPR_U32(ctx, 31, 0x246E28u);
    ctx->pc = 0x246E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E20u;
            // 0x246e24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E28u; }
        if (ctx->pc != 0x246E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E28u; }
        if (ctx->pc != 0x246E28u) { return; }
    }
    ctx->pc = 0x246E28u;
label_246e28:
    // 0x246e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e2c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x246e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x246e30: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x246e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x246e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246E34u;
    {
        const bool branch_taken_0x246e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E34u;
            // 0x246e38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e34) {
            ctx->pc = 0x246E4Cu;
            goto label_246e4c;
        }
    }
    ctx->pc = 0x246E3Cu;
    // 0x246e3c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x246E3Cu;
    SET_GPR_U32(ctx, 31, 0x246E44u);
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E44u; }
        if (ctx->pc != 0x246E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E44u; }
        if (ctx->pc != 0x246E44u) { return; }
    }
    ctx->pc = 0x246E44u;
label_246e44:
    // 0x246e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246E44u;
    {
        const bool branch_taken_0x246e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E44u;
            // 0x246e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e44) {
            ctx->pc = 0x246E58u;
            goto label_246e58;
        }
    }
    ctx->pc = 0x246E4Cu;
label_246e4c:
    // 0x246e4c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x246E4Cu;
    SET_GPR_U32(ctx, 31, 0x246E54u);
    ctx->pc = 0x246E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E4Cu;
            // 0x246e50: 0xac620140  sw          $v0, 0x140($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E54u; }
        if (ctx->pc != 0x246E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E54u; }
        if (ctx->pc != 0x246E54u) { return; }
    }
    ctx->pc = 0x246E54u;
label_246e54:
    // 0x246e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246e58:
    // 0x246e58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246E58u;
    {
        const bool branch_taken_0x246e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E58u;
            // 0x246e5c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e58) {
            ctx->pc = 0x246E7Cu;
            goto label_246e7c;
        }
    }
    ctx->pc = 0x246E60u;
    // 0x246e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x246e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246e68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x246e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246e6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x246e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246e74: 0x808c698  j           func_231A60
    ctx->pc = 0x246E74u;
    ctx->pc = 0x246E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E74u;
            // 0x246e78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x246E7Cu;
label_246e7c:
    // 0x246e7c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x246e80: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x246e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x246e84: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x246e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x246e88: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x246e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x246e8c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x246e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x246e90: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x246e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x246e94: 0x24c66e08  addiu       $a2, $a2, 0x6E08
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28168));
    // 0x246e98: 0x2812  mflo        $a1
    ctx->pc = 0x246e98u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x246e9c: 0xc08a058  jal         func_228160
    ctx->pc = 0x246E9Cu;
    SET_GPR_U32(ctx, 31, 0x246EA4u);
    ctx->pc = 0x246EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E9Cu;
            // 0x246ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EA4u; }
        if (ctx->pc != 0x246EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EA4u; }
        if (ctx->pc != 0x246EA4u) { return; }
    }
    ctx->pc = 0x246EA4u;
label_246ea4:
    // 0x246ea4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x246ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x246ea8: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x246ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x246eac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x246EACu;
    {
        const bool branch_taken_0x246eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246EACu;
            // 0x246eb0: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246eac) {
            ctx->pc = 0x246EE8u;
            goto label_246ee8;
        }
    }
    ctx->pc = 0x246EB4u;
    // 0x246eb4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x246eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_246eb8:
    // 0x246eb8: 0xdc430070  ld          $v1, 0x70($v0)
    ctx->pc = 0x246eb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x246ebc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x246EBCu;
    {
        const bool branch_taken_0x246ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246EBCu;
            // 0x246ec0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ebc) {
            ctx->pc = 0x246EDCu;
            goto label_246edc;
        }
    }
    ctx->pc = 0x246EC4u;
    // 0x246ec4: 0xde2217c0  ld          $v0, 0x17C0($s1)
    ctx->pc = 0x246ec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 6080)));
    // 0x246ec8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x246ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x246ecc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x246ECCu;
    {
        const bool branch_taken_0x246ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246ecc) {
            ctx->pc = 0x246ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x246ECCu;
            // 0x246ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x246EE0u;
            goto label_246ee0;
        }
    }
    ctx->pc = 0x246ED4u;
    // 0x246ed4: 0xc091fa2  jal         func_247E88
    ctx->pc = 0x246ED4u;
    SET_GPR_U32(ctx, 31, 0x246EDCu);
    ctx->pc = 0x247E88u;
    if (runtime->hasFunction(0x247E88u)) {
        auto targetFn = runtime->lookupFunction(0x247E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EDCu; }
        if (ctx->pc != 0x246EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247E88_0x247e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EDCu; }
        if (ctx->pc != 0x246EDCu) { return; }
    }
    ctx->pc = 0x246EDCu;
label_246edc:
    // 0x246edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246ee0:
    // 0x246ee0: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x246EE0u;
    {
        const bool branch_taken_0x246ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246ee0) {
            ctx->pc = 0x246EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x246EE0u;
            // 0x246ee4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x246EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246eb8;
        }
    }
    ctx->pc = 0x246EE8u;
label_246ee8:
    // 0x246ee8: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x246EE8u;
    SET_GPR_U32(ctx, 31, 0x246EF0u);
    ctx->pc = 0x2485B8u;
    if (runtime->hasFunction(0x2485B8u)) {
        auto targetFn = runtime->lookupFunction(0x2485B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EF0u; }
        if (ctx->pc != 0x246EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002485B8_0x2485b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EF0u; }
        if (ctx->pc != 0x246EF0u) { return; }
    }
    ctx->pc = 0x246EF0u;
label_246ef0:
    // 0x246ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ef4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x246ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246ef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x246ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246efc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x246efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246f04: 0x808c698  j           func_231A60
    ctx->pc = 0x246F04u;
    ctx->pc = 0x246F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F04u;
            // 0x246f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x246F0Cu;
    // 0x246f0c: 0x0  nop
    ctx->pc = 0x246f0cu;
    // NOP
label_246f10:
    // 0x246f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x246f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x246f14: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x246f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x246f18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x246f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x246f1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x246f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x246f20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x246f20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x246f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x246f28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x246f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x246f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x246f30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x246f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x246f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246f38: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x246f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x246f3c: 0x8e530030  lw          $s3, 0x30($s2)
    ctx->pc = 0x246f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x246f40: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x246F40u;
    {
        const bool branch_taken_0x246f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246F40u;
            // 0x246f44: 0x8e510054  lw          $s1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f40) {
            ctx->pc = 0x246F8Cu;
            goto label_246f8c;
        }
    }
    ctx->pc = 0x246F48u;
    // 0x246f48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x246f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x246f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246f50: 0xdc8317c0  ld          $v1, 0x17C0($a0)
    ctx->pc = 0x246f50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x246f54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246F54u;
    {
        const bool branch_taken_0x246f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246F54u;
            // 0x246f58: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f54) {
            ctx->pc = 0x246F64u;
            goto label_246f64;
        }
    }
    ctx->pc = 0x246F5Cu;
    // 0x246f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246f60: 0xfc8217c0  sd          $v0, 0x17C0($a0)
    ctx->pc = 0x246f60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 6080), GPR_U64(ctx, 2));
label_246f64:
    // 0x246f64: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x246f64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x246f68: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x246f6c: 0xc08a054  jal         func_228150
    ctx->pc = 0x246F6Cu;
    SET_GPR_U32(ctx, 31, 0x246F74u);
    ctx->pc = 0x246F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F6Cu;
            // 0x246f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F74u; }
        if (ctx->pc != 0x246F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228150_0x228150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F74u; }
        if (ctx->pc != 0x246F74u) { return; }
    }
    ctx->pc = 0x246F74u;
label_246f74:
    // 0x246f74: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x246f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x246f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f7c: 0x24c66e08  addiu       $a2, $a2, 0x6E08
    ctx->pc = 0x246f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28168));
    // 0x246f80: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x246f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x246f84: 0xc08a058  jal         func_228160
    ctx->pc = 0x246F84u;
    SET_GPR_U32(ctx, 31, 0x246F8Cu);
    ctx->pc = 0x246F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F84u;
            // 0x246f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F8Cu; }
        if (ctx->pc != 0x246F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F8Cu; }
        if (ctx->pc != 0x246F8Cu) { return; }
    }
    ctx->pc = 0x246F8Cu;
label_246f8c:
    // 0x246f8c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x246f90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x246f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x246f94: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x246F94u;
    {
        const bool branch_taken_0x246f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246F94u;
            // 0x246f98: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f94) {
            ctx->pc = 0x24727Cu;
            goto label_24727c;
        }
    }
    ctx->pc = 0x246F9Cu;
    // 0x246f9c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x246F9Cu;
    SET_GPR_U32(ctx, 31, 0x246FA4u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FA4u; }
        if (ctx->pc != 0x246FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FA4u; }
        if (ctx->pc != 0x246FA4u) { return; }
    }
    ctx->pc = 0x246FA4u;
label_246fa4:
    // 0x246fa4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x246fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x246fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fac: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x246facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x246fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246fb4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x246FB4u;
    SET_GPR_U32(ctx, 31, 0x246FBCu);
    ctx->pc = 0x246FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246FB4u;
            // 0x246fb8: 0xac620140  sw          $v0, 0x140($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FBCu; }
        if (ctx->pc != 0x246FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FBCu; }
        if (ctx->pc != 0x246FBCu) { return; }
    }
    ctx->pc = 0x246FBCu;
label_246fbc:
    // 0x246fbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246fc0: 0x12820089  beq         $s4, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x246FC0u;
    {
        const bool branch_taken_0x246fc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x246FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FC0u;
            // 0x246fc4: 0x2a820003  slti        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fc0) {
            ctx->pc = 0x2471E8u;
            goto label_2471e8;
        }
    }
    ctx->pc = 0x246FC8u;
    // 0x246fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246FC8u;
    {
        const bool branch_taken_0x246fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FC8u;
            // 0x246fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fc8) {
            ctx->pc = 0x246FE0u;
            goto label_246fe0;
        }
    }
    ctx->pc = 0x246FD0u;
    // 0x246fd0: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246FD0u;
    {
        const bool branch_taken_0x246fd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x246FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FD0u;
            // 0x246fd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fd0) {
            ctx->pc = 0x246FF4u;
            goto label_246ff4;
        }
    }
    ctx->pc = 0x246FD8u;
    // 0x246fd8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x246FD8u;
    {
        const bool branch_taken_0x246fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FD8u;
            // 0x246fdc: 0xdfb40040  ld          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fd8) {
            ctx->pc = 0x247264u;
            goto label_247264;
        }
    }
    ctx->pc = 0x246FE0u;
label_246fe0:
    // 0x246fe0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x246fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x246fe4: 0x1282002d  beq         $s4, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x246FE4u;
    {
        const bool branch_taken_0x246fe4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x246FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FE4u;
            // 0x246fe8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fe4) {
            ctx->pc = 0x24709Cu;
            goto label_24709c;
        }
    }
    ctx->pc = 0x246FECu;
    // 0x246fec: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x246FECu;
    {
        const bool branch_taken_0x246fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FECu;
            // 0x246ff0: 0xdfb40040  ld          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fec) {
            ctx->pc = 0x247264u;
            goto label_247264;
        }
    }
    ctx->pc = 0x246FF4u;
label_246ff4:
    // 0x246ff4: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x246ff8: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x246ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x246ffc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246FFCu;
    {
        const bool branch_taken_0x246ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FFCu;
            // 0x247000: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ffc) {
            ctx->pc = 0x24702Cu;
            goto label_24702c;
        }
    }
    ctx->pc = 0x247004u;
    // 0x247004: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x247004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x247008: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x247008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x24700c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x247010: 0x88440007  lwl         $a0, 0x7($v0)
    ctx->pc = 0x247010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x247014: 0x98440004  lwr         $a0, 0x4($v0)
    ctx->pc = 0x247014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x247018: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x247018u;
    {
        const bool branch_taken_0x247018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247018u;
            // 0x24701c: 0x34a20100  ori         $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247018) {
            ctx->pc = 0x247028u;
            goto label_247028;
        }
    }
    ctx->pc = 0x247020u;
    // 0x247020: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x247020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x247024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247028:
    // 0x247028: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x247028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_24702c:
    // 0x24702c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24702Cu;
    {
        const bool branch_taken_0x24702c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24702Cu;
            // 0x247030: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24702c) {
            ctx->pc = 0x247070u;
            goto label_247070;
        }
    }
    ctx->pc = 0x247034u;
    // 0x247034: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x247034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x247038: 0x24c600f8  addiu       $a2, $a2, 0xF8
    ctx->pc = 0x247038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 248));
    // 0x24703c: 0xc090eec  jal         func_243BB0
    ctx->pc = 0x24703Cu;
    SET_GPR_U32(ctx, 31, 0x247044u);
    ctx->pc = 0x247040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24703Cu;
            // 0x247040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243BB0u;
    if (runtime->hasFunction(0x243BB0u)) {
        auto targetFn = runtime->lookupFunction(0x243BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247044u; }
        if (ctx->pc != 0x247044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243BB0_0x243bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247044u; }
        if (ctx->pc != 0x247044u) { return; }
    }
    ctx->pc = 0x247044u;
label_247044:
    // 0x247044: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x247048: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x247048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24704c: 0x8e530030  lw          $s3, 0x30($s2)
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x247050: 0x90620038  lbu         $v0, 0x38($v1)
    ctx->pc = 0x247050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x247054: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x247054u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x247058: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x247058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x24705c: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x24705cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x247060: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x247060u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x247064: 0xdc8317c0  ld          $v1, 0x17C0($a0)
    ctx->pc = 0x247064u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x247068: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x247068u;
    {
        const bool branch_taken_0x247068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247068u;
            // 0x24706c: 0xfe430070  sd          $v1, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247068) {
            ctx->pc = 0x24725Cu;
            goto label_24725c;
        }
    }
    ctx->pc = 0x247070u;
label_247070:
    // 0x247070: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x247070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x247074: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x247074u;
    {
        const bool branch_taken_0x247074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247074) {
            ctx->pc = 0x247078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247074u;
            // 0x247078: 0x92630001  lbu         $v1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2470A0u;
            goto label_2470a0;
        }
    }
    ctx->pc = 0x24707Cu;
    // 0x24707c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x24707cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x247080: 0x92670005  lbu         $a3, 0x5($s3)
    ctx->pc = 0x247080u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x247084: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x247084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x247088: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x24708c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x24708cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x247090: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x247090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247094: 0xc091ca6  jal         func_247298
    ctx->pc = 0x247094u;
    SET_GPR_U32(ctx, 31, 0x24709Cu);
    ctx->pc = 0x247098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247094u;
            // 0x247098: 0x2673821  addu        $a3, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247298u;
    if (runtime->hasFunction(0x247298u)) {
        auto targetFn = runtime->lookupFunction(0x247298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24709Cu; }
        if (ctx->pc != 0x24709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247298_0x247298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24709Cu; }
        if (ctx->pc != 0x24709Cu) { return; }
    }
    ctx->pc = 0x24709Cu;
label_24709c:
    // 0x24709c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x24709cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2470a0:
    // 0x2470a0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2470a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2470A4u;
    {
        const bool branch_taken_0x2470a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2470A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2470A4u;
            // 0x2470a8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470a4) {
            ctx->pc = 0x2470BCu;
            goto label_2470bc;
        }
    }
    ctx->pc = 0x2470ACu;
    // 0x2470ac: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2470acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2470b0: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2470b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2470b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2470B4u;
    {
        const bool branch_taken_0x2470b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2470b4) {
            ctx->pc = 0x2470B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2470B4u;
            // 0x2470b8: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2470D0u;
            goto label_2470d0;
        }
    }
    ctx->pc = 0x2470BCu;
label_2470bc:
    // 0x2470bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2470bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2470c0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2470C0u;
    SET_GPR_U32(ctx, 31, 0x2470C8u);
    ctx->pc = 0x2470C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2470C0u;
            // 0x2470c4: 0x24a56828  addiu       $a1, $a1, 0x6828 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470C8u; }
        if (ctx->pc != 0x2470C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470C8u; }
        if (ctx->pc != 0x2470C8u) { return; }
    }
    ctx->pc = 0x2470C8u;
label_2470c8:
    // 0x2470c8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2470C8u;
    {
        const bool branch_taken_0x2470c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2470C8u;
            // 0x2470cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470c8) {
            ctx->pc = 0x247260u;
            goto label_247260;
        }
    }
    ctx->pc = 0x2470D0u;
label_2470d0:
    // 0x2470d0: 0x90430038  lbu         $v1, 0x38($v0)
    ctx->pc = 0x2470d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2470d4: 0xa2630004  sb          $v1, 0x4($s3)
    ctx->pc = 0x2470d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2470d8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2470d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2470dc: 0x9443002c  lhu         $v1, 0x2C($v0)
    ctx->pc = 0x2470dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2470e0: 0x1620005e  bnez        $s1, . + 4 + (0x5E << 2)
    ctx->pc = 0x2470E0u;
    {
        const bool branch_taken_0x2470e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2470E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2470E0u;
            // 0x2470e4: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470e0) {
            ctx->pc = 0x24725Cu;
            goto label_24725c;
        }
    }
    ctx->pc = 0x2470E8u;
    // 0x2470e8: 0xc098552  jal         func_261548
    ctx->pc = 0x2470E8u;
    SET_GPR_U32(ctx, 31, 0x2470F0u);
    ctx->pc = 0x2470ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2470E8u;
            // 0x2470ec: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470F0u; }
        if (ctx->pc != 0x2470F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470F0u; }
        if (ctx->pc != 0x2470F0u) { return; }
    }
    ctx->pc = 0x2470F0u;
label_2470f0:
    // 0x2470f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2470f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470f4: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2470F4u;
    {
        const bool branch_taken_0x2470f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2470F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2470F4u;
            // 0x2470f8: 0xae510054  sw          $s1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470f4) {
            ctx->pc = 0x247114u;
            goto label_247114;
        }
    }
    ctx->pc = 0x2470FCu;
    // 0x2470fc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2470fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x247100: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x247100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x247104: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x247104u;
    SET_GPR_U32(ctx, 31, 0x24710Cu);
    ctx->pc = 0x247108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247104u;
            // 0x247108: 0x24a56850  addiu       $a1, $a1, 0x6850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24710Cu; }
        if (ctx->pc != 0x24710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24710Cu; }
        if (ctx->pc != 0x24710Cu) { return; }
    }
    ctx->pc = 0x24710Cu;
label_24710c:
    // 0x24710c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x24710Cu;
    {
        const bool branch_taken_0x24710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24710Cu;
            // 0x247110: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24710c) {
            ctx->pc = 0x247260u;
            goto label_247260;
        }
    }
    ctx->pc = 0x247114u;
label_247114:
    // 0x247114: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x247114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x247118: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x247118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24711c: 0x8cc30114  lw          $v1, 0x114($a2)
    ctx->pc = 0x24711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
    // 0x247120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247124: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x247124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
    // 0x247128: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x247128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x24712c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x247130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247134: 0x0  nop
    ctx->pc = 0x247134u;
    // NOP
    // 0x247138: 0xc048c96  jal         func_123258
    ctx->pc = 0x247138u;
    SET_GPR_U32(ctx, 31, 0x247140u);
    ctx->pc = 0x24713Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247138u;
            // 0x24713c: 0xace20118  sw          $v0, 0x118($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247140u; }
        if (ctx->pc != 0x247140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247140u; }
        if (ctx->pc != 0x247140u) { return; }
    }
    ctx->pc = 0x247140u;
label_247140:
    // 0x247140: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x247140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x247144: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x247144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x247148: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x247148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x24714c: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x24714cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x247150: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x247150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x247154: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x247154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x247158: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x247158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x24715c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24715Cu;
    {
        const bool branch_taken_0x24715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24715Cu;
            // 0x247160: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24715c) {
            ctx->pc = 0x247170u;
            goto label_247170;
        }
    }
    ctx->pc = 0x247164u;
    // 0x247164: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x247164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x247168: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x247168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x24716c: 0x0  nop
    ctx->pc = 0x24716cu;
    // NOP
label_247170:
    // 0x247170: 0xac710110  sw          $s1, 0x110($v1)
    ctx->pc = 0x247170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 17));
    // 0x247174: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x247174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x247178: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x247178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24717c: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x24717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x247180: 0x88650007  lwl         $a1, 0x7($v1)
    ctx->pc = 0x247180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x247184: 0x98650004  lwr         $a1, 0x4($v1)
    ctx->pc = 0x247184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x247188: 0x88820063  lwl         $v0, 0x63($a0)
    ctx->pc = 0x247188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24718c: 0x98820060  lwr         $v0, 0x60($a0)
    ctx->pc = 0x24718cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x247190: 0x14a20033  bne         $a1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x247190u;
    {
        const bool branch_taken_0x247190 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x247194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247190u;
            // 0x247194: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247190) {
            ctx->pc = 0x247260u;
            goto label_247260;
        }
    }
    ctx->pc = 0x247198u;
    // 0x247198: 0xfe400070  sd          $zero, 0x70($s2)
    ctx->pc = 0x247198u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 0));
    // 0x24719c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2471a0: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x2471a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x2471a4: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x2471a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2471a8: 0x90430039  lbu         $v1, 0x39($v0)
    ctx->pc = 0x2471a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2471ac: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2471b0: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2471b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2471b4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2471b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2471b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2471b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2471bc: 0xa2630006  sb          $v1, 0x6($s3)
    ctx->pc = 0x2471bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2471c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2471c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2471c4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2471C4u;
    SET_GPR_U32(ctx, 31, 0x2471CCu);
    ctx->pc = 0x2471C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2471C4u;
            // 0x2471c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471CCu; }
        if (ctx->pc != 0x2471CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471CCu; }
        if (ctx->pc != 0x2471CCu) { return; }
    }
    ctx->pc = 0x2471CCu;
label_2471cc:
    // 0x2471cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2471d0: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2471d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2471d4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2471D4u;
    {
        const bool branch_taken_0x2471d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2471D4u;
            // 0x2471d8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471d4) {
            ctx->pc = 0x24725Cu;
            goto label_24725c;
        }
    }
    ctx->pc = 0x2471DCu;
    // 0x2471dc: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x2471dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x2471e0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2471E0u;
    {
        const bool branch_taken_0x2471e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2471E0u;
            // 0x2471e4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471e0) {
            ctx->pc = 0x24725Cu;
            goto label_24725c;
        }
    }
    ctx->pc = 0x2471E8u;
label_2471e8:
    // 0x2471e8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2471E8u;
    {
        const bool branch_taken_0x2471e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2471E8u;
            // 0x2471ec: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471e8) {
            ctx->pc = 0x24725Cu;
            goto label_24725c;
        }
    }
    ctx->pc = 0x2471F0u;
    // 0x2471f0: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x2471f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x2471f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2471f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2471f8: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x2471f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x2471fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2471fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247200: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x247200u;
    {
        const bool branch_taken_0x247200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247200u;
            // 0x247204: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247200) {
            ctx->pc = 0x247218u;
            goto label_247218;
        }
    }
    ctx->pc = 0x247208u;
    // 0x247208: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x247208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24720c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247210: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x247210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x247214: 0x0  nop
    ctx->pc = 0x247214u;
    // NOP
label_247218:
    // 0x247218: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x247218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24721c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x24721cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x247220: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x247220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x247224: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x247224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x247228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24722c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24722Cu;
    SET_GPR_U32(ctx, 31, 0x247234u);
    ctx->pc = 0x247230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24722Cu;
            // 0x247230: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247234u; }
        if (ctx->pc != 0x247234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247234u; }
        if (ctx->pc != 0x247234u) { return; }
    }
    ctx->pc = 0x247234u;
label_247234:
    // 0x247234: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x247234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x247238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24723c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24723Cu;
    SET_GPR_U32(ctx, 31, 0x247244u);
    ctx->pc = 0x247240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24723Cu;
            // 0x247240: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247244u; }
        if (ctx->pc != 0x247244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247244u; }
        if (ctx->pc != 0x247244u) { return; }
    }
    ctx->pc = 0x247244u;
label_247244:
    // 0x247244: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247244u;
    {
        const bool branch_taken_0x247244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x247244) {
            ctx->pc = 0x247254u;
            goto label_247254;
        }
    }
    ctx->pc = 0x24724Cu;
    // 0x24724c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x24724Cu;
    SET_GPR_U32(ctx, 31, 0x247254u);
    ctx->pc = 0x247250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24724Cu;
            // 0x247250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247254u; }
        if (ctx->pc != 0x247254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247254u; }
        if (ctx->pc != 0x247254u) { return; }
    }
    ctx->pc = 0x247254u;
label_247254:
    // 0x247254: 0xc098560  jal         func_261580
    ctx->pc = 0x247254u;
    SET_GPR_U32(ctx, 31, 0x24725Cu);
    ctx->pc = 0x247258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247254u;
            // 0x247258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24725Cu; }
        if (ctx->pc != 0x24725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24725Cu; }
        if (ctx->pc != 0x24725Cu) { return; }
    }
    ctx->pc = 0x24725Cu;
label_24725c:
    // 0x24725c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_247260:
    // 0x247260: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x247260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_247264:
    // 0x247264: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x247264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247268: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x247268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24726c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24726cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247274: 0x809216e  j           func_2485B8
    ctx->pc = 0x247274u;
    ctx->pc = 0x247278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247274u;
            // 0x247278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (runtime->hasFunction(0x2485B8u)) {
        auto targetFn = runtime->lookupFunction(0x2485B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002485B8_0x2485b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x24727Cu;
label_24727c:
    // 0x24727c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24727cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247280: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x247280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247284: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x247284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x247288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24728c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24728cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247290: 0x3e00008  jr          $ra
    ctx->pc = 0x247290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247290u;
            // 0x247294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x247298u;
    ctx->pc = 0x247298u;
}
