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

// Function: sub_001DA368
// Address: 0x1da368 - 0x1da410
void sub_001DA368_0x1da368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA368_0x1da368");
#endif

    switch (ctx->pc) {
        case 0x1da39cu: goto label_1da39c;
        case 0x1da3c4u: goto label_1da3c4;
        case 0x1da3d8u: goto label_1da3d8;
        default: break;
    }

    ctx->pc = 0x1da368u;

    // 0x1da368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da370: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1da370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da37c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da380: 0x8e230378  lw          $v1, 0x378($s1)
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
    // 0x1da384: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DA384u;
    {
        const bool branch_taken_0x1da384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA384u;
        // 0x1da388: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da384) {
            ctx->pc = 0x1DA3F8u;
            goto label_1da3f8;
        }
    }
    ctx->pc = 0x1DA38Cu;
    // 0x1da38c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da390: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1da394: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1DA394u;
    SET_GPR_U32(ctx, 31, 0x1DA39Cu);
    ctx->pc = 0x1DA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA394u;
    // 0x1da398: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1DA394u, 0x1DA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA39Cu;
label_1da39c:
    // 0x1da39c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da39cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3a0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA3A0u;
    {
        const bool branch_taken_0x1da3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3A0u;
        // 0x1da3a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3a0) {
            ctx->pc = 0x1DA3F4u;
            goto label_1da3f4;
        }
    }
    ctx->pc = 0x1DA3A8u;
    // 0x1da3a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da3ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1da3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1da3b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1da3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3b4: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1da3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1da3b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da3bc: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1DA3BCu;
    SET_GPR_U32(ctx, 31, 0x1DA3C4u);
    ctx->pc = 0x1DA3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3BCu;
    // 0x1da3c0: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1DA3BCu, 0x1DA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3C4u;
label_1da3c4:
    // 0x1da3c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da3c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3c8: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA3C8u;
    {
        const bool branch_taken_0x1da3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da3c8) {
            ctx->pc = 0x1DA3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA3C8u;
            // 0x1da3cc: 0x8e220378  lw          $v0, 0x378($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA3F8u;
            goto label_1da3f8;
        }
    }
    ctx->pc = 0x1DA3D0u;
    // 0x1da3d0: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1DA3D0u;
    SET_GPR_U32(ctx, 31, 0x1DA3D8u);
    ctx->pc = 0x1DA3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3D0u;
    // 0x1da3d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1DA3D0u, 0x1DA3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3D8u;
label_1da3d8:
    // 0x1da3d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da3d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3dc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1da3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1da3e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA3E0u;
    {
        const bool branch_taken_0x1da3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3E0u;
        // 0x1da3e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3e0) {
            ctx->pc = 0x1DA3F0u;
            goto label_1da3f0;
        }
    }
    ctx->pc = 0x1DA3E8u;
    // 0x1da3e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA3E8u;
    {
        const bool branch_taken_0x1da3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3E8u;
        // 0x1da3ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3e8) {
            ctx->pc = 0x1DA3F4u;
            goto label_1da3f4;
        }
    }
    ctx->pc = 0x1DA3F0u;
label_1da3f0:
    // 0x1da3f0: 0xae220378  sw          $v0, 0x378($s1)
    ctx->pc = 0x1da3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 2));
label_1da3f4:
    // 0x1da3f4: 0x8e220378  lw          $v0, 0x378($s1)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
label_1da3f8:
    // 0x1da3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da3fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da404: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA404u;
        // 0x1da408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA40Cu;
    // 0x1da40c: 0x0  nop
    ctx->pc = 0x1da40cu;
    // NOP
}
