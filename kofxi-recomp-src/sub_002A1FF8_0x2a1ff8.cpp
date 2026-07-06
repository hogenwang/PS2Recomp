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

// Function: sub_002A1FF8
// Address: 0x2a1ff8 - 0x2a2048
void sub_002A1FF8_0x2a1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1FF8_0x2a1ff8");
#endif

    switch (ctx->pc) {
        case 0x2a200cu: goto label_2a200c;
        case 0x2a202cu: goto label_2a202c;
        default: break;
    }

    ctx->pc = 0x2a1ff8u;

    // 0x2a1ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a1ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2004: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A2004u;
    SET_GPR_U32(ctx, 31, 0x2A200Cu);
    ctx->pc = 0x2A2008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2004u;
    // 0x2a2008: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2A2004u, 0x2A200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A200Cu;
label_2a200c:
    // 0x2a200c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2010: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2010u;
    {
        const bool branch_taken_0x2a2010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2010u;
        // 0x2a2014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2010) {
            ctx->pc = 0x2A2020u;
            goto label_2a2020;
        }
    }
    ctx->pc = 0x2A2018u;
    // 0x2a2018: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2018u;
    {
        const bool branch_taken_0x2a2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2018u;
        // 0x2a201c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2018) {
            ctx->pc = 0x2A2038u;
            goto label_2a2038;
        }
    }
    ctx->pc = 0x2A2020u;
label_2a2020:
    // 0x2a2020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2024: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A2024u;
    SET_GPR_U32(ctx, 31, 0x2A202Cu);
    ctx->pc = 0x2A2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2024u;
    // 0x2a2028: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A2024u, 0x2A202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A202Cu;
label_2a202c:
    // 0x2a202c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2034: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a2034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2a2038:
    // 0x2a2038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a203c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a203cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2040: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2040u;
        // 0x2a2044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2048u;
}
