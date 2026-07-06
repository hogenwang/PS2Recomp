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

// Function: sub_002EDA40
// Address: 0x2eda40 - 0x2edb98
void sub_002EDA40_0x2eda40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDA40_0x2eda40");
#endif

    switch (ctx->pc) {
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb88u: goto label_2edb88;
        default: break;
    }

    ctx->pc = 0x2eda40u;

    // 0x2eda40: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDA40u;
    {
        const bool branch_taken_0x2eda40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA40u;
        // 0x2eda44: 0x3c0d003c  lui         $t5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda40) {
            ctx->pc = 0x2EDA54u;
            goto label_2eda54;
        }
    }
    ctx->pc = 0x2EDA48u;
    // 0x2eda48: 0x25afeca8  addiu       $t7, $t5, -0x1358
    ctx->pc = 0x2eda48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962344));
    // 0x2eda4c: 0x8dee0060  lw          $t6, 0x60($t7)
    ctx->pc = 0x2eda4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 96)));
    // 0x2eda50: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x2eda50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
label_2eda54:
    // 0x2eda54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDA54u;
    {
        const bool branch_taken_0x2eda54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA54u;
        // 0x2eda58: 0x25afeca8  addiu       $t7, $t5, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda54) {
            ctx->pc = 0x2EDA64u;
            goto label_2eda64;
        }
    }
    ctx->pc = 0x2EDA5Cu;
    // 0x2eda5c: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x2eda5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x2eda60: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x2eda60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_2eda64:
    // 0x2eda64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA64u;
        // 0x2eda68: 0x8da2eca8  lw          $v0, -0x1358($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294962344)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDA6Cu;
    // 0x2eda6c: 0x0  nop
    ctx->pc = 0x2eda6cu;
    // NOP
    // 0x2eda70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eda70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eda74: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x2eda74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
    // 0x2eda78: 0x258deca8  addiu       $t5, $t4, -0x1358
    ctx->pc = 0x2eda78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962344));
    // 0x2eda7c: 0x8daf0060  lw          $t7, 0x60($t5)
    ctx->pc = 0x2eda7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 96)));
    // 0x2eda80: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x2eda80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x2eda84: 0x8dae0064  lw          $t6, 0x64($t5)
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 100)));
    // 0x2eda88: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDA88u;
    {
        const bool branch_taken_0x2eda88 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA88u;
        // 0x2eda8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda88) {
            ctx->pc = 0x2EDA9Cu;
            goto label_2eda9c;
        }
    }
    ctx->pc = 0x2EDA90u;
    // 0x2eda90: 0x8d82eca8  lw          $v0, -0x1358($t4)
    ctx->pc = 0x2eda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294962344)));
    // 0x2eda94: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x2eda94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2eda98: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x2eda98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
label_2eda9c:
    // 0x2eda9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDAA4u;
    // 0x2edaa4: 0x0  nop
    ctx->pc = 0x2edaa4u;
    // NOP
    // 0x2edaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edaac: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edab4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2edab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edab8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2edab8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edabc: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2edac0: 0x11ae000b  beq         $t5, $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDAC0u;
    {
        const bool branch_taken_0x2edac0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2EDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAC0u;
        // 0x2edac4: 0x25efeca8  addiu       $t7, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edac0) {
            ctx->pc = 0x2EDAF0u;
            goto label_2edaf0;
        }
    }
    ctx->pc = 0x2EDAC8u;
    // 0x2edac8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edad0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2edad0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2edad4: 0x24840bd0  addiu       $a0, $a0, 0xBD0
    ctx->pc = 0x2edad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3024));
    // 0x2edad8: 0x25080be8  addiu       $t0, $t0, 0xBE8
    ctx->pc = 0x2edad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3048));
    // 0x2edadc: 0x2405063a  addiu       $a1, $zero, 0x63A
    ctx->pc = 0x2edadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1594));
    // 0x2edae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edae4: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x2edae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x2edae8: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EDAE8u;
    ctx->pc = 0x2EDAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAE8u;
    // 0x2edaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EDAF0u;
label_2edaf0:
    // 0x2edaf0: 0xade40394  sw          $a0, 0x394($t7)
    ctx->pc = 0x2edaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 916), GPR_U32(ctx, 4));
    // 0x2edaf4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edaf8: 0x24e70c00  addiu       $a3, $a3, 0xC00
    ctx->pc = 0x2edaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
    // 0x2edafc: 0x2405063c  addiu       $a1, $zero, 0x63C
    ctx->pc = 0x2edafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1596));
    // 0x2edb00: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edb04: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2edb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2edb08: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDB08u;
    SET_GPR_U32(ctx, 31, 0x2EDB10u);
    ctx->pc = 0x2EDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB08u;
    // 0x2edb0c: 0x24840bd0  addiu       $a0, $a0, 0xBD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDB08u, 0x2EDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB10u;
label_2edb10:
    // 0x2edb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edb18: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB18u;
        // 0x2edb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDB20u;
    // 0x2edb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edb24: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edb24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edb2c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2edb2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb30: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2edb30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edb34: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2edb34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2edb38: 0x11ae000b  beq         $t5, $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDB38u;
    {
        const bool branch_taken_0x2edb38 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2EDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB38u;
        // 0x2edb3c: 0x25efeca8  addiu       $t7, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb38) {
            ctx->pc = 0x2EDB68u;
            goto label_2edb68;
        }
    }
    ctx->pc = 0x2EDB40u;
    // 0x2edb40: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edb40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edb48: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2edb48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2edb4c: 0x24840c18  addiu       $a0, $a0, 0xC18
    ctx->pc = 0x2edb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3096));
    // 0x2edb50: 0x25080be8  addiu       $t0, $t0, 0xBE8
    ctx->pc = 0x2edb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3048));
    // 0x2edb54: 0x24050649  addiu       $a1, $zero, 0x649
    ctx->pc = 0x2edb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1609));
    // 0x2edb58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb5c: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x2edb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x2edb60: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EDB60u;
    ctx->pc = 0x2EDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB60u;
    // 0x2edb64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EDB68u;
label_2edb68:
    // 0x2edb68: 0xade40398  sw          $a0, 0x398($t7)
    ctx->pc = 0x2edb68u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 920), GPR_U32(ctx, 4));
    // 0x2edb6c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edb70: 0x24e70c30  addiu       $a3, $a3, 0xC30
    ctx->pc = 0x2edb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3120));
    // 0x2edb74: 0x2405064b  addiu       $a1, $zero, 0x64B
    ctx->pc = 0x2edb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1611));
    // 0x2edb78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edb7c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2edb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2edb80: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDB80u;
    SET_GPR_U32(ctx, 31, 0x2EDB88u);
    ctx->pc = 0x2EDB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB80u;
    // 0x2edb84: 0x24840c18  addiu       $a0, $a0, 0xC18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDB80u, 0x2EDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB88u;
label_2edb88:
    // 0x2edb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edb8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB90u;
        // 0x2edb94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDB98u;
}
