#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6EC8
// Address: 0x1b6ec8 - 0x1b6f30
void sub_001B6EC8_0x1b6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6EC8_0x1b6ec8");
#endif

    switch (ctx->pc) {
        case 0x1b6edcu: goto label_1b6edc;
        default: break;
    }

    ctx->pc = 0x1b6ec8u;

    // 0x1b6ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6ed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6ed4: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B6ED4u;
    SET_GPR_U32(ctx, 31, 0x1B6EDCu);
    ctx->pc = 0x1B6ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6ED4u;
            // 0x1b6ed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (runtime->hasFunction(0x1B8108u)) {
        auto targetFn = runtime->lookupFunction(0x1B8108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EDCu; }
        if (ctx->pc != 0x1B6EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8108_0x1b8108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EDCu; }
        if (ctx->pc != 0x1B6EDCu) { return; }
    }
    ctx->pc = 0x1B6EDCu;
label_1b6edc:
    // 0x1b6edc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6ee0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b6ee4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1b6ee8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b6eec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b6eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b6ef0: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x1b6ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x1b6ef4: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6EF4u;
    {
        const bool branch_taken_0x1b6ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B6EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EF4u;
            // 0x1b6ef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ef4) {
            ctx->pc = 0x1B6F18u;
            goto label_1b6f18;
        }
    }
    ctx->pc = 0x1B6EFCu;
    // 0x1b6efc: 0x82030047  lb          $v1, 0x47($s0)
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x1b6f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6f04: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6F04u;
    {
        const bool branch_taken_0x1b6f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B6F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F04u;
            // 0x1b6f08: 0xa2020048  sb          $v0, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f04) {
            ctx->pc = 0x1B6F20u;
            goto label_1b6f20;
        }
    }
    ctx->pc = 0x1B6F0Cu;
    // 0x1b6f0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6F0Cu;
    {
        const bool branch_taken_0x1b6f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F0Cu;
            // 0x1b6f10: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f0c) {
            ctx->pc = 0x1B6F20u;
            goto label_1b6f20;
        }
    }
    ctx->pc = 0x1B6F14u;
    // 0x1b6f14: 0x0  nop
    ctx->pc = 0x1b6f14u;
    // NOP
label_1b6f18:
    // 0x1b6f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6f1c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1b6f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b6f20:
    // 0x1b6f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6f28: 0x806e048  j           func_1B8120
    ctx->pc = 0x1B6F28u;
    ctx->pc = 0x1B6F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F28u;
            // 0x1b6f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (runtime->hasFunction(0x1B8120u)) {
        auto targetFn = runtime->lookupFunction(0x1B8120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8120_0x1b8120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6F30u;
    ctx->pc = 0x1b6f30u;
}
