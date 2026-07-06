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

// Function: sub_0032FCD0
// Address: 0x32fcd0 - 0x32fd40
void sub_0032FCD0_0x32fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FCD0_0x32fcd0");
#endif

    switch (ctx->pc) {
        case 0x32fce4u: goto label_32fce4;
        case 0x32fcf0u: goto label_32fcf0;
        case 0x32fcf8u: goto label_32fcf8;
        case 0x32fd00u: goto label_32fd00;
        case 0x32fd20u: goto label_32fd20;
        default: break;
    }

    ctx->pc = 0x32fcd0u;

    // 0x32fcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fcd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fcdc: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FCDCu;
    SET_GPR_U32(ctx, 31, 0x32FCE4u);
    ctx->pc = 0x32FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCDCu;
    // 0x32fce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FCDCu, 0x32FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCE4u;
label_32fce4:
    // 0x32fce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fce8: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FCE8u;
    SET_GPR_U32(ctx, 31, 0x32FCF0u);
    ctx->pc = 0x32FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCE8u;
    // 0x32fcec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FCE8u, 0x32FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCF0u;
label_32fcf0:
    // 0x32fcf0: 0xc0c0580  jal         func_301600
    ctx->pc = 0x32FCF0u;
    SET_GPR_U32(ctx, 31, 0x32FCF8u);
    ctx->pc = 0x32FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCF0u;
    // 0x32fcf4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301600u, 0x32FCF0u, 0x32FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCF8u;
label_32fcf8:
    // 0x32fcf8: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x32FCF8u;
    SET_GPR_U32(ctx, 31, 0x32FD00u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x32FCF8u, 0x32FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD00u;
label_32fd00:
    // 0x32fd00: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32fd04: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32fd08: 0x24840970  addiu       $a0, $a0, 0x970
    ctx->pc = 0x32fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x32fd0c: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x32fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x32fd10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32fd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd14: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x32fd14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x32fd18: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x32FD18u;
    SET_GPR_U32(ctx, 31, 0x32FD20u);
    ctx->pc = 0x32FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD18u;
    // 0x32fd1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x32FD18u, 0x32FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD20u;
label_32fd20:
    // 0x32fd20: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x32fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32fd24: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x32fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x32fd28: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x32fd28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x32fd2c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x32fd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x32fd30: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x32fd30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fd38: 0x3e00008  jr          $ra
    ctx->pc = 0x32FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD38u;
        // 0x32fd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FD40u;
}
