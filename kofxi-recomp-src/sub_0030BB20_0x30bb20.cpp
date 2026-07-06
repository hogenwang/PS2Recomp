#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BB20
// Address: 0x30bb20 - 0x30bb90
void sub_0030BB20_0x30bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BB20_0x30bb20");
#endif

    switch (ctx->pc) {
        case 0x30bb3cu: goto label_30bb3c;
        case 0x30bb50u: goto label_30bb50;
        case 0x30bb68u: goto label_30bb68;
        default: break;
    }

    ctx->pc = 0x30bb20u;

    // 0x30bb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30bb24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30bb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30bb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bb30: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x30bb30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x30bb34: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30BB34u;
    SET_GPR_U32(ctx, 31, 0x30BB3Cu);
    ctx->pc = 0x30BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB34u;
            // 0x30bb38: 0x26107890  addiu       $s0, $s0, 0x7890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB3Cu; }
        if (ctx->pc != 0x30BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB3Cu; }
        if (ctx->pc != 0x30BB3Cu) { return; }
    }
    ctx->pc = 0x30BB3Cu;
label_30bb3c:
    // 0x30bb3c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30bb40: 0x8c6378a0  lw          $v1, 0x78A0($v1)
    ctx->pc = 0x30bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30880)));
    // 0x30bb44: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30BB44u;
    {
        const bool branch_taken_0x30bb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb44) {
            ctx->pc = 0x30BB78u;
            goto label_30bb78;
        }
    }
    ctx->pc = 0x30BB4Cu;
    // 0x30bb4c: 0x8c640118  lw          $a0, 0x118($v1)
    ctx->pc = 0x30bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_30bb50:
    // 0x30bb50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BB50u;
    {
        const bool branch_taken_0x30bb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb50) {
            ctx->pc = 0x30BB68u;
            goto label_30bb68;
        }
    }
    ctx->pc = 0x30BB58u;
    // 0x30bb58: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x30bb5c: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x30bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x30bb60: 0xc049c48  jal         func_127120
    ctx->pc = 0x30BB60u;
    SET_GPR_U32(ctx, 31, 0x30BB68u);
    ctx->pc = 0x30BB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB60u;
            // 0x30bb64: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB68u; }
        if (ctx->pc != 0x30BB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB68u; }
        if (ctx->pc != 0x30BB68u) { return; }
    }
    ctx->pc = 0x30BB68u;
label_30bb68:
    // 0x30bb68: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x30bb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30bb6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30bb70: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30BB70u;
    {
        const bool branch_taken_0x30bb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bb70) {
            ctx->pc = 0x30BB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB70u;
            // 0x30bb74: 0x8c640118  lw          $a0, 0x118($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30bb50;
        }
    }
    ctx->pc = 0x30BB78u;
label_30bb78:
    // 0x30bb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30bb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x30BB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB80u;
            // 0x30bb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BB88u;
    // 0x30bb88: 0x0  nop
    ctx->pc = 0x30bb88u;
    // NOP
    // 0x30bb8c: 0x0  nop
    ctx->pc = 0x30bb8cu;
    // NOP
    ctx->pc = 0x30bb90u;
}
