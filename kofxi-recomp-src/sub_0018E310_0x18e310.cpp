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

// Function: sub_0018E310
// Address: 0x18e310 - 0x18e360
void sub_0018E310_0x18e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E310_0x18e310");
#endif

    switch (ctx->pc) {
        case 0x18e328u: goto label_18e328;
        default: break;
    }

    ctx->pc = 0x18e310u;

    // 0x18e310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e314: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18e314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18e318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e31c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e320: 0xc0635d0  jal         func_18D740
    ctx->pc = 0x18E320u;
    SET_GPR_U32(ctx, 31, 0x18E328u);
    ctx->pc = 0x18E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E320u;
    // 0x18e324: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D740u, 0x18E320u, 0x18E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E328u;
label_18e328:
    // 0x18e328: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E328u;
    {
        const bool branch_taken_0x18e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e328) {
            ctx->pc = 0x18E32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E328u;
            // 0x18e32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E344u;
            goto label_18e344;
        }
    }
    ctx->pc = 0x18E330u;
    // 0x18e330: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18e330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18e334: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e338: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e33c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18e33cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e344:
    // 0x18e344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e34c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E34Cu;
        // 0x18e350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E354u;
    // 0x18e354: 0x0  nop
    ctx->pc = 0x18e354u;
    // NOP
    // 0x18e358: 0x0  nop
    ctx->pc = 0x18e358u;
    // NOP
    // 0x18e35c: 0x0  nop
    ctx->pc = 0x18e35cu;
    // NOP
}
