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

// Function: sub_002C6748
// Address: 0x2c6748 - 0x2c6790
void sub_002C6748_0x2c6748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6748_0x2c6748");
#endif

    switch (ctx->pc) {
        case 0x2c6748u: goto label_2c6748;
        case 0x2c674cu: goto label_2c674c;
        case 0x2c6750u: goto label_2c6750;
        case 0x2c6754u: goto label_2c6754;
        case 0x2c6758u: goto label_2c6758;
        case 0x2c675cu: goto label_2c675c;
        case 0x2c6760u: goto label_2c6760;
        case 0x2c6764u: goto label_2c6764;
        case 0x2c6768u: goto label_2c6768;
        case 0x2c676cu: goto label_2c676c;
        case 0x2c6770u: goto label_2c6770;
        case 0x2c6774u: goto label_2c6774;
        case 0x2c6778u: goto label_2c6778;
        case 0x2c677cu: goto label_2c677c;
        case 0x2c6780u: goto label_2c6780;
        case 0x2c6784u: goto label_2c6784;
        case 0x2c6788u: goto label_2c6788;
        case 0x2c678cu: goto label_2c678c;
        default: break;
    }

    ctx->pc = 0x2c6748u;

label_2c6748:
    // 0x2c6748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c674c:
    // 0x2c674c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2c674cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6750:
    // 0x2c6750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c6754:
    // 0x2c6754: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2c6758:
    // 0x2c6758: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c6758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c675c:
    // 0x2c675c: 0x40f809  jalr        $v0
label_2c6760:
    if (ctx->pc == 0x2C6760u) {
        ctx->pc = 0x2C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C675Cu;
        // 0x2c6760: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6764u;
        goto label_2c6764;
    }
    ctx->pc = 0x2C675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6764u);
        ctx->pc = 0x2C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C675Cu;
        // 0x2c6760: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C675Cu, 0x2C6764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6764u;
label_2c6764:
    // 0x2c6764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6768:
    // 0x2c6768: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c676c:
    if (ctx->pc == 0x2C676Cu) {
        ctx->pc = 0x2C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6768u;
        // 0x2c676c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6770u;
        goto label_2c6770;
    }
    ctx->pc = 0x2C6768u;
    {
        const bool branch_taken_0x2c6768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6768u;
        // 0x2c676c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6768) {
            ctx->pc = 0x2C6780u;
            goto label_2c6780;
        }
    }
    ctx->pc = 0x2C6770u;
label_2c6770:
    // 0x2c6770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6774:
    // 0x2c6774: 0x80b21d8  j           func_2C8760
label_2c6778:
    if (ctx->pc == 0x2C6778u) {
        ctx->pc = 0x2C6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6774u;
        // 0x2c6778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C677Cu;
        goto label_2c677c;
    }
    ctx->pc = 0x2C6774u;
    ctx->pc = 0x2C6778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6774u;
    // 0x2c6778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C677Cu;
label_2c677c:
    // 0x2c677c: 0x0  nop
    ctx->pc = 0x2c677cu;
    // NOP
label_2c6780:
    // 0x2c6780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6784:
    // 0x2c6784: 0x3e00008  jr          $ra
label_2c6788:
    if (ctx->pc == 0x2C6788u) {
        ctx->pc = 0x2C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6784u;
        // 0x2c6788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C678Cu;
        goto label_2c678c;
    }
    ctx->pc = 0x2C6784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6784u;
        // 0x2c6788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C678Cu;
label_2c678c:
    // 0x2c678c: 0x0  nop
    ctx->pc = 0x2c678cu;
    // NOP
    if (ctx->pc == 0x2c678cu) { ctx->pc = 0x2c6790u; }
}
