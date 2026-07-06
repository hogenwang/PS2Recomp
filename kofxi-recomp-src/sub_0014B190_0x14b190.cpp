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

// Function: sub_0014B190
// Address: 0x14b190 - 0x14b240
void sub_0014B190_0x14b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B190_0x14b190");
#endif

    switch (ctx->pc) {
        case 0x14b1b0u: goto label_14b1b0;
        case 0x14b1c8u: goto label_14b1c8;
        case 0x14b1e0u: goto label_14b1e0;
        case 0x14b1f8u: goto label_14b1f8;
        case 0x14b210u: goto label_14b210;
        case 0x14b228u: goto label_14b228;
        default: break;
    }

    ctx->pc = 0x14b190u;

    // 0x14b190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b194: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b19c: 0x9044dc9d  lbu         $a0, -0x2363($v0)
    ctx->pc = 0x14b19cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958237)));
    // 0x14b1a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1a4: 0x9046dcac  lbu         $a2, -0x2354($v0)
    ctx->pc = 0x14b1a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958252)));
    // 0x14b1a8: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B1A8u;
    SET_GPR_U32(ctx, 31, 0x14B1B0u);
    ctx->pc = 0x14B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1A8u;
    // 0x14b1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B1A8u, 0x14B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1B0u;
label_14b1b0:
    // 0x14b1b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1b4: 0x9044dcbd  lbu         $a0, -0x2343($v0)
    ctx->pc = 0x14b1b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958269)));
    // 0x14b1b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1bc: 0x9046dccc  lbu         $a2, -0x2334($v0)
    ctx->pc = 0x14b1bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958284)));
    // 0x14b1c0: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B1C0u;
    SET_GPR_U32(ctx, 31, 0x14B1C8u);
    ctx->pc = 0x14B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1C0u;
    // 0x14b1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B1C0u, 0x14B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1C8u;
label_14b1c8:
    // 0x14b1c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1cc: 0x9044dcdd  lbu         $a0, -0x2323($v0)
    ctx->pc = 0x14b1ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958301)));
    // 0x14b1d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1d4: 0x9046dcec  lbu         $a2, -0x2314($v0)
    ctx->pc = 0x14b1d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958316)));
    // 0x14b1d8: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B1D8u;
    SET_GPR_U32(ctx, 31, 0x14B1E0u);
    ctx->pc = 0x14B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1D8u;
    // 0x14b1dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B1D8u, 0x14B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1E0u;
label_14b1e0:
    // 0x14b1e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1e4: 0x9044dee5  lbu         $a0, -0x211B($v0)
    ctx->pc = 0x14b1e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958821)));
    // 0x14b1e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1ec: 0x9046def4  lbu         $a2, -0x210C($v0)
    ctx->pc = 0x14b1ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958836)));
    // 0x14b1f0: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B1F0u;
    SET_GPR_U32(ctx, 31, 0x14B1F8u);
    ctx->pc = 0x14B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1F0u;
    // 0x14b1f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B1F0u, 0x14B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1F8u;
label_14b1f8:
    // 0x14b1f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b1fc: 0x9044df05  lbu         $a0, -0x20FB($v0)
    ctx->pc = 0x14b1fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958853)));
    // 0x14b200: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b204: 0x9046df14  lbu         $a2, -0x20EC($v0)
    ctx->pc = 0x14b204u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958868)));
    // 0x14b208: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B208u;
    SET_GPR_U32(ctx, 31, 0x14B210u);
    ctx->pc = 0x14B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B208u;
    // 0x14b20c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B208u, 0x14B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B210u;
label_14b210:
    // 0x14b210: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b214: 0x9044df25  lbu         $a0, -0x20DB($v0)
    ctx->pc = 0x14b214u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958885)));
    // 0x14b218: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b21c: 0x9046df34  lbu         $a2, -0x20CC($v0)
    ctx->pc = 0x14b21cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958900)));
    // 0x14b220: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B220u;
    SET_GPR_U32(ctx, 31, 0x14B228u);
    ctx->pc = 0x14B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B220u;
    // 0x14b224: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B220u, 0x14B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B228u;
label_14b228:
    // 0x14b228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b22c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B22Cu;
        // 0x14b230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B234u;
    // 0x14b234: 0x0  nop
    ctx->pc = 0x14b234u;
    // NOP
    // 0x14b238: 0x0  nop
    ctx->pc = 0x14b238u;
    // NOP
    // 0x14b23c: 0x0  nop
    ctx->pc = 0x14b23cu;
    // NOP
}
