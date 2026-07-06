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

// Function: sub_0020BB80
// Address: 0x20bb80 - 0x20bbd0
void sub_0020BB80_0x20bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BB80_0x20bb80");
#endif

    switch (ctx->pc) {
        case 0x20bbc0u: goto label_20bbc0;
        default: break;
    }

    ctx->pc = 0x20bb80u;

    // 0x20bb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20bb84: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x20bb84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20bb8c: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x20bb8cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x20bb90: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x20bb90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x20bb94: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20bb98: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20bb9c: 0xffa80010  sd          $t0, 0x10($sp)
    ctx->pc = 0x20bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 8));
    // 0x20bba0: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x20bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x20bba4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x20bba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bba8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20bba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbac: 0x952a0002  lhu         $t2, 0x2($t1)
    ctx->pc = 0x20bbacu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x20bbb0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x20bbb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20bbb4: 0x952b0004  lhu         $t3, 0x4($t1)
    ctx->pc = 0x20bbb4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20bbb8: 0xc082a88  jal         func_20AA20
    ctx->pc = 0x20BBB8u;
    SET_GPR_U32(ctx, 31, 0x20BBC0u);
    ctx->pc = 0x20BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBB8u;
    // 0x20bbbc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA20u, 0x20BBB8u, 0x20BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBC0u;
label_20bbc0:
    // 0x20bbc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20bbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20bbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x20BBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC4u;
        // 0x20bbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BBCCu;
    // 0x20bbcc: 0x0  nop
    ctx->pc = 0x20bbccu;
    // NOP
}
