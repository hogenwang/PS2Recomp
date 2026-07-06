#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267288
// Address: 0x267288 - 0x2672e8
void sub_00267288_0x267288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267288_0x267288");
#endif

    switch (ctx->pc) {
        case 0x2672b0u: goto label_2672b0;
        default: break;
    }

    ctx->pc = 0x267288u;

    // 0x267288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26728c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267298: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x26729c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2672a0: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2672A0u;
    {
        const bool branch_taken_0x2672a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2672A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2672A0u;
            // 0x2672a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672a0) {
            ctx->pc = 0x2672D8u;
            goto label_2672d8;
        }
    }
    ctx->pc = 0x2672A8u;
    // 0x2672a8: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x2672A8u;
    SET_GPR_U32(ctx, 31, 0x2672B0u);
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2672B0u; }
        if (ctx->pc != 0x2672B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2672B0u; }
        if (ctx->pc != 0x2672B0u) { return; }
    }
    ctx->pc = 0x2672B0u;
label_2672b0:
    // 0x2672b0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x2672b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2672b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2672b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2672b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2672b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2672bc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2672bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2672c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2672c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2672c4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2672c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2672c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2672c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2672cc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2672ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2672d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2672d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2672d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2672d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2672d8:
    // 0x2672d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2672d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2672dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2672DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2672E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2672DCu;
            // 0x2672e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2672E4u;
    // 0x2672e4: 0x0  nop
    ctx->pc = 0x2672e4u;
    // NOP
    ctx->pc = 0x2672e8u;
}
