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

// Function: sub_0013E540
// Address: 0x13e540 - 0x13e5e0
void sub_0013E540_0x13e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E540_0x13e540");
#endif

    switch (ctx->pc) {
        case 0x13e58cu: goto label_13e58c;
        case 0x13e59cu: goto label_13e59c;
        case 0x13e5b4u: goto label_13e5b4;
        default: break;
    }

    ctx->pc = 0x13e540u;

    // 0x13e540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e550: 0x8c82023c  lw          $v0, 0x23C($a0)
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x13e554: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13e558: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E558u;
    {
        const bool branch_taken_0x13e558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E558u;
        // 0x13e55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e558) {
            ctx->pc = 0x13E594u;
            goto label_13e594;
        }
    }
    ctx->pc = 0x13E560u;
    // 0x13e560: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13e564: 0x8c425ca8  lw          $v0, 0x5CA8($v0)
    ctx->pc = 0x13e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23720)));
    // 0x13e568: 0x90510204  lbu         $s1, 0x204($v0)
    ctx->pc = 0x13e568u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x13e56c: 0x2a220097  slti        $v0, $s1, 0x97
    ctx->pc = 0x13e56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x13e570: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13E570u;
    {
        const bool branch_taken_0x13e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e570) {
            ctx->pc = 0x13E574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E570u;
            // 0x13e574: 0x240200f5  addiu       $v0, $zero, 0xF5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E5A4u;
            goto label_13e5a4;
        }
    }
    ctx->pc = 0x13E578u;
    // 0x13e578: 0x2a210099  slti        $at, $s1, 0x99
    ctx->pc = 0x13e578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)153) ? 1 : 0);
    // 0x13e57c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E57Cu;
    {
        const bool branch_taken_0x13e57c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e57c) {
            ctx->pc = 0x13E5A0u;
            goto label_13e5a0;
        }
    }
    ctx->pc = 0x13E584u;
    // 0x13e584: 0xc04f978  jal         func_13E5E0
    ctx->pc = 0x13E584u;
    SET_GPR_U32(ctx, 31, 0x13E58Cu);
    ctx->pc = 0x13E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5E0u, 0x13E584u, 0x13E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E58Cu;
label_13e58c:
    // 0x13e58c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13E58Cu;
    {
        const bool branch_taken_0x13e58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E58Cu;
        // 0x13e590: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e58c) {
            ctx->pc = 0x13E5A0u;
            goto label_13e5a0;
        }
    }
    ctx->pc = 0x13E594u;
label_13e594:
    // 0x13e594: 0xc04f978  jal         func_13E5E0
    ctx->pc = 0x13E594u;
    SET_GPR_U32(ctx, 31, 0x13E59Cu);
    ctx->pc = 0x13E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5E0u, 0x13E594u, 0x13E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E59Cu;
label_13e59c:
    // 0x13e59c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13e59cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e5a0:
    // 0x13e5a0: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x13e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_13e5a4:
    // 0x13e5a4: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E5A4u;
    {
        const bool branch_taken_0x13e5a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e5a4) {
            ctx->pc = 0x13E5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E5A4u;
            // 0x13e5a8: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E5C4u;
            goto label_13e5c4;
        }
    }
    ctx->pc = 0x13E5ACu;
    // 0x13e5ac: 0xc058068  jal         func_1601A0
    ctx->pc = 0x13E5ACu;
    SET_GPR_U32(ctx, 31, 0x13E5B4u);
    ctx->pc = 0x13E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5ACu;
    // 0x13e5b0: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601A0u, 0x13E5ACu, 0x13E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E5B4u;
label_13e5b4:
    // 0x13e5b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E5B4u;
    {
        const bool branch_taken_0x13e5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e5b4) {
            ctx->pc = 0x13E5C0u;
            goto label_13e5c0;
        }
    }
    ctx->pc = 0x13E5BCu;
    // 0x13e5bc: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x13e5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_13e5c0:
    // 0x13e5c0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x13e5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_13e5c4:
    // 0x13e5c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5D0u;
        // 0x13e5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E5D8u;
    // 0x13e5d8: 0x0  nop
    ctx->pc = 0x13e5d8u;
    // NOP
    // 0x13e5dc: 0x0  nop
    ctx->pc = 0x13e5dcu;
    // NOP
    if (ctx->pc == 0x13e5dcu) { ctx->pc = 0x13e5e0u; }
}
