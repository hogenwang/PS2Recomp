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

// Function: sub_001FD388
// Address: 0x1fd388 - 0x1fd440
void sub_001FD388_0x1fd388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD388_0x1fd388");
#endif

    switch (ctx->pc) {
        case 0x1fd3c0u: goto label_1fd3c0;
        case 0x1fd3d8u: goto label_1fd3d8;
        case 0x1fd3ecu: goto label_1fd3ec;
        default: break;
    }

    ctx->pc = 0x1fd388u;

    // 0x1fd388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd38c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fd38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fd390: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fd394: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fd394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fd398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd39c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd3a4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1fd3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fd3ac: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1fd3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fd3b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fd3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fd3b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fd3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1fd3bc: 0x0  nop
    ctx->pc = 0x1fd3bcu;
    // NOP
label_1fd3c0:
    // 0x1fd3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1fd3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1fd3c8: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1fd3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1fd3cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd3d0: 0xc07f510  jal         func_1FD440
    ctx->pc = 0x1FD3D0u;
    SET_GPR_U32(ctx, 31, 0x1FD3D8u);
    ctx->pc = 0x1FD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3D0u;
    // 0x1fd3d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD440u, 0x1FD3D0u, 0x1FD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3D8u;
label_1fd3d8:
    // 0x1fd3d8: 0x643fff9  bgezl       $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FD3D8u;
    {
        const bool branch_taken_0x1fd3d8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1fd3d8) {
            ctx->pc = 0x1FD3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD3D8u;
            // 0x1fd3dc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd3c0;
        }
    }
    ctx->pc = 0x1FD3E0u;
    // 0x1fd3e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fd3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3e4: 0xc07f522  jal         func_1FD488
    ctx->pc = 0x1FD3E4u;
    SET_GPR_U32(ctx, 31, 0x1FD3ECu);
    ctx->pc = 0x1FD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3E4u;
    // 0x1fd3e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD488u, 0x1FD3E4u, 0x1FD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3ECu;
label_1fd3ec:
    // 0x1fd3ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD3ECu;
    {
        const bool branch_taken_0x1fd3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3ECu;
        // 0x1fd3f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3ec) {
            ctx->pc = 0x1FD420u;
            goto label_1fd420;
        }
    }
    ctx->pc = 0x1FD3F4u;
    // 0x1fd3f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fd3f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd3f8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fd3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fd3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd404: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x1fd404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x1fd408: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd40c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fd40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd410: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fd410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fd414: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FD414u;
    ctx->pc = 0x1FD418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD414u;
    // 0x1fd418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD41Cu;
    // 0x1fd41c: 0x0  nop
    ctx->pc = 0x1fd41cu;
    // NOP
label_1fd420:
    // 0x1fd420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd42c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fd42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd430: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fd430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd434: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fd434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fd438: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD438u;
        // 0x1fd43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD440u;
}
