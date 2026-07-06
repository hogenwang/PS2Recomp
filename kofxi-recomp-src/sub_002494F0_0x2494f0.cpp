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

// Function: sub_002494F0
// Address: 0x2494f0 - 0x249598
void sub_002494F0_0x2494f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002494F0_0x2494f0");
#endif

    switch (ctx->pc) {
        case 0x249510u: goto label_249510;
        case 0x24952cu: goto label_24952c;
        case 0x249540u: goto label_249540;
        case 0x24954cu: goto label_24954c;
        case 0x249560u: goto label_249560;
        case 0x249574u: goto label_249574;
        default: break;
    }

    ctx->pc = 0x2494f0u;

    // 0x2494f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2494f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2494f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2494f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2494f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2494f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2494fc: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x2494fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x249500: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x249500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x249504: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249508: 0xc08a254  jal         func_228950
    ctx->pc = 0x249508u;
    SET_GPR_U32(ctx, 31, 0x249510u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x249508u, 0x249510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249510u;
label_249510:
    // 0x249510: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249514: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x249514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x249518: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x249518u;
    {
        const bool branch_taken_0x249518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249518u;
        // 0x24951c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249518) {
            ctx->pc = 0x249580u;
            goto label_249580;
        }
    }
    ctx->pc = 0x249520u;
    // 0x249520: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x249520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x249524: 0xc08a254  jal         func_228950
    ctx->pc = 0x249524u;
    SET_GPR_U32(ctx, 31, 0x24952Cu);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x249524u, 0x24952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24952Cu;
label_24952c:
    // 0x24952c: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24952Cu;
    {
        const bool branch_taken_0x24952c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x249530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24952Cu;
        // 0x249530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24952c) {
            ctx->pc = 0x249580u;
            goto label_249580;
        }
    }
    ctx->pc = 0x249534u;
    // 0x249534: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249538: 0xc08a254  jal         func_228950
    ctx->pc = 0x249538u;
    SET_GPR_U32(ctx, 31, 0x249540u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x249538u, 0x249540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249540u;
label_249540:
    // 0x249540: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x249540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x249544: 0xc08a254  jal         func_228950
    ctx->pc = 0x249544u;
    SET_GPR_U32(ctx, 31, 0x24954Cu);
    ctx->pc = 0x249548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249544u;
    // 0x249548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x249544u, 0x24954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24954Cu;
label_24954c:
    // 0x24954c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24954Cu;
    {
        const bool branch_taken_0x24954c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x249550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24954Cu;
        // 0x249550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24954c) {
            ctx->pc = 0x249580u;
            goto label_249580;
        }
    }
    ctx->pc = 0x249554u;
    // 0x249554: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x249554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x249558: 0xc08a254  jal         func_228950
    ctx->pc = 0x249558u;
    SET_GPR_U32(ctx, 31, 0x249560u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x249558u, 0x249560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249560u;
label_249560:
    // 0x249560: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x249560u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x249564: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249564u;
    {
        const bool branch_taken_0x249564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249564u;
        // 0x249568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249564) {
            ctx->pc = 0x249580u;
            goto label_249580;
        }
    }
    ctx->pc = 0x24956Cu;
    // 0x24956c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24956Cu;
    SET_GPR_U32(ctx, 31, 0x249574u);
    ctx->pc = 0x249570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24956Cu;
    // 0x249570: 0x3c047f00  lui         $a0, 0x7F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24956Cu, 0x249574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249574u;
label_249574:
    // 0x249574: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x249574u;
    {
        const bool branch_taken_0x249574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x249578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249574u;
        // 0x249578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249574) {
            ctx->pc = 0x249580u;
            goto label_249580;
        }
    }
    ctx->pc = 0x24957Cu;
    // 0x24957c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24957cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249580:
    // 0x249580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249584: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x249584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249588: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24958c: 0x3e00008  jr          $ra
    ctx->pc = 0x24958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24958Cu;
        // 0x249590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249594u;
    // 0x249594: 0x0  nop
    ctx->pc = 0x249594u;
    // NOP
    if (ctx->pc == 0x249594u) { ctx->pc = 0x249598u; }
}
