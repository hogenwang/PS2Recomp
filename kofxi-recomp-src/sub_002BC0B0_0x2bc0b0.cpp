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

// Function: sub_002BC0B0
// Address: 0x2bc0b0 - 0x2bc1b0
void sub_002BC0B0_0x2bc0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC0B0_0x2bc0b0");
#endif

    switch (ctx->pc) {
        case 0x2bc0f4u: goto label_2bc0f4;
        case 0x2bc150u: goto label_2bc150;
        default: break;
    }

    ctx->pc = 0x2bc0b0u;

    // 0x2bc0b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bc0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bc0b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bc0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bc0b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bc0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bc0bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bc0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc0c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bc0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bc0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc0d0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2bc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc0d4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2bc0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bc0d8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2bc0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2bc0dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BC0DCu;
    {
        const bool branch_taken_0x2bc0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0DCu;
        // 0x2bc0e0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0dc) {
            ctx->pc = 0x2BC114u;
            goto label_2bc114;
        }
    }
    ctx->pc = 0x2BC0E4u;
    // 0x2bc0e4: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2bc0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bc0e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc0ec: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x2BC0ECu;
    SET_GPR_U32(ctx, 31, 0x2BC0F4u);
    ctx->pc = 0x2BC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0ECu;
    // 0x2bc0f0: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x2BC0ECu, 0x2BC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0F4u;
label_2bc0f4:
    // 0x2bc0f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bc0f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0f8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BC0F8u;
    {
        const bool branch_taken_0x2bc0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0F8u;
        // 0x2bc0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0f8) {
            ctx->pc = 0x2BC194u;
            goto label_2bc194;
        }
    }
    ctx->pc = 0x2BC100u;
    // 0x2bc100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2bc100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc104: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2bc104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2bc108: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bc108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bc10c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bc10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc110: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bc110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2bc114:
    // 0x2bc114: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x2bc114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2bc118: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC118u;
    {
        const bool branch_taken_0x2bc118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc118) {
            ctx->pc = 0x2BC11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC118u;
            // 0x2bc11c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC12Cu;
            goto label_2bc12c;
        }
    }
    ctx->pc = 0x2BC120u;
    // 0x2bc120: 0x6230005  bgezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC120u;
    {
        const bool branch_taken_0x2bc120 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2bc120) {
            ctx->pc = 0x2BC124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC120u;
            // 0x2bc124: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC138u;
            goto label_2bc138;
        }
    }
    ctx->pc = 0x2BC128u;
    // 0x2bc128: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2bc128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2bc12c:
    // 0x2bc12c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2bc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc130: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2BC130u;
    {
        const bool branch_taken_0x2bc130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC130u;
        // 0x2bc134: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc130) {
            ctx->pc = 0x2BC180u;
            goto label_2bc180;
        }
    }
    ctx->pc = 0x2BC138u;
label_2bc138:
    // 0x2bc138: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bc138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc13c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2bc13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc140: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2BC140u;
    {
        const bool branch_taken_0x2bc140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC140u;
        // 0x2bc144: 0x2447fffc  addiu       $a3, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc140) {
            ctx->pc = 0x2BC178u;
            goto label_2bc178;
        }
    }
    ctx->pc = 0x2BC148u;
    // 0x2bc148: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2bc148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2bc14c: 0x0  nop
    ctx->pc = 0x2bc14cu;
    // NOP
label_2bc150:
    // 0x2bc150: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2bc150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bc154: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2bc154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2bc158: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2bc158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2bc15c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc160: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2bc160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2bc164: 0x225182a  slt         $v1, $s1, $a1
    ctx->pc = 0x2bc164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2bc168: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BC168u;
    {
        const bool branch_taken_0x2bc168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC168u;
        // 0x2bc16c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc168) {
            ctx->pc = 0x2BC150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc150;
        }
    }
    ctx->pc = 0x2BC170u;
    // 0x2bc170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC170u;
    {
        const bool branch_taken_0x2bc170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC170u;
        // 0x2bc174: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc170) {
            ctx->pc = 0x2BC17Cu;
            goto label_2bc17c;
        }
    }
    ctx->pc = 0x2BC178u;
label_2bc178:
    // 0x2bc178: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2bc178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2bc17c:
    // 0x2bc17c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2bc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2bc180:
    // 0x2bc180: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2bc180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2bc184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc188: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2bc188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2bc18c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bc190: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bc190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bc194:
    // 0x2bc194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bc194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc198: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bc198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc19c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bc19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1A4u;
        // 0x2bc1a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC1ACu;
    // 0x2bc1ac: 0x0  nop
    ctx->pc = 0x2bc1acu;
    // NOP
}
