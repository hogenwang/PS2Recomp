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

// Function: sub_001102F8
// Address: 0x1102f8 - 0x1103a8
void sub_001102F8_0x1102f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001102F8_0x1102f8");
#endif

    switch (ctx->pc) {
        case 0x11032cu: goto label_11032c;
        case 0x11034cu: goto label_11034c;
        default: break;
    }

    ctx->pc = 0x1102f8u;

    // 0x1102f8: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x1102f8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x1102fc: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x1102fcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
    // 0x110300: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x110300u;
    {
        const bool branch_taken_0x110300 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x110304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110300u;
        // 0x110304: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110300) {
            ctx->pc = 0x11039Cu;
            goto label_11039c;
        }
    }
    ctx->pc = 0x110308u;
    // 0x110308: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x110308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
    // 0x11030c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11030cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x110310: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x110310u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
    // 0x110314: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x110314u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x110318: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x110318u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x11031c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x11031cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x110320: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x110320u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x110324: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110324u;
    {
        const bool branch_taken_0x110324 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x110328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110324u;
        // 0x110328: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110324) {
            ctx->pc = 0x110348u;
            goto label_110348;
        }
    }
    ctx->pc = 0x11032Cu;
label_11032c:
    // 0x11032c: 0xf  sync
    ctx->pc = 0x11032cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110330: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x110330u;
    // CACHE instruction (ignored)
    // 0x110334: 0xf  sync
    ctx->pc = 0x110334u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110338: 0x0  nop
    ctx->pc = 0x110338u;
    // NOP
    // 0x11033c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11033cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x110340: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x110340u;
    {
        const bool branch_taken_0x110340 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x110344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110340u;
        // 0x110344: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110340) {
            ctx->pc = 0x11032Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11032c;
        }
    }
    ctx->pc = 0x110348u;
label_110348:
    // 0x110348: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_11034c:
    if (ctx->pc == 0x11034Cu) {
        ctx->pc = 0x11034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110348u;
        // 0x11034c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110350u;
        goto label_fallthrough_0x110348;
    }
    ctx->pc = 0x110348u;
    {
        const bool branch_taken_0x110348 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x11034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110348u;
        // 0x11034c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110348) {
            ctx->pc = 0x11039Cu;
            goto label_11039c;
        }
    }
label_fallthrough_0x110348:
    ctx->pc = 0x110350u;
    // 0x110350: 0xf  sync
    ctx->pc = 0x110350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110354: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x110354u;
    // CACHE instruction (ignored)
    // 0x110358: 0xf  sync
    ctx->pc = 0x110358u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11035c: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x11035cu;
    // CACHE instruction (ignored)
    // 0x110360: 0xf  sync
    ctx->pc = 0x110360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110364: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x110364u;
    // CACHE instruction (ignored)
    // 0x110368: 0xf  sync
    ctx->pc = 0x110368u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11036c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x11036cu;
    // CACHE instruction (ignored)
    // 0x110370: 0xf  sync
    ctx->pc = 0x110370u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110374: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x110374u;
    // CACHE instruction (ignored)
    // 0x110378: 0xf  sync
    ctx->pc = 0x110378u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11037c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x11037cu;
    // CACHE instruction (ignored)
    // 0x110380: 0xf  sync
    ctx->pc = 0x110380u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110384: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x110384u;
    // CACHE instruction (ignored)
    // 0x110388: 0xf  sync
    ctx->pc = 0x110388u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11038c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x11038cu;
    // CACHE instruction (ignored)
    // 0x110390: 0xf  sync
    ctx->pc = 0x110390u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110394: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x110394u;
    {
        const bool branch_taken_0x110394 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x110398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110394u;
        // 0x110398: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110394) {
            ctx->pc = 0x11034Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11034c;
        }
    }
    ctx->pc = 0x11039Cu;
label_11039c:
    // 0x11039c: 0x3e00008  jr          $ra
    ctx->pc = 0x11039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1103A4u;
    // 0x1103a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1103A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1103ACu;
}
