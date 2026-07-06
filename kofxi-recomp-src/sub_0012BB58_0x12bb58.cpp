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

// Function: sub_0012BB58
// Address: 0x12bb58 - 0x12bc40
void sub_0012BB58_0x12bb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BB58_0x12bb58");
#endif

    switch (ctx->pc) {
        case 0x12bb90u: goto label_12bb90;
        case 0x12bbb0u: goto label_12bbb0;
        case 0x12bbd4u: goto label_12bbd4;
        case 0x12bc08u: goto label_12bc08;
        case 0x12bc28u: goto label_12bc28;
        default: break;
    }

    ctx->pc = 0x12bb58u;

    // 0x12bb58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12bb5c: 0x248f0040  addiu       $t7, $a0, 0x40
    ctx->pc = 0x12bb5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12bb60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12bb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bb68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bb6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12bb70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12bb74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12bb78: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x12bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12bb7c: 0x14af001d  bne         $a1, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x12BB7Cu;
    {
        const bool branch_taken_0x12bb7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x12BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB7Cu;
        // 0x12bb80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb7c) {
            ctx->pc = 0x12BBF4u;
            goto label_12bbf4;
        }
    }
    ctx->pc = 0x12BB84u;
    // 0x12bb84: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12bb88: 0xc049a24  jal         func_126890
    ctx->pc = 0x12BB88u;
    SET_GPR_U32(ctx, 31, 0x12BB90u);
    ctx->pc = 0x12BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB88u;
    // 0x12bb8c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126890u, 0x12BB88u, 0x12BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB90u;
label_12bb90:
    // 0x12bb90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12bb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb94: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x12BB94u;
    {
        const bool branch_taken_0x12bb94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB94u;
        // 0x12bb98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb94) {
            ctx->pc = 0x12BBD4u;
            goto label_12bbd4;
        }
    }
    ctx->pc = 0x12BB9Cu;
    // 0x12bb9c: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x12bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x12bba0: 0x240f0400  addiu       $t7, $zero, 0x400
    ctx->pc = 0x12bba0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12bba4: 0xae4f0034  sw          $t7, 0x34($s2)
    ctx->pc = 0x12bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 15));
    // 0x12bba8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12bba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bbac: 0x263103fd  addiu       $s1, $s1, 0x3FD
    ctx->pc = 0x12bbacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1021));
label_12bbb0:
    // 0x12bbb0: 0x2727821  addu        $t7, $s3, $s2
    ctx->pc = 0x12bbb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x12bbb4: 0x2336821  addu        $t5, $s1, $s3
    ctx->pc = 0x12bbb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12bbb8: 0x91ee0040  lbu         $t6, 0x40($t7)
    ctx->pc = 0x12bbb8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x12bbbc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12bbbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12bbc0: 0x0  nop
    ctx->pc = 0x12bbc0u;
    // NOP
    // 0x12bbc4: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BBC4u;
    {
        const bool branch_taken_0x12bbc4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x12BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBC4u;
        // 0x12bbc8: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbc4) {
            ctx->pc = 0x12BBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bbb0;
        }
    }
    ctx->pc = 0x12BBCCu;
    // 0x12bbcc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x12bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x12bbd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12bbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bbd4:
    // 0x12bbd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bbd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bbd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bbdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12bbdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bbe0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12bbe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bbe4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12bbe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bbe8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12bbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12bbec: 0x3e00008  jr          $ra
    ctx->pc = 0x12BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBECu;
        // 0x12bbf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BBF4u;
label_12bbf4:
    // 0x12bbf4: 0x8c930034  lw          $s3, 0x34($a0)
    ctx->pc = 0x12bbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x12bbf8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12bbfc: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x12bbfcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x12bc00: 0xc04a3f6  jal         func_128FD8
    ctx->pc = 0x12BC00u;
    SET_GPR_U32(ctx, 31, 0x12BC08u);
    ctx->pc = 0x12BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC00u;
    // 0x12bc04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128FD8u, 0x12BC00u, 0x12BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC08u;
label_12bc08:
    // 0x12bc08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12bc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc0c: 0x1220fff1  beqz        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x12BC0Cu;
    {
        const bool branch_taken_0x12bc0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC0Cu;
        // 0x12bc10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc0c) {
            ctx->pc = 0x12BBD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bbd4;
        }
    }
    ctx->pc = 0x12BC14u;
    // 0x12bc14: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x12bc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12bc18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12bc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc20: 0xc049c48  jal         func_127120
    ctx->pc = 0x12BC20u;
    SET_GPR_U32(ctx, 31, 0x12BC28u);
    ctx->pc = 0x12BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC20u;
    // 0x12bc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x12BC20u, 0x12BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC28u;
label_12bc28:
    // 0x12bc28: 0xae540034  sw          $s4, 0x34($s2)
    ctx->pc = 0x12bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 20));
    // 0x12bc2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12bc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc30: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x12bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x12bc34: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x12BC34u;
    {
        const bool branch_taken_0x12bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC34u;
        // 0x12bc38: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc34) {
            ctx->pc = 0x12BBD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bbd4;
        }
    }
    ctx->pc = 0x12BC3Cu;
    // 0x12bc3c: 0x0  nop
    ctx->pc = 0x12bc3cu;
    // NOP
}
