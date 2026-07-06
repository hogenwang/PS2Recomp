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

// Function: sub_00262AD0
// Address: 0x262ad0 - 0x262bd0
void sub_00262AD0_0x262ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262AD0_0x262ad0");
#endif

    switch (ctx->pc) {
        case 0x262b18u: goto label_262b18;
        case 0x262b20u: goto label_262b20;
        case 0x262b28u: goto label_262b28;
        case 0x262b4cu: goto label_262b4c;
        case 0x262b70u: goto label_262b70;
        case 0x262b80u: goto label_262b80;
        case 0x262b90u: goto label_262b90;
        case 0x262ba0u: goto label_262ba0;
        default: break;
    }

    ctx->pc = 0x262ad0u;

    // 0x262ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x262ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x262ad4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x262ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x262ad8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x262ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262adc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x262adcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ae0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x262ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x262ae4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x262ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ae8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x262ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x262aec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x262aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262af0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x262af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262af4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x262af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262af8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262afc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x262afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262b04: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x262b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x262b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x262b0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x262b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b10: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x262B10u;
    SET_GPR_U32(ctx, 31, 0x262B18u);
    ctx->pc = 0x262B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B10u;
    // 0x262b14: 0xae250010  sw          $a1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x262B10u, 0x262B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B18u;
label_262b18:
    // 0x262b18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262B18u;
    {
        const bool branch_taken_0x262b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b18) {
            ctx->pc = 0x262B28u;
            goto label_262b28;
        }
    }
    ctx->pc = 0x262B20u;
label_262b20:
    // 0x262b20: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 31, 0x262B28u);
    ctx->pc = 0x262B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B20u;
    // 0x262b24: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x262B20u, 0x262B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B28u;
label_262b28:
    // 0x262b28: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x262B28u;
    {
        const bool branch_taken_0x262b28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B28u;
        // 0x262b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b28) {
            ctx->pc = 0x262B54u;
            goto label_262b54;
        }
    }
    ctx->pc = 0x262B30u;
    // 0x262b30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x262b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x262b34: 0x34840014  ori         $a0, $a0, 0x14
    ctx->pc = 0x262b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20);
    // 0x262b38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x262b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x262b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b40: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x262b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b44: 0xc04405c  jal         func_110170
    ctx->pc = 0x262B44u;
    SET_GPR_U32(ctx, 31, 0x262B4Cu);
    ctx->pc = 0x262B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B44u;
    // 0x262b48: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110170u, 0x262B44u, 0x262B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B4Cu;
label_262b4c:
    // 0x262b4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x262B4Cu;
    {
        const bool branch_taken_0x262b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B4Cu;
        // 0x262b50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b4c) {
            ctx->pc = 0x262B74u;
            goto label_262b74;
        }
    }
    ctx->pc = 0x262B54u;
label_262b54:
    // 0x262b54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x262b58: 0x34840014  ori         $a0, $a0, 0x14
    ctx->pc = 0x262b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20);
    // 0x262b5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x262b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b60: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x262b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b64: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x262b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b68: 0xc04404c  jal         func_110130
    ctx->pc = 0x262B68u;
    SET_GPR_U32(ctx, 31, 0x262B70u);
    ctx->pc = 0x262B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B68u;
    // 0x262b6c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110130u, 0x262B68u, 0x262B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B70u;
label_262b70:
    // 0x262b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262b74:
    // 0x262b74: 0x1200ffea  beqz        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x262B74u;
    {
        const bool branch_taken_0x262b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b74) {
            ctx->pc = 0x262B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262b20;
        }
    }
    ctx->pc = 0x262B7Cu;
    // 0x262b7c: 0x0  nop
    ctx->pc = 0x262b7cu;
    // NOP
label_262b80:
    // 0x262b80: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x262B80u;
    {
        const bool branch_taken_0x262b80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b80) {
            ctx->pc = 0x262B98u;
            goto label_262b98;
        }
    }
    ctx->pc = 0x262B88u;
    // 0x262b88: 0xc043404  jal         func_10D010
    ctx->pc = 0x262B88u;
    SET_GPR_U32(ctx, 31, 0x262B90u);
    ctx->pc = 0x262B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B88u;
    // 0x262b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D010u, 0x262B88u, 0x262B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B90u;
label_262b90:
    // 0x262b90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262B90u;
    {
        const bool branch_taken_0x262b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b90) {
            ctx->pc = 0x262BA0u;
            goto label_262ba0;
        }
    }
    ctx->pc = 0x262B98u;
label_262b98:
    // 0x262b98: 0xc043400  jal         func_10D000
    ctx->pc = 0x262B98u;
    SET_GPR_U32(ctx, 31, 0x262BA0u);
    ctx->pc = 0x262B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B98u;
    // 0x262b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D000u, 0x262B98u, 0x262BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BA0u;
label_262ba0:
    // 0x262ba0: 0x441fff7  bgez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x262BA0u;
    {
        const bool branch_taken_0x262ba0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x262BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BA0u;
        // 0x262ba4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ba0) {
            ctx->pc = 0x262B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262b80;
        }
    }
    ctx->pc = 0x262BA8u;
    // 0x262ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x262bacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262bb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x262bb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262bb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x262bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262bb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x262bb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262bbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262bc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x262BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BC8u;
        // 0x262bcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262BD0u;
}
