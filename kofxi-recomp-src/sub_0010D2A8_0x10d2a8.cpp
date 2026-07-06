#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D2A8
// Address: 0x10d2a8 - 0x10d320
void sub_0010D2A8_0x10d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D2A8_0x10d2a8");
#endif

    switch (ctx->pc) {
        case 0x10d2e0u: goto label_10d2e0;
        case 0x10d2f8u: goto label_10d2f8;
        default: break;
    }

    ctx->pc = 0x10d2a8u;

    // 0x10d2a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d2ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d2b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d2b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10d2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d2bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2c0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10D2C0u;
    {
        const bool branch_taken_0x10d2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D2C0u;
            // 0x10d2c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2c0) {
            ctx->pc = 0x10D300u;
            goto label_10d300;
        }
    }
    ctx->pc = 0x10D2C8u;
    // 0x10d2c8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x10d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x10d2cc: 0x8e028690  lw          $v0, -0x7970($s0)
    ctx->pc = 0x10d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936208)));
    // 0x10d2d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D2D0u;
    {
        const bool branch_taken_0x10d2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D2D0u;
            // 0x10d2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2d0) {
            ctx->pc = 0x10D2F0u;
            goto label_10d2f0;
        }
    }
    ctx->pc = 0x10D2D8u;
    // 0x10d2d8: 0xc043980  jal         func_10E600
    ctx->pc = 0x10D2D8u;
    SET_GPR_U32(ctx, 31, 0x10D2E0u);
    ctx->pc = 0x10E600u;
    if (runtime->hasFunction(0x10E600u)) {
        auto targetFn = runtime->lookupFunction(0x10E600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D2E0u; }
        if (ctx->pc != 0x10D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E600_0x10e600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D2E0u; }
        if (ctx->pc != 0x10D2E0u) { return; }
    }
    ctx->pc = 0x10D2E0u;
label_10d2e0:
    // 0x10d2e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D2E0u;
    {
        const bool branch_taken_0x10d2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D2E0u;
            // 0x10d2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2e0) {
            ctx->pc = 0x10D300u;
            goto label_10d300;
        }
    }
    ctx->pc = 0x10D2E8u;
    // 0x10d2e8: 0xae028690  sw          $v0, -0x7970($s0)
    ctx->pc = 0x10d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936208), GPR_U32(ctx, 2));
    // 0x10d2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d2f0:
    // 0x10d2f0: 0xc04394c  jal         func_10E530
    ctx->pc = 0x10D2F0u;
    SET_GPR_U32(ctx, 31, 0x10D2F8u);
    ctx->pc = 0x10D2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D2F0u;
            // 0x10d2f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E530u;
    if (runtime->hasFunction(0x10E530u)) {
        auto targetFn = runtime->lookupFunction(0x10E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D2F8u; }
        if (ctx->pc != 0x10D2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E530_0x10e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D2F8u; }
        if (ctx->pc != 0x10D2F8u) { return; }
    }
    ctx->pc = 0x10D2F8u;
label_10d2f8:
    // 0x10d2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D2F8u;
    {
        const bool branch_taken_0x10d2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D2F8u;
            // 0x10d2fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2f8) {
            ctx->pc = 0x10D308u;
            goto label_10d308;
        }
    }
    ctx->pc = 0x10D300u;
label_10d300:
    // 0x10d300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d304: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10d308:
    // 0x10d308: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d30c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d314: 0x3e00008  jr          $ra
    ctx->pc = 0x10D314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D314u;
            // 0x10d318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D31Cu;
    // 0x10d31c: 0x0  nop
    ctx->pc = 0x10d31cu;
    // NOP
    ctx->pc = 0x10d320u;
}
