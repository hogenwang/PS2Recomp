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

// Function: sub_002CF8B8
// Address: 0x2cf8b8 - 0x2cf920
void sub_002CF8B8_0x2cf8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF8B8_0x2cf8b8");
#endif

    switch (ctx->pc) {
        case 0x2cf8e0u: goto label_2cf8e0;
        case 0x2cf8f8u: goto label_2cf8f8;
        case 0x2cf900u: goto label_2cf900;
        default: break;
    }

    ctx->pc = 0x2cf8b8u;

    // 0x2cf8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf8bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cf8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf8c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cf8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf8cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cf8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf8d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cf8d8: 0xc0b3e48  jal         func_2CF920
    ctx->pc = 0x2CF8D8u;
    SET_GPR_U32(ctx, 31, 0x2CF8E0u);
    ctx->pc = 0x2CF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8D8u;
    // 0x2cf8dc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF920u, 0x2CF8D8u, 0x2CF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8E0u;
label_2cf8e0:
    // 0x2cf8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8e8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF8E8u;
    {
        const bool branch_taken_0x2cf8e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8E8u;
        // 0x2cf8ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8e8) {
            ctx->pc = 0x2CF908u;
            goto label_2cf908;
        }
    }
    ctx->pc = 0x2CF8F0u;
    // 0x2cf8f0: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CF8F0u;
    SET_GPR_U32(ctx, 31, 0x2CF8F8u);
    ctx->pc = 0x2CF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8F0u;
    // 0x2cf8f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2CF8F0u, 0x2CF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8F8u;
label_2cf8f8:
    // 0x2cf8f8: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CF8F8u;
    SET_GPR_U32(ctx, 31, 0x2CF900u);
    ctx->pc = 0x2CF8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8F8u;
    // 0x2cf8fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CF8F8u, 0x2CF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF900u;
label_2cf900:
    // 0x2cf900: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2cf900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2cf904: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2cf904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf908:
    // 0x2cf908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf90c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf914: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf918: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF918u;
        // 0x2cf91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF920u;
}
