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

// Function: sub_001F57C8
// Address: 0x1f57c8 - 0x1f58d8
void sub_001F57C8_0x1f57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F57C8_0x1f57c8");
#endif

    switch (ctx->pc) {
        case 0x1f5828u: goto label_1f5828;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f5878u: goto label_1f5878;
        default: break;
    }

    ctx->pc = 0x1f57c8u;

    // 0x1f57c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f57c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f57cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f57ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f57d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f57d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f57d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f57d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f57dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f57dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f57e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f57e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f57e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f57e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f57ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f57f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f57f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f57f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f57f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f57f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f57fc: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f5800: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f5800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1f5804: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x1f5804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1f5808: 0x24500180  addiu       $s0, $v0, 0x180
    ctx->pc = 0x1f5808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1f580c: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F580Cu;
    {
        const bool branch_taken_0x1f580c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F580Cu;
        // 0x1f5810: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f580c) {
            ctx->pc = 0x1F588Cu;
            goto label_1f588c;
        }
    }
    ctx->pc = 0x1F5814u;
    // 0x1f5814: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1f5814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5818: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1f5818u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f581c: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1f581cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5820: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1f5820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5824: 0x0  nop
    ctx->pc = 0x1f5824u;
    // NOP
label_1f5828:
    // 0x1f5828: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f5828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f582c: 0x50570004  beql        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F582Cu;
    {
        const bool branch_taken_0x1f582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1f582c) {
            ctx->pc = 0x1F5830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F582Cu;
            // 0x1f5830: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F5834u;
    // 0x1f5834: 0x54560013  bnel        $v0, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F5834u;
    {
        const bool branch_taken_0x1f5834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1f5834) {
            ctx->pc = 0x1F5838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5834u;
            // 0x1f5838: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5884u;
            goto label_1f5884;
        }
    }
    ctx->pc = 0x1F583Cu;
    // 0x1f583c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1f583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1f5840:
    // 0x1f5840: 0x54550010  bnel        $v0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F5840u;
    {
        const bool branch_taken_0x1f5840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1f5840) {
            ctx->pc = 0x1F5844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5840u;
            // 0x1f5844: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5884u;
            goto label_1f5884;
        }
    }
    ctx->pc = 0x1F5848u;
    // 0x1f5848: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f584c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5850: 0xc07d636  jal         func_1F58D8
    ctx->pc = 0x1F5850u;
    SET_GPR_U32(ctx, 31, 0x1F5858u);
    ctx->pc = 0x1F5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5850u;
    // 0x1f5854: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F58D8u, 0x1F5850u, 0x1F5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5858u;
label_1f5858:
    // 0x1f5858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5858u;
    {
        const bool branch_taken_0x1f5858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5858u;
        // 0x1f585c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5858) {
            ctx->pc = 0x1F5870u;
            goto label_1f5870;
        }
    }
    ctx->pc = 0x1F5860u;
    // 0x1f5860: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f5864: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f5864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f5868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5868u;
    {
        const bool branch_taken_0x1f5868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5868u;
        // 0x1f586c: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5868) {
            ctx->pc = 0x1F5880u;
            goto label_1f5880;
        }
    }
    ctx->pc = 0x1F5870u;
label_1f5870:
    // 0x1f5870: 0xc07d636  jal         func_1F58D8
    ctx->pc = 0x1F5870u;
    SET_GPR_U32(ctx, 31, 0x1F5878u);
    ctx->pc = 0x1F5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5870u;
    // 0x1f5874: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F58D8u, 0x1F5870u, 0x1F5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5878u;
label_1f5878:
    // 0x1f5878: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5878u;
    {
        const bool branch_taken_0x1f5878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5878) {
            ctx->pc = 0x1F587Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5878u;
            // 0x1f587c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5880u;
            goto label_1f5880;
        }
    }
    ctx->pc = 0x1F5880u;
label_1f5880:
    // 0x1f5880: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1f5880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1f5884:
    // 0x1f5884: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F5884u;
    {
        const bool branch_taken_0x1f5884 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5884u;
        // 0x1f5888: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5884) {
            ctx->pc = 0x1F5828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5828;
        }
    }
    ctx->pc = 0x1F588Cu;
label_1f588c:
    // 0x1f588c: 0x1e800004  bgtz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F588Cu;
    {
        const bool branch_taken_0x1f588c = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x1F5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F588Cu;
        // 0x1f5890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f588c) {
            ctx->pc = 0x1F58A0u;
            goto label_1f58a0;
        }
    }
    ctx->pc = 0x1F5894u;
    // 0x1f5894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5894u;
    {
        const bool branch_taken_0x1f5894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5894u;
        // 0x1f5898: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5894) {
            ctx->pc = 0x1F58A8u;
            goto label_1f58a8;
        }
    }
    ctx->pc = 0x1F589Cu;
    // 0x1f589c: 0x0  nop
    ctx->pc = 0x1f589cu;
    // NOP
label_1f58a0:
    // 0x1f58a0: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F58A0u;
    {
        const bool branch_taken_0x1f58a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58A0u;
        // 0x1f58a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58a0) {
            ctx->pc = 0x1F58B0u;
            goto label_1f58b0;
        }
    }
    ctx->pc = 0x1F58A8u;
label_1f58a8:
    // 0x1f58a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1f58ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f58acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f58b0:
    // 0x1f58b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f58b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f58b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f58b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f58b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f58b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f58bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f58bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f58c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f58c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f58c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f58c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f58c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f58c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f58cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f58ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f58d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F58D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58D0u;
        // 0x1f58d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F58D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F58D8u;
}
