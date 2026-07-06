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

// Function: sub_001DBCE0
// Address: 0x1dbce0 - 0x1dbd30
void sub_001DBCE0_0x1dbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBCE0_0x1dbce0");
#endif

    switch (ctx->pc) {
        case 0x1dbcf4u: goto label_1dbcf4;
        case 0x1dbd10u: goto label_1dbd10;
        default: break;
    }

    ctx->pc = 0x1dbce0u;

    // 0x1dbce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbcec: 0xc076f4c  jal         func_1DBD30
    ctx->pc = 0x1DBCECu;
    SET_GPR_U32(ctx, 31, 0x1DBCF4u);
    ctx->pc = 0x1DBCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCECu;
    // 0x1dbcf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD30u, 0x1DBCECu, 0x1DBCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCF4u;
label_1dbcf4:
    // 0x1dbcf4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1dbcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1dbcf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcfc: 0x24a5e6d8  addiu       $a1, $a1, -0x1928
    ctx->pc = 0x1dbcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960856));
    // 0x1dbd00: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBD00u;
    {
        const bool branch_taken_0x1dbd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD00u;
        // 0x1dbd04: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd00) {
            ctx->pc = 0x1DBD1Cu;
            goto label_1dbd1c;
        }
    }
    ctx->pc = 0x1DBD08u;
    // 0x1dbd08: 0xc075882  jal         func_1D6208
    ctx->pc = 0x1DBD08u;
    SET_GPR_U32(ctx, 31, 0x1DBD10u);
    ctx->pc = 0x1D6208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6208u, 0x1DBD08u, 0x1DBD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD10u;
label_1dbd10:
    // 0x1dbd10: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dbd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dbd14: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1dbd18: 0xac62e6cc  sw          $v0, -0x1934($v1)
    ctx->pc = 0x1dbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960844), GPR_U32(ctx, 2));
label_1dbd1c:
    // 0x1dbd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd24: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD24u;
        // 0x1dbd28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD2Cu;
    // 0x1dbd2c: 0x0  nop
    ctx->pc = 0x1dbd2cu;
    // NOP
}
