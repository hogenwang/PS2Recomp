#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C28F0
// Address: 0x1c28f0 - 0x1c2980
void sub_001C28F0_0x1c28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C28F0_0x1c28f0");
#endif

    switch (ctx->pc) {
        case 0x1c2914u: goto label_1c2914;
        case 0x1c2928u: goto label_1c2928;
        case 0x1c293cu: goto label_1c293c;
        default: break;
    }

    ctx->pc = 0x1c28f0u;

    // 0x1c28f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c28f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c28f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c28f8: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c28f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1c28fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c28fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2904: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c2908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c290c: 0xc0739f8  jal         func_1CE7E0
    ctx->pc = 0x1C290Cu;
    SET_GPR_U32(ctx, 31, 0x1C2914u);
    ctx->pc = 0x1C2910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C290Cu;
    // 0x1c2910: 0x2664dcb0  addiu       $a0, $s3, -0x2350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE7E0u, 0x1C290Cu, 0x1C2914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2914u;
label_1c2914:
    // 0x1c2914: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2914u;
    {
        const bool branch_taken_0x1c2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2914u;
        // 0x1c2918: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2914) {
            ctx->pc = 0x1C294Cu;
            goto label_1c294c;
        }
    }
    ctx->pc = 0x1C291Cu;
    // 0x1c291c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c291cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2920: 0x2450dd20  addiu       $s0, $v0, -0x22E0
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1c2924: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x1c2924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1c2928:
    // 0x1c2928: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c2928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c292c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C292Cu;
    {
        const bool branch_taken_0x1c292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c292c) {
            ctx->pc = 0x1C2930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C292Cu;
            // 0x1c2930: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2940u;
            goto label_1c2940;
        }
    }
    ctx->pc = 0x1C2934u;
    // 0x1c2934: 0xc070a0a  jal         func_1C2828
    ctx->pc = 0x1C2934u;
    SET_GPR_U32(ctx, 31, 0x1C293Cu);
    ctx->pc = 0x1C2938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2934u;
    // 0x1c2938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2828u, 0x1C2934u, 0x1C293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C293Cu;
label_1c293c:
    // 0x1c293c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c293cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c2940:
    // 0x1c2940: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2940u;
    {
        const bool branch_taken_0x1c2940 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2940u;
        // 0x1c2944: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2940) {
            ctx->pc = 0x1C2928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2928;
        }
    }
    ctx->pc = 0x1C2948u;
    // 0x1c2948: 0xae60dcb0  sw          $zero, -0x2350($s3)
    ctx->pc = 0x1c2948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294958256), GPR_U32(ctx, 0));
label_1c294c:
    // 0x1c294c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c294cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c295c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2960: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2960u;
        // 0x1c2964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2968u;
    // 0x1c2968: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c296c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c296cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c2970: 0xac44dca4  sw          $a0, -0x235C($v0)
    ctx->pc = 0x1c2970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958244), GPR_U32(ctx, 4));
    // 0x1c2974: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2974u;
        // 0x1c2978: 0xac65dca8  sw          $a1, -0x2358($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C297Cu;
    // 0x1c297c: 0x0  nop
    ctx->pc = 0x1c297cu;
    // NOP
    if (ctx->pc == 0x1c297cu) { ctx->pc = 0x1c2980u; }
}
