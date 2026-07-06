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

// Function: sub_0021EFB8
// Address: 0x21efb8 - 0x21f018
void sub_0021EFB8_0x21efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EFB8_0x21efb8");
#endif

    switch (ctx->pc) {
        case 0x21eff4u: goto label_21eff4;
        default: break;
    }

    ctx->pc = 0x21efb8u;

    // 0x21efb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21efbc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21efbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21efc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21efc4: 0x24e71fc8  addiu       $a3, $a3, 0x1FC8
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8136));
    // 0x21efc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21efcc: 0x2405033d  addiu       $a1, $zero, 0x33D
    ctx->pc = 0x21efccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 829));
    // 0x21efd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21efd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21efd8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x21efdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21efe0: 0x8e28b7e8  lw          $t0, -0x4818($s1)
    ctx->pc = 0x21efe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948840)));
    // 0x21efe4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x21efe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efe8: 0x24841fe0  addiu       $a0, $a0, 0x1FE0
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8160));
    // 0x21efec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EFECu;
    SET_GPR_U32(ctx, 31, 0x21EFF4u);
    ctx->pc = 0x21EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFECu;
    // 0x21eff0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21EFECu, 0x21EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFF4u;
label_21eff4:
    // 0x21eff4: 0x262fb7e8  addiu       $t7, $s1, -0x4818
    ctx->pc = 0x21eff4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948840));
    // 0x21eff8: 0xae30b7e8  sw          $s0, -0x4818($s1)
    ctx->pc = 0x21eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294948840), GPR_U32(ctx, 16));
    // 0x21effc: 0xadf00004  sw          $s0, 0x4($t7)
    ctx->pc = 0x21effcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 16));
    // 0x21f000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21f000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f00c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f010: 0x3e00008  jr          $ra
    ctx->pc = 0x21F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F010u;
        // 0x21f014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F018u;
}
