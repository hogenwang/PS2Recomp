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

// Function: sub_002C66B8
// Address: 0x2c66b8 - 0x2c6700
void sub_002C66B8_0x2c66b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C66B8_0x2c66b8");
#endif

    switch (ctx->pc) {
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66bcu: goto label_2c66bc;
        case 0x2c66c0u: goto label_2c66c0;
        case 0x2c66c4u: goto label_2c66c4;
        case 0x2c66c8u: goto label_2c66c8;
        case 0x2c66ccu: goto label_2c66cc;
        case 0x2c66d0u: goto label_2c66d0;
        case 0x2c66d4u: goto label_2c66d4;
        case 0x2c66d8u: goto label_2c66d8;
        case 0x2c66dcu: goto label_2c66dc;
        case 0x2c66e0u: goto label_2c66e0;
        case 0x2c66e4u: goto label_2c66e4;
        case 0x2c66e8u: goto label_2c66e8;
        case 0x2c66ecu: goto label_2c66ec;
        case 0x2c66f0u: goto label_2c66f0;
        case 0x2c66f4u: goto label_2c66f4;
        case 0x2c66f8u: goto label_2c66f8;
        case 0x2c66fcu: goto label_2c66fc;
        default: break;
    }

    ctx->pc = 0x2c66b8u;

label_2c66b8:
    // 0x2c66b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c66b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c66bc:
    // 0x2c66bc: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2c66bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2c66c0:
    // 0x2c66c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c66c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c66c4:
    // 0x2c66c4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2c66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2c66c8:
    // 0x2c66c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c66cc:
    // 0x2c66cc: 0x40f809  jalr        $v0
label_2c66d0:
    if (ctx->pc == 0x2C66D0u) {
        ctx->pc = 0x2C66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66CCu;
        // 0x2c66d0: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66D4u;
        goto label_2c66d4;
    }
    ctx->pc = 0x2C66CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C66D4u);
        ctx->pc = 0x2C66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66CCu;
        // 0x2c66d0: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C66CCu, 0x2C66D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C66D4u;
label_2c66d4:
    // 0x2c66d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c66d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c66d8:
    // 0x2c66d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c66dc:
    if (ctx->pc == 0x2C66DCu) {
        ctx->pc = 0x2C66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66D8u;
        // 0x2c66dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66E0u;
        goto label_2c66e0;
    }
    ctx->pc = 0x2C66D8u;
    {
        const bool branch_taken_0x2c66d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66D8u;
        // 0x2c66dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66d8) {
            ctx->pc = 0x2C66F0u;
            goto label_2c66f0;
        }
    }
    ctx->pc = 0x2C66E0u;
label_2c66e0:
    // 0x2c66e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c66e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c66e4:
    // 0x2c66e4: 0x80b21d8  j           func_2C8760
label_2c66e8:
    if (ctx->pc == 0x2C66E8u) {
        ctx->pc = 0x2C66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66E4u;
        // 0x2c66e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66ECu;
        goto label_2c66ec;
    }
    ctx->pc = 0x2C66E4u;
    ctx->pc = 0x2C66E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C66E4u;
    // 0x2c66e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C66ECu;
label_2c66ec:
    // 0x2c66ec: 0x0  nop
    ctx->pc = 0x2c66ecu;
    // NOP
label_2c66f0:
    // 0x2c66f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c66f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c66f4:
    // 0x2c66f4: 0x3e00008  jr          $ra
label_2c66f8:
    if (ctx->pc == 0x2C66F8u) {
        ctx->pc = 0x2C66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66F4u;
        // 0x2c66f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66FCu;
        goto label_2c66fc;
    }
    ctx->pc = 0x2C66F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66F4u;
        // 0x2c66f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C66F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C66FCu;
label_2c66fc:
    // 0x2c66fc: 0x0  nop
    ctx->pc = 0x2c66fcu;
    // NOP
}
