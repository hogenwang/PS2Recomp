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

// Function: sub_002CB2F0
// Address: 0x2cb2f0 - 0x2cb348
void sub_002CB2F0_0x2cb2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB2F0_0x2cb2f0");
#endif

    switch (ctx->pc) {
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb33cu: goto label_2cb33c;
        default: break;
    }

    ctx->pc = 0x2cb2f0u;

    // 0x2cb2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb2f4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2cb2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb300: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CB300u;
    {
        const bool branch_taken_0x2cb300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB300u;
        // 0x2cb304: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb300) {
            ctx->pc = 0x2CB33Cu;
            goto label_2cb33c;
        }
    }
    ctx->pc = 0x2CB308u;
    // 0x2cb308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cb308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cb30c:
    // 0x2cb30c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2cb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb310: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2cb310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb314: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2cb314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2cb318: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x2cb318u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb31c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2cb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2cb320: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x2cb320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb324: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2cb328: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x2cb328u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb32c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2cb32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2cb330: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2cb330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb334: 0xc0b2d0a  jal         func_2CB428
    ctx->pc = 0x2CB334u;
    SET_GPR_U32(ctx, 31, 0x2CB33Cu);
    ctx->pc = 0x2CB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB334u;
    // 0x2cb338: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB428u, 0x2CB334u, 0x2CB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB33Cu;
label_2cb33c:
    // 0x2cb33c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb340: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB340u;
        // 0x2cb344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB348u;
}
