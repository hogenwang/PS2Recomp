#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030AF70
// Address: 0x30af70 - 0x30afd0
void sub_0030AF70_0x30af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AF70_0x30af70");
#endif

    switch (ctx->pc) {
        case 0x30af8cu: goto label_30af8c;
        case 0x30afc0u: goto label_30afc0;
        default: break;
    }

    ctx->pc = 0x30af70u;

    // 0x30af70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30af74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30af78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30af7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af80: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30af80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30af84: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30AF84u;
    SET_GPR_U32(ctx, 31, 0x30AF8Cu);
    ctx->pc = 0x30AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF84u;
            // 0x30af88: 0x24841f40  addiu       $a0, $a0, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF8Cu; }
        if (ctx->pc != 0x30AF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF8Cu; }
        if (ctx->pc != 0x30AF8Cu) { return; }
    }
    ctx->pc = 0x30AF8Cu;
label_30af8c:
    // 0x30af8c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30af90: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30af90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30af94: 0xac801eb0  sw          $zero, 0x1EB0($a0)
    ctx->pc = 0x30af94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7856), GPR_U32(ctx, 0));
    // 0x30af98: 0xac601eb4  sw          $zero, 0x1EB4($v1)
    ctx->pc = 0x30af98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7860), GPR_U32(ctx, 0));
    // 0x30af9c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30afa0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30afa4: 0xac801eb8  sw          $zero, 0x1EB8($a0)
    ctx->pc = 0x30afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7864), GPR_U32(ctx, 0));
    // 0x30afa8: 0xac601ebc  sw          $zero, 0x1EBC($v1)
    ctx->pc = 0x30afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7868), GPR_U32(ctx, 0));
    // 0x30afac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30afacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30afb0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AFB0u;
    {
        const bool branch_taken_0x30afb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30afb0) {
            ctx->pc = 0x30AFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFB0u;
            // 0x30afb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AFC4u;
            goto label_30afc4;
        }
    }
    ctx->pc = 0x30AFB8u;
    // 0x30afb8: 0xc0c2b6c  jal         func_30ADB0
    ctx->pc = 0x30AFB8u;
    SET_GPR_U32(ctx, 31, 0x30AFC0u);
    ctx->pc = 0x30AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFB8u;
            // 0x30afbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30ADB0u;
    if (runtime->hasFunction(0x30ADB0u)) {
        auto targetFn = runtime->lookupFunction(0x30ADB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFC0u; }
        if (ctx->pc != 0x30AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030ADB0_0x30adb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFC0u; }
        if (ctx->pc != 0x30AFC0u) { return; }
    }
    ctx->pc = 0x30AFC0u;
label_30afc0:
    // 0x30afc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30afc4:
    // 0x30afc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30afc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30afc8: 0x3e00008  jr          $ra
    ctx->pc = 0x30AFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFC8u;
            // 0x30afcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AFD0u;
    ctx->pc = 0x30afd0u;
}
