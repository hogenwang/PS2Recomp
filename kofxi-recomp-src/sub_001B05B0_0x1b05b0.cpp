#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B05B0
// Address: 0x1b05b0 - 0x1b0610
void sub_001B05B0_0x1b05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B05B0_0x1b05b0");
#endif

    switch (ctx->pc) {
        case 0x1b05d8u: goto label_1b05d8;
        case 0x1b05ecu: goto label_1b05ec;
        default: break;
    }

    ctx->pc = 0x1b05b0u;

    // 0x1b05b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b05b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b05b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b05bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b05bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b05c0: 0x2450f818  addiu       $s0, $v0, -0x7E8
    ctx->pc = 0x1b05c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965272));
    // 0x1b05c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b05c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b05c8: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1b05c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b05cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b05d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b05d4: 0x0  nop
    ctx->pc = 0x1b05d4u;
    // NOP
label_1b05d8:
    // 0x1b05d8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b05d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b05dc: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B05DCu;
    {
        const bool branch_taken_0x1b05dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1b05dc) {
            ctx->pc = 0x1B05E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05DCu;
            // 0x1b05e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B05F0u;
            goto label_1b05f0;
        }
    }
    ctx->pc = 0x1B05E4u;
    // 0x1b05e4: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1B05E4u;
    SET_GPR_U32(ctx, 31, 0x1B05ECu);
    ctx->pc = 0x1B05E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05E4u;
            // 0x1b05e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (runtime->hasFunction(0x1B04D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05ECu; }
        if (ctx->pc != 0x1B05ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04D0_0x1b04d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05ECu; }
        if (ctx->pc != 0x1B05ECu) { return; }
    }
    ctx->pc = 0x1B05ECu;
label_1b05ec:
    // 0x1b05ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b05ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b05f0:
    // 0x1b05f0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B05F0u;
    {
        const bool branch_taken_0x1b05f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B05F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05F0u;
            // 0x1b05f4: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05f0) {
            ctx->pc = 0x1B05D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b05d8;
        }
    }
    ctx->pc = 0x1B05F8u;
    // 0x1b05f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b05f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b05fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b05fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0608: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0608u;
            // 0x1b060c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0610u;
    ctx->pc = 0x1b0610u;
}
