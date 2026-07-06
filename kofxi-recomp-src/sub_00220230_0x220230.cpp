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

// Function: sub_00220230
// Address: 0x220230 - 0x220288
void sub_00220230_0x220230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220230_0x220230");
#endif

    switch (ctx->pc) {
        case 0x220254u: goto label_220254;
        default: break;
    }

    ctx->pc = 0x220230u;

    // 0x220230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220234: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x220234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22023c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x220240: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x220240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
    // 0x220244: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220248: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x220248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22024c: 0xc098202  jal         func_260808
    ctx->pc = 0x22024Cu;
    SET_GPR_U32(ctx, 31, 0x220254u);
    ctx->pc = 0x220250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22024Cu;
    // 0x220250: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260808u, 0x22024Cu, 0x220254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220254u;
label_220254:
    // 0x220254: 0x97af0000  lhu         $t7, 0x0($sp)
    ctx->pc = 0x220254u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220258: 0x31ee0002  andi        $t6, $t7, 0x2
    ctx->pc = 0x220258u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x22025c: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x22025cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x220260: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x220260u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x220264: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x220264u;
    {
        const bool branch_taken_0x220264 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220264u;
        // 0x220268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220264) {
            ctx->pc = 0x220274u;
            goto label_220274;
        }
    }
    ctx->pc = 0x22026Cu;
    // 0x22026c: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x22026Cu;
    {
        const bool branch_taken_0x22026c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x220270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22026Cu;
        // 0x220270: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22026c) {
            ctx->pc = 0x22027Cu;
            goto label_22027c;
        }
    }
    ctx->pc = 0x220274u;
label_220274:
    // 0x220274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22027c:
    // 0x22027c: 0x3e00008  jr          $ra
    ctx->pc = 0x22027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22027Cu;
        // 0x220280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220284u;
    // 0x220284: 0x0  nop
    ctx->pc = 0x220284u;
    // NOP
}
