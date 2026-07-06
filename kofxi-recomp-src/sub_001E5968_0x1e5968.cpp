#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5968
// Address: 0x1e5968 - 0x1e59c8
void sub_001E5968_0x1e5968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5968_0x1e5968");
#endif

    switch (ctx->pc) {
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5998u: goto label_1e5998;
        case 0x1e59b0u: goto label_1e59b0;
        default: break;
    }

    ctx->pc = 0x1e5968u;

    // 0x1e5968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e596c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5970: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x1e5970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e5974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5978: 0x8071952  j           func_1C6548
    ctx->pc = 0x1E5978u;
    ctx->pc = 0x1E597Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5978u;
            // 0x1e597c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6548u;
    {
        auto targetFn = runtime->lookupFunction(0x1C6548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5980u;
label_1e5980:
    // 0x1e5980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5988: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x1e5988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e598c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5990: 0x8071988  j           func_1C6620
    ctx->pc = 0x1E5990u;
    ctx->pc = 0x1E5994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5990u;
            // 0x1e5994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6620u;
    {
        auto targetFn = runtime->lookupFunction(0x1C6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5998u;
label_1e5998:
    // 0x1e5998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e599c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e59a0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e59a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e59a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e59a8: 0x80719c0  j           func_1C6700
    ctx->pc = 0x1E59A8u;
    ctx->pc = 0x1E59ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59A8u;
            // 0x1e59ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6700u;
    {
        auto targetFn = runtime->lookupFunction(0x1C6700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E59B0u;
label_1e59b0:
    // 0x1e59b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e59b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e59b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e59b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e59b8: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e59bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e59bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e59c0: 0x80719f8  j           func_1C67E0
    ctx->pc = 0x1E59C0u;
    ctx->pc = 0x1E59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59C0u;
            // 0x1e59c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C67E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C67E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E59C8u;
    ctx->pc = 0x1e59c8u;
}
