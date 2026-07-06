#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0140
// Address: 0x2c0140 - 0x2c01a8
void sub_002C0140_0x2c0140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0140_0x2c0140");
#endif

    switch (ctx->pc) {
        case 0x2c0168u: goto label_2c0168;
        case 0x2c0184u: goto label_2c0184;
        default: break;
    }

    ctx->pc = 0x2c0140u;

    // 0x2c0140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c014c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c014cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0154: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c0158: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0158u;
    {
        const bool branch_taken_0x2c0158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C015Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0158u;
            // 0x2c015c: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0158) {
            ctx->pc = 0x2C016Cu;
            goto label_2c016c;
        }
    }
    ctx->pc = 0x2C0160u;
    // 0x2c0160: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2C0160u;
    SET_GPR_U32(ctx, 31, 0x2C0168u);
    ctx->pc = 0x2C0164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0160u;
            // 0x2c0164: 0x24a55820  addiu       $a1, $a1, 0x5820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0168u; }
        if (ctx->pc != 0x2C0168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0168u; }
        if (ctx->pc != 0x2C0168u) { return; }
    }
    ctx->pc = 0x2C0168u;
label_2c0168:
    // 0x2c0168: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2c0168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_2c016c:
    // 0x2c016c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c0170: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x2c0170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x2c0174: 0x8c447e40  lw          $a0, 0x7E40($v0)
    ctx->pc = 0x2c0174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32320)));
    // 0x2c0178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c0178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c017c: 0xc0a5d58  jal         func_297560
    ctx->pc = 0x2C017Cu;
    SET_GPR_U32(ctx, 31, 0x2C0184u);
    ctx->pc = 0x2C0180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C017Cu;
            // 0x2c0180: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297560u;
    if (runtime->hasFunction(0x297560u)) {
        auto targetFn = runtime->lookupFunction(0x297560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0184u; }
        if (ctx->pc != 0x2C0184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297560_0x297560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0184u; }
        if (ctx->pc != 0x2C0184u) { return; }
    }
    ctx->pc = 0x2C0184u;
label_2c0184:
    // 0x2c0184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c018c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c018cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0198: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c0198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c019c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x2C019Cu;
    ctx->pc = 0x2C01A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C019Cu;
            // 0x2c01a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C01A4u;
    // 0x2c01a4: 0x0  nop
    ctx->pc = 0x2c01a4u;
    // NOP
    ctx->pc = 0x2c01a8u;
}
