#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AF8C8
// Address: 0x2af8c8 - 0x2af918
void sub_002AF8C8_0x2af8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF8C8_0x2af8c8");
#endif

    switch (ctx->pc) {
        case 0x2af900u: goto label_2af900;
        default: break;
    }

    ctx->pc = 0x2af8c8u;

    // 0x2af8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af8d0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2af8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af8d8: 0x8e0275f0  lw          $v0, 0x75F0($s0)
    ctx->pc = 0x2af8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30192)));
    // 0x2af8dc: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF8DCu;
    {
        const bool branch_taken_0x2af8dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AF8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8DCu;
            // 0x2af8e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8dc) {
            ctx->pc = 0x2AF908u;
            goto label_2af908;
        }
    }
    ctx->pc = 0x2AF8E4u;
    // 0x2af8e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2af8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2af8e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2af8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8ec: 0x24a5d210  addiu       $a1, $a1, -0x2DF0
    ctx->pc = 0x2af8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
    // 0x2af8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8f8: 0xc0a3c06  jal         func_28F018
    ctx->pc = 0x2AF8F8u;
    SET_GPR_U32(ctx, 31, 0x2AF900u);
    ctx->pc = 0x2AF8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8F8u;
            // 0x2af8fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F018u;
    if (runtime->hasFunction(0x28F018u)) {
        auto targetFn = runtime->lookupFunction(0x28F018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF900u; }
        if (ctx->pc != 0x2AF900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F018_0x28f018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF900u; }
        if (ctx->pc != 0x2AF900u) { return; }
    }
    ctx->pc = 0x2AF900u;
label_2af900:
    // 0x2af900: 0xae0275f0  sw          $v0, 0x75F0($s0)
    ctx->pc = 0x2af900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30192), GPR_U32(ctx, 2));
    // 0x2af904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2af908:
    // 0x2af908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af90c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF90Cu;
            // 0x2af910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF914u;
    // 0x2af914: 0x0  nop
    ctx->pc = 0x2af914u;
    // NOP
    ctx->pc = 0x2af918u;
}
