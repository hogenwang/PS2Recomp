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

// Function: sub_0017C330
// Address: 0x17c330 - 0x17c410
void sub_0017C330_0x17c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C330_0x17c330");
#endif

    switch (ctx->pc) {
        case 0x17c3a8u: goto label_17c3a8;
        default: break;
    }

    ctx->pc = 0x17c330u;

    // 0x17c330: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x17c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x17c334: 0x90479780  lbu         $a3, -0x6880($v0)
    ctx->pc = 0x17c334u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x17c338: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x17c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17c33c: 0x50e20030  beql        $a3, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x17C33Cu;
    {
        const bool branch_taken_0x17c33c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c33c) {
            ctx->pc = 0x17C340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C33Cu;
            // 0x17c340: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C400u;
            goto label_17c400;
        }
    }
    ctx->pc = 0x17C344u;
    // 0x17c344: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17c348: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17C348u;
    {
        const bool branch_taken_0x17c348 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c348) {
            ctx->pc = 0x17C37Cu;
            goto label_17c37c;
        }
    }
    ctx->pc = 0x17C350u;
    // 0x17c350: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c354: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C354u;
    {
        const bool branch_taken_0x17c354 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c354) {
            ctx->pc = 0x17C37Cu;
            goto label_17c37c;
        }
    }
    ctx->pc = 0x17C35Cu;
    // 0x17c35c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c360: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C360u;
    {
        const bool branch_taken_0x17c360 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c360) {
            ctx->pc = 0x17C37Cu;
            goto label_17c37c;
        }
    }
    ctx->pc = 0x17C368u;
    // 0x17c368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c36c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C36Cu;
    {
        const bool branch_taken_0x17c36c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c36c) {
            ctx->pc = 0x17C37Cu;
            goto label_17c37c;
        }
    }
    ctx->pc = 0x17C374u;
    // 0x17c374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17C374u;
    {
        const bool branch_taken_0x17c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C374u;
        // 0x17c378: 0x3c0a0093  lui         $t2, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c374) {
            ctx->pc = 0x17C388u;
            goto label_17c388;
        }
    }
    ctx->pc = 0x17C37Cu;
label_17c37c:
    // 0x17c37c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17c380: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17C380u;
    {
        const bool branch_taken_0x17c380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c380) {
            ctx->pc = 0x17C400u;
            goto label_17c400;
        }
    }
    ctx->pc = 0x17C388u;
label_17c388:
    // 0x17c388: 0x3c090093  lui         $t1, 0x93
    ctx->pc = 0x17c388u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)147 << 16));
    // 0x17c38c: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x17c38cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x17c390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c394: 0x254aedf0  addiu       $t2, $t2, -0x1210
    ctx->pc = 0x17c394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962672));
    // 0x17c398: 0x2529ed50  addiu       $t1, $t1, -0x12B0
    ctx->pc = 0x17c398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962512));
    // 0x17c39c: 0x2508ee90  addiu       $t0, $t0, -0x1170
    ctx->pc = 0x17c39cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962832));
    // 0x17c3a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c3a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17c3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17c3a8:
    // 0x17c3a8: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C3A8u;
    {
        const bool branch_taken_0x17c3a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x17c3a8) {
            ctx->pc = 0x17C3B8u;
            goto label_17c3b8;
        }
    }
    ctx->pc = 0x17C3B0u;
    // 0x17c3b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C3B0u;
    {
        const bool branch_taken_0x17c3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3B0u;
        // 0x17c3b4: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3b0) {
            ctx->pc = 0x17C3D0u;
            goto label_17c3d0;
        }
    }
    ctx->pc = 0x17C3B8u;
label_17c3b8:
    // 0x17c3b8: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C3B8u;
    {
        const bool branch_taken_0x17c3b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x17c3b8) {
            ctx->pc = 0x17C3C8u;
            goto label_17c3c8;
        }
    }
    ctx->pc = 0x17C3C0u;
    // 0x17c3c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17C3C0u;
    {
        const bool branch_taken_0x17c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3C0u;
        // 0x17c3c4: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3c0) {
            ctx->pc = 0x17C3D0u;
            goto label_17c3d0;
        }
    }
    ctx->pc = 0x17C3C8u;
label_17c3c8:
    // 0x17c3c8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x17c3c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3cc: 0x0  nop
    ctx->pc = 0x17c3ccu;
    // NOP
label_17c3d0:
    // 0x17c3d0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17c3d4: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x17c3d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17c3d8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C3D8u;
    {
        const bool branch_taken_0x17c3d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c3d8) {
            ctx->pc = 0x17C3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C3D8u;
            // 0x17c3dc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C3E8u;
            goto label_17c3e8;
        }
    }
    ctx->pc = 0x17C3E0u;
    // 0x17c3e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C3E0u;
    {
        const bool branch_taken_0x17c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c3e0) {
            ctx->pc = 0x17C400u;
            goto label_17c400;
        }
    }
    ctx->pc = 0x17C3E8u;
label_17c3e8:
    // 0x17c3e8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x17c3ec: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x17c3ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17c3f0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x17c3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x17c3f4: 0x1420ffec  bnez        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17C3F4u;
    {
        const bool branch_taken_0x17c3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3F4u;
        // 0x17c3f8: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3f4) {
            ctx->pc = 0x17C3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c3a8;
        }
    }
    ctx->pc = 0x17C3FCu;
    // 0x17c3fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_17c400:
    // 0x17c400: 0x3e00008  jr          $ra
    ctx->pc = 0x17C400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C408u;
    // 0x17c408: 0x0  nop
    ctx->pc = 0x17c408u;
    // NOP
    // 0x17c40c: 0x0  nop
    ctx->pc = 0x17c40cu;
    // NOP
    if (ctx->pc == 0x17c40cu) { ctx->pc = 0x17c410u; }
}
