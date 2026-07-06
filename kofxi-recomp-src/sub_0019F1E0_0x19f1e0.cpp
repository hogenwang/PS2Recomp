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

// Function: sub_0019F1E0
// Address: 0x19f1e0 - 0x19f230
void sub_0019F1E0_0x19f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F1E0_0x19f1e0");
#endif

    ctx->pc = 0x19f1e0u;

    // 0x19f1e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f1e4: 0x8c43d588  lw          $v1, -0x2A78($v0)
    ctx->pc = 0x19f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
    // 0x19f1e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19f1ec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F1ECu;
    {
        const bool branch_taken_0x19f1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f1ec) {
            ctx->pc = 0x19F1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F1ECu;
            // 0x19f1f0: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F200u;
            goto label_19f200;
        }
    }
    ctx->pc = 0x19F1F4u;
    // 0x19f1f4: 0x183c  dsll32      $v1, $zero, 0
    ctx->pc = 0x19f1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 0));
    // 0x19f1f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f1fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19f1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19f200:
    // 0x19f200: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f204: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f208: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x19f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f20c: 0xac44d588  sw          $a0, -0x2A78($v0)
    ctx->pc = 0x19f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956424), GPR_U32(ctx, 4));
    // 0x19f210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f214: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f218: 0x2442d5a0  addiu       $v0, $v0, -0x2A60
    ctx->pc = 0x19f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956448));
    // 0x19f21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f220: 0x3e00008  jr          $ra
    ctx->pc = 0x19F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F220u;
        // 0x19f224: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F228u;
    // 0x19f228: 0x0  nop
    ctx->pc = 0x19f228u;
    // NOP
    // 0x19f22c: 0x0  nop
    ctx->pc = 0x19f22cu;
    // NOP
    if (ctx->pc == 0x19f22cu) { ctx->pc = 0x19f230u; }
}
