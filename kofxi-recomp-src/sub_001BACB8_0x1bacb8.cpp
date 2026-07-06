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

// Function: sub_001BACB8
// Address: 0x1bacb8 - 0x1bad30
void sub_001BACB8_0x1bacb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BACB8_0x1bacb8");
#endif

    switch (ctx->pc) {
        case 0x1bad0cu: goto label_1bad0c;
        case 0x1bad14u: goto label_1bad14;
        case 0x1bad1cu: goto label_1bad1c;
        default: break;
    }

    ctx->pc = 0x1bacb8u;

    // 0x1bacb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bacb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bacbc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BACBCu;
    {
        const bool branch_taken_0x1bacbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACBCu;
        // 0x1bacc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacbc) {
            ctx->pc = 0x1BACD8u;
            goto label_1bacd8;
        }
    }
    ctx->pc = 0x1BACC4u;
    // 0x1bacc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bacc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bacc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baccc: 0x24848570  addiu       $a0, $a0, -0x7A90
    ctx->pc = 0x1bacccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935920));
    // 0x1bacd0: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BACD0u;
    ctx->pc = 0x1BACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACD0u;
    // 0x1bacd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BACD8u;
label_1bacd8:
    // 0x1bacd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bacd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bacdc: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x1bacdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bace0: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x1bace0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bace4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1bace4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1bace8: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x1bace8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bacec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACECu;
        // 0x1bacf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BACF4u;
    // 0x1bacf4: 0x0  nop
    ctx->pc = 0x1bacf4u;
    // NOP
    // 0x1bacf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bacf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bacfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bacfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bad00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bad00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bad04: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAD04u;
    SET_GPR_U32(ctx, 31, 0x1BAD0Cu);
    ctx->pc = 0x1BAD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD04u;
    // 0x1bad08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BAD04u, 0x1BAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD0Cu;
label_1bad0c:
    // 0x1bad0c: 0xc06eb4c  jal         func_1BAD30
    ctx->pc = 0x1BAD0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD14u);
    ctx->pc = 0x1BAD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD0Cu;
    // 0x1bad10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD30u, 0x1BAD0Cu, 0x1BAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD14u;
label_1bad14:
    // 0x1bad14: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BAD14u;
    SET_GPR_U32(ctx, 31, 0x1BAD1Cu);
    ctx->pc = 0x1BAD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD14u;
    // 0x1bad18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BAD14u, 0x1BAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD1Cu;
label_1bad1c:
    // 0x1bad1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bad1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bad20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bad20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bad24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bad28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD28u;
        // 0x1bad2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAD30u;
}
