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

// Function: kofxiWorkerThread0Entry
// Address: 0x1b2be8 - 0x1b2c40
void kofxiWorkerThread0Entry_0x1b2be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWorkerThread0Entry_0x1b2be8");
#endif

    switch (ctx->pc) {
        case 0x1b2c10u: goto label_1b2c10;
        case 0x1b2c18u: goto label_1b2c18;
        default: break;
    }

    ctx->pc = 0x1b2be8u;

    // 0x1b2be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2bec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2bf4: 0x244230a8  addiu       $v0, $v0, 0x30A8
    ctx->pc = 0x1b2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12456));
    // 0x1b2bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2bfc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1b2bfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2c00: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2C00u;
    {
        const bool branch_taken_0x1b2c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c00) {
            ctx->pc = 0x1B2C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C00u;
            // 0x1b2c04: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C24u;
            goto label_1b2c24;
        }
    }
    ctx->pc = 0x1B2C08u;
    // 0x1b2c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c0c: 0x0  nop
    ctx->pc = 0x1b2c0cu;
    // NOP
label_1b2c10:
    // 0x1b2c10: 0xc06caf4  jal         func_1B2BD0
    ctx->pc = 0x1B2C10u;
    SET_GPR_U32(ctx, 31, 0x1B2C18u);
    ctx->pc = 0x1B2BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2BD0u, 0x1B2C10u, 0x1B2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C18u;
label_1b2c18:
    // 0x1b2c18: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b2c18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2c1c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B2C1Cu;
    {
        const bool branch_taken_0x1b2c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C1Cu;
        // 0x1b2c20: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c1c) {
            ctx->pc = 0x1B2C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2c10;
        }
    }
    ctx->pc = 0x1B2C24u;
label_1b2c24:
    // 0x1b2c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c30: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x1b2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x1b2c34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2c34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2c38: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2C38u;
    ctx->pc = 0x1B2C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C38u;
    // 0x1b2c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2C40u;
}
