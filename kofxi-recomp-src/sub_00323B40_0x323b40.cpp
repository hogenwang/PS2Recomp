#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323B40
// Address: 0x323b40 - 0x323b70
void sub_00323B40_0x323b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323B40_0x323b40");
#endif

    switch (ctx->pc) {
        case 0x323b50u: goto label_323b50;
        default: break;
    }

    ctx->pc = 0x323b40u;

    // 0x323b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323b48: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323B48u;
    SET_GPR_U32(ctx, 31, 0x323B50u);
    ctx->pc = 0x321F90u;
    if (runtime->hasFunction(0x321F90u)) {
        auto targetFn = runtime->lookupFunction(0x321F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323B50u; }
        if (ctx->pc != 0x323B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321F90_0x321f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323B50u; }
        if (ctx->pc != 0x323B50u) { return; }
    }
    ctx->pc = 0x323B50u;
label_323b50:
    // 0x323b50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x323b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323b54: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x323B54u;
    {
        const bool branch_taken_0x323b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x323b54) {
            ctx->pc = 0x323B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323B54u;
            // 0x323b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323B64u;
            goto label_323b64;
        }
    }
    ctx->pc = 0x323B5Cu;
    // 0x323b5c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x323b5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x323b60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x323b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_323b64:
    // 0x323b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b68: 0x3e00008  jr          $ra
    ctx->pc = 0x323B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323B68u;
            // 0x323b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323B70u;
    ctx->pc = 0x323b70u;
}
