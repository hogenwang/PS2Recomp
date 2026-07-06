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

// Function: sub_00211848
// Address: 0x211848 - 0x211950
void sub_00211848_0x211848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211848_0x211848");
#endif

    switch (ctx->pc) {
        case 0x211858u: goto label_211858;
        case 0x21188cu: goto label_21188c;
        case 0x2118c4u: goto label_2118c4;
        case 0x21190cu: goto label_21190c;
        default: break;
    }

    ctx->pc = 0x211848u;

    // 0x211848: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x211848u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x21184c: 0x11c0003e  beqz        $t6, . + 4 + (0x3E << 2)
    ctx->pc = 0x21184Cu;
    {
        const bool branch_taken_0x21184c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x211850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21184Cu;
        // 0x211850: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21184c) {
            ctx->pc = 0x211948u;
            goto label_211948;
        }
    }
    ctx->pc = 0x211854u;
    // 0x211854: 0x1ee6023  subu        $t4, $t7, $t6
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_211858:
    // 0x211858: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21185c: 0x8dedab5c  lw          $t5, -0x54A4($t7)
    ctx->pc = 0x21185cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945628)));
    // 0x211860: 0x31ae0003  andi        $t6, $t5, 0x3
    ctx->pc = 0x211860u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x211864: 0x11c00036  beqz        $t6, . + 4 + (0x36 << 2)
    ctx->pc = 0x211864u;
    {
        const bool branch_taken_0x211864 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x211868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211864u;
        // 0x211868: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211864) {
            ctx->pc = 0x211940u;
            goto label_211940;
        }
    }
    ctx->pc = 0x21186Cu;
    // 0x21186c: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21186cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x211870: 0x25af0003  addiu       $t7, $t5, 0x3
    ctx->pc = 0x211870u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x211874: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x211874u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x211878: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21187c: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x211880: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x211884: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x211888: 0x1cf6823  subu        $t5, $t6, $t7
    ctx->pc = 0x211888u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_21188c:
    // 0x21188c: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211890: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x211894: 0xadc0ab5c  sw          $zero, -0x54A4($t6)
    ctx->pc = 0x211894u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 0));
    // 0x211898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21189c: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x21189cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x2118a0: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x2118a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2118a4: 0x1a6702b  sltu        $t6, $t5, $a2
    ctx->pc = 0x2118a4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2118a8: 0x15c00023  bnez        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x2118A8u;
    {
        const bool branch_taken_0x2118a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2118ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A8u;
        // 0x2118ac: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118a8) {
            ctx->pc = 0x211938u;
            goto label_211938;
        }
    }
    ctx->pc = 0x2118B0u;
    // 0x2118b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2118b4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2118b8: 0x50cf000d  beql        $a2, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2118B8u;
    {
        const bool branch_taken_0x2118b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        if (branch_taken_0x2118b8) {
            ctx->pc = 0x2118BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2118B8u;
            // 0x2118bc: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2118F0u;
            goto label_2118f0;
        }
    }
    ctx->pc = 0x2118C0u;
    // 0x2118c0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2118c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2118c4:
    // 0x2118c4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2118c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2118c8: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2118cc: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x2118d0: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x2118d0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2118d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2118d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2118d8: 0xa1cd0000  sb          $t5, 0x0($t6)
    ctx->pc = 0x2118d8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x2118dc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2118e0: 0x14cbfff8  bne         $a2, $t3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2118E0u;
    {
        const bool branch_taken_0x2118e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x2118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E0u;
        // 0x2118e4: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118e0) {
            ctx->pc = 0x2118C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2118c4;
        }
    }
    ctx->pc = 0x2118E8u;
    // 0x2118e8: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x2118e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2118ec: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2118ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2118f0:
    // 0x2118f0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2118f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2118f4: 0x1ea7021  addu        $t6, $t7, $t2
    ctx->pc = 0x2118f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x2118f8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2118f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2118fc: 0x118f000b  beq         $t4, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x2118FCu;
    {
        const bool branch_taken_0x2118fc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x211900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118FCu;
        // 0x211900: 0xac8e0000  sw          $t6, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118fc) {
            ctx->pc = 0x21192Cu;
            goto label_21192c;
        }
    }
    ctx->pc = 0x211904u;
    // 0x211904: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x211904u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211908: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x211908u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21190c:
    // 0x21190c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x21190cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x211910: 0x0  nop
    ctx->pc = 0x211910u;
    // NOP
    // 0x211914: 0x0  nop
    ctx->pc = 0x211914u;
    // NOP
    // 0x211918: 0x0  nop
    ctx->pc = 0x211918u;
    // NOP
    // 0x21191c: 0x0  nop
    ctx->pc = 0x21191cu;
    // NOP
    // 0x211920: 0x158efffa  bne         $t4, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211920u;
    {
        const bool branch_taken_0x211920 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 14));
        ctx->pc = 0x211924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211920u;
        // 0x211924: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211920) {
            ctx->pc = 0x21190Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21190c;
        }
    }
    ctx->pc = 0x211928u;
    // 0x211928: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x211928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
label_21192c:
    // 0x21192c: 0x1aa7823  subu        $t7, $t5, $t2
    ctx->pc = 0x21192cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x211930: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x211930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211934: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x211934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
label_211938:
    // 0x211938: 0x3e00008  jr          $ra
    ctx->pc = 0x211938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211940u;
label_211940:
    // 0x211940: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x211940u;
    {
        const bool branch_taken_0x211940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211940u;
        // 0x211944: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211940) {
            ctx->pc = 0x21188Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21188c;
        }
    }
    ctx->pc = 0x211948u;
label_211948:
    // 0x211948: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x211948u;
    {
        const bool branch_taken_0x211948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211948u;
        // 0x21194c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211948) {
            ctx->pc = 0x211858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211858;
        }
    }
    ctx->pc = 0x211950u;
}
