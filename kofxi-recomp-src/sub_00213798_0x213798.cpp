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

// Function: sub_00213798
// Address: 0x213798 - 0x213840
void sub_00213798_0x213798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213798_0x213798");
#endif

    switch (ctx->pc) {
        case 0x2137d4u: goto label_2137d4;
        case 0x2137e8u: goto label_2137e8;
        case 0x2137fcu: goto label_2137fc;
        case 0x213810u: goto label_213810;
        case 0x213818u: goto label_213818;
        default: break;
    }

    ctx->pc = 0x213798u;

    // 0x213798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21379c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2137a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2137a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2137a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2137a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2137a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2137a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2137ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2137acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2137b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2137b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2137b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2137b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2137bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2137bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2137c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2137c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2137c8: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2137c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2137cc: 0xc084612  jal         func_211848
    ctx->pc = 0x2137CCu;
    SET_GPR_U32(ctx, 31, 0x2137D4u);
    ctx->pc = 0x2137D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2137CCu;
    // 0x2137d0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2137CCu, 0x2137D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137D4u;
label_2137d4:
    // 0x2137d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2137d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2137d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2137dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137e0: 0xc084582  jal         func_211608
    ctx->pc = 0x2137E0u;
    SET_GPR_U32(ctx, 31, 0x2137E8u);
    ctx->pc = 0x2137E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2137E0u;
    // 0x2137e4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x2137E0u, 0x2137E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137E8u;
label_2137e8:
    // 0x2137e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2137e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2137ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2137f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137f4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2137F4u;
    SET_GPR_U32(ctx, 31, 0x2137FCu);
    ctx->pc = 0x2137F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2137F4u;
    // 0x2137f8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x2137F4u, 0x2137FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137FCu;
label_2137fc:
    // 0x2137fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2137fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213800: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213808: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213808u;
    SET_GPR_U32(ctx, 31, 0x213810u);
    ctx->pc = 0x21380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213808u;
    // 0x21380c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213808u, 0x213810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213810u;
label_213810:
    // 0x213810: 0xc084d9e  jal         func_213678
    ctx->pc = 0x213810u;
    SET_GPR_U32(ctx, 31, 0x213818u);
    ctx->pc = 0x213814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213810u;
    // 0x213814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213678u, 0x213810u, 0x213818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213818u;
label_213818:
    // 0x213818: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x213818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21381c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21381cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213820: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21382c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21382cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213830: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213834: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213838: 0x3e00008  jr          $ra
    ctx->pc = 0x213838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213838u;
        // 0x21383c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213840u;
}
