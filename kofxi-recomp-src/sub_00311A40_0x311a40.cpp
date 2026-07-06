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

// Function: sub_00311A40
// Address: 0x311a40 - 0x311ae0
void sub_00311A40_0x311a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311A40_0x311a40");
#endif

    switch (ctx->pc) {
        case 0x311a5cu: goto label_311a5c;
        default: break;
    }

    ctx->pc = 0x311a40u;

    // 0x311a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311a44: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x311a48: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311a50: 0x24843770  addiu       $a0, $a0, 0x3770
    ctx->pc = 0x311a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14192));
    // 0x311a54: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x311A54u;
    SET_GPR_U32(ctx, 31, 0x311A5Cu);
    ctx->pc = 0x311A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A54u;
    // 0x311a58: 0x24a509c0  addiu       $a1, $a1, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x311A54u, 0x311A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A5Cu;
label_311a5c:
    // 0x311a5c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311a60: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x311a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x311a64: 0xac60d938  sw          $zero, -0x26C8($v1)
    ctx->pc = 0x311a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 0));
    // 0x311a68: 0x3c0701d5  lui         $a3, 0x1D5
    ctx->pc = 0x311a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)469 << 16));
    // 0x311a6c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311a70: 0xac80d940  sw          $zero, -0x26C0($a0)
    ctx->pc = 0x311a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957376), GPR_U32(ctx, 0));
    // 0x311a74: 0x8c6809c0  lw          $t0, 0x9C0($v1)
    ctx->pc = 0x311a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2496)));
    // 0x311a78: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x311a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x311a7c: 0xac80d930  sw          $zero, -0x26D0($a0)
    ctx->pc = 0x311a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957360), GPR_U32(ctx, 0));
    // 0x311a80: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311a84: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x311a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x311a88: 0x24e709c0  addiu       $a3, $a3, 0x9C0
    ctx->pc = 0x311a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2496));
    // 0x311a8c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311a90: 0xac88d928  sw          $t0, -0x26D8($a0)
    ctx->pc = 0x311a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957352), GPR_U32(ctx, 8));
    // 0x311a94: 0x8c6609c4  lw          $a2, 0x9C4($v1)
    ctx->pc = 0x311a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2500)));
    // 0x311a98: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x311a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x311a9c: 0xaca6d920  sw          $a2, -0x26E0($a1)
    ctx->pc = 0x311a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294957344), GPR_U32(ctx, 6));
    // 0x311aa0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311aa4: 0x8c6609c8  lw          $a2, 0x9C8($v1)
    ctx->pc = 0x311aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2504)));
    // 0x311aa8: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311aac: 0x24a509d0  addiu       $a1, $a1, 0x9D0
    ctx->pc = 0x311aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    // 0x311ab0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311ab4: 0xac650980  sw          $a1, 0x980($v1)
    ctx->pc = 0x311ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2432), GPR_U32(ctx, 5));
    // 0x311ab8: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311abc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311ac0: 0x24a50a10  addiu       $a1, $a1, 0xA10
    ctx->pc = 0x311ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2576));
    // 0x311ac4: 0xac650988  sw          $a1, 0x988($v1)
    ctx->pc = 0x311ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2440), GPR_U32(ctx, 5));
    // 0x311ac8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x311ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x311acc: 0xac830990  sw          $v1, 0x990($a0)
    ctx->pc = 0x311accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2448), GPR_U32(ctx, 3));
    // 0x311ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x311AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AD4u;
        // 0x311ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311ADCu;
    // 0x311adc: 0x0  nop
    ctx->pc = 0x311adcu;
    // NOP
}
