#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226758
// Address: 0x226758 - 0x2267b0
void sub_00226758_0x226758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226758_0x226758");
#endif

    switch (ctx->pc) {
        case 0x226790u: goto label_226790;
        default: break;
    }

    ctx->pc = 0x226758u;

    // 0x226758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22675c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22675cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226764: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x226764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226768: 0x8dedf1cc  lw          $t5, -0xE34($t7)
    ctx->pc = 0x226768u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963660)));
    // 0x22676c: 0x15ae0009  bne         $t5, $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x22676Cu;
    {
        const bool branch_taken_0x22676c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x226770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22676Cu;
            // 0x226770: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22676c) {
            ctx->pc = 0x226794u;
            goto label_226794;
        }
    }
    ctx->pc = 0x226774u;
    // 0x226774: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226774u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226778: 0x8deef1d0  lw          $t6, -0xE30($t7)
    ctx->pc = 0x226778u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963664)));
    // 0x22677c: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x22677Cu;
    {
        const bool branch_taken_0x22677c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x226780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22677Cu;
            // 0x226780: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22677c) {
            ctx->pc = 0x226794u;
            goto label_226794;
        }
    }
    ctx->pc = 0x226784u;
    // 0x226784: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226784u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226788: 0xc089db4  jal         func_2276D0
    ctx->pc = 0x226788u;
    SET_GPR_U32(ctx, 31, 0x226790u);
    ctx->pc = 0x22678Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226788u;
            // 0x22678c: 0x8de4f1e0  lw          $a0, -0xE20($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963680)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2276D0u;
    if (runtime->hasFunction(0x2276D0u)) {
        auto targetFn = runtime->lookupFunction(0x2276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226790u; }
        if (ctx->pc != 0x226790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002276D0_0x2276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226790u; }
        if (ctx->pc != 0x226790u) { return; }
    }
    ctx->pc = 0x226790u;
label_226790:
    // 0x226790: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226790u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_226794:
    // 0x226794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226798: 0x8de2f1d4  lw          $v0, -0xE2C($t7)
    ctx->pc = 0x226798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963668)));
    // 0x22679c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2267a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2267a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2267a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2267A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2267A4u;
            // 0x2267a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2267ACu;
    // 0x2267ac: 0x0  nop
    ctx->pc = 0x2267acu;
    // NOP
    ctx->pc = 0x2267b0u;
}
