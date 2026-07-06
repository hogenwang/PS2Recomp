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

// Function: kofxiStartAsyncResourceLoad
// Address: 0x1aef20 - 0x1aef88
void kofxiStartAsyncResourceLoad_0x1aef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiStartAsyncResourceLoad_0x1aef20");
#endif

    switch (ctx->pc) {
        case 0x1aef4cu: goto label_1aef4c;
        case 0x1aef60u: goto label_1aef60;
        case 0x1aef68u: goto label_1aef68;
        default: break;
    }

    ctx->pc = 0x1aef20u;

    // 0x1aef20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aef24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aef28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aef28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aef30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aef30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aef38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aef38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aef40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aef44: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AEF44u;
    SET_GPR_U32(ctx, 31, 0x1AEF4Cu);
    ctx->pc = 0x1AEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF44u;
    // 0x1aef48: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1AEF44u, 0x1AEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF4Cu;
label_1aef4c:
    // 0x1aef4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aef50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aef54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef58: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1AEF58u;
    SET_GPR_U32(ctx, 31, 0x1AEF60u);
    ctx->pc = 0x1AEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF58u;
    // 0x1aef5c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1AEF58u, 0x1AEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF60u;
label_1aef60:
    // 0x1aef60: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AEF60u;
    SET_GPR_U32(ctx, 31, 0x1AEF68u);
    ctx->pc = 0x1AEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF60u;
    // 0x1aef64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1AEF60u, 0x1AEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF68u;
label_1aef68:
    // 0x1aef68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aef6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aef6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aef70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aef74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aef78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aef7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aef80: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF80u;
        // 0x1aef84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF88u;
}
