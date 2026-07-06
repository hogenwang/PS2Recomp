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

// Function: sub_003236D0
// Address: 0x3236d0 - 0x323780
void sub_003236D0_0x3236d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003236D0_0x3236d0");
#endif

    switch (ctx->pc) {
        case 0x3236ecu: goto label_3236ec;
        case 0x323710u: goto label_323710;
        case 0x32372cu: goto label_32372c;
        case 0x323750u: goto label_323750;
        default: break;
    }

    ctx->pc = 0x3236d0u;

    // 0x3236d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3236d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3236d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3236d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3236d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3236d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3236dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3236dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3236e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3236e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236e4: 0x3c1001dd  lui         $s0, 0x1DD
    ctx->pc = 0x3236e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)477 << 16));
    // 0x3236e8: 0x26109410  addiu       $s0, $s0, -0x6BF0
    ctx->pc = 0x3236e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939664));
label_3236ec:
    // 0x3236ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3236ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3236f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3236F0u;
    {
        const bool branch_taken_0x3236f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3236f0) {
            ctx->pc = 0x323708u;
            goto label_323708;
        }
    }
    ctx->pc = 0x3236F8u;
    // 0x3236f8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3236f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3236fc: 0x946200d4  lhu         $v0, 0xD4($v1)
    ctx->pc = 0x3236fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x323700: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x323700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x323704: 0xa46200d4  sh          $v0, 0xD4($v1)
    ctx->pc = 0x323704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 212), (uint16_t)GPR_U32(ctx, 2));
label_323708:
    // 0x323708: 0xc0c8ad0  jal         func_322B40
    ctx->pc = 0x323708u;
    SET_GPR_U32(ctx, 31, 0x323710u);
    ctx->pc = 0x32370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323708u;
    // 0x32370c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B40u, 0x323708u, 0x323710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323710u;
label_323710:
    // 0x323710: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x323710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x323714: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x323714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x323718: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x323718u;
    {
        const bool branch_taken_0x323718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323718u;
        // 0x32371c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323718) {
            ctx->pc = 0x3236ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3236ec;
        }
    }
    ctx->pc = 0x323720u;
    // 0x323720: 0x3c1101dd  lui         $s1, 0x1DD
    ctx->pc = 0x323720u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)477 << 16));
    // 0x323724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x323724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323728: 0x2631c410  addiu       $s1, $s1, -0x3BF0
    ctx->pc = 0x323728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951952));
label_32372c:
    // 0x32372c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323730u;
    {
        const bool branch_taken_0x323730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323730) {
            ctx->pc = 0x323748u;
            goto label_323748;
        }
    }
    ctx->pc = 0x323738u;
    // 0x323738: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x323738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32373c: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x32373cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x323740: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x323740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x323744: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x323744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
label_323748:
    // 0x323748: 0xc0c8ac0  jal         func_322B00
    ctx->pc = 0x323748u;
    SET_GPR_U32(ctx, 31, 0x323750u);
    ctx->pc = 0x32374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323748u;
    // 0x32374c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B00u, 0x323748u, 0x323750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323750u;
label_323750:
    // 0x323750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x323750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x323754: 0x2a030100  slti        $v1, $s0, 0x100
    ctx->pc = 0x323754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x323758: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x323758u;
    {
        const bool branch_taken_0x323758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323758u;
        // 0x32375c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323758) {
            ctx->pc = 0x32372Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32372c;
        }
    }
    ctx->pc = 0x323760u;
    // 0x323760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x323760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32376c: 0x3e00008  jr          $ra
    ctx->pc = 0x32376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32376Cu;
        // 0x323770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323774u;
    // 0x323774: 0x0  nop
    ctx->pc = 0x323774u;
    // NOP
    // 0x323778: 0x0  nop
    ctx->pc = 0x323778u;
    // NOP
    // 0x32377c: 0x0  nop
    ctx->pc = 0x32377cu;
    // NOP
}
