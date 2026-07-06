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

// Function: sub_00224798
// Address: 0x224798 - 0x2249a0
void sub_00224798_0x224798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224798_0x224798");
#endif

    switch (ctx->pc) {
        case 0x2247d4u: goto label_2247d4;
        case 0x2247e8u: goto label_2247e8;
        case 0x22481cu: goto label_22481c;
        case 0x22483cu: goto label_22483c;
        case 0x224878u: goto label_224878;
        case 0x2248a4u: goto label_2248a4;
        case 0x224918u: goto label_224918;
        case 0x224938u: goto label_224938;
        default: break;
    }

    ctx->pc = 0x224798u;

    // 0x224798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22479c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x22479cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2247a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2247a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2247a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2247a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2247a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2247a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2247ac: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2247acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2247b0: 0x8e0eca30  lw          $t6, -0x35D0($s0)
    ctx->pc = 0x2247b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953520)));
    // 0x2247b4: 0x15cf0011  bne         $t6, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2247B4u;
    {
        const bool branch_taken_0x2247b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2247B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247B4u;
        // 0x2247b8: 0x8e0fca30  lw          $t7, -0x35D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247b4) {
            ctx->pc = 0x2247FCu;
            goto label_2247fc;
        }
    }
    ctx->pc = 0x2247BCu;
    // 0x2247bc: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2247bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2247c0: 0x8e24ca28  lw          $a0, -0x35D8($s1)
    ctx->pc = 0x2247c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953512)));
    // 0x2247c4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2247C4u;
    {
        const bool branch_taken_0x2247c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2247c4) {
            ctx->pc = 0x2247F8u;
            goto label_2247f8;
        }
    }
    ctx->pc = 0x2247CCu;
    // 0x2247cc: 0xc088696  jal         func_221A58
    ctx->pc = 0x2247CCu;
    SET_GPR_U32(ctx, 31, 0x2247D4u);
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x2247CCu, 0x2247D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247D4u;
label_2247d4:
    // 0x2247d4: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x2247d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2247d8: 0x504f0007  beql        $v0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2247D8u;
    {
        const bool branch_taken_0x2247d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x2247d8) {
            ctx->pc = 0x2247DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2247D8u;
            // 0x2247dc: 0xae00ca30  sw          $zero, -0x35D0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294953520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247F8u;
            goto label_2247f8;
        }
    }
    ctx->pc = 0x2247E0u;
    // 0x2247e0: 0xc088696  jal         func_221A58
    ctx->pc = 0x2247E0u;
    SET_GPR_U32(ctx, 31, 0x2247E8u);
    ctx->pc = 0x2247E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247E0u;
    // 0x2247e4: 0x8e24ca28  lw          $a0, -0x35D8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x2247E0u, 0x2247E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247E8u;
label_2247e8:
    // 0x2247e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2247E8u;
    {
        const bool branch_taken_0x2247e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2247e8) {
            ctx->pc = 0x2247ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2247E8u;
            // 0x2247ec: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247F8u;
            goto label_2247f8;
        }
    }
    ctx->pc = 0x2247F0u;
    // 0x2247f0: 0xae00ca30  sw          $zero, -0x35D0($s0)
    ctx->pc = 0x2247f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953520), GPR_U32(ctx, 0));
    // 0x2247f4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2247f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_2247f8:
    // 0x2247f8: 0x8e0fca30  lw          $t7, -0x35D0($s0)
    ctx->pc = 0x2247f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953520)));
label_2247fc:
    // 0x2247fc: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2247FCu;
    {
        const bool branch_taken_0x2247fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x224800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247FCu;
        // 0x224800: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247fc) {
            ctx->pc = 0x224830u;
            goto label_224830;
        }
    }
    ctx->pc = 0x224804u;
    // 0x224804: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224808: 0x24843558  addiu       $a0, $a0, 0x3558
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13656));
    // 0x22480c: 0x25083560  addiu       $t0, $t0, 0x3560
    ctx->pc = 0x22480cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13664));
    // 0x224810: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x224810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x224814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224818: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x224818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
label_22481c:
    // 0x22481c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22481cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224828: 0x8089794  j           func_225E50
    ctx->pc = 0x224828u;
    ctx->pc = 0x22482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224828u;
    // 0x22482c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x224830u;
label_224830:
    // 0x224830: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224830u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x224834: 0xc08801c  jal         func_220070
    ctx->pc = 0x224834u;
    SET_GPR_U32(ctx, 31, 0x22483Cu);
    ctx->pc = 0x224838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224834u;
    // 0x224838: 0xade0ca28  sw          $zero, -0x35D8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294953512), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220070u, 0x224834u, 0x22483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22483Cu;
label_22483c:
    // 0x22483c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22483Cu;
    {
        const bool branch_taken_0x22483c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22483Cu;
        // 0x224840: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22483c) {
            ctx->pc = 0x224864u;
            goto label_224864;
        }
    }
    ctx->pc = 0x224844u;
    // 0x224844: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224848: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224848u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22484c: 0x24843558  addiu       $a0, $a0, 0x3558
    ctx->pc = 0x22484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13656));
    // 0x224850: 0x25083578  addiu       $t0, $t0, 0x3578
    ctx->pc = 0x224850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13688));
    // 0x224854: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x224854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x224858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22485c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x22485Cu;
    {
        const bool branch_taken_0x22485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22485Cu;
        // 0x224860: 0x2407d8ed  addiu       $a3, $zero, -0x2713 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22485c) {
            ctx->pc = 0x22481Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22481c;
        }
    }
    ctx->pc = 0x224864u;
label_224864:
    // 0x224864: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x224864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x224868: 0x8de4ca2c  lw          $a0, -0x35D4($t7)
    ctx->pc = 0x224868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
    // 0x22486c: 0x24a5a5f0  addiu       $a1, $a1, -0x5A10
    ctx->pc = 0x22486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944240));
    // 0x224870: 0xc0897f6  jal         func_225FD8
    ctx->pc = 0x224870u;
    SET_GPR_U32(ctx, 31, 0x224878u);
    ctx->pc = 0x224874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224870u;
    // 0x224874: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FD8u, 0x224870u, 0x224878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224878u;
label_224878:
    // 0x224878: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22487c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22487cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224880: 0xae0fca30  sw          $t7, -0x35D0($s0)
    ctx->pc = 0x224880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953520), GPR_U32(ctx, 15));
    // 0x224884: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x224884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x224888: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22488c: 0x24843558  addiu       $a0, $a0, 0x3558
    ctx->pc = 0x22488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13656));
    // 0x224890: 0x24e73598  addiu       $a3, $a3, 0x3598
    ctx->pc = 0x224890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13720));
    // 0x224894: 0x250835b0  addiu       $t0, $t0, 0x35B0
    ctx->pc = 0x224894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13744));
    // 0x224898: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x224898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x22489c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22489Cu;
    SET_GPR_U32(ctx, 31, 0x2248A4u);
    ctx->pc = 0x2248A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22489Cu;
    // 0x2248a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22489Cu, 0x2248A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248A4u;
label_2248a4:
    // 0x2248a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2248a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2248a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2248a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2248ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2248acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2248b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2248b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2248b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2248B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248B4u;
        // 0x2248b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2248B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2248BCu;
    // 0x2248bc: 0x0  nop
    ctx->pc = 0x2248bcu;
    // NOP
    // 0x2248c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2248c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2248c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2248c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2248c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2248c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2248cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2248ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2248d0: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2248d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2248d4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2248d8: 0x8e2fca30  lw          $t7, -0x35D0($s1)
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953520)));
    // 0x2248dc: 0x15f0000c  bne         $t7, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2248DCu;
    {
        const bool branch_taken_0x2248dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x2248E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248DCu;
        // 0x2248e0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248dc) {
            ctx->pc = 0x224910u;
            goto label_224910;
        }
    }
    ctx->pc = 0x2248E4u;
    // 0x2248e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2248e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2248e8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2248e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2248ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2248ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2248f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2248f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2248f4: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x2248f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x2248f8: 0x250835c8  addiu       $t0, $t0, 0x35C8
    ctx->pc = 0x2248f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13768));
    // 0x2248fc: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x2248fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x224900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224904: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x224904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x224908: 0x8089794  j           func_225E50
    ctx->pc = 0x224908u;
    ctx->pc = 0x22490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224908u;
    // 0x22490c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x224910u;
label_224910:
    // 0x224910: 0xc088040  jal         func_220100
    ctx->pc = 0x224910u;
    SET_GPR_U32(ctx, 31, 0x224918u);
    ctx->pc = 0x220100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220100u, 0x224910u, 0x224918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224918u;
label_224918:
    // 0x224918: 0xae30ca30  sw          $s0, -0x35D0($s1)
    ctx->pc = 0x224918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953520), GPR_U32(ctx, 16));
    // 0x22491c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224920: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x224924: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x224924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x224928: 0x24e735e0  addiu       $a3, $a3, 0x35E0
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13792));
    // 0x22492c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x22492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x224930: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x224930u;
    SET_GPR_U32(ctx, 31, 0x224938u);
    ctx->pc = 0x224934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224930u;
    // 0x224934: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x224930u, 0x224938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224938u;
label_224938:
    // 0x224938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22493c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224948: 0x3e00008  jr          $ra
    ctx->pc = 0x224948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224948u;
        // 0x22494c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224950u;
    // 0x224950: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224950u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x224954: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224958: 0x8deeca30  lw          $t6, -0x35D0($t7)
    ctx->pc = 0x224958u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953520)));
    // 0x22495c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224960: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x224960u;
    {
        const bool branch_taken_0x224960 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x224964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224960u;
        // 0x224964: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224960) {
            ctx->pc = 0x224990u;
            goto label_224990;
        }
    }
    ctx->pc = 0x224968u;
    // 0x224968: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22496c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22496cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224970: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224970u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224974: 0x248435f0  addiu       $a0, $a0, 0x35F0
    ctx->pc = 0x224974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13808));
    // 0x224978: 0x250835f8  addiu       $t0, $t0, 0x35F8
    ctx->pc = 0x224978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13816));
    // 0x22497c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x22497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x224980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224984: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x224984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x224988: 0x8089794  j           func_225E50
    ctx->pc = 0x224988u;
    ctx->pc = 0x22498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224988u;
    // 0x22498c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x224990u;
label_224990:
    // 0x224990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224994: 0x3e00008  jr          $ra
    ctx->pc = 0x224994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224994u;
        // 0x224998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22499Cu;
    // 0x22499c: 0x0  nop
    ctx->pc = 0x22499cu;
    // NOP
    if (ctx->pc == 0x22499cu) { ctx->pc = 0x2249a0u; }
}
