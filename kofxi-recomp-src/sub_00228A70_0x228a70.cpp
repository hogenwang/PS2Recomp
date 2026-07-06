#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228A70
// Address: 0x228a70 - 0x228ad0
void sub_00228A70_0x228a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228A70_0x228a70");
#endif

    switch (ctx->pc) {
        case 0x228aa4u: goto label_228aa4;
        case 0x228ab0u: goto label_228ab0;
        default: break;
    }

    ctx->pc = 0x228a70u;

    // 0x228a70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x228a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x228a74: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228a7c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x228a7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a80: 0x8c46f9e4  lw          $a2, -0x61C($v0)
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965732)));
    // 0x228a84: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x228a84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x228a88: 0x8c67a784  lw          $a3, -0x587C($v1)
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944644)));
    // 0x228a8c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x228a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x228a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228a94: 0x25084320  addiu       $t0, $t0, 0x4320
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17184));
    // 0x228a98: 0x24a54330  addiu       $a1, $a1, 0x4330
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17200));
    // 0x228a9c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x228A9Cu;
    SET_GPR_U32(ctx, 31, 0x228AA4u);
    ctx->pc = 0x228AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A9Cu;
            // 0x228aa0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AA4u; }
        if (ctx->pc != 0x228AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AA4u; }
        if (ctx->pc != 0x228AA4u) { return; }
    }
    ctx->pc = 0x228AA4u;
label_228aa4:
    // 0x228aa4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228aac: 0xac62a768  sw          $v0, -0x5898($v1)
    ctx->pc = 0x228aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944616), GPR_U32(ctx, 2));
label_228ab0:
    // 0x228ab0: 0x0  nop
    ctx->pc = 0x228ab0u;
    // NOP
    // 0x228ab4: 0x0  nop
    ctx->pc = 0x228ab4u;
    // NOP
    // 0x228ab8: 0x0  nop
    ctx->pc = 0x228ab8u;
    // NOP
    // 0x228abc: 0x0  nop
    ctx->pc = 0x228abcu;
    // NOP
    // 0x228ac0: 0x0  nop
    ctx->pc = 0x228ac0u;
    // NOP
    // 0x228ac4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x228AC4u;
    {
        const bool branch_taken_0x228ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ac4) {
            ctx->pc = 0x228AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228ab0;
        }
    }
    ctx->pc = 0x228ACCu;
    // 0x228acc: 0x0  nop
    ctx->pc = 0x228accu;
    // NOP
    ctx->pc = 0x228ad0u;
}
