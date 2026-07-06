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

// Function: sub_0014B240
// Address: 0x14b240 - 0x14b2f0
void sub_0014B240_0x14b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B240_0x14b240");
#endif

    switch (ctx->pc) {
        case 0x14b250u: goto label_14b250;
        case 0x14b268u: goto label_14b268;
        case 0x14b280u: goto label_14b280;
        case 0x14b298u: goto label_14b298;
        case 0x14b2b0u: goto label_14b2b0;
        case 0x14b2c8u: goto label_14b2c8;
        case 0x14b2e0u: goto label_14b2e0;
        default: break;
    }

    ctx->pc = 0x14b240u;

    // 0x14b240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b248: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x14B248u;
    SET_GPR_U32(ctx, 31, 0x14B250u);
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x14B248u, 0x14B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B250u;
label_14b250:
    // 0x14b250: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b254: 0x9044dc9d  lbu         $a0, -0x2363($v0)
    ctx->pc = 0x14b254u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958237)));
    // 0x14b258: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b25c: 0x9046dcac  lbu         $a2, -0x2354($v0)
    ctx->pc = 0x14b25cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958252)));
    // 0x14b260: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B260u;
    SET_GPR_U32(ctx, 31, 0x14B268u);
    ctx->pc = 0x14B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B260u;
    // 0x14b264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B260u, 0x14B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B268u;
label_14b268:
    // 0x14b268: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b26c: 0x9044dcbd  lbu         $a0, -0x2343($v0)
    ctx->pc = 0x14b26cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958269)));
    // 0x14b270: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b274: 0x9046dccc  lbu         $a2, -0x2334($v0)
    ctx->pc = 0x14b274u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958284)));
    // 0x14b278: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B278u;
    SET_GPR_U32(ctx, 31, 0x14B280u);
    ctx->pc = 0x14B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B278u;
    // 0x14b27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B278u, 0x14B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B280u;
label_14b280:
    // 0x14b280: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b284: 0x9044dcdd  lbu         $a0, -0x2323($v0)
    ctx->pc = 0x14b284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958301)));
    // 0x14b288: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b28c: 0x9046dcec  lbu         $a2, -0x2314($v0)
    ctx->pc = 0x14b28cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958316)));
    // 0x14b290: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B290u;
    SET_GPR_U32(ctx, 31, 0x14B298u);
    ctx->pc = 0x14B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B290u;
    // 0x14b294: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B290u, 0x14B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B298u;
label_14b298:
    // 0x14b298: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b29c: 0x9044dee5  lbu         $a0, -0x211B($v0)
    ctx->pc = 0x14b29cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958821)));
    // 0x14b2a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b2a4: 0x9046def4  lbu         $a2, -0x210C($v0)
    ctx->pc = 0x14b2a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958836)));
    // 0x14b2a8: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B2A8u;
    SET_GPR_U32(ctx, 31, 0x14B2B0u);
    ctx->pc = 0x14B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2A8u;
    // 0x14b2ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B2A8u, 0x14B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2B0u;
label_14b2b0:
    // 0x14b2b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b2b4: 0x9044df05  lbu         $a0, -0x20FB($v0)
    ctx->pc = 0x14b2b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958853)));
    // 0x14b2b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b2bc: 0x9046df14  lbu         $a2, -0x20EC($v0)
    ctx->pc = 0x14b2bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958868)));
    // 0x14b2c0: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B2C0u;
    SET_GPR_U32(ctx, 31, 0x14B2C8u);
    ctx->pc = 0x14B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2C0u;
    // 0x14b2c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B2C0u, 0x14B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C8u;
label_14b2c8:
    // 0x14b2c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b2cc: 0x9044df25  lbu         $a0, -0x20DB($v0)
    ctx->pc = 0x14b2ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958885)));
    // 0x14b2d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b2d4: 0x9046df34  lbu         $a2, -0x20CC($v0)
    ctx->pc = 0x14b2d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958900)));
    // 0x14b2d8: 0xc052cbc  jal         func_14B2F0
    ctx->pc = 0x14B2D8u;
    SET_GPR_U32(ctx, 31, 0x14B2E0u);
    ctx->pc = 0x14B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2D8u;
    // 0x14b2dc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2F0u, 0x14B2D8u, 0x14B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2E0u;
label_14b2e0:
    // 0x14b2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2E4u;
        // 0x14b2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B2ECu;
    // 0x14b2ec: 0x0  nop
    ctx->pc = 0x14b2ecu;
    // NOP
}
