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

// Function: sub_002A3878
// Address: 0x2a3878 - 0x2a3938
void sub_002A3878_0x2a3878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3878_0x2a3878");
#endif

    switch (ctx->pc) {
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38f8u: goto label_2a38f8;
        default: break;
    }

    ctx->pc = 0x2a3878u;

    // 0x2a3878: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a3878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a387c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A387Cu;
        // 0x2a3880: 0xac446a40  sw          $a0, 0x6A40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3884u;
    // 0x2a3884: 0x0  nop
    ctx->pc = 0x2a3884u;
    // NOP
    // 0x2a3888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a388c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a388cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3890: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2a3890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2a3894: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2a3894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2a3898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a389c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a38a0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2a38a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a38a4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a38a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a38a8: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x2a38a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a38ac: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x2a38acu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a38b0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a38b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a38b8: 0x93a90003  lbu         $t1, 0x3($sp)
    ctx->pc = 0x2a38b8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2a38bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a38bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a38c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2a38c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2a38c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2a38c8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2a38c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2a38cc: 0xc0a8e64  jal         func_2A3990
    ctx->pc = 0x2A38CCu;
    SET_GPR_U32(ctx, 31, 0x2A38D4u);
    ctx->pc = 0x2A38D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38CCu;
    // 0x2a38d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3990u, 0x2A38CCu, 0x2A38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38D4u;
label_2a38d4:
    // 0x2a38d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a38d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a38d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A38D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D8u;
        // 0x2a38dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A38D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A38E0u;
    // 0x2a38e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a38e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a38e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a38ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a38ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38f0: 0xc0a8e7a  jal         func_2A39E8
    ctx->pc = 0x2A38F0u;
    SET_GPR_U32(ctx, 31, 0x2A38F8u);
    ctx->pc = 0x2A38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38F0u;
    // 0x2a38f4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A39E8u, 0x2A38F0u, 0x2A38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38F8u;
label_2a38f8:
    // 0x2a38f8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A38F8u;
    {
        const bool branch_taken_0x2a38f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a38f8) {
            ctx->pc = 0x2A38FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A38F8u;
            // 0x2a38fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3928u;
            goto label_2a3928;
        }
    }
    ctx->pc = 0x2A3900u;
    // 0x2a3900: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x2a3900u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3904: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2a3904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a3908: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x2a3908u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a390c: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2a3910: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a3914: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x2a3914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2a3918: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2a3918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2a391c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2a3920: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2a3920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2a3924: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2a3924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2a3928:
    // 0x2a3928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a392c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a392cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3930: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3930u;
        // 0x2a3934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3938u;
}
