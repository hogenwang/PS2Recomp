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

// Function: sub_0010A660
// Address: 0x10a660 - 0x10a6a8
void sub_0010A660_0x10a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A660_0x10a660");
#endif

    switch (ctx->pc) {
        case 0x10a698u: goto label_10a698;
        default: break;
    }

    ctx->pc = 0x10a660u;

    // 0x10a660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a664: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10a664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10a668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a670: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10a670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10a674: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10a674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10a678: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x10a678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a67c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10a67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10a680: 0xace600f8  sw          $a2, 0xF8($a3)
    ctx->pc = 0x10a680u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 6));
    // 0x10a684: 0xace500ec  sw          $a1, 0xEC($a3)
    ctx->pc = 0x10a684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 5));
    // 0x10a688: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x10a688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x10a68c: 0xace000c4  sw          $zero, 0xC4($a3)
    ctx->pc = 0x10a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 0));
    // 0x10a690: 0xc04275e  jal         func_109D78
    ctx->pc = 0x10A690u;
    SET_GPR_U32(ctx, 31, 0x10A698u);
    ctx->pc = 0x10A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A690u;
    // 0x10a694: 0xace000f4  sw          $zero, 0xF4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109D78u, 0x10A690u, 0x10A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A698u;
label_10a698:
    // 0x10a698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A69Cu;
        // 0x10a6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A6A4u;
    // 0x10a6a4: 0x0  nop
    ctx->pc = 0x10a6a4u;
    // NOP
    if (ctx->pc == 0x10a6a4u) { ctx->pc = 0x10a6a8u; }
}
