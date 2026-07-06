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

// Function: sub_00342800
// Address: 0x342800 - 0x3428a0
void sub_00342800_0x342800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342800_0x342800");
#endif

    switch (ctx->pc) {
        case 0x342814u: goto label_342814;
        default: break;
    }

    ctx->pc = 0x342800u;

    // 0x342800: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x342804: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x342804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x342808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x342808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34280c: 0x24e73f10  addiu       $a3, $a3, 0x3F10
    ctx->pc = 0x34280cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16144));
    // 0x342810: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x342810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_342814:
    // 0x342814: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x342814u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x342818: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x342818u;
    {
        const bool branch_taken_0x342818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x342818) {
            ctx->pc = 0x34281Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342818u;
            // 0x34281c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342848u;
            goto label_342848;
        }
    }
    ctx->pc = 0x342820u;
    // 0x342820: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x342820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x342824: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x342824u;
    {
        const bool branch_taken_0x342824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x342824) {
            ctx->pc = 0x342834u;
            goto label_342834;
        }
    }
    ctx->pc = 0x34282Cu;
    // 0x34282c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34282Cu;
    {
        const bool branch_taken_0x34282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34282Cu;
        // 0x342830: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34282c) {
            ctx->pc = 0x342858u;
            goto label_342858;
        }
    }
    ctx->pc = 0x342834u;
label_342834:
    // 0x342834: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342834u;
    {
        const bool branch_taken_0x342834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x342834) {
            ctx->pc = 0x342844u;
            goto label_342844;
        }
    }
    ctx->pc = 0x34283Cu;
    // 0x34283c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34283Cu;
    {
        const bool branch_taken_0x34283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34283Cu;
        // 0x342840: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34283c) {
            ctx->pc = 0x342858u;
            goto label_342858;
        }
    }
    ctx->pc = 0x342844u;
label_342844:
    // 0x342844: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x342844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_342848:
    // 0x342848: 0x29230022  slti        $v1, $t1, 0x22
    ctx->pc = 0x342848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x34284c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x34284Cu;
    {
        const bool branch_taken_0x34284c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34284Cu;
        // 0x342850: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34284c) {
            ctx->pc = 0x342814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342814;
        }
    }
    ctx->pc = 0x342854u;
    // 0x342854: 0x0  nop
    ctx->pc = 0x342854u;
    // NOP
label_342858:
    // 0x342858: 0x500000e  bltz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x342858u;
    {
        const bool branch_taken_0x342858 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x342858) {
            ctx->pc = 0x342894u;
            goto label_342894;
        }
    }
    ctx->pc = 0x342860u;
    // 0x342860: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x342860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x342864: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x342864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x342868: 0x2484ecb8  addiu       $a0, $a0, -0x1348
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962360));
    // 0x34286c: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x34286cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x342870: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x342870u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x342874: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x342874u;
    {
        const bool branch_taken_0x342874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x342874) {
            ctx->pc = 0x342894u;
            goto label_342894;
        }
    }
    ctx->pc = 0x34287Cu;
    // 0x34287c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x34287cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x342880: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x342880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x342884: 0x94649718  lhu         $a0, -0x68E8($v1)
    ctx->pc = 0x342884u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294940440)));
    // 0x342888: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x342888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34288c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x34288cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x342890: 0xa4649718  sh          $a0, -0x68E8($v1)
    ctx->pc = 0x342890u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294940440), (uint16_t)GPR_U32(ctx, 4));
label_342894:
    // 0x342894: 0x3e00008  jr          $ra
    ctx->pc = 0x342894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34289Cu;
    // 0x34289c: 0x0  nop
    ctx->pc = 0x34289cu;
    // NOP
    if (ctx->pc == 0x34289cu) { ctx->pc = 0x3428a0u; }
}
