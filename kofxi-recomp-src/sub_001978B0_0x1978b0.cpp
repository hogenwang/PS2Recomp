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

// Function: sub_001978B0
// Address: 0x1978b0 - 0x197950
void sub_001978B0_0x1978b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001978B0_0x1978b0");
#endif

    switch (ctx->pc) {
        case 0x1978d4u: goto label_1978d4;
        case 0x1978e0u: goto label_1978e0;
        case 0x197908u: goto label_197908;
        default: break;
    }

    ctx->pc = 0x1978b0u;

    // 0x1978b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1978b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1978b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1978b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1978b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1978b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1978bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1978bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1978c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1978c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1978c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1978c8: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x1978c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x1978cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1978ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1978d0: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x1978d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
label_1978d4:
    // 0x1978d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1978d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1978d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978dc: 0x0  nop
    ctx->pc = 0x1978dcu;
    // NOP
label_1978e0:
    // 0x1978e0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1978e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1978E4u;
    {
        const bool branch_taken_0x1978e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978e4) {
            ctx->pc = 0x197908u;
            goto label_197908;
        }
    }
    ctx->pc = 0x1978ECu;
    // 0x1978ec: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1978ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1978f0: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x1978f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x1978f4: 0x30630038  andi        $v1, $v1, 0x38
    ctx->pc = 0x1978f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)56);
    // 0x1978f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1978F8u;
    {
        const bool branch_taken_0x1978f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1978f8) {
            ctx->pc = 0x197908u;
            goto label_197908;
        }
    }
    ctx->pc = 0x197900u;
    // 0x197900: 0xc065e54  jal         func_197950
    ctx->pc = 0x197900u;
    SET_GPR_U32(ctx, 31, 0x197908u);
    ctx->pc = 0x197904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197900u;
    // 0x197904: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197950u, 0x197900u, 0x197908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197908u;
label_197908:
    // 0x197908: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19790c: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x19790cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197910: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x197910u;
    {
        const bool branch_taken_0x197910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197910u;
        // 0x197914: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197910) {
            ctx->pc = 0x1978E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1978e0;
        }
    }
    ctx->pc = 0x197918u;
    // 0x197918: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x197918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19791c: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x19791cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197920: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x197920u;
    {
        const bool branch_taken_0x197920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197920u;
        // 0x197924: 0x26310248  addiu       $s1, $s1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197920) {
            ctx->pc = 0x1978D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1978d4;
        }
    }
    ctx->pc = 0x197928u;
    // 0x197928: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x197928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19792c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19792cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19793c: 0x3e00008  jr          $ra
    ctx->pc = 0x19793Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19793Cu;
        // 0x197940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19793Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197944u;
    // 0x197944: 0x0  nop
    ctx->pc = 0x197944u;
    // NOP
    // 0x197948: 0x0  nop
    ctx->pc = 0x197948u;
    // NOP
    // 0x19794c: 0x0  nop
    ctx->pc = 0x19794cu;
    // NOP
    if (ctx->pc == 0x19794cu) { ctx->pc = 0x197950u; }
}
