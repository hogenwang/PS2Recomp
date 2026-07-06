#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0D50
// Address: 0x2f0d50 - 0x2f0de0
void sub_002F0D50_0x2f0d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0D50_0x2f0d50");
#endif

    switch (ctx->pc) {
        case 0x2f0da0u: goto label_2f0da0;
        case 0x2f0db4u: goto label_2f0db4;
        case 0x2f0dc0u: goto label_2f0dc0;
        default: break;
    }

    ctx->pc = 0x2f0d50u;

    // 0x2f0d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0d54: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f0d54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f0d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0d5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0d60: 0x8de2ed28  lw          $v0, -0x12D8($t7)
    ctx->pc = 0x2f0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962472)));
    // 0x2f0d64: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F0D64u;
    {
        const bool branch_taken_0x2f0d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D64u;
            // 0x2f0d68: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d64) {
            ctx->pc = 0x2F0DA0u;
            goto label_2f0da0;
        }
    }
    ctx->pc = 0x2F0D6Cu;
    // 0x2f0d6c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d74: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0d7c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0d80: 0x248417c8  addiu       $a0, $a0, 0x17C8
    ctx->pc = 0x2f0d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6088));
    // 0x2f0d84: 0x25080a88  addiu       $t0, $t0, 0xA88
    ctx->pc = 0x2f0d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2696));
    // 0x2f0d88: 0x24050e3d  addiu       $a1, $zero, 0xE3D
    ctx->pc = 0x2f0d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3645));
    // 0x2f0d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d90: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2f0d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    // 0x2f0d94: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0D94u;
    ctx->pc = 0x2F0D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D94u;
            // 0x2f0d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F0D9Cu;
    // 0x2f0d9c: 0x0  nop
    ctx->pc = 0x2f0d9cu;
    // NOP
label_2f0da0:
    // 0x2f0da0: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2f0da0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0da4: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f0da4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f0da8: 0x51f0000a  beql        $t7, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F0DA8u;
    {
        const bool branch_taken_0x2f0da8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f0da8) {
            ctx->pc = 0x2F0DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DA8u;
            // 0x2f0dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0DD4u;
            goto label_2f0dd4;
        }
    }
    ctx->pc = 0x2F0DB0u;
    // 0x2f0db0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2f0db0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2f0db4:
    // 0x2f0db4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2f0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f0db8: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F0DB8u;
    SET_GPR_U32(ctx, 31, 0x2F0DC0u);
    ctx->pc = 0x2F0DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DB8u;
            // 0x2f0dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DC0u; }
        if (ctx->pc != 0x2F0DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DC0u; }
        if (ctx->pc != 0x2F0DC0u) { return; }
    }
    ctx->pc = 0x2F0DC0u;
label_2f0dc0:
    // 0x2f0dc0: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2f0dc0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0dc4: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f0dc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f0dc8: 0x55f0fffa  bnel        $t7, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F0DC8u;
    {
        const bool branch_taken_0x2f0dc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f0dc8) {
            ctx->pc = 0x2F0DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DC8u;
            // 0x2f0dcc: 0x90450001  lbu         $a1, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0db4;
        }
    }
    ctx->pc = 0x2F0DD0u;
    // 0x2f0dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0dd4:
    // 0x2f0dd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DD8u;
            // 0x2f0ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0DE0u;
    ctx->pc = 0x2f0de0u;
}
