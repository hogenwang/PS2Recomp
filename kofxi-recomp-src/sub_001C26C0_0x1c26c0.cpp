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

// Function: sub_001C26C0
// Address: 0x1c26c0 - 0x1c2750
void sub_001C26C0_0x1c26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C26C0_0x1c26c0");
#endif

    switch (ctx->pc) {
        case 0x1c26e0u: goto label_1c26e0;
        case 0x1c26e8u: goto label_1c26e8;
        case 0x1c26fcu: goto label_1c26fc;
        case 0x1c273cu: goto label_1c273c;
        default: break;
    }

    ctx->pc = 0x1c26c0u;

    // 0x1c26c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c26c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c26c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c26c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c26cc: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1c26ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c26d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c26d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c26d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c26d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c26d8: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1C26D8u;
    SET_GPR_U32(ctx, 31, 0x1C26E0u);
    ctx->pc = 0x1C26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26D8u;
    // 0x1c26dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1C26D8u, 0x1C26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26E0u;
label_1c26e0:
    // 0x1c26e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c26e4: 0x2450d090  addiu       $s0, $v0, -0x2F70
    ctx->pc = 0x1c26e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
label_1c26e8:
    // 0x1c26e8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c26e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c26ec: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C26ECu;
    {
        const bool branch_taken_0x1c26ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c26ec) {
            ctx->pc = 0x1C26F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C26ECu;
            // 0x1c26f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2700u;
            goto label_1c2700;
        }
    }
    ctx->pc = 0x1C26F4u;
    // 0x1c26f4: 0xc0708b8  jal         func_1C22E0
    ctx->pc = 0x1C26F4u;
    SET_GPR_U32(ctx, 31, 0x1C26FCu);
    ctx->pc = 0x1C26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26F4u;
    // 0x1c26f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22E0u, 0x1C26F4u, 0x1C26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26FCu;
label_1c26fc:
    // 0x1c26fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c26fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c2700:
    // 0x1c2700: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2700u;
    {
        const bool branch_taken_0x1c2700 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2700u;
        // 0x1c2704: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2700) {
            ctx->pc = 0x1C26E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c26e8;
        }
    }
    ctx->pc = 0x1C2708u;
    // 0x1c2708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c270c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c270cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2714: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c2714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2718: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1C2718u;
    ctx->pc = 0x1C271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2718u;
    // 0x1c271c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2720u;
    // 0x1c2720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2724: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c2728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c272c: 0x2442dca0  addiu       $v0, $v0, -0x2360
    ctx->pc = 0x1c272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958240));
    // 0x1c2730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2734: 0xc071008  jal         func_1C4020
    ctx->pc = 0x1C2734u;
    SET_GPR_U32(ctx, 31, 0x1C273Cu);
    ctx->pc = 0x1C2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2734u;
    // 0x1c2738: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4020u, 0x1C2734u, 0x1C273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C273Cu;
label_1c273c:
    // 0x1c273c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2740: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c2744: 0x2442dcb8  addiu       $v0, $v0, -0x2348
    ctx->pc = 0x1c2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958264));
    // 0x1c2748: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2748u;
        // 0x1c274c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2750u;
}
