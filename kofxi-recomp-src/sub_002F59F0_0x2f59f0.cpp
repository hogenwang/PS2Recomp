#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F59F0
// Address: 0x2f59f0 - 0x2f5ad0
void sub_002F59F0_0x2f59f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F59F0_0x2f59f0");
#endif

    switch (ctx->pc) {
        case 0x2f5a0cu: goto label_2f5a0c;
        case 0x2f5a14u: goto label_2f5a14;
        case 0x2f5a38u: goto label_2f5a38;
        default: break;
    }

    ctx->pc = 0x2f59f0u;

    // 0x2f59f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f59f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f59f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f59f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f59f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f59f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f59fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f59fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f5a04: 0xc0bd638  jal         func_2F58E0
    ctx->pc = 0x2F5A04u;
    SET_GPR_U32(ctx, 31, 0x2F5A0Cu);
    ctx->pc = 0x2F5A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A04u;
            // 0x2f5a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F58E0u;
    if (runtime->hasFunction(0x2F58E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F58E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A0Cu; }
        if (ctx->pc != 0x2F5A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F58E0_0x2f58e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A0Cu; }
        if (ctx->pc != 0x2F5A0Cu) { return; }
    }
    ctx->pc = 0x2F5A0Cu;
label_2f5a0c:
    // 0x2f5a0c: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F5A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5A14u);
    ctx->pc = 0x2F5A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A0Cu;
            // 0x2f5a10: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (runtime->hasFunction(0x2F9140u)) {
        auto targetFn = runtime->lookupFunction(0x2F9140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A14u; }
        if (ctx->pc != 0x2F5A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9140_0x2f9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A14u; }
        if (ctx->pc != 0x2F5A14u) { return; }
    }
    ctx->pc = 0x2F5A14u;
label_2f5a14:
    // 0x2f5a14: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a18: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F5A18u;
    {
        const bool branch_taken_0x2f5a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A18u;
            // 0x2f5a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a18) {
            ctx->pc = 0x2F5AB8u;
            goto label_2f5ab8;
        }
    }
    ctx->pc = 0x2F5A20u;
    // 0x2f5a20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5a24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2f5a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2f5a28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5a2c: 0x12220020  beq         $s1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F5A2Cu;
    {
        const bool branch_taken_0x2f5a2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A2Cu;
            // 0x2f5a30: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a2c) {
            ctx->pc = 0x2F5AB0u;
            goto label_2f5ab0;
        }
    }
    ctx->pc = 0x2F5A34u;
    // 0x2f5a34: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2f5a34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_2f5a38:
    // 0x2f5a38: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f5a38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5a3c: 0x250204d8  addiu       $v0, $t0, 0x4D8
    ctx->pc = 0x2f5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1240));
    // 0x2f5a40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f5a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f5a44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f5a48: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f5a48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5a4c: 0x54640012  bnel        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5A4Cu;
    {
        const bool branch_taken_0x2f5a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f5a4c) {
            ctx->pc = 0x2F5A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A4Cu;
            // 0x2f5a50: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A98u;
            goto label_2f5a98;
        }
    }
    ctx->pc = 0x2F5A54u;
    // 0x2f5a54: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x2f5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2f5a58: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f5a5c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2f5a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f5a60: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f5a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5a64: 0x8ca305dc  lw          $v1, 0x5DC($a1)
    ctx->pc = 0x2f5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x2f5a68: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2f5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2f5a6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5a70: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2f5a70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5a74: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x2f5a74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f5a78: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f5a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5a7c: 0x8ca305dc  lw          $v1, 0x5DC($a1)
    ctx->pc = 0x2f5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x2f5a80: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2f5a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2f5a84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5a88: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2f5a88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5a8c: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x2f5a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f5a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5A90u;
    {
        const bool branch_taken_0x2f5a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A90u;
            // 0x2f5a94: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a90) {
            ctx->pc = 0x2F5A9Cu;
            goto label_2f5a9c;
        }
    }
    ctx->pc = 0x2F5A98u;
label_2f5a98:
    // 0x2f5a98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f5a9c:
    // 0x2f5a9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5aa0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2f5aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2f5aa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5aa8: 0x1622ffe3  bne         $s1, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F5AA8u;
    {
        const bool branch_taken_0x2f5aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AA8u;
            // 0x2f5aac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5aa8) {
            ctx->pc = 0x2F5A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5a38;
        }
    }
    ctx->pc = 0x2F5AB0u;
label_2f5ab0:
    // 0x2f5ab0: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x2f5ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5ab4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f5ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ab8:
    // 0x2f5ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f5ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5abc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f5abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AC4u;
            // 0x2f5ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5ACCu;
    // 0x2f5acc: 0x0  nop
    ctx->pc = 0x2f5accu;
    // NOP
    ctx->pc = 0x2f5ad0u;
}
