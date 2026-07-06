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

// Function: sub_00278EC8
// Address: 0x278ec8 - 0x278f08
void sub_00278EC8_0x278ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278EC8_0x278ec8");
#endif

    switch (ctx->pc) {
        case 0x278ee0u: goto label_278ee0;
        default: break;
    }

    ctx->pc = 0x278ec8u;

    // 0x278ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278ed0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x278ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ed4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x278ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x278ed8: 0xc09d6ce  jal         func_275B38
    ctx->pc = 0x278ED8u;
    SET_GPR_U32(ctx, 31, 0x278EE0u);
    ctx->pc = 0x278EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278ED8u;
    // 0x278edc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B38u, 0x278ED8u, 0x278EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EE0u;
label_278ee0:
    // 0x278ee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ee4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278EE4u;
    {
        const bool branch_taken_0x278ee4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x278EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EE4u;
        // 0x278ee8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ee4) {
            ctx->pc = 0x278EF8u;
            goto label_278ef8;
        }
    }
    ctx->pc = 0x278EECu;
    // 0x278eec: 0x2041826  xor         $v1, $s0, $a0
    ctx->pc = 0x278eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    // 0x278ef0: 0x2402ff96  addiu       $v0, $zero, -0x6A
    ctx->pc = 0x278ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x278ef4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x278ef4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_278ef8:
    // 0x278ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278efc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x278efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278f00: 0x3e00008  jr          $ra
    ctx->pc = 0x278F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F00u;
        // 0x278f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278F08u;
}
