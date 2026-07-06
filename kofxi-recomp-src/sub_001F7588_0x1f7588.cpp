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

// Function: sub_001F7588
// Address: 0x1f7588 - 0x1f7638
void sub_001F7588_0x1f7588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7588_0x1f7588");
#endif

    switch (ctx->pc) {
        case 0x1f759cu: goto label_1f759c;
        case 0x1f75c8u: goto label_1f75c8;
        case 0x1f7600u: goto label_1f7600;
        case 0x1f7608u: goto label_1f7608;
        case 0x1f7618u: goto label_1f7618;
        default: break;
    }

    ctx->pc = 0x1f7588u;

    // 0x1f7588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f758c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f7594: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F7594u;
    SET_GPR_U32(ctx, 31, 0x1F759Cu);
    ctx->pc = 0x1F7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7594u;
    // 0x1f7598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F7594u, 0x1F759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F759Cu;
label_1f759c:
    // 0x1f759c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f759cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f75a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F75A4u;
    {
        const bool branch_taken_0x1f75a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75A4u;
        // 0x1f75a8: 0x34a50138  ori         $a1, $a1, 0x138 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)312);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75a4) {
            ctx->pc = 0x1F75C0u;
            goto label_1f75c0;
        }
    }
    ctx->pc = 0x1F75ACu;
    // 0x1f75ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f75acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f75b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f75b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f75b8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F75B8u;
    ctx->pc = 0x1F75BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F75B8u;
    // 0x1f75bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F75C0u;
label_1f75c0:
    // 0x1f75c0: 0xc07dd8e  jal         func_1F7638
    ctx->pc = 0x1F75C0u;
    SET_GPR_U32(ctx, 31, 0x1F75C8u);
    ctx->pc = 0x1F7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7638u, 0x1F75C0u, 0x1F75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F75C8u;
label_1f75c8:
    // 0x1f75c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f75c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f75d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f75d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f75d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F75D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75D4u;
        // 0x1f75d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F75D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F75DCu;
    // 0x1f75dc: 0x0  nop
    ctx->pc = 0x1f75dcu;
    // NOP
    // 0x1f75e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f75e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f75e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f75e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f75ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f75ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f75f0: 0x2450174c  addiu       $s0, $v0, 0x174C
    ctx->pc = 0x1f75f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1f75f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f75f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f75f8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1f75f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f75fc: 0x0  nop
    ctx->pc = 0x1f75fcu;
    // NOP
label_1f7600:
    // 0x1f7600: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F7600u;
    SET_GPR_U32(ctx, 31, 0x1F7608u);
    ctx->pc = 0x1F7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7600u;
    // 0x1f7604: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F7600u, 0x1F7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7608u;
label_1f7608:
    // 0x1f7608: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7608u;
    {
        const bool branch_taken_0x1f7608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7608) {
            ctx->pc = 0x1F760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7608u;
            // 0x1f760c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F761Cu;
            goto label_1f761c;
        }
    }
    ctx->pc = 0x1F7610u;
    // 0x1f7610: 0xc07dd8e  jal         func_1F7638
    ctx->pc = 0x1F7610u;
    SET_GPR_U32(ctx, 31, 0x1F7618u);
    ctx->pc = 0x1F7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7610u;
    // 0x1f7614: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7638u, 0x1F7610u, 0x1F7618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7618u;
label_1f7618:
    // 0x1f7618: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f761c:
    // 0x1f761c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F761Cu;
    {
        const bool branch_taken_0x1f761c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F761Cu;
        // 0x1f7620: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f761c) {
            ctx->pc = 0x1F7600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7600;
        }
    }
    ctx->pc = 0x1F7624u;
    // 0x1f7624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f762c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f762cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7630: 0x807e140  j           func_1F8500
    ctx->pc = 0x1F7630u;
    ctx->pc = 0x1F7634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7630u;
    // 0x1f7634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8500u, 0x1F7630u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F7638u;
}
