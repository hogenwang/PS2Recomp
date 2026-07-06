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

// Function: sub_00281680
// Address: 0x281680 - 0x281740
void sub_00281680_0x281680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281680_0x281680");
#endif

    switch (ctx->pc) {
        case 0x2816f0u: goto label_2816f0;
        default: break;
    }

    ctx->pc = 0x281680u;

    // 0x281680: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x281680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281684: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x281684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281688: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28168c: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28168Cu;
    {
        const bool branch_taken_0x28168c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x281690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28168Cu;
        // 0x281690: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28168c) {
            ctx->pc = 0x281728u;
            goto label_281728;
        }
    }
    ctx->pc = 0x281694u;
    // 0x281694: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x281694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x281698: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x281698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28169c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28169Cu;
    {
        const bool branch_taken_0x28169c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28169c) {
            ctx->pc = 0x2816A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28169Cu;
            // 0x2816a0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2816B4u;
            goto label_2816b4;
        }
    }
    ctx->pc = 0x2816A4u;
    // 0x2816a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2816a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2816a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2816ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2816ACu;
    {
        const bool branch_taken_0x2816ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816ACu;
        // 0x2816b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816ac) {
            ctx->pc = 0x281720u;
            goto label_281720;
        }
    }
    ctx->pc = 0x2816B4u;
label_2816b4:
    // 0x2816b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2816b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2816b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2816b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2816bc: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x2816bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2816c0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2816C0u;
    {
        const bool branch_taken_0x2816c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816C0u;
        // 0x2816c4: 0x3045007f  andi        $a1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816c0) {
            ctx->pc = 0x28171Cu;
            goto label_28171c;
        }
    }
    ctx->pc = 0x2816C8u;
    // 0x2816c8: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x2816c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2816cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2816CCu;
    {
        const bool branch_taken_0x2816cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816CCu;
        // 0x2816d0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816cc) {
            ctx->pc = 0x281728u;
            goto label_281728;
        }
    }
    ctx->pc = 0x2816D4u;
    // 0x2816d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2816d8: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2816D8u;
    {
        const bool branch_taken_0x2816d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2816DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D8u;
        // 0x2816dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d8) {
            ctx->pc = 0x281728u;
            goto label_281728;
        }
    }
    ctx->pc = 0x2816E0u;
    // 0x2816e0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2816E0u;
    {
        const bool branch_taken_0x2816e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e0) {
            ctx->pc = 0x281720u;
            goto label_281720;
        }
    }
    ctx->pc = 0x2816E8u;
    // 0x2816e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2816ec: 0x0  nop
    ctx->pc = 0x2816ecu;
    // NOP
label_2816f0:
    // 0x2816f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2816f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2816f4: 0x94a38  dsll        $t1, $t1, 8
    ctx->pc = 0x2816f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 8);
    // 0x2816f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2816f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2816fc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2816fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x281700: 0x10e30009  beq         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x281700u;
    {
        const bool branch_taken_0x281700 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x281704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281700u;
        // 0x281704: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281700) {
            ctx->pc = 0x281728u;
            goto label_281728;
        }
    }
    ctx->pc = 0x281708u;
    // 0x281708: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x281708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28170c: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28170Cu;
    {
        const bool branch_taken_0x28170c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x281710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28170Cu;
        // 0x281710: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28170c) {
            ctx->pc = 0x2816F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2816f0;
        }
    }
    ctx->pc = 0x281714u;
    // 0x281714: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281714u;
    {
        const bool branch_taken_0x281714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281714) {
            ctx->pc = 0x281720u;
            goto label_281720;
        }
    }
    ctx->pc = 0x28171Cu;
label_28171c:
    // 0x28171c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x28171cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_281720:
    // 0x281720: 0x5230003  bgezl       $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281720u;
    {
        const bool branch_taken_0x281720 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x281720) {
            ctx->pc = 0x281724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281720u;
            // 0x281724: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281730u;
            goto label_281730;
        }
    }
    ctx->pc = 0x281728u;
label_281728:
    // 0x281728: 0x3e00008  jr          $ra
    ctx->pc = 0x281728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281728u;
        // 0x28172c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281730u;
label_281730:
    // 0x281730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281734: 0x3e00008  jr          $ra
    ctx->pc = 0x281734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281734u;
        // 0x281738: 0xfcc90000  sd          $t1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28173Cu;
    // 0x28173c: 0x0  nop
    ctx->pc = 0x28173cu;
    // NOP
    if (ctx->pc == 0x28173cu) { ctx->pc = 0x281740u; }
}
