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

// Function: sub_001C0838
// Address: 0x1c0838 - 0x1c0900
void sub_001C0838_0x1c0838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0838_0x1c0838");
#endif

    switch (ctx->pc) {
        case 0x1c0840u: goto label_1c0840;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0878u: goto label_1c0878;
        case 0x1c0894u: goto label_1c0894;
        default: break;
    }

    ctx->pc = 0x1c0838u;

    // 0x1c0838: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C0838u;
    {
        const bool branch_taken_0x1c0838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0838u;
        // 0x1c083c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0838) {
            ctx->pc = 0x1C07F8u;
            return;
        }
    }
    ctx->pc = 0x1C0840u;
label_1c0840:
    // 0x1c0840: 0xc0736d8  jal         func_1CDB60
    ctx->pc = 0x1C0840u;
    SET_GPR_U32(ctx, 31, 0x1C0848u);
    ctx->pc = 0x1C0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0840u;
    // 0x1c0844: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB60u, 0x1C0840u, 0x1C0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0848u;
label_1c0848:
    // 0x1c0848: 0x82320002  lb          $s2, 0x2($s1)
    ctx->pc = 0x1c0848u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1c084c:
    // 0x1c084c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0850: 0x5642001b  bnel        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C0850u;
    {
        const bool branch_taken_0x1c0850 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0850) {
            ctx->pc = 0x1C0854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0850u;
            // 0x1c0854: 0xae60c80c  sw          $zero, -0x37F4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294952972), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C08C0u;
            goto label_1c08c0;
        }
    }
    ctx->pc = 0x1C0858u;
    // 0x1c0858: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c085c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0860: 0x2450c7d0  addiu       $s0, $v0, -0x3830
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x1c0864: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1c0864u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c0868: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0868u;
    {
        const bool branch_taken_0x1c0868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0868u;
        // 0x1c086c: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0868) {
            ctx->pc = 0x1C087Cu;
            goto label_1c087c;
        }
    }
    ctx->pc = 0x1C0870u;
    // 0x1c0870: 0xc07018c  jal         func_1C0630
    ctx->pc = 0x1C0870u;
    SET_GPR_U32(ctx, 31, 0x1C0878u);
    ctx->pc = 0x1C0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0870u;
    // 0x1c0874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0630u, 0x1C0870u, 0x1C0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0878u;
label_1c0878:
    // 0x1c0878: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1c0878u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1c087c:
    // 0x1c087c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c0880: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c0884: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0884u;
    {
        const bool branch_taken_0x1c0884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c0884) {
            ctx->pc = 0x1C0888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0884u;
            // 0x1c0888: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0898u;
            goto label_1c0898;
        }
    }
    ctx->pc = 0x1C088Cu;
    // 0x1c088c: 0xc070196  jal         func_1C0658
    ctx->pc = 0x1C088Cu;
    SET_GPR_U32(ctx, 31, 0x1C0894u);
    ctx->pc = 0x1C0890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C088Cu;
    // 0x1c0890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0658u, 0x1C088Cu, 0x1C0894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0894u;
label_1c0894:
    // 0x1c0894: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x1c0894u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1c0898:
    // 0x1c0898: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c089c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C089Cu;
    {
        const bool branch_taken_0x1c089c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C089Cu;
        // 0x1c08a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c089c) {
            ctx->pc = 0x1C08BCu;
            goto label_1c08bc;
        }
    }
    ctx->pc = 0x1C08A4u;
    // 0x1c08a4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c08a8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c08a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c08ac: 0x2463c82c  addiu       $v1, $v1, -0x37D4
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953004));
    // 0x1c08b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c08b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c08b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c08bc:
    // 0x1c08bc: 0xae60c80c  sw          $zero, -0x37F4($s3)
    ctx->pc = 0x1c08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952972), GPR_U32(ctx, 0));
label_1c08c0:
    // 0x1c08c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c08c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c08c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c08c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c08c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c08c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c08cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c08ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c08d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c08d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c08d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08D4u;
        // 0x1c08d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C08D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C08DCu;
    // 0x1c08dc: 0x0  nop
    ctx->pc = 0x1c08dcu;
    // NOP
    // 0x1c08e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c08e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c08e4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c08e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c08e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c08ec: 0x2484c7d0  addiu       $a0, $a0, -0x3830
    ctx->pc = 0x1c08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
    // 0x1c08f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c08f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c08f4: 0x80701f4  j           func_1C07D0
    ctx->pc = 0x1C08F4u;
    ctx->pc = 0x1C08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08F4u;
    // 0x1c08f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C07D0u;
    sub_001C07D0_0x1c07d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C08FCu;
    // 0x1c08fc: 0x0  nop
    ctx->pc = 0x1c08fcu;
    // NOP
    if (ctx->pc == 0x1c08fcu) { ctx->pc = 0x1c0900u; }
}
