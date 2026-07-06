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

// Function: sub_001E71A0
// Address: 0x1e71a0 - 0x1e7218
void sub_001E71A0_0x1e71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E71A0_0x1e71a0");
#endif

    switch (ctx->pc) {
        case 0x1e71e0u: goto label_1e71e0;
        case 0x1e71f0u: goto label_1e71f0;
        case 0x1e71f8u: goto label_1e71f8;
        case 0x1e7200u: goto label_1e7200;
        default: break;
    }

    ctx->pc = 0x1e71a0u;

    // 0x1e71a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e71a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e71a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e71a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e71a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e71a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e71acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e71b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e71b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e71b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e71b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e71b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E71B8u;
    {
        const bool branch_taken_0x1e71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71B8u;
        // 0x1e71bc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71b8) {
            ctx->pc = 0x1E71F0u;
            goto label_1e71f0;
        }
    }
    ctx->pc = 0x1E71C0u;
    // 0x1e71c0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1e71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1e71c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e71c8: 0x8c63e580  lw          $v1, -0x1A80($v1)
    ctx->pc = 0x1e71c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960512)));
    // 0x1e71cc: 0x600008  jr          $v1
    ctx->pc = 0x1E71CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E71D8u: goto label_1e71d8;
            case 0x1E71E8u: goto label_1e71e8;
            case 0x1E71F0u: goto label_1e71f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E71CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E71D4u;
    // 0x1e71d4: 0x0  nop
    ctx->pc = 0x1e71d4u;
    // NOP
label_1e71d8:
    // 0x1e71d8: 0xc079b64  jal         func_1E6D90
    ctx->pc = 0x1E71D8u;
    SET_GPR_U32(ctx, 31, 0x1E71E0u);
    ctx->pc = 0x1E71DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71D8u;
    // 0x1e71dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6D90u, 0x1E71D8u, 0x1E71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71E0u;
label_1e71e0:
    // 0x1e71e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E71E0u;
    {
        const bool branch_taken_0x1e71e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71e0) {
            ctx->pc = 0x1E71F0u;
            goto label_1e71f0;
        }
    }
    ctx->pc = 0x1E71E8u;
label_1e71e8:
    // 0x1e71e8: 0xc079c3a  jal         func_1E70E8
    ctx->pc = 0x1E71E8u;
    SET_GPR_U32(ctx, 31, 0x1E71F0u);
    ctx->pc = 0x1E71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71E8u;
    // 0x1e71ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E70E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E70E8u, 0x1E71E8u, 0x1E71F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71F0u;
label_1e71f0:
    // 0x1e71f0: 0xc079c86  jal         func_1E7218
    ctx->pc = 0x1E71F0u;
    SET_GPR_U32(ctx, 31, 0x1E71F8u);
    ctx->pc = 0x1E71F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71F0u;
    // 0x1e71f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7218u, 0x1E71F0u, 0x1E71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71F8u;
label_1e71f8:
    // 0x1e71f8: 0xc0788c4  jal         func_1E2310
    ctx->pc = 0x1E71F8u;
    SET_GPR_U32(ctx, 31, 0x1E7200u);
    ctx->pc = 0x1E71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71F8u;
    // 0x1e71fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2310u, 0x1E71F8u, 0x1E7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7200u;
label_1e7200:
    // 0x1e7200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e720c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E720Cu;
        // 0x1e7210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7214u;
    // 0x1e7214: 0x0  nop
    ctx->pc = 0x1e7214u;
    // NOP
    if (ctx->pc == 0x1e7214u) { ctx->pc = 0x1e7218u; }
}
