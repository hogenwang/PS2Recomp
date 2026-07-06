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

// Function: sub_002E6900
// Address: 0x2e6900 - 0x2e6960
void sub_002E6900_0x2e6900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6900_0x2e6900");
#endif

    switch (ctx->pc) {
        case 0x2e6920u: goto label_2e6920;
        case 0x2e694cu: goto label_2e694c;
        default: break;
    }

    ctx->pc = 0x2e6900u;

    // 0x2e6900: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e6900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e6904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6908: 0x8c62ea08  lw          $v0, -0x15F8($v1)
    ctx->pc = 0x2e6908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961672)));
    // 0x2e690c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E690Cu;
    {
        const bool branch_taken_0x2e690c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E690Cu;
        // 0x2e6910: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e690c) {
            ctx->pc = 0x2E6920u;
            goto label_2e6920;
        }
    }
    ctx->pc = 0x2E6914u;
    // 0x2e6914: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6918u;
    {
        const bool branch_taken_0x2e6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6918u;
        // 0x2e691c: 0xac62ea08  sw          $v0, -0x15F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6918) {
            ctx->pc = 0x2E6944u;
            goto label_2e6944;
        }
    }
    ctx->pc = 0x2E6920u;
label_2e6920:
    // 0x2e6920: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e6920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6924: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e6924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6928: 0x0  nop
    ctx->pc = 0x2e6928u;
    // NOP
    // 0x2e692c: 0x0  nop
    ctx->pc = 0x2e692cu;
    // NOP
    // 0x2e6930: 0x0  nop
    ctx->pc = 0x2e6930u;
    // NOP
    // 0x2e6934: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E6934u;
    {
        const bool branch_taken_0x2e6934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e6934) {
            ctx->pc = 0x2E6920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6920;
        }
    }
    ctx->pc = 0x2E693Cu;
    // 0x2e693c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6940: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e6940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e6944:
    // 0x2e6944: 0xc098560  jal         func_261580
    ctx->pc = 0x2E6944u;
    SET_GPR_U32(ctx, 31, 0x2E694Cu);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E6944u, 0x2E694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E694Cu;
label_2e694c:
    // 0x2e694c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e6950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6954: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6954u;
        // 0x2e6958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E695Cu;
    // 0x2e695c: 0x0  nop
    ctx->pc = 0x2e695cu;
    // NOP
}
