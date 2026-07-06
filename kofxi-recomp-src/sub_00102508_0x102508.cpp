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

// Function: sub_00102508
// Address: 0x102508 - 0x1025e8
void sub_00102508_0x102508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102508_0x102508");
#endif

    switch (ctx->pc) {
        case 0x102540u: goto label_102540;
        case 0x1025a4u: goto label_1025a4;
        case 0x1025acu: goto label_1025ac;
        default: break;
    }

    ctx->pc = 0x102508u;

    // 0x102508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10250c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x102510: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x102510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x102514: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x102514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x102518: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x102518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10251c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x10251cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x102520: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x102520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x102524: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x102528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10252c: 0x24638460  addiu       $v1, $v1, -0x7BA0
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935648));
    // 0x102530: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x102530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102534: 0x24c69ed8  addiu       $a2, $a2, -0x6128
    ctx->pc = 0x102534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942424));
    // 0x102538: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x102538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10253c: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10253cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_102540:
    // 0x102540: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x102540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x102544: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x102544u;
    {
        const bool branch_taken_0x102544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102544) {
            ctx->pc = 0x102548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102544u;
            // 0x102548: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10256Cu;
            goto label_10256c;
        }
    }
    ctx->pc = 0x10254Cu;
    // 0x10254c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102550: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x102550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x102554: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x102554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x102558: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x102558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x10255c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x10255cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x102560: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x102560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x102564: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x102564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x102568: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_10256c:
    // 0x10256c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102570: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x102570u;
    {
        const bool branch_taken_0x102570 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x102574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102570u;
        // 0x102574: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102570) {
            ctx->pc = 0x102540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102540;
        }
    }
    ctx->pc = 0x102578u;
    // 0x102578: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10257c: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x10257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
    // 0x102580: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x102580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x102584: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x102584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
    // 0x102588: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x102588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10258c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102590: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x102590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x102594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102598: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x102598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x10259c: 0xc04092a  jal         func_1024A8
    ctx->pc = 0x10259Cu;
    SET_GPR_U32(ctx, 31, 0x1025A4u);
    ctx->pc = 0x1025A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10259Cu;
    // 0x1025a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024A8u, 0x10259Cu, 0x1025A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025A4u;
label_1025a4:
    // 0x1025a4: 0xc04097a  jal         func_1025E8
    ctx->pc = 0x1025A4u;
    SET_GPR_U32(ctx, 31, 0x1025ACu);
    ctx->pc = 0x1025A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025A4u;
    // 0x1025a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1025E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1025E8u, 0x1025A4u, 0x1025ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025ACu;
label_1025ac:
    // 0x1025ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1025acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1025b0: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1025B0u;
    {
        const bool branch_taken_0x1025b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1025B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025B0u;
        // 0x1025b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025b0) {
            ctx->pc = 0x1025D0u;
            goto label_1025d0;
        }
    }
    ctx->pc = 0x1025B8u;
    // 0x1025b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1025b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1025bc: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x1025bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x1025c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1025c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1025c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1025c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1025c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1025c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1025cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1025ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1025d0:
    // 0x1025d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1025d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1025d4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1025d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1025d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1025d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1025dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1025DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1025E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025DCu;
        // 0x1025e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1025DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1025E4u;
    // 0x1025e4: 0x0  nop
    ctx->pc = 0x1025e4u;
    // NOP
    if (ctx->pc == 0x1025e4u) { ctx->pc = 0x1025e8u; }
}
