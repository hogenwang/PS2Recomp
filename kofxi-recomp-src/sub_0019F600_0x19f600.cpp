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

// Function: sub_0019F600
// Address: 0x19f600 - 0x19f660
void sub_0019F600_0x19f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F600_0x19f600");
#endif

    switch (ctx->pc) {
        case 0x19f610u: goto label_19f610;
        case 0x19f634u: goto label_19f634;
        default: break;
    }

    ctx->pc = 0x19f600u;

    // 0x19f600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f608: 0xc069a90  jal         func_1A6A40
    ctx->pc = 0x19F608u;
    SET_GPR_U32(ctx, 31, 0x19F610u);
    ctx->pc = 0x1A6A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A40u, 0x19F608u, 0x19F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F610u;
label_19f610:
    // 0x19f610: 0x219b8  dsll        $v1, $v0, 6
    ctx->pc = 0x19f610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 6);
    // 0x19f614: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x19f618: 0x62202f  dsubu       $a0, $v1, $v0
    ctx->pc = 0x19f618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x19f61c: 0x41978  dsll        $v1, $a0, 5
    ctx->pc = 0x19f61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 5);
    // 0x19f620: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x19f620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x19f624: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x19f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x19f628: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x19f628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x19f62c: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x19F62Cu;
    SET_GPR_U32(ctx, 31, 0x19F634u);
    ctx->pc = 0x19F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F62Cu;
    // 0x19f630: 0x221b8  dsll        $a0, $v0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x19F62Cu, 0x19F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F634u;
label_19f634:
    // 0x19f634: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x19f634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f63c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f63cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f640: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f644: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f648: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f64c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f654: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x19f654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x19f658: 0x3e00008  jr          $ra
    ctx->pc = 0x19F658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F658u;
        // 0x19f65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F660u;
}
