#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1C78
// Address: 0x2f1c78 - 0x2f1cf8
void sub_002F1C78_0x2f1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1C78_0x2f1c78");
#endif

    switch (ctx->pc) {
        case 0x2f1ce4u: goto label_2f1ce4;
        default: break;
    }

    ctx->pc = 0x2f1c78u;

    // 0x2f1c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1c7c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f1c7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f1c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f1c84: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2f1c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f1c8c: 0x2405115c  addiu       $a1, $zero, 0x115C
    ctx->pc = 0x2f1c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4444));
    // 0x2f1c90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f1c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c94: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2f1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f1c98: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F1C98u;
    {
        const bool branch_taken_0x2f1c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2F1C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C98u;
            // 0x2f1c9c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c98) {
            ctx->pc = 0x2F1CE8u;
            goto label_2f1ce8;
        }
    }
    ctx->pc = 0x2F1CA0u;
    // 0x2f1ca0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x2f1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x2f1ca4: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2f1ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2f1ca8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2f1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2f1cac: 0x25ceeca8  addiu       $t6, $t6, -0x1358
    ctx->pc = 0x2f1cacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
    // 0x2f1cb0: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x2f1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x2f1cb4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1cb8: 0x24841ae0  addiu       $a0, $a0, 0x1AE0
    ctx->pc = 0x2f1cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    // 0x2f1cbc: 0x8dcf0060  lw          $t7, 0x60($t6)
    ctx->pc = 0x2f1cbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 96)));
    // 0x2f1cc0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1cc4: 0x24e71b00  addiu       $a3, $a3, 0x1B00
    ctx->pc = 0x2f1cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6912));
    // 0x2f1cc8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2f1cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2f1ccc: 0xadcf0060  sw          $t7, 0x60($t6)
    ctx->pc = 0x2f1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 15));
    // 0x2f1cd0: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x2f1cd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f1cd4: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x2f1cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f1cd8: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x2f1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x2f1cdc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1CDCu;
    SET_GPR_U32(ctx, 31, 0x2F1CE4u);
    ctx->pc = 0x2F1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CDCu;
            // 0x2f1ce0: 0x8e0b0014  lw          $t3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CE4u; }
        if (ctx->pc != 0x2F1CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CE4u; }
        if (ctx->pc != 0x2F1CE4u) { return; }
    }
    ctx->pc = 0x2F1CE4u;
label_2f1ce4:
    // 0x2f1ce4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f1ce8:
    // 0x2f1ce8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f1ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1cec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CF0u;
            // 0x2f1cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1CF8u;
    ctx->pc = 0x2f1cf8u;
}
