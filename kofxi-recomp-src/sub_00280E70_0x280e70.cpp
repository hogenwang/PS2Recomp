#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280E70
// Address: 0x280e70 - 0x280ed8
void sub_00280E70_0x280e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E70_0x280e70");
#endif

    switch (ctx->pc) {
        case 0x280e80u: goto label_280e80;
        case 0x280ea4u: goto label_280ea4;
        default: break;
    }

    ctx->pc = 0x280e70u;

    // 0x280e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280e78: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x280E78u;
    SET_GPR_U32(ctx, 31, 0x280E80u);
    ctx->pc = 0x280E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E78u;
            // 0x280e7c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E80u; }
        if (ctx->pc != 0x280E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E80u; }
        if (ctx->pc != 0x280E80u) { return; }
    }
    ctx->pc = 0x280E80u;
label_280e80:
    // 0x280e80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x280E84u;
    {
        const bool branch_taken_0x280e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E84u;
            // 0x280e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e84) {
            ctx->pc = 0x280EACu;
            goto label_280eac;
        }
    }
    ctx->pc = 0x280E8Cu;
    // 0x280e8c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x280e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x280e90: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x280e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x280e94: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x280e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x280e98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e9c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x280E9Cu;
    SET_GPR_U32(ctx, 31, 0x280EA4u);
    ctx->pc = 0x280EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E9Cu;
            // 0x280ea0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EA4u; }
        if (ctx->pc != 0x280EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EA4u; }
        if (ctx->pc != 0x280EA4u) { return; }
    }
    ctx->pc = 0x280EA4u;
label_280ea4:
    // 0x280ea4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280EA4u;
    {
        const bool branch_taken_0x280ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EA4u;
            // 0x280ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ea4) {
            ctx->pc = 0x280EC8u;
            goto label_280ec8;
        }
    }
    ctx->pc = 0x280EACu;
label_280eac:
    // 0x280eac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x280eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x280eb0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x280eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x280eb4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x280eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x280eb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x280eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ebc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x280ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x280ec0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x280ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x280ec4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x280ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_280ec8:
    // 0x280ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x280ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280ECCu;
            // 0x280ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280ED4u;
    // 0x280ed4: 0x0  nop
    ctx->pc = 0x280ed4u;
    // NOP
    ctx->pc = 0x280ed8u;
}
