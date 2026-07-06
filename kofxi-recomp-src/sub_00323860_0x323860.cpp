#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323860
// Address: 0x323860 - 0x323890
void sub_00323860_0x323860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323860_0x323860");
#endif

    switch (ctx->pc) {
        case 0x323870u: goto label_323870;
        default: break;
    }

    ctx->pc = 0x323860u;

    // 0x323860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323868: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323868u;
    SET_GPR_U32(ctx, 31, 0x323870u);
    ctx->pc = 0x321F90u;
    if (runtime->hasFunction(0x321F90u)) {
        auto targetFn = runtime->lookupFunction(0x321F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323870u; }
        if (ctx->pc != 0x323870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321F90_0x321f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323870u; }
        if (ctx->pc != 0x323870u) { return; }
    }
    ctx->pc = 0x323870u;
label_323870:
    // 0x323870: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x323870u;
    {
        const bool branch_taken_0x323870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323870) {
            ctx->pc = 0x323874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323870u;
            // 0x323874: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x32387Cu;
            goto label_32387c;
        }
    }
    ctx->pc = 0x323878u;
    // 0x323878: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x323878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_32387c:
    // 0x32387c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323880: 0x3e00008  jr          $ra
    ctx->pc = 0x323880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323880u;
            // 0x323884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323888u;
    // 0x323888: 0x0  nop
    ctx->pc = 0x323888u;
    // NOP
    // 0x32388c: 0x0  nop
    ctx->pc = 0x32388cu;
    // NOP
    ctx->pc = 0x323890u;
}
