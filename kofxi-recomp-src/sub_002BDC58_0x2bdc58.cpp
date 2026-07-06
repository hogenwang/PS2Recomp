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

// Function: sub_002BDC58
// Address: 0x2bdc58 - 0x2bdd20
void sub_002BDC58_0x2bdc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDC58_0x2bdc58");
#endif

    switch (ctx->pc) {
        case 0x2bdc88u: goto label_2bdc88;
        default: break;
    }

    ctx->pc = 0x2bdc58u;

    // 0x2bdc58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bdc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bdc5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bdc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bdc60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bdc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bdc64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bdc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bdc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bdc6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bdc6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bdc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bdc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bdc78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bdc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bdc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc80: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BDC80u;
    SET_GPR_U32(ctx, 31, 0x2BDC88u);
    ctx->pc = 0x2BDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC80u;
    // 0x2bdc84: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BDC80u, 0x2BDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC88u;
label_2bdc88:
    // 0x2bdc88: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bdc8c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2bdc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2bdc90: 0x3b0200a  movz        $a0, $sp, $s0
    ctx->pc = 0x2bdc90u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 29));
    // 0x2bdc94: 0x3b1280a  movz        $a1, $sp, $s1
    ctx->pc = 0x2bdc94u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 29));
    // 0x2bdc98: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2bdc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bdc9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2bdc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bdca0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2bdca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bdca4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BDCA4u;
    {
        const bool branch_taken_0x2bdca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdca4) {
            ctx->pc = 0x2BDCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDCA4u;
            // 0x2bdca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDCFCu;
            goto label_2bdcfc;
        }
    }
    ctx->pc = 0x2BDCACu;
    // 0x2bdcac: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2bdcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bdcb0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BDCB0u;
    {
        const bool branch_taken_0x2bdcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCB0u;
        // 0x2bdcb4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcb0) {
            ctx->pc = 0x2BDCFCu;
            goto label_2bdcfc;
        }
    }
    ctx->pc = 0x2BDCB8u;
    // 0x2bdcb8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2bdcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bdcbc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bdcc0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2bdcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2bdcc4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDCC4u;
    {
        const bool branch_taken_0x2bdcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdcc4) {
            ctx->pc = 0x2BDCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDCC4u;
            // 0x2bdcc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDCFCu;
            goto label_2bdcfc;
        }
    }
    ctx->pc = 0x2BDCCCu;
    // 0x2bdccc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2bdcccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2bdcd0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BDCD0u;
    {
        const bool branch_taken_0x2bdcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCD0u;
        // 0x2bdcd4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcd0) {
            ctx->pc = 0x2BDCFCu;
            goto label_2bdcfc;
        }
    }
    ctx->pc = 0x2BDCD8u;
    // 0x2bdcd8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2bdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bdcdc: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x2bdcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bdce0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2bdce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2bdce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDCE4u;
    {
        const bool branch_taken_0x2bdce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCE4u;
        // 0x2bdce8: 0x70102b  sltu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdce4) {
            ctx->pc = 0x2BDCF4u;
            goto label_2bdcf4;
        }
    }
    ctx->pc = 0x2BDCECu;
    // 0x2bdcec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDCECu;
    {
        const bool branch_taken_0x2bdcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCECu;
        // 0x2bdcf0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcec) {
            ctx->pc = 0x2BDCFCu;
            goto label_2bdcfc;
        }
    }
    ctx->pc = 0x2BDCF4u;
label_2bdcf4:
    // 0x2bdcf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdcf8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2bdcf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2bdcfc:
    // 0x2bdcfc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2bdcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2bdd00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bdd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bdd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdd08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bdd08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdd0c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bdd0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdd10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bdd10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdd14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD14u;
        // 0x2bdd18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDD1Cu;
    // 0x2bdd1c: 0x0  nop
    ctx->pc = 0x2bdd1cu;
    // NOP
}
