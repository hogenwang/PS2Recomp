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

// Function: sub_002C6700
// Address: 0x2c6700 - 0x2c6748
void sub_002C6700_0x2c6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6700_0x2c6700");
#endif

    switch (ctx->pc) {
        case 0x2c6700u: goto label_2c6700;
        case 0x2c6704u: goto label_2c6704;
        case 0x2c6708u: goto label_2c6708;
        case 0x2c670cu: goto label_2c670c;
        case 0x2c6710u: goto label_2c6710;
        case 0x2c6714u: goto label_2c6714;
        case 0x2c6718u: goto label_2c6718;
        case 0x2c671cu: goto label_2c671c;
        case 0x2c6720u: goto label_2c6720;
        case 0x2c6724u: goto label_2c6724;
        case 0x2c6728u: goto label_2c6728;
        case 0x2c672cu: goto label_2c672c;
        case 0x2c6730u: goto label_2c6730;
        case 0x2c6734u: goto label_2c6734;
        case 0x2c6738u: goto label_2c6738;
        case 0x2c673cu: goto label_2c673c;
        case 0x2c6740u: goto label_2c6740;
        case 0x2c6744u: goto label_2c6744;
        default: break;
    }

    ctx->pc = 0x2c6700u;

label_2c6700:
    // 0x2c6700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c6704:
    // 0x2c6704: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2c6704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2c6708:
    // 0x2c6708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c670c:
    // 0x2c670c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2c670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2c6710:
    // 0x2c6710: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6714:
    // 0x2c6714: 0x40f809  jalr        $v0
label_2c6718:
    if (ctx->pc == 0x2C6718u) {
        ctx->pc = 0x2C6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6714u;
        // 0x2c6718: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C671Cu;
        goto label_2c671c;
    }
    ctx->pc = 0x2C6714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C671Cu);
        ctx->pc = 0x2C6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6714u;
        // 0x2c6718: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6714u, 0x2C671Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C671Cu;
label_2c671c:
    // 0x2c671c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c671cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6720:
    // 0x2c6720: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c6724:
    if (ctx->pc == 0x2C6724u) {
        ctx->pc = 0x2C6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6720u;
        // 0x2c6724: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6728u;
        goto label_2c6728;
    }
    ctx->pc = 0x2C6720u;
    {
        const bool branch_taken_0x2c6720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6720u;
        // 0x2c6724: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6720) {
            ctx->pc = 0x2C6738u;
            goto label_2c6738;
        }
    }
    ctx->pc = 0x2C6728u;
label_2c6728:
    // 0x2c6728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c672c:
    // 0x2c672c: 0x80b21d8  j           func_2C8760
label_2c6730:
    if (ctx->pc == 0x2C6730u) {
        ctx->pc = 0x2C6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C672Cu;
        // 0x2c6730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6734u;
        goto label_2c6734;
    }
    ctx->pc = 0x2C672Cu;
    ctx->pc = 0x2C6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C672Cu;
    // 0x2c6730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6734u;
label_2c6734:
    // 0x2c6734: 0x0  nop
    ctx->pc = 0x2c6734u;
    // NOP
label_2c6738:
    // 0x2c6738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c673c:
    // 0x2c673c: 0x3e00008  jr          $ra
label_2c6740:
    if (ctx->pc == 0x2C6740u) {
        ctx->pc = 0x2C6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C673Cu;
        // 0x2c6740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6744u;
        goto label_2c6744;
    }
    ctx->pc = 0x2C673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C673Cu;
        // 0x2c6740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6744u;
label_2c6744:
    // 0x2c6744: 0x0  nop
    ctx->pc = 0x2c6744u;
    // NOP
}
