#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203E40
// Address: 0x203e40 - 0x203ea0
void sub_00203E40_0x203e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203E40_0x203e40");
#endif

    switch (ctx->pc) {
        case 0x203e60u: goto label_203e60;
        case 0x203e68u: goto label_203e68;
        case 0x203e84u: goto label_203e84;
        default: break;
    }

    ctx->pc = 0x203e40u;

    // 0x203e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203e44: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x203e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203e50: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x203e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e58: 0xc057b5c  jal         func_15ED70
    ctx->pc = 0x203E58u;
    SET_GPR_U32(ctx, 31, 0x203E60u);
    ctx->pc = 0x203E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203E58u;
            // 0x203e5c: 0x24440a8c  addiu       $a0, $v0, 0xA8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ED70u;
    if (runtime->hasFunction(0x15ED70u)) {
        auto targetFn = runtime->lookupFunction(0x15ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E60u; }
        if (ctx->pc != 0x203E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ED70_0x15ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E60u; }
        if (ctx->pc != 0x203E60u) { return; }
    }
    ctx->pc = 0x203E60u;
label_203e60:
    // 0x203e60: 0xc080f68  jal         func_203DA0
    ctx->pc = 0x203E60u;
    SET_GPR_U32(ctx, 31, 0x203E68u);
    ctx->pc = 0x203DA0u;
    if (runtime->hasFunction(0x203DA0u)) {
        auto targetFn = runtime->lookupFunction(0x203DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E68u; }
        if (ctx->pc != 0x203E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203DA0_0x203da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E68u; }
        if (ctx->pc != 0x203E68u) { return; }
    }
    ctx->pc = 0x203E68u;
label_203e68:
    // 0x203e68: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203e6c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x203e70: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203e74: 0xa4700a98  sh          $s0, 0xA98($v1)
    ctx->pc = 0x203e74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2712), (uint16_t)GPR_U32(ctx, 16));
    // 0x203e78: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x203e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x203e7c: 0xc081048  jal         func_204120
    ctx->pc = 0x203E7Cu;
    SET_GPR_U32(ctx, 31, 0x203E84u);
    ctx->pc = 0x203E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203E7Cu;
            // 0x203e80: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204120u;
    if (runtime->hasFunction(0x204120u)) {
        auto targetFn = runtime->lookupFunction(0x204120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E84u; }
        if (ctx->pc != 0x203E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204120_0x204120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E84u; }
        if (ctx->pc != 0x203E84u) { return; }
    }
    ctx->pc = 0x203E84u;
label_203e84:
    // 0x203e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x203E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E8Cu;
            // 0x203e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203E94u;
    // 0x203e94: 0x0  nop
    ctx->pc = 0x203e94u;
    // NOP
    // 0x203e98: 0x0  nop
    ctx->pc = 0x203e98u;
    // NOP
    // 0x203e9c: 0x0  nop
    ctx->pc = 0x203e9cu;
    // NOP
    ctx->pc = 0x203ea0u;
}
