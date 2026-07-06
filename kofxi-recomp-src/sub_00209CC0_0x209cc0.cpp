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

// Function: sub_00209CC0
// Address: 0x209cc0 - 0x209d70
void sub_00209CC0_0x209cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209CC0_0x209cc0");
#endif

    switch (ctx->pc) {
        case 0x209ce0u: goto label_209ce0;
        case 0x209cf0u: goto label_209cf0;
        case 0x209d00u: goto label_209d00;
        default: break;
    }

    ctx->pc = 0x209cc0u;

    // 0x209cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x209cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cd8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x209CD8u;
    SET_GPR_U32(ctx, 31, 0x209CE0u);
    ctx->pc = 0x209CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CD8u;
    // 0x209cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x209CD8u, 0x209CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CE0u;
label_209ce0:
    // 0x209ce0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x209ce0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209ce4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x209CE4u;
    {
        const bool branch_taken_0x209ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209ce4) {
            ctx->pc = 0x209D50u;
            goto label_209d50;
        }
    }
    ctx->pc = 0x209CECu;
    // 0x209cec: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x209cecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_209cf0:
    // 0x209cf0: 0x54650014  bnel        $v1, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x209CF0u;
    {
        const bool branch_taken_0x209cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x209cf0) {
            ctx->pc = 0x209CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209CF0u;
            // 0x209cf4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209D44u;
            goto label_209d44;
        }
    }
    ctx->pc = 0x209CF8u;
    // 0x209cf8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209CF8u;
    {
        const bool branch_taken_0x209cf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x209CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CF8u;
        // 0x209cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cf8) {
            ctx->pc = 0x209D30u;
            goto label_209d30;
        }
    }
    ctx->pc = 0x209D00u;
label_209d00:
    // 0x209d00: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x209d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x209d04: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x209d04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209d08: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x209d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x209d0c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x209d0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209d10: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x209D10u;
    {
        const bool branch_taken_0x209d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x209d10) {
            ctx->pc = 0x209D30u;
            goto label_209d30;
        }
    }
    ctx->pc = 0x209D18u;
    // 0x209d18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209D18u;
    {
        const bool branch_taken_0x209d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209d18) {
            ctx->pc = 0x209D30u;
            goto label_209d30;
        }
    }
    ctx->pc = 0x209D20u;
    // 0x209d20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x209d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x209d24: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x209d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x209d28: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x209D28u;
    {
        const bool branch_taken_0x209d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209d28) {
            ctx->pc = 0x209D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209d00;
        }
    }
    ctx->pc = 0x209D30u;
label_209d30:
    // 0x209d30: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209D30u;
    {
        const bool branch_taken_0x209d30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x209d30) {
            ctx->pc = 0x209D40u;
            goto label_209d40;
        }
    }
    ctx->pc = 0x209D38u;
    // 0x209d38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x209D38u;
    {
        const bool branch_taken_0x209d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D38u;
        // 0x209d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d38) {
            ctx->pc = 0x209D54u;
            goto label_209d54;
        }
    }
    ctx->pc = 0x209D40u;
label_209d40:
    // 0x209d40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209d44:
    // 0x209d44: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209d48: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x209D48u;
    {
        const bool branch_taken_0x209d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209d48) {
            ctx->pc = 0x209CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209cf0;
        }
    }
    ctx->pc = 0x209D50u;
label_209d50:
    // 0x209d50: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x209d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_209d54:
    // 0x209d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209d60: 0x3e00008  jr          $ra
    ctx->pc = 0x209D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D60u;
        // 0x209d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209D68u;
    // 0x209d68: 0x0  nop
    ctx->pc = 0x209d68u;
    // NOP
    // 0x209d6c: 0x0  nop
    ctx->pc = 0x209d6cu;
    // NOP
    if (ctx->pc == 0x209d6cu) { ctx->pc = 0x209d70u; }
}
