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

// Function: sub_00183600
// Address: 0x183600 - 0x183690
void sub_00183600_0x183600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183600_0x183600");
#endif

    switch (ctx->pc) {
        case 0x18363cu: goto label_18363c;
        case 0x183654u: goto label_183654;
        default: break;
    }

    ctx->pc = 0x183600u;

    // 0x183600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183604: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183608: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x183608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18360c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183614: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18361c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x183620: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x183620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x183624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183628: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x183628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x18362c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18362cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183634: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183638: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x183638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18363c:
    // 0x18363c: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x18363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x183640: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x183640u;
    {
        const bool branch_taken_0x183640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183640) {
            ctx->pc = 0x183644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183640u;
            // 0x183644: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183668u;
            goto label_183668;
        }
    }
    ctx->pc = 0x183648u;
    // 0x183648: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18364c: 0xc060cd0  jal         func_183340
    ctx->pc = 0x18364Cu;
    SET_GPR_U32(ctx, 31, 0x183654u);
    ctx->pc = 0x183650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18364Cu;
    // 0x183650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183340u, 0x18364Cu, 0x183654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183654u;
label_183654:
    // 0x183654: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183654u;
    {
        const bool branch_taken_0x183654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183654) {
            ctx->pc = 0x183664u;
            goto label_183664;
        }
    }
    ctx->pc = 0x18365Cu;
    // 0x18365c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18365Cu;
    {
        const bool branch_taken_0x18365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18365Cu;
        // 0x183660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18365c) {
            ctx->pc = 0x183678u;
            goto label_183678;
        }
    }
    ctx->pc = 0x183664u;
label_183664:
    // 0x183664: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_183668:
    // 0x183668: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x183668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18366c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18366Cu;
    {
        const bool branch_taken_0x18366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18366Cu;
        // 0x183670: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18366c) {
            ctx->pc = 0x18363Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18363c;
        }
    }
    ctx->pc = 0x183674u;
    // 0x183674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183678:
    // 0x183678: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x183678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18367c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18367cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183688: 0x3e00008  jr          $ra
    ctx->pc = 0x183688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183688u;
        // 0x18368c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183690u;
}
