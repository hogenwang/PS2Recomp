#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242F68
// Address: 0x242f68 - 0x242fc0
void sub_00242F68_0x242f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242F68_0x242f68");
#endif

    switch (ctx->pc) {
        case 0x242facu: goto label_242fac;
        default: break;
    }

    ctx->pc = 0x242f68u;

    // 0x242f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x242f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x242f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242f7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242F7Cu;
    {
        const bool branch_taken_0x242f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F7Cu;
            // 0x242f80: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f7c) {
            ctx->pc = 0x242FA4u;
            goto label_242fa4;
        }
    }
    ctx->pc = 0x242F84u;
    // 0x242f84: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x242f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x242f88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242F88u;
    {
        const bool branch_taken_0x242f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f88) {
            ctx->pc = 0x242FA4u;
            goto label_242fa4;
        }
    }
    ctx->pc = 0x242F90u;
    // 0x242f90: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x242f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x242f94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242f98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242F98u;
    {
        const bool branch_taken_0x242f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F98u;
            // 0x242f9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f98) {
            ctx->pc = 0x242FB4u;
            goto label_242fb4;
        }
    }
    ctx->pc = 0x242FA0u;
    // 0x242fa0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x242fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_242fa4:
    // 0x242fa4: 0xc090bf0  jal         func_242FC0
    ctx->pc = 0x242FA4u;
    SET_GPR_U32(ctx, 31, 0x242FACu);
    ctx->pc = 0x242FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FA4u;
            // 0x242fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (runtime->hasFunction(0x242FC0u)) {
        auto targetFn = runtime->lookupFunction(0x242FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FACu; }
        if (ctx->pc != 0x242FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242FC0_0x242fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FACu; }
        if (ctx->pc != 0x242FACu) { return; }
    }
    ctx->pc = 0x242FACu;
label_242fac:
    // 0x242fac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x242fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242fb4:
    // 0x242fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x242FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242FB8u;
            // 0x242fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242FC0u;
    ctx->pc = 0x242fc0u;
}
