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

// Function: sub_0010D180
// Address: 0x10d180 - 0x10d228
void sub_0010D180_0x10d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D180_0x10d180");
#endif

    switch (ctx->pc) {
        case 0x10d198u: goto label_10d198;
        case 0x10d1a0u: goto label_10d1a0;
        case 0x10d1c4u: goto label_10d1c4;
        case 0x10d1d0u: goto label_10d1d0;
        case 0x10d1f4u: goto label_10d1f4;
        case 0x10d214u: goto label_10d214;
        default: break;
    }

    ctx->pc = 0x10d180u;

    // 0x10d180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d18c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d190: 0xc0433f4  jal         func_10CFD0
    ctx->pc = 0x10D190u;
    SET_GPR_U32(ctx, 31, 0x10D198u);
    ctx->pc = 0x10D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D190u;
    // 0x10d194: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFD0u, 0x10D190u, 0x10D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D198u;
label_10d198:
    // 0x10d198: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D198u;
    SET_GPR_U32(ctx, 31, 0x10D1A0u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10D198u, 0x10D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1A0u;
label_10d1a0:
    // 0x10d1a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d1a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d1a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10d1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10d1ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10d1acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10d1b0: 0xf  sync
    ctx->pc = 0x10d1b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d1b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D1B4u;
    {
        const bool branch_taken_0x10d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1B4u;
        // 0x10d1b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1b4) {
            ctx->pc = 0x10D1C8u;
            goto label_10d1c8;
        }
    }
    ctx->pc = 0x10D1BCu;
    // 0x10d1bc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D1BCu;
    SET_GPR_U32(ctx, 31, 0x10D1C4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10D1BCu, 0x10D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1C4u;
label_10d1c4:
    // 0x10d1c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10d1c8:
    // 0x10d1c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10d1cc: 0x0  nop
    ctx->pc = 0x10d1ccu;
    // NOP
label_10d1d0:
    // 0x10d1d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10d1d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10d1d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D1D8u;
    {
        const bool branch_taken_0x10d1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d1d8) {
            ctx->pc = 0x10D1ECu;
            goto label_10d1ec;
        }
    }
    ctx->pc = 0x10D1E0u;
    // 0x10d1e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d1e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D1E4u;
    {
        const bool branch_taken_0x10d1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d1e4) {
            ctx->pc = 0x10D1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d1d0;
        }
    }
    ctx->pc = 0x10D1ECu;
label_10d1ec:
    // 0x10d1ec: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D1ECu;
    SET_GPR_U32(ctx, 31, 0x10D1F4u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10D1ECu, 0x10D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1F4u;
label_10d1f4:
    // 0x10d1f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d1f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10d1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10d1fc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x10d1fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x10d200: 0xf  sync
    ctx->pc = 0x10d200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D204u;
    {
        const bool branch_taken_0x10d204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d204) {
            ctx->pc = 0x10D214u;
            goto label_10d214;
        }
    }
    ctx->pc = 0x10D20Cu;
    // 0x10d20c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D20Cu;
    SET_GPR_U32(ctx, 31, 0x10D214u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10D20Cu, 0x10D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D214u;
label_10d214:
    // 0x10d214: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x10d214u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D21Cu;
        // 0x10d220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D224u;
    // 0x10d224: 0x0  nop
    ctx->pc = 0x10d224u;
    // NOP
    if (ctx->pc == 0x10d224u) { ctx->pc = 0x10d228u; }
}
