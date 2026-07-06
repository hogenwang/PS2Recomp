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

// Function: sub_001E80B8
// Address: 0x1e80b8 - 0x1e8178
void sub_001E80B8_0x1e80b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E80B8_0x1e80b8");
#endif

    switch (ctx->pc) {
        case 0x1e8120u: goto label_1e8120;
        case 0x1e8128u: goto label_1e8128;
        case 0x1e813cu: goto label_1e813c;
        case 0x1e8160u: goto label_1e8160;
        case 0x1e8168u: goto label_1e8168;
        default: break;
    }

    ctx->pc = 0x1e80b8u;

    // 0x1e80b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e80bc: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1e80bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1e80c0: 0x24a53c90  addiu       $a1, $a1, 0x3C90
    ctx->pc = 0x1e80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15504));
    // 0x1e80c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e80c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e80cc: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x1e80ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1e80d0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1e80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1e80d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e80d8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1e80d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1e80dc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1e80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1e80e0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1e80e4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1e80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e80e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e80ec: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1e80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1e80f0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1e80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1e80f4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1e80f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1e80f8: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x1e80f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x1e80fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1e80fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e8100: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1e8100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1e8104: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e8104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e8108: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8108u;
        // 0x1e810c: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8110u;
    // 0x1e8110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8118: 0xc06c74a  jal         func_1B1D28
    ctx->pc = 0x1E8118u;
    SET_GPR_U32(ctx, 31, 0x1E8120u);
    ctx->pc = 0x1B1D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1D28u, 0x1E8118u, 0x1E8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8120u;
label_1e8120:
    // 0x1e8120: 0xc06d382  jal         func_1B4E08
    ctx->pc = 0x1E8120u;
    SET_GPR_U32(ctx, 31, 0x1E8128u);
    ctx->pc = 0x1B4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E08u, 0x1E8120u, 0x1E8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8128u;
label_1e8128:
    // 0x1e8128: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1e812c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e812cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8130: 0x24843c90  addiu       $a0, $a0, 0x3C90
    ctx->pc = 0x1e8130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
    // 0x1e8134: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1E8134u;
    SET_GPR_U32(ctx, 31, 0x1E813Cu);
    ctx->pc = 0x1E8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8134u;
    // 0x1e8138: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D63E8u, 0x1E8134u, 0x1E813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E813Cu;
label_1e813c:
    // 0x1e813c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e813cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8144: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8144u;
        // 0x1e8148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E814Cu;
    // 0x1e814c: 0x0  nop
    ctx->pc = 0x1e814cu;
    // NOP
    // 0x1e8150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8158: 0xc06d388  jal         func_1B4E20
    ctx->pc = 0x1E8158u;
    SET_GPR_U32(ctx, 31, 0x1E8160u);
    ctx->pc = 0x1B4E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E20u, 0x1E8158u, 0x1E8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8160u;
label_1e8160:
    // 0x1e8160: 0xc06c7ae  jal         func_1B1EB8
    ctx->pc = 0x1E8160u;
    SET_GPR_U32(ctx, 31, 0x1E8168u);
    ctx->pc = 0x1B1EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1EB8u, 0x1E8160u, 0x1E8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8168u;
label_1e8168:
    // 0x1e8168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e8168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e816c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8170: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8170u;
        // 0x1e8174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8178u;
}
