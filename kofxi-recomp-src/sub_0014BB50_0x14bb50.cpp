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

// Function: sub_0014BB50
// Address: 0x14bb50 - 0x14bc30
void sub_0014BB50_0x14bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BB50_0x14bb50");
#endif

    switch (ctx->pc) {
        case 0x14bbf4u: goto label_14bbf4;
        case 0x14bc04u: goto label_14bc04;
        case 0x14bc20u: goto label_14bc20;
        default: break;
    }

    ctx->pc = 0x14bb50u;

    // 0x14bb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14bb54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bb58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14bb5c: 0x8c425d08  lw          $v0, 0x5D08($v0)
    ctx->pc = 0x14bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14bb60: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x14BB60u;
    {
        const bool branch_taken_0x14bb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bb60) {
            ctx->pc = 0x14BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB60u;
            // 0x14bb64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBFCu;
            goto label_14bbfc;
        }
    }
    ctx->pc = 0x14BB68u;
    // 0x14bb68: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x14bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14bb6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14bb70: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14BB70u;
    {
        const bool branch_taken_0x14bb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bb70) {
            ctx->pc = 0x14BB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB70u;
            // 0x14bb74: 0x64020012  daddiu      $v0, $zero, 0x12 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBB4u;
            goto label_14bbb4;
        }
    }
    ctx->pc = 0x14BB78u;
    // 0x14bb78: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14bb7c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BB7Cu;
    {
        const bool branch_taken_0x14bb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bb7c) {
            ctx->pc = 0x14BB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB7Cu;
            // 0x14bb80: 0x64020011  daddiu      $v0, $zero, 0x11 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)17);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBB4u;
            goto label_14bbb4;
        }
    }
    ctx->pc = 0x14BB84u;
    // 0x14bb84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bb88: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14BB88u;
    {
        const bool branch_taken_0x14bb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bb88) {
            ctx->pc = 0x14BB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB88u;
            // 0x14bb8c: 0x64020010  daddiu      $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBB4u;
            goto label_14bbb4;
        }
    }
    ctx->pc = 0x14BB90u;
    // 0x14bb90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14bb94: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BB94u;
    {
        const bool branch_taken_0x14bb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bb94) {
            ctx->pc = 0x14BB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB94u;
            // 0x14bb98: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBA4u;
            goto label_14bba4;
        }
    }
    ctx->pc = 0x14BB9Cu;
    // 0x14bb9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14BB9Cu;
    {
        const bool branch_taken_0x14bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB9Cu;
        // 0x14bba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb9c) {
            ctx->pc = 0x14BBACu;
            goto label_14bbac;
        }
    }
    ctx->pc = 0x14BBA4u;
label_14bba4:
    // 0x14bba4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14BBA4u;
    {
        const bool branch_taken_0x14bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA4u;
        // 0x14bba8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba4) {
            ctx->pc = 0x14BBB4u;
            goto label_14bbb4;
        }
    }
    ctx->pc = 0x14BBACu;
label_14bbac:
    // 0x14bbac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14BBACu;
    {
        const bool branch_taken_0x14bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBACu;
        // 0x14bbb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbac) {
            ctx->pc = 0x14BC28u;
            goto label_14bc28;
        }
    }
    ctx->pc = 0x14BBB4u;
label_14bbb4:
    // 0x14bbb4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x14bbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14bbb8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x14bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x14bbbc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14bbc0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14bbc4: 0x244223d0  addiu       $v0, $v0, 0x23D0
    ctx->pc = 0x14bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
    // 0x14bbc8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x14bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14bbcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bbd0: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    // 0x14bbd4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x14bbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14bbd8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bbdc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14bbe0: 0x2463e200  addiu       $v1, $v1, -0x1E00
    ctx->pc = 0x14bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959616));
    // 0x14bbe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bbe8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14bbe8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14bbec: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14BBECu;
    SET_GPR_U32(ctx, 31, 0x14BBF4u);
    ctx->pc = 0x14BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBECu;
    // 0x14bbf0: 0xac465d38  sw          $a2, 0x5D38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 23864), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACB0u, 0x14BBECu, 0x14BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBF4u;
label_14bbf4:
    // 0x14bbf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14BBF4u;
    {
        const bool branch_taken_0x14bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBF4u;
        // 0x14bbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbf4) {
            ctx->pc = 0x14BC24u;
            goto label_14bc24;
        }
    }
    ctx->pc = 0x14BBFCu;
label_14bbfc:
    // 0x14bbfc: 0xc052b48  jal         func_14AD20
    ctx->pc = 0x14BBFCu;
    SET_GPR_U32(ctx, 31, 0x14BC04u);
    ctx->pc = 0x14BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBFCu;
    // 0x14bc00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD20u, 0x14BBFCu, 0x14BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC04u;
label_14bc04:
    // 0x14bc04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BC04u;
    {
        const bool branch_taken_0x14bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bc04) {
            ctx->pc = 0x14BC14u;
            goto label_14bc14;
        }
    }
    ctx->pc = 0x14BC0Cu;
    // 0x14bc0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14BC0Cu;
    {
        const bool branch_taken_0x14bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC0Cu;
        // 0x14bc10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc0c) {
            ctx->pc = 0x14BC24u;
            goto label_14bc24;
        }
    }
    ctx->pc = 0x14BC14u;
label_14bc14:
    // 0x14bc14: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14bc18: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BC18u;
    SET_GPR_U32(ctx, 31, 0x14BC20u);
    ctx->pc = 0x14BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC18u;
    // 0x14bc1c: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14BC18u, 0x14BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC20u;
label_14bc20:
    // 0x14bc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bc24:
    // 0x14bc24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bc28:
    // 0x14bc28: 0x3e00008  jr          $ra
    ctx->pc = 0x14BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC28u;
        // 0x14bc2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC30u;
}
