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

// Function: sub_00264028
// Address: 0x264028 - 0x264078
void sub_00264028_0x264028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264028_0x264028");
#endif

    switch (ctx->pc) {
        case 0x26403cu: goto label_26403c;
        default: break;
    }

    ctx->pc = 0x264028u;

    // 0x264028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26402c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264030: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x264030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x264034: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x264034u;
    SET_GPR_U32(ctx, 31, 0x26403Cu);
    ctx->pc = 0x264038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264034u;
    // 0x264038: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x264034u, 0x26403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26403Cu;
label_26403c:
    // 0x26403c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26403cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264040: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x264040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x264044: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264044u;
    {
        const bool branch_taken_0x264044 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x264048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264044u;
        // 0x264048: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264044) {
            ctx->pc = 0x264058u;
            goto label_264058;
        }
    }
    ctx->pc = 0x26404Cu;
    // 0x26404c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x264050: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x264050u;
    {
        const bool branch_taken_0x264050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264050u;
        // 0x264054: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264050) {
            ctx->pc = 0x26406Cu;
            goto label_26406c;
        }
    }
    ctx->pc = 0x264058u;
label_264058:
    // 0x264058: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x264058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x26405c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x264060: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264060u;
    {
        const bool branch_taken_0x264060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x264064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264060u;
        // 0x264064: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264060) {
            ctx->pc = 0x26406Cu;
            goto label_26406c;
        }
    }
    ctx->pc = 0x264068u;
    // 0x264068: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x264068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26406c:
    // 0x26406c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26406cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264070: 0x3e00008  jr          $ra
    ctx->pc = 0x264070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264070u;
        // 0x264074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264078u;
}
