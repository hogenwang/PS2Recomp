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

// Function: kofxiFinalizeAsyncResourceLoad
// Address: 0x1af858 - 0x1af8c0
void kofxiFinalizeAsyncResourceLoad_0x1af858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiFinalizeAsyncResourceLoad_0x1af858");
#endif

    switch (ctx->pc) {
        case 0x1af874u: goto label_1af874;
        case 0x1af8a8u: goto label_1af8a8;
        case 0x1af8b0u: goto label_1af8b0;
        default: break;
    }

    ctx->pc = 0x1af858u;

    // 0x1af858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af860: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1af864: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af868: 0x261001c8  addiu       $s0, $s0, 0x1C8
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    // 0x1af86c: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1AF86Cu;
    SET_GPR_U32(ctx, 31, 0x1AF874u);
    ctx->pc = 0x1AF870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF86Cu;
    // 0x1af870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04D0u, 0x1AF86Cu, 0x1AF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF874u;
label_1af874:
    // 0x1af874: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1af874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1af878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af87c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af884: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1af888: 0xac4001c4  sw          $zero, 0x1C4($v0)
    ctx->pc = 0x1af888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 452), GPR_U32(ctx, 0));
    // 0x1af88c: 0xac6001dc  sw          $zero, 0x1DC($v1)
    ctx->pc = 0x1af88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 0));
    // 0x1af890: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF890u;
        // 0x1af894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF898u;
    // 0x1af898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af89c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af8a0: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF8A0u;
    SET_GPR_U32(ctx, 31, 0x1AF8A8u);
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1AF8A0u, 0x1AF8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8A8u;
label_1af8a8:
    // 0x1af8a8: 0xc06be30  jal         func_1AF8C0
    ctx->pc = 0x1AF8A8u;
    SET_GPR_U32(ctx, 31, 0x1AF8B0u);
    ctx->pc = 0x1AF8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF8C0u, 0x1AF8A8u, 0x1AF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8B0u;
label_1af8b0:
    // 0x1af8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af8b4: 0x806c6b2  j           func_1B1AC8
    ctx->pc = 0x1AF8B4u;
    ctx->pc = 0x1AF8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8B4u;
    // 0x1af8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF8BCu;
    // 0x1af8bc: 0x0  nop
    ctx->pc = 0x1af8bcu;
    // NOP
    if (ctx->pc == 0x1af8bcu) { ctx->pc = 0x1af8c0u; }
}
