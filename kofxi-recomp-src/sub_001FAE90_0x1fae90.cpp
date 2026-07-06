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

// Function: sub_001FAE90
// Address: 0x1fae90 - 0x1faee0
void sub_001FAE90_0x1fae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAE90_0x1fae90");
#endif

    switch (ctx->pc) {
        case 0x1faeb4u: goto label_1faeb4;
        default: break;
    }

    ctx->pc = 0x1fae90u;

    // 0x1fae90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fae94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fae98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fae98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faea0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1faea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faea4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1faea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1faea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1faea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1faeac: 0xc07ebb8  jal         func_1FAEE0
    ctx->pc = 0x1FAEACu;
    SET_GPR_U32(ctx, 31, 0x1FAEB4u);
    ctx->pc = 0x1FAEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAEACu;
    // 0x1faeb0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x1FAEACu, 0x1FAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAEB4u;
label_1faeb4:
    // 0x1faeb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAEB4u;
    {
        const bool branch_taken_0x1faeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEB4u;
        // 0x1faeb8: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faeb4) {
            ctx->pc = 0x1FAEC4u;
            goto label_1faec4;
        }
    }
    ctx->pc = 0x1FAEBCu;
    // 0x1faebc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1faec0: 0xac510b9c  sw          $s1, 0xB9C($v0)
    ctx->pc = 0x1faec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2972), GPR_U32(ctx, 17));
label_1faec4:
    // 0x1faec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1faeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faed0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAED4u;
        // 0x1faed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEDCu;
    // 0x1faedc: 0x0  nop
    ctx->pc = 0x1faedcu;
    // NOP
}
