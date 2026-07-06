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

// Function: sub_00180130
// Address: 0x180130 - 0x180170
void sub_00180130_0x180130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180130_0x180130");
#endif

    ctx->pc = 0x180130u;

    // 0x180130: 0x8c850530  lw          $a1, 0x530($a0)
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x180134: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x180134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x180138: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180138u;
    {
        const bool branch_taken_0x180138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180138) {
            ctx->pc = 0x18013Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180138u;
            // 0x18013c: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180150u;
            goto label_180150;
        }
    }
    ctx->pc = 0x180140u;
    // 0x180140: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x180144: 0x34631600  ori         $v1, $v1, 0x1600
    ctx->pc = 0x180144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5632);
    // 0x180148: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x180148u;
    {
        const bool branch_taken_0x180148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180148u;
        // 0x18014c: 0xac830494  sw          $v1, 0x494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180148) {
            ctx->pc = 0x180164u;
            goto label_180164;
        }
    }
    ctx->pc = 0x180150u;
label_180150:
    // 0x180150: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180150u;
    {
        const bool branch_taken_0x180150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180150) {
            ctx->pc = 0x180164u;
            goto label_180164;
        }
    }
    ctx->pc = 0x180158u;
    // 0x180158: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x180158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x18015c: 0x34631a00  ori         $v1, $v1, 0x1A00
    ctx->pc = 0x18015cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6656);
    // 0x180160: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x180160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
label_180164:
    // 0x180164: 0x3e00008  jr          $ra
    ctx->pc = 0x180164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18016Cu;
    // 0x18016c: 0x0  nop
    ctx->pc = 0x18016cu;
    // NOP
}
