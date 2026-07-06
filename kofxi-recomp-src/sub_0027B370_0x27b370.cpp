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

// Function: sub_0027B370
// Address: 0x27b370 - 0x27b420
void sub_0027B370_0x27b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B370_0x27b370");
#endif

    ctx->pc = 0x27b370u;

    // 0x27b370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b374: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27b374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27b378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b37c: 0x246334b8  addiu       $v1, $v1, 0x34B8
    ctx->pc = 0x27b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13496));
    // 0x27b380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b384: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27b388: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B388u;
    {
        const bool branch_taken_0x27b388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B388u;
        // 0x27b38c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b388) {
            ctx->pc = 0x27B3A8u;
            goto label_27b3a8;
        }
    }
    ctx->pc = 0x27B390u;
    // 0x27b390: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27b394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b398: 0x8c445398  lw          $a0, 0x5398($v0)
    ctx->pc = 0x27b398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21400)));
    // 0x27b39c: 0x804331c  j           func_10CC70
    ctx->pc = 0x27B39Cu;
    ctx->pc = 0x27B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B39Cu;
    // 0x27b3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    sub_0010CC70_0x10cc70(rdram, ctx, runtime); return;
    ctx->pc = 0x27B3A4u;
    // 0x27b3a4: 0x0  nop
    ctx->pc = 0x27b3a4u;
    // NOP
label_27b3a8:
    // 0x27b3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x27B3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3ACu;
        // 0x27b3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B3B4u;
    // 0x27b3b4: 0x0  nop
    ctx->pc = 0x27b3b4u;
    // NOP
    // 0x27b3b8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x27b3b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3bc: 0x11400015  beqz        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x27B3BCu;
    {
        const bool branch_taken_0x27b3bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3BCu;
        // 0x27b3c0: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3bc) {
            ctx->pc = 0x27B414u;
            goto label_27b414;
        }
    }
    ctx->pc = 0x27B3C4u;
    // 0x27b3c4: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x27b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x27b3c8: 0x8c4353f0  lw          $v1, 0x53F0($v0)
    ctx->pc = 0x27b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21488)));
    // 0x27b3cc: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x27b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x27b3d0: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x27b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x27b3d4: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x27b3d8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x27b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x27b3dc: 0x3c0801c3  lui         $t0, 0x1C3
    ctx->pc = 0x27b3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)451 << 16));
    // 0x27b3e0: 0x3c0901c3  lui         $t1, 0x1C3
    ctx->pc = 0x27b3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)451 << 16));
    // 0x27b3e4: 0x8c8253f4  lw          $v0, 0x53F4($a0)
    ctx->pc = 0x27b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21492)));
    // 0x27b3e8: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x27b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x27b3ec: 0x8ca353f8  lw          $v1, 0x53F8($a1)
    ctx->pc = 0x27b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21496)));
    // 0x27b3f0: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x27b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x27b3f4: 0x8cc25400  lw          $v0, 0x5400($a2)
    ctx->pc = 0x27b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21504)));
    // 0x27b3f8: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x27b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x27b3fc: 0x8ce353fc  lw          $v1, 0x53FC($a3)
    ctx->pc = 0x27b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21500)));
    // 0x27b400: 0xad430010  sw          $v1, 0x10($t2)
    ctx->pc = 0x27b400u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 3));
    // 0x27b404: 0x8d025404  lw          $v0, 0x5404($t0)
    ctx->pc = 0x27b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 21508)));
    // 0x27b408: 0xad420018  sw          $v0, 0x18($t2)
    ctx->pc = 0x27b408u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
    // 0x27b40c: 0x8d235408  lw          $v1, 0x5408($t1)
    ctx->pc = 0x27b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 21512)));
    // 0x27b410: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x27b410u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
label_27b414:
    // 0x27b414: 0x3e00008  jr          $ra
    ctx->pc = 0x27B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B41Cu;
    // 0x27b41c: 0x0  nop
    ctx->pc = 0x27b41cu;
    // NOP
}
