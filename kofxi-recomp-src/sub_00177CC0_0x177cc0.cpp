#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177CC0
// Address: 0x177cc0 - 0x177de0
void sub_00177CC0_0x177cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177CC0_0x177cc0");
#endif

    switch (ctx->pc) {
        case 0x177d60u: goto label_177d60;
        case 0x177d78u: goto label_177d78;
        case 0x177d90u: goto label_177d90;
        default: break;
    }

    ctx->pc = 0x177cc0u;

    // 0x177cc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x177cc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177cc8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x177cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177ccc: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
    // 0x177cd0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x177cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x177cd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x177cd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177ce0: 0x805df3c  j           func_177CF0
    ctx->pc = 0x177CE0u;
    ctx->pc = 0x177CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177CE0u;
            // 0x177ce4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177CF0u;
    goto label_177cf0;
    ctx->pc = 0x177CE8u;
    // 0x177ce8: 0x0  nop
    ctx->pc = 0x177ce8u;
    // NOP
    // 0x177cec: 0x0  nop
    ctx->pc = 0x177cecu;
    // NOP
label_177cf0:
    // 0x177cf0: 0x27bddb50  addiu       $sp, $sp, -0x24B0
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294957904));
    // 0x177cf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x177cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x177cf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x177cfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x177d00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x177d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x177d04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x177d08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x177d08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x177d10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177d20: 0x90860014  lbu         $a2, 0x14($a0)
    ctx->pc = 0x177d20u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x177d24: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x177d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x177d28: 0x84950010  lh          $s5, 0x10($a0)
    ctx->pc = 0x177d28u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x177d2c: 0x84940012  lh          $s4, 0x12($a0)
    ctx->pc = 0x177d2cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x177d30: 0xc38018  mult        $s0, $a2, $v1
    ctx->pc = 0x177d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x177d34: 0x72b43818  mult1       $a3, $s5, $s4
    ctx->pc = 0x177d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x177d38: 0x7f040  sll         $fp, $a3, 1
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x177d3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x177d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x177d40: 0x90860018  lbu         $a2, 0x18($a0)
    ctx->pc = 0x177d40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x177d44: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x177d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x177d48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x177d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x177d4c: 0x34d70100  ori         $s7, $a2, 0x100
    ctx->pc = 0x177d4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x177d50: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x177D50u;
    {
        const bool branch_taken_0x177d50 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x177D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D50u;
            // 0x177d54: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d50) {
            ctx->pc = 0x177DA8u;
            goto label_177da8;
        }
    }
    ctx->pc = 0x177D58u;
    // 0x177d58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x177d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d5c: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x177d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_177d60:
    // 0x177d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d68: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x177d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d6c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x177d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d70: 0xc067cd4  jal         func_19F350
    ctx->pc = 0x177D70u;
    SET_GPR_U32(ctx, 31, 0x177D78u);
    ctx->pc = 0x177D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D70u;
            // 0x177d74: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F350u;
    if (runtime->hasFunction(0x19F350u)) {
        auto targetFn = runtime->lookupFunction(0x19F350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D78u; }
        if (ctx->pc != 0x177D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F350_0x19f350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D78u; }
        if (ctx->pc != 0x177D78u) { return; }
    }
    ctx->pc = 0x177D78u;
label_177d78:
    // 0x177d78: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x177d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x177d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d84: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x177d84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x177d88: 0xc067cd8  jal         func_19F360
    ctx->pc = 0x177D88u;
    SET_GPR_U32(ctx, 31, 0x177D90u);
    ctx->pc = 0x177D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D88u;
            // 0x177d8c: 0x563021  addu        $a2, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F360u;
    if (runtime->hasFunction(0x19F360u)) {
        auto targetFn = runtime->lookupFunction(0x19F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D90u; }
        if (ctx->pc != 0x177D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F360_0x19f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D90u; }
        if (ctx->pc != 0x177D90u) { return; }
    }
    ctx->pc = 0x177D90u;
label_177d90:
    // 0x177d90: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x177d94: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x177d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x177d98: 0x2d0182a  slt         $v1, $s6, $s0
    ctx->pc = 0x177d98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x177d9c: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x177d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x177da0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x177DA0u;
    {
        const bool branch_taken_0x177da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DA0u;
            // 0x177da4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177da0) {
            ctx->pc = 0x177D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177d60;
        }
    }
    ctx->pc = 0x177DA8u;
label_177da8:
    // 0x177da8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x177da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x177dac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x177dacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177db0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177db0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177db4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x177db4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177db8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177dbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177dc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177dc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DD0u;
            // 0x177dd4: 0x27bd24b0  addiu       $sp, $sp, 0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 9392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DD8u;
    // 0x177dd8: 0x0  nop
    ctx->pc = 0x177dd8u;
    // NOP
    // 0x177ddc: 0x0  nop
    ctx->pc = 0x177ddcu;
    // NOP
    ctx->pc = 0x177de0u;
}
