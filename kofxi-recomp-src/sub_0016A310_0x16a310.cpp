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

// Function: sub_0016A310
// Address: 0x16a310 - 0x16a3d0
void sub_0016A310_0x16a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A310_0x16a310");
#endif

    switch (ctx->pc) {
        case 0x16a328u: goto label_16a328;
        case 0x16a3b4u: goto label_16a3b4;
        default: break;
    }

    ctx->pc = 0x16a310u;

    // 0x16a310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a314: 0x3c0a0036  lui         $t2, 0x36
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
    // 0x16a318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a31c: 0x254a30a0  addiu       $t2, $t2, 0x30A0
    ctx->pc = 0x16a31cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12448));
    // 0x16a320: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x16a320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16a324: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x16a324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16a328:
    // 0x16a328: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x16a328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x16a32c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x16a330: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x16a330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x16a334: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x16a334u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a338: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x16a338u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a33c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x16a33cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x16a340: 0x1d00fff9  bgtz        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16A340u;
    {
        const bool branch_taken_0x16a340 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x16A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A340u;
        // 0x16a344: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a340) {
            ctx->pc = 0x16A328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a328;
        }
    }
    ctx->pc = 0x16A348u;
    // 0x16a348: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A348u;
    {
        const bool branch_taken_0x16a348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a348) {
            ctx->pc = 0x16A34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A348u;
            // 0x16a34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A358u;
            goto label_16a358;
        }
    }
    ctx->pc = 0x16A350u;
    // 0x16a350: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16A350u;
    {
        const bool branch_taken_0x16a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A350u;
        // 0x16a354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a350) {
            ctx->pc = 0x16A398u;
            goto label_16a398;
        }
    }
    ctx->pc = 0x16A358u;
label_16a358:
    // 0x16a358: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A358u;
    {
        const bool branch_taken_0x16a358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16a358) {
            ctx->pc = 0x16A35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A358u;
            // 0x16a35c: 0x28a10012  slti        $at, $a1, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A368u;
            goto label_16a368;
        }
    }
    ctx->pc = 0x16A360u;
    // 0x16a360: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16A360u;
    {
        const bool branch_taken_0x16a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A360u;
        // 0x16a364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a360) {
            ctx->pc = 0x16A398u;
            goto label_16a398;
        }
    }
    ctx->pc = 0x16A368u;
label_16a368:
    // 0x16a368: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A368u;
    {
        const bool branch_taken_0x16a368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a368) {
            ctx->pc = 0x16A36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A368u;
            // 0x16a36c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A380u;
            goto label_16a380;
        }
    }
    ctx->pc = 0x16A370u;
    // 0x16a370: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x16a370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x16a374: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16a378: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16A378u;
    {
        const bool branch_taken_0x16a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A378u;
        // 0x16a37c: 0x9442000c  lhu         $v0, 0xC($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a378) {
            ctx->pc = 0x16A398u;
            goto label_16a398;
        }
    }
    ctx->pc = 0x16A380u;
label_16a380:
    // 0x16a380: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A380u;
    {
        const bool branch_taken_0x16a380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a380) {
            ctx->pc = 0x16A384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A380u;
            // 0x16a384: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A390u;
            goto label_16a390;
        }
    }
    ctx->pc = 0x16A388u;
    // 0x16a388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A388u;
    {
        const bool branch_taken_0x16a388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A388u;
        // 0x16a38c: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a388) {
            ctx->pc = 0x16A398u;
            goto label_16a398;
        }
    }
    ctx->pc = 0x16A390u;
label_16a390:
    // 0x16a390: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16a394: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x16a394u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_16a398:
    // 0x16a398: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x16a398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x16a39c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16a3a0: 0x30633f00  andi        $v1, $v1, 0x3F00
    ctx->pc = 0x16a3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
    // 0x16a3a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16a3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a3ac: 0xc05cccc  jal         func_173330
    ctx->pc = 0x16A3ACu;
    SET_GPR_U32(ctx, 31, 0x16A3B4u);
    ctx->pc = 0x16A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3ACu;
    // 0x16a3b0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173330u, 0x16A3ACu, 0x16A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3B4u;
label_16a3b4:
    // 0x16a3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3BCu;
        // 0x16a3c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3C4u;
    // 0x16a3c4: 0x0  nop
    ctx->pc = 0x16a3c4u;
    // NOP
    // 0x16a3c8: 0x0  nop
    ctx->pc = 0x16a3c8u;
    // NOP
    // 0x16a3cc: 0x0  nop
    ctx->pc = 0x16a3ccu;
    // NOP
    if (ctx->pc == 0x16a3ccu) { ctx->pc = 0x16a3d0u; }
}
