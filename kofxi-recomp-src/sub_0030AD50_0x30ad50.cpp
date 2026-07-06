#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030AD50
// Address: 0x30ad50 - 0x30adb0
void sub_0030AD50_0x30ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AD50_0x30ad50");
#endif

    switch (ctx->pc) {
        case 0x30ad6cu: goto label_30ad6c;
        case 0x30ada0u: goto label_30ada0;
        default: break;
    }

    ctx->pc = 0x30ad50u;

    // 0x30ad50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ad54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30ad58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ad5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ad5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad60: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30ad64: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30AD64u;
    SET_GPR_U32(ctx, 31, 0x30AD6Cu);
    ctx->pc = 0x30AD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD64u;
            // 0x30ad68: 0x24841f40  addiu       $a0, $a0, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD6Cu; }
        if (ctx->pc != 0x30AD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD6Cu; }
        if (ctx->pc != 0x30AD6Cu) { return; }
    }
    ctx->pc = 0x30AD6Cu;
label_30ad6c:
    // 0x30ad6c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30ad70: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30ad74: 0xac801eb0  sw          $zero, 0x1EB0($a0)
    ctx->pc = 0x30ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7856), GPR_U32(ctx, 0));
    // 0x30ad78: 0xac601eb4  sw          $zero, 0x1EB4($v1)
    ctx->pc = 0x30ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7860), GPR_U32(ctx, 0));
    // 0x30ad7c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30ad80: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30ad84: 0xac801eb8  sw          $zero, 0x1EB8($a0)
    ctx->pc = 0x30ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7864), GPR_U32(ctx, 0));
    // 0x30ad88: 0xac601ebc  sw          $zero, 0x1EBC($v1)
    ctx->pc = 0x30ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7868), GPR_U32(ctx, 0));
    // 0x30ad8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ad90: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AD90u;
    {
        const bool branch_taken_0x30ad90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad90) {
            ctx->pc = 0x30AD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD90u;
            // 0x30ad94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30ADA4u;
            goto label_30ada4;
        }
    }
    ctx->pc = 0x30AD98u;
    // 0x30ad98: 0xc0c2ad0  jal         func_30AB40
    ctx->pc = 0x30AD98u;
    SET_GPR_U32(ctx, 31, 0x30ADA0u);
    ctx->pc = 0x30AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD98u;
            // 0x30ad9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AB40u;
    if (runtime->hasFunction(0x30AB40u)) {
        auto targetFn = runtime->lookupFunction(0x30AB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ADA0u; }
        if (ctx->pc != 0x30ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030AB40_0x30ab40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ADA0u; }
        if (ctx->pc != 0x30ADA0u) { return; }
    }
    ctx->pc = 0x30ADA0u;
label_30ada0:
    // 0x30ada0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30ada4:
    // 0x30ada4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ada4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x30ADA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ADA8u;
            // 0x30adac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30ADB0u;
    ctx->pc = 0x30adb0u;
}
