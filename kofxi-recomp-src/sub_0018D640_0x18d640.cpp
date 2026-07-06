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

// Function: sub_0018D640
// Address: 0x18d640 - 0x18d6c0
void sub_0018D640_0x18d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D640_0x18d640");
#endif

    switch (ctx->pc) {
        case 0x18d654u: goto label_18d654;
        case 0x18d668u: goto label_18d668;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d690u: goto label_18d690;
        case 0x18d6a4u: goto label_18d6a4;
        default: break;
    }

    ctx->pc = 0x18d640u;

    // 0x18d640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d644: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d64c: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18D64Cu;
    SET_GPR_U32(ctx, 31, 0x18D654u);
    ctx->pc = 0x18D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D64Cu;
    // 0x18d650: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18D64Cu, 0x18D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D654u;
label_18d654:
    // 0x18d654: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d658: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d65c: 0xac62b840  sw          $v0, -0x47C0($v1)
    ctx->pc = 0x18d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948928), GPR_U32(ctx, 2));
    // 0x18d660: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18D660u;
    SET_GPR_U32(ctx, 31, 0x18D668u);
    ctx->pc = 0x18D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D660u;
    // 0x18d664: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18D660u, 0x18D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D668u;
label_18d668:
    // 0x18d668: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d66c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d670: 0xac62b850  sw          $v0, -0x47B0($v1)
    ctx->pc = 0x18d670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948944), GPR_U32(ctx, 2));
    // 0x18d674: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18D674u;
    SET_GPR_U32(ctx, 31, 0x18D67Cu);
    ctx->pc = 0x18D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D674u;
    // 0x18d678: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18D674u, 0x18D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D67Cu;
label_18d67c:
    // 0x18d67c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d680: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d684: 0xac62b848  sw          $v0, -0x47B8($v1)
    ctx->pc = 0x18d684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948936), GPR_U32(ctx, 2));
    // 0x18d688: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18D688u;
    SET_GPR_U32(ctx, 31, 0x18D690u);
    ctx->pc = 0x18D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D688u;
    // 0x18d68c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18D688u, 0x18D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D690u;
label_18d690:
    // 0x18d690: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d694: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d698: 0xac62bbf8  sw          $v0, -0x4408($v1)
    ctx->pc = 0x18d698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949880), GPR_U32(ctx, 2));
    // 0x18d69c: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18D69Cu;
    SET_GPR_U32(ctx, 31, 0x18D6A4u);
    ctx->pc = 0x18D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D69Cu;
    // 0x18d6a0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18D69Cu, 0x18D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6A4u;
label_18d6a4:
    // 0x18d6a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d6a8: 0xac62bbf0  sw          $v0, -0x4410($v1)
    ctx->pc = 0x18d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949872), GPR_U32(ctx, 2));
    // 0x18d6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18D6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6B4u;
        // 0x18d6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D6BCu;
    // 0x18d6bc: 0x0  nop
    ctx->pc = 0x18d6bcu;
    // NOP
}
