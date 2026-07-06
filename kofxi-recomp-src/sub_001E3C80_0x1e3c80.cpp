#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3C80
// Address: 0x1e3c80 - 0x1e3ce0
void sub_001E3C80_0x1e3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3C80_0x1e3c80");
#endif

    switch (ctx->pc) {
        case 0x1e3cc8u: goto label_1e3cc8;
        default: break;
    }

    ctx->pc = 0x1e3c80u;

    // 0x1e3c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3c8c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x1e3c8cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e3c90: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E3C90u;
    {
        const bool branch_taken_0x1e3c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C90u;
            // 0x1e3c94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c90) {
            ctx->pc = 0x1E3CCCu;
            goto label_1e3ccc;
        }
    }
    ctx->pc = 0x1E3C98u;
    // 0x1e3c98: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3C98u;
    {
        const bool branch_taken_0x1e3c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c98) {
            ctx->pc = 0x1E3C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C98u;
            // 0x1e3c9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3CB0u;
            goto label_1e3cb0;
        }
    }
    ctx->pc = 0x1E3CA0u;
    // 0x1e3ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3CA4u;
    {
        const bool branch_taken_0x1e3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CA4u;
            // 0x1e3ca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ca4) {
            ctx->pc = 0x1E3CB4u;
            goto label_1e3cb4;
        }
    }
    ctx->pc = 0x1E3CACu;
    // 0x1e3cac: 0x0  nop
    ctx->pc = 0x1e3cacu;
    // NOP
label_1e3cb0:
    // 0x1e3cb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3cb4:
    // 0x1e3cb4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3CB4u;
    {
        const bool branch_taken_0x1e3cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CB4u;
            // 0x1e3cb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cb4) {
            ctx->pc = 0x1E3CD0u;
            goto label_1e3cd0;
        }
    }
    ctx->pc = 0x1E3CBCu;
    // 0x1e3cbc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3cc0: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3CC0u;
    SET_GPR_U32(ctx, 31, 0x1E3CC8u);
    ctx->pc = 0x1E3CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CC0u;
            // 0x1e3cc4: 0x2484db08  addiu       $a0, $a0, -0x24F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CC8u; }
        if (ctx->pc != 0x1E3CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CC8u; }
        if (ctx->pc != 0x1E3CC8u) { return; }
    }
    ctx->pc = 0x1E3CC8u;
label_1e3cc8:
    // 0x1e3cc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3ccc:
    // 0x1e3ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3cd0:
    // 0x1e3cd0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e3cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CD4u;
            // 0x1e3cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3CDCu;
    // 0x1e3cdc: 0x0  nop
    ctx->pc = 0x1e3cdcu;
    // NOP
    ctx->pc = 0x1e3ce0u;
}
