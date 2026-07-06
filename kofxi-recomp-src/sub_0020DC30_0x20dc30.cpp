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

// Function: sub_0020DC30
// Address: 0x20dc30 - 0x20dcf0
void sub_0020DC30_0x20dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DC30_0x20dc30");
#endif

    switch (ctx->pc) {
        case 0x20dc60u: goto label_20dc60;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dcacu: goto label_20dcac;
        default: break;
    }

    ctx->pc = 0x20dc30u;

    // 0x20dc30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20dc34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20dc38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20dc3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20dc40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20dc40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20dc48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20dc48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20dc50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20dc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20dc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc58: 0xc0828d8  jal         func_20A360
    ctx->pc = 0x20DC58u;
    SET_GPR_U32(ctx, 31, 0x20DC60u);
    ctx->pc = 0x20DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC58u;
    // 0x20dc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A360u, 0x20DC58u, 0x20DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC60u;
label_20dc60:
    // 0x20dc60: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x20dc60u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20dc64: 0x6630003  bgezl       $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DC64u;
    {
        const bool branch_taken_0x20dc64 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x20dc64) {
            ctx->pc = 0x20DC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DC64u;
            // 0x20dc68: 0x131940  sll         $v1, $s3, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DC74u;
            goto label_20dc74;
        }
    }
    ctx->pc = 0x20DC6Cu;
    // 0x20dc6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20dc6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc70: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x20dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_20dc74:
    // 0x20dc74: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20dc74u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20dc78: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x20dc78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20dc7c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20dc80: 0x11230011  beq         $t1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DC80u;
    {
        const bool branch_taken_0x20dc80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20dc80) {
            ctx->pc = 0x20DCC8u;
            goto label_20dcc8;
        }
    }
    ctx->pc = 0x20DC88u;
label_20dc88:
    // 0x20dc88: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20dc8c: 0x11230008  beq         $t1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DC8Cu;
    {
        const bool branch_taken_0x20dc8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20dc8c) {
            ctx->pc = 0x20DCB0u;
            goto label_20dcb0;
        }
    }
    ctx->pc = 0x20DC94u;
    // 0x20dc94: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20dc98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20dc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dca0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20dca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dca4: 0xc08369c  jal         func_20DA70
    ctx->pc = 0x20DCA4u;
    SET_GPR_U32(ctx, 31, 0x20DCACu);
    ctx->pc = 0x20DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCA4u;
    // 0x20dca8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA70u, 0x20DCA4u, 0x20DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCACu;
label_20dcac:
    // 0x20dcac: 0x0  nop
    ctx->pc = 0x20dcacu;
    // NOP
label_20dcb0:
    // 0x20dcb0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20dcb4: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20dcb4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20dcb8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20dcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20dcbc: 0x1523fff2  bne         $t1, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x20DCBCu;
    {
        const bool branch_taken_0x20dcbc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCBCu;
        // 0x20dcc0: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcbc) {
            ctx->pc = 0x20DC88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20dc88;
        }
    }
    ctx->pc = 0x20DCC4u;
    // 0x20dcc4: 0x0  nop
    ctx->pc = 0x20dcc4u;
    // NOP
label_20dcc8:
    // 0x20dcc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20dcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20dccc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20dcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dcd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20dcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dcd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dcd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dcd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCDCu;
        // 0x20dce0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DCE4u;
    // 0x20dce4: 0x0  nop
    ctx->pc = 0x20dce4u;
    // NOP
    // 0x20dce8: 0x0  nop
    ctx->pc = 0x20dce8u;
    // NOP
    // 0x20dcec: 0x0  nop
    ctx->pc = 0x20dcecu;
    // NOP
    if (ctx->pc == 0x20dcecu) { ctx->pc = 0x20dcf0u; }
}
