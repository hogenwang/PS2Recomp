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

// Function: sub_00322A70
// Address: 0x322a70 - 0x322ae0
void sub_00322A70_0x322a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322A70_0x322a70");
#endif

    switch (ctx->pc) {
        case 0x322a8cu: goto label_322a8c;
        case 0x322aa0u: goto label_322aa0;
        default: break;
    }

    ctx->pc = 0x322a70u;

    // 0x322a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322a80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x322a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a84: 0x3c1001dd  lui         $s0, 0x1DD
    ctx->pc = 0x322a84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)477 << 16));
    // 0x322a88: 0x2610f040  addiu       $s0, $s0, -0xFC0
    ctx->pc = 0x322a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963264));
label_322a8c:
    // 0x322a8c: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x322a8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x322a90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x322A90u;
    {
        const bool branch_taken_0x322a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x322a90) {
            ctx->pc = 0x322AA8u;
            goto label_322aa8;
        }
    }
    ctx->pc = 0x322A98u;
    // 0x322a98: 0xc063d08  jal         func_18F420
    ctx->pc = 0x322A98u;
    SET_GPR_U32(ctx, 31, 0x322AA0u);
    ctx->pc = 0x322A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A98u;
    // 0x322a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x322A98u, 0x322AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322AA0u;
label_322aa0:
    // 0x322aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x322AA0u;
    {
        const bool branch_taken_0x322aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322aa0) {
            ctx->pc = 0x322AB0u;
            goto label_322ab0;
        }
    }
    ctx->pc = 0x322AA8u;
label_322aa8:
    // 0x322aa8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x322aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x322aac: 0x0  nop
    ctx->pc = 0x322aacu;
    // NOP
label_322ab0:
    // 0x322ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x322ab4: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x322ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x322ab8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x322AB8u;
    {
        const bool branch_taken_0x322ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AB8u;
        // 0x322abc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ab8) {
            ctx->pc = 0x322A8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322a8c;
        }
    }
    ctx->pc = 0x322AC0u;
    // 0x322ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322acc: 0x3e00008  jr          $ra
    ctx->pc = 0x322ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322ACCu;
        // 0x322ad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322AD4u;
    // 0x322ad4: 0x0  nop
    ctx->pc = 0x322ad4u;
    // NOP
    // 0x322ad8: 0x0  nop
    ctx->pc = 0x322ad8u;
    // NOP
    // 0x322adc: 0x0  nop
    ctx->pc = 0x322adcu;
    // NOP
}
