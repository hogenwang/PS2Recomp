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

// Function: sub_002818E8
// Address: 0x2818e8 - 0x281970
void sub_002818E8_0x2818e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002818E8_0x2818e8");
#endif

    switch (ctx->pc) {
        case 0x281900u: goto label_281900;
        case 0x281948u: goto label_281948;
        default: break;
    }

    ctx->pc = 0x2818e8u;

    // 0x2818e8: 0x28c2001f  slti        $v0, $a2, 0x1F
    ctx->pc = 0x2818e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2818ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2818ECu;
    {
        const bool branch_taken_0x2818ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2818F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818ECu;
        // 0x2818f0: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818ec) {
            ctx->pc = 0x281924u;
            goto label_281924;
        }
    }
    ctx->pc = 0x2818F4u;
    // 0x2818f4: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2818F4u;
    {
        const bool branch_taken_0x2818f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2818F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818F4u;
        // 0x2818f8: 0x28a80080  slti        $t0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818f4) {
            ctx->pc = 0x281924u;
            goto label_281924;
        }
    }
    ctx->pc = 0x2818FCu;
    // 0x2818fc: 0x0  nop
    ctx->pc = 0x2818fcu;
    // NOP
label_281900:
    // 0x281900: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x281900u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x281904: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x281904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x281908: 0x0  nop
    ctx->pc = 0x281908u;
    // NOP
    // 0x28190c: 0x0  nop
    ctx->pc = 0x28190cu;
    // NOP
    // 0x281910: 0x0  nop
    ctx->pc = 0x281910u;
    // NOP
    // 0x281914: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x281914u;
    {
        const bool branch_taken_0x281914 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x281914) {
            ctx->pc = 0x281900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281900;
        }
    }
    ctx->pc = 0x28191Cu;
    // 0x28191c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28191Cu;
    {
        const bool branch_taken_0x28191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28191c) {
            ctx->pc = 0x281928u;
            goto label_281928;
        }
    }
    ctx->pc = 0x281924u;
label_281924:
    // 0x281924: 0x28a80080  slti        $t0, $a1, 0x80
    ctx->pc = 0x281924u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
label_281928:
    // 0x281928: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281928u;
    {
        const bool branch_taken_0x281928 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281928u;
        // 0x28192c: 0x38830002  xori        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281928) {
            ctx->pc = 0x281938u;
            goto label_281938;
        }
    }
    ctx->pc = 0x281930u;
    // 0x281930: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x281930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x281934: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x281934u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_281938:
    // 0x281938: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x281938u;
    {
        const bool branch_taken_0x281938 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x28193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281938u;
        // 0x28193c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281938) {
            ctx->pc = 0x281964u;
            goto label_281964;
        }
    }
    ctx->pc = 0x281940u;
    // 0x281940: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x281940u;
    {
        const bool branch_taken_0x281940 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x281940) {
            ctx->pc = 0x281964u;
            goto label_281964;
        }
    }
    ctx->pc = 0x281948u;
label_281948:
    // 0x281948: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x281948u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x28194c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28194cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x281950: 0x0  nop
    ctx->pc = 0x281950u;
    // NOP
    // 0x281954: 0x0  nop
    ctx->pc = 0x281954u;
    // NOP
    // 0x281958: 0x0  nop
    ctx->pc = 0x281958u;
    // NOP
    // 0x28195c: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28195Cu;
    {
        const bool branch_taken_0x28195c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x28195c) {
            ctx->pc = 0x281948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281948;
        }
    }
    ctx->pc = 0x281964u;
label_281964:
    // 0x281964: 0x3e00008  jr          $ra
    ctx->pc = 0x281964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281964u;
        // 0x281968: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28196Cu;
    // 0x28196c: 0x0  nop
    ctx->pc = 0x28196cu;
    // NOP
}
