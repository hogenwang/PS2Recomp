#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A23F0
// Address: 0x2a23f0 - 0x2a2430
void sub_002A23F0_0x2a23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A23F0_0x2a23f0");
#endif

    switch (ctx->pc) {
        case 0x2a2424u: goto label_2a2424;
        default: break;
    }

    ctx->pc = 0x2a23f0u;

    // 0x2a23f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a23f4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2a23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2a23f8: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x2a23f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x2a23fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2a23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2a2400: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2a2400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2a2404: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a2404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a240c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2a240cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2410: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2a2410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x2a2414: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x2a2414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x2a2418: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2a2418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2a241c: 0xc0a892e  jal         func_2A24B8
    ctx->pc = 0x2A241Cu;
    SET_GPR_U32(ctx, 31, 0x2A2424u);
    ctx->pc = 0x2A2420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A241Cu;
            // 0x2a2420: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A24B8u;
    if (runtime->hasFunction(0x2A24B8u)) {
        auto targetFn = runtime->lookupFunction(0x2A24B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2424u; }
        if (ctx->pc != 0x2A2424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A24B8_0x2a24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2424u; }
        if (ctx->pc != 0x2A2424u) { return; }
    }
    ctx->pc = 0x2A2424u;
label_2a2424:
    // 0x2a2424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2428: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A242Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2428u;
            // 0x2a242c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2430u;
    ctx->pc = 0x2a2430u;
}
