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

// Function: sub_0020E310
// Address: 0x20e310 - 0x20e370
void sub_0020E310_0x20e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E310_0x20e310");
#endif

    switch (ctx->pc) {
        case 0x20e338u: goto label_20e338;
        case 0x20e340u: goto label_20e340;
        default: break;
    }

    ctx->pc = 0x20e310u;

    // 0x20e310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e314: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20e31c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e328: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x20e328u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20e32c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20E32Cu;
    {
        const bool branch_taken_0x20e32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E32Cu;
        // 0x20e330: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e32c) {
            ctx->pc = 0x20E358u;
            goto label_20e358;
        }
    }
    ctx->pc = 0x20E334u;
    // 0x20e334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e338:
    // 0x20e338: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x20E338u;
    SET_GPR_U32(ctx, 31, 0x20E340u);
    ctx->pc = 0x20E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E338u;
    // 0x20e33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x20E338u, 0x20E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E340u;
label_20e340:
    // 0x20e340: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20e344: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e348: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x20e348u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20e34c: 0x5483fffa  bnel        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20E34Cu;
    {
        const bool branch_taken_0x20e34c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e34c) {
            ctx->pc = 0x20E350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E34Cu;
            // 0x20e350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e338;
        }
    }
    ctx->pc = 0x20E354u;
    // 0x20e354: 0x0  nop
    ctx->pc = 0x20e354u;
    // NOP
label_20e358:
    // 0x20e358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e35c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e364: 0x3e00008  jr          $ra
    ctx->pc = 0x20E364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E364u;
        // 0x20e368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E36Cu;
    // 0x20e36c: 0x0  nop
    ctx->pc = 0x20e36cu;
    // NOP
    if (ctx->pc == 0x20e36cu) { ctx->pc = 0x20e370u; }
}
