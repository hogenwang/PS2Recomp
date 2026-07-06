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

// Function: sub_001A43F0
// Address: 0x1a43f0 - 0x1a44b0
void sub_001A43F0_0x1a43f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A43F0_0x1a43f0");
#endif

    switch (ctx->pc) {
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4458u: goto label_1a4458;
        default: break;
    }

    ctx->pc = 0x1a43f0u;

    // 0x1a43f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a43f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a43f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a43f8: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1a43fc:
    // 0x1a43fc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1a43fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4400:
    // 0x1a4400: 0x30c300c0  andi        $v1, $a2, 0xC0
    ctx->pc = 0x1a4400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)192);
    // 0x1a4404: 0x14690020  bne         $v1, $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A4404u;
    {
        const bool branch_taken_0x1a4404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1a4404) {
            ctx->pc = 0x1A4488u;
            goto label_1a4488;
        }
    }
    ctx->pc = 0x1A440Cu;
    // 0x1a440c: 0x30c7003f  andi        $a3, $a2, 0x3F
    ctx->pc = 0x1a440cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1a4410: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4410u;
    {
        const bool branch_taken_0x1a4410 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4410) {
            ctx->pc = 0x1A4420u;
            goto label_1a4420;
        }
    }
    ctx->pc = 0x1A4418u;
    // 0x1a4418: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A4418u;
    {
        const bool branch_taken_0x1a4418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4418) {
            ctx->pc = 0x1A44A0u;
            goto label_1a44a0;
        }
    }
    ctx->pc = 0x1A4420u;
label_1a4420:
    // 0x1a4420: 0x14e80007  bne         $a3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4420u;
    {
        const bool branch_taken_0x1a4420 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a4420) {
            ctx->pc = 0x1A4440u;
            goto label_1a4440;
        }
    }
    ctx->pc = 0x1A4428u;
    // 0x1a4428: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1a4428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a442c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4430: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1a4430u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4434: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1a4434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1a4438: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A4438u;
    {
        const bool branch_taken_0x1a4438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4438u;
        // 0x1a443c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4438) {
            ctx->pc = 0x1A43FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a43fc;
        }
    }
    ctx->pc = 0x1A4440u;
label_1a4440:
    // 0x1a4440: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x1a4440u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a4444: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a4448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a444c: 0xa65023  subu        $t2, $a1, $a2
    ctx->pc = 0x1a444cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a4450: 0x10e0ffea  beqz        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A4450u;
    {
        const bool branch_taken_0x1a4450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4450u;
        // 0x1a4454: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4450) {
            ctx->pc = 0x1A43FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a43fc;
        }
    }
    ctx->pc = 0x1A4458u;
label_1a4458:
    // 0x1a4458: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x1a4458u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a445c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1a445cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4464: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4468: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x1a4468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a446c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4470: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a4470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a4474: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A4474u;
    {
        const bool branch_taken_0x1a4474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4474u;
        // 0x1a4478: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4474) {
            ctx->pc = 0x1A4458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4458;
        }
    }
    ctx->pc = 0x1A447Cu;
    // 0x1a447c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A447Cu;
    {
        const bool branch_taken_0x1a447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A447Cu;
        // 0x1a4480: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a447c) {
            ctx->pc = 0x1A4400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4400;
        }
    }
    ctx->pc = 0x1A4484u;
    // 0x1a4484: 0x0  nop
    ctx->pc = 0x1a4484u;
    // NOP
label_1a4488:
    // 0x1a4488: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1a4488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a448c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4490: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a4494: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1A4494u;
    {
        const bool branch_taken_0x1a4494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4494u;
        // 0x1a4498: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4494) {
            ctx->pc = 0x1A43FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a43fc;
        }
    }
    ctx->pc = 0x1A449Cu;
    // 0x1a449c: 0x0  nop
    ctx->pc = 0x1a449cu;
    // NOP
label_1a44a0:
    // 0x1a44a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A44A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44A8u;
    // 0x1a44a8: 0x0  nop
    ctx->pc = 0x1a44a8u;
    // NOP
    // 0x1a44ac: 0x0  nop
    ctx->pc = 0x1a44acu;
    // NOP
}
