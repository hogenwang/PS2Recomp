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

// Function: sub_001FE0C0
// Address: 0x1fe0c0 - 0x1fe120
void sub_001FE0C0_0x1fe0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE0C0_0x1fe0c0");
#endif

    switch (ctx->pc) {
        case 0x1fe104u: goto label_1fe104;
        default: break;
    }

    ctx->pc = 0x1fe0c0u;

    // 0x1fe0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fe0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fe0d0: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x1fe0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1fe0d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1fe0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe0d8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fe0dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FE0DCu;
    {
        const bool branch_taken_0x1fe0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0dc) {
            ctx->pc = 0x1FE0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE0DCu;
            // 0x1fe0e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0E4u;
            goto label_1fe0e4;
        }
    }
    ctx->pc = 0x1FE0E4u;
label_1fe0e4:
    // 0x1fe0e4: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x1fe0e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fe0e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fe0ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1fe0ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1fe0f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe0f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe0f8: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1fe0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1fe0fc: 0xc07f860  jal         func_1FE180
    ctx->pc = 0x1FE0FCu;
    SET_GPR_U32(ctx, 31, 0x1FE104u);
    ctx->pc = 0x1FE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0FCu;
    // 0x1fe100: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE180u, 0x1FE0FCu, 0x1FE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE104u;
label_1fe104:
    // 0x1fe104: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe108: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe10c: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x1fe10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    // 0x1fe110: 0xae0301a4  sw          $v1, 0x1A4($s0)
    ctx->pc = 0x1fe110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 3));
    // 0x1fe114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe118: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE118u;
        // 0x1fe11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE120u;
}
