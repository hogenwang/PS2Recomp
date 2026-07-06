#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BB60
// Address: 0x26bb60 - 0x26bbb0
void sub_0026BB60_0x26bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BB60_0x26bb60");
#endif

    switch (ctx->pc) {
        case 0x26bb80u: goto label_26bb80;
        case 0x26bb94u: goto label_26bb94;
        default: break;
    }

    ctx->pc = 0x26bb60u;

    // 0x26bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bb64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26bb68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26bb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bb70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26bb74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26bb78: 0xc098202  jal         func_260808
    ctx->pc = 0x26BB78u;
    SET_GPR_U32(ctx, 31, 0x26BB80u);
    ctx->pc = 0x26BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB78u;
            // 0x26bb7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260808u;
    if (runtime->hasFunction(0x260808u)) {
        auto targetFn = runtime->lookupFunction(0x260808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB80u; }
        if (ctx->pc != 0x26BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260808_0x260808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB80u; }
        if (ctx->pc != 0x26BB80u) { return; }
    }
    ctx->pc = 0x26BB80u;
label_26bb80:
    // 0x26bb80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BB80u;
    {
        const bool branch_taken_0x26bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB80u;
            // 0x26bb84: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb80) {
            ctx->pc = 0x26BB9Cu;
            goto label_26bb9c;
        }
    }
    ctx->pc = 0x26BB88u;
    // 0x26bb88: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26bb8c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26BB8Cu;
    SET_GPR_U32(ctx, 31, 0x26BB94u);
    ctx->pc = 0x26BB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB8Cu;
            // 0x26bb90: 0x24a58980  addiu       $a1, $a1, -0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB94u; }
        if (ctx->pc != 0x26BB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB94u; }
        if (ctx->pc != 0x26BB94u) { return; }
    }
    ctx->pc = 0x26BB94u;
label_26bb94:
    // 0x26bb94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26BB94u;
    {
        const bool branch_taken_0x26bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB94u;
            // 0x26bb98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb94) {
            ctx->pc = 0x26BBA0u;
            goto label_26bba0;
        }
    }
    ctx->pc = 0x26BB9Cu;
label_26bb9c:
    // 0x26bb9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bba0:
    // 0x26bba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bba4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBA4u;
            // 0x26bba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BBACu;
    // 0x26bbac: 0x0  nop
    ctx->pc = 0x26bbacu;
    // NOP
    ctx->pc = 0x26bbb0u;
}
