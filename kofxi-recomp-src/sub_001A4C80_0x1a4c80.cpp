#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4C80
// Address: 0x1a4c80 - 0x1a4da0
void sub_001A4C80_0x1a4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4C80_0x1a4c80");
#endif

    switch (ctx->pc) {
        case 0x1a4cbcu: goto label_1a4cbc;
        case 0x1a4ce8u: goto label_1a4ce8;
        case 0x1a4d34u: goto label_1a4d34;
        default: break;
    }

    ctx->pc = 0x1a4c80u;

    // 0x1a4c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4c84: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a4c88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4c94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c98: 0x3224003f  andi        $a0, $s1, 0x3F
    ctx->pc = 0x1a4c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x1a4c9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4C9Cu;
    {
        const bool branch_taken_0x1a4c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C9Cu;
            // 0x1a4ca0: 0x8c70b8f0  lw          $s0, -0x4710($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c9c) {
            ctx->pc = 0x1A4CB0u;
            goto label_1a4cb0;
        }
    }
    ctx->pc = 0x1A4CA4u;
    // 0x1a4ca4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a4ca8: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1a4cac: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x1a4cacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1a4cb0:
    // 0x1a4cb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4cb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4CB4u;
    {
        const bool branch_taken_0x1a4cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cb4) {
            ctx->pc = 0x1A4CD8u;
            goto label_1a4cd8;
        }
    }
    ctx->pc = 0x1A4CBCu;
label_1a4cbc:
    // 0x1a4cbc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1a4cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4cc0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a4cc4: 0x0  nop
    ctx->pc = 0x1a4cc4u;
    // NOP
    // 0x1a4cc8: 0x0  nop
    ctx->pc = 0x1a4cc8u;
    // NOP
    // 0x1a4ccc: 0x0  nop
    ctx->pc = 0x1a4cccu;
    // NOP
    // 0x1a4cd0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4CD0u;
    {
        const bool branch_taken_0x1a4cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cd0) {
            ctx->pc = 0x1A4CBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4cbc;
        }
    }
    ctx->pc = 0x1A4CD8u;
label_1a4cd8:
    // 0x1a4cd8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4CD8u;
    {
        const bool branch_taken_0x1a4cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cd8) {
            ctx->pc = 0x1A4D10u;
            goto label_1a4d10;
        }
    }
    ctx->pc = 0x1A4CE0u;
    // 0x1a4ce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4ce4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4ce8:
    // 0x1a4ce8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4CE8u;
    {
        const bool branch_taken_0x1a4ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a4ce8) {
            ctx->pc = 0x1A4D00u;
            goto label_1a4d00;
        }
    }
    ctx->pc = 0x1A4CF0u;
    // 0x1a4cf0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4cf4: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1a4cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a4cf8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4CF8u;
    {
        const bool branch_taken_0x1a4cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cf8) {
            ctx->pc = 0x1A4D10u;
            goto label_1a4d10;
        }
    }
    ctx->pc = 0x1A4D00u;
label_1a4d00:
    // 0x1a4d00: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a4d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4d04: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A4D04u;
    {
        const bool branch_taken_0x1a4d04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d04) {
            ctx->pc = 0x1A4D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D04u;
            // 0x1a4d08: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4ce8;
        }
    }
    ctx->pc = 0x1A4D0Cu;
    // 0x1a4d0c: 0x0  nop
    ctx->pc = 0x1a4d0cu;
    // NOP
label_1a4d10:
    // 0x1a4d10: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D10u;
    {
        const bool branch_taken_0x1a4d10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d10) {
            ctx->pc = 0x1A4D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D10u;
            // 0x1a4d14: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D20u;
            goto label_1a4d20;
        }
    }
    ctx->pc = 0x1A4D18u;
    // 0x1a4d18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A4D18u;
    {
        const bool branch_taken_0x1a4d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D18u;
            // 0x1a4d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d18) {
            ctx->pc = 0x1A4D84u;
            goto label_1a4d84;
        }
    }
    ctx->pc = 0x1A4D20u;
label_1a4d20:
    // 0x1a4d20: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1a4d20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4d24: 0x50200017  beql        $at, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4D24u;
    {
        const bool branch_taken_0x1a4d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d24) {
            ctx->pc = 0x1A4D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D24u;
            // 0x1a4d28: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D84u;
            goto label_1a4d84;
        }
    }
    ctx->pc = 0x1A4D2Cu;
    // 0x1a4d2c: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D34u);
    ctx->pc = 0x1A49D0u;
    if (runtime->hasFunction(0x1A49D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A49D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D34u; }
        if (ctx->pc != 0x1A4D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A49D0_0x1a49d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D34u; }
        if (ctx->pc != 0x1A4D34u) { return; }
    }
    ctx->pc = 0x1A4D34u;
label_1a4d34:
    // 0x1a4d34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4d38: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a4d3c: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1a4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1a4d40: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4d44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a4d48: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1a4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1a4d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4d50: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a4d54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4d58: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a4d5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1a4d60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4d64: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a4d68: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a4d6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4d70: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D70u;
    {
        const bool branch_taken_0x1a4d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d70) {
            ctx->pc = 0x1A4D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D70u;
            // 0x1a4d74: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D80u;
            goto label_1a4d80;
        }
    }
    ctx->pc = 0x1A4D78u;
    // 0x1a4d78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a4d7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a4d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4d80:
    // 0x1a4d80: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a4d84:
    // 0x1a4d84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D90u;
            // 0x1a4d94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4D98u;
    // 0x1a4d98: 0x0  nop
    ctx->pc = 0x1a4d98u;
    // NOP
    // 0x1a4d9c: 0x0  nop
    ctx->pc = 0x1a4d9cu;
    // NOP
    ctx->pc = 0x1a4da0u;
}
