#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002616E0
// Address: 0x2616e0 - 0x261740
void sub_002616E0_0x2616e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002616E0_0x2616e0");
#endif

    switch (ctx->pc) {
        case 0x261710u: goto label_261710;
        case 0x261724u: goto label_261724;
        default: break;
    }

    ctx->pc = 0x2616e0u;

    // 0x2616e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2616e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2616e4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2616e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2616e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2616e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2616ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2616ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2616f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2616f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2616f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2616f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2616fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x261700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261704: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x261708: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x261708u;
    SET_GPR_U32(ctx, 31, 0x261710u);
    ctx->pc = 0x26170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261708u;
            // 0x26170c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261710u; }
        if (ctx->pc != 0x261710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261710u; }
        if (ctx->pc != 0x261710u) { return; }
    }
    ctx->pc = 0x261710u;
label_261710:
    // 0x261710: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x261710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x261714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x261714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261718: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x261718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x26171c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x26171Cu;
    SET_GPR_U32(ctx, 31, 0x261724u);
    ctx->pc = 0x261720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26171Cu;
            // 0x261720: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261724u; }
        if (ctx->pc != 0x261724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261724u; }
        if (ctx->pc != 0x261724u) { return; }
    }
    ctx->pc = 0x261724u;
label_261724:
    // 0x261724: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x261724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261728: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x261728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26172c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26172cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261730: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x261730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261734: 0x3e00008  jr          $ra
    ctx->pc = 0x261734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261734u;
            // 0x261738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26173Cu;
    // 0x26173c: 0x0  nop
    ctx->pc = 0x26173cu;
    // NOP
    ctx->pc = 0x261740u;
}
