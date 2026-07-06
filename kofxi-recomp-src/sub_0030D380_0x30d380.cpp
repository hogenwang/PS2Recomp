#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D380
// Address: 0x30d380 - 0x30d3d0
void sub_0030D380_0x30d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D380_0x30d380");
#endif

    switch (ctx->pc) {
        case 0x30d3b8u: goto label_30d3b8;
        default: break;
    }

    ctx->pc = 0x30d380u;

    // 0x30d380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30d384: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x30d384u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x30d388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d38c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d390: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x30d390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30d394: 0x8d490024  lw          $t1, 0x24($t2)
    ctx->pc = 0x30d394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x30d398: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x30d398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x30d39c: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D39Cu;
    {
        const bool branch_taken_0x30d39c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D39Cu;
            // 0x30d3a0: 0xad480024  sw          $t0, 0x24($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d39c) {
            ctx->pc = 0x30D3B8u;
            goto label_30d3b8;
        }
    }
    ctx->pc = 0x30D3A4u;
    // 0x30d3a4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x30d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30d3a8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D3A8u;
    {
        const bool branch_taken_0x30d3a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d3a8) {
            ctx->pc = 0x30D3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3A8u;
            // 0x30d3ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D3BCu;
            goto label_30d3bc;
        }
    }
    ctx->pc = 0x30D3B0u;
    // 0x30d3b0: 0xc0c34c0  jal         func_30D300
    ctx->pc = 0x30D3B0u;
    SET_GPR_U32(ctx, 31, 0x30D3B8u);
    ctx->pc = 0x30D3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3B0u;
            // 0x30d3b4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D300u;
    if (runtime->hasFunction(0x30D300u)) {
        auto targetFn = runtime->lookupFunction(0x30D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3B8u; }
        if (ctx->pc != 0x30D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D300_0x30d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3B8u; }
        if (ctx->pc != 0x30D3B8u) { return; }
    }
    ctx->pc = 0x30D3B8u;
label_30d3b8:
    // 0x30d3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d3bc:
    // 0x30d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3BCu;
            // 0x30d3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D3C4u;
    // 0x30d3c4: 0x0  nop
    ctx->pc = 0x30d3c4u;
    // NOP
    // 0x30d3c8: 0x0  nop
    ctx->pc = 0x30d3c8u;
    // NOP
    // 0x30d3cc: 0x0  nop
    ctx->pc = 0x30d3ccu;
    // NOP
    ctx->pc = 0x30d3d0u;
}
