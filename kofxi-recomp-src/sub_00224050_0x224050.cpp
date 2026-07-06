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

// Function: sub_00224050
// Address: 0x224050 - 0x2240e8
void sub_00224050_0x224050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224050_0x224050");
#endif

    switch (ctx->pc) {
        case 0x224050u: goto label_224050;
        case 0x224054u: goto label_224054;
        case 0x224058u: goto label_224058;
        case 0x22405cu: goto label_22405c;
        case 0x224060u: goto label_224060;
        case 0x224064u: goto label_224064;
        case 0x224068u: goto label_224068;
        case 0x22406cu: goto label_22406c;
        case 0x224070u: goto label_224070;
        case 0x224074u: goto label_224074;
        case 0x224078u: goto label_224078;
        case 0x22407cu: goto label_22407c;
        case 0x224080u: goto label_224080;
        case 0x224084u: goto label_224084;
        case 0x224088u: goto label_224088;
        case 0x22408cu: goto label_22408c;
        case 0x224090u: goto label_224090;
        case 0x224094u: goto label_224094;
        case 0x224098u: goto label_224098;
        case 0x22409cu: goto label_22409c;
        case 0x2240a0u: goto label_2240a0;
        case 0x2240a4u: goto label_2240a4;
        case 0x2240a8u: goto label_2240a8;
        case 0x2240acu: goto label_2240ac;
        case 0x2240b0u: goto label_2240b0;
        case 0x2240b4u: goto label_2240b4;
        case 0x2240b8u: goto label_2240b8;
        case 0x2240bcu: goto label_2240bc;
        case 0x2240c0u: goto label_2240c0;
        case 0x2240c4u: goto label_2240c4;
        case 0x2240c8u: goto label_2240c8;
        case 0x2240ccu: goto label_2240cc;
        case 0x2240d0u: goto label_2240d0;
        case 0x2240d4u: goto label_2240d4;
        case 0x2240d8u: goto label_2240d8;
        case 0x2240dcu: goto label_2240dc;
        case 0x2240e0u: goto label_2240e0;
        case 0x2240e4u: goto label_2240e4;
        default: break;
    }

    ctx->pc = 0x224050u;

label_224050:
    // 0x224050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_224054:
    // 0x224054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224058:
    // 0x224058: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_22405c:
    if (ctx->pc == 0x22405Cu) {
        ctx->pc = 0x22405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224058u;
        // 0x22405c: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224060u;
        goto label_224060;
    }
    ctx->pc = 0x224058u;
    {
        const bool branch_taken_0x224058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x224058) {
            ctx->pc = 0x22405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224058u;
            // 0x22405c: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224088u;
            goto label_224088;
        }
    }
    ctx->pc = 0x224060u;
label_224060:
    // 0x224060: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_224064:
    // 0x224064: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224064u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_224068:
    // 0x224068: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x224068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22406c:
    // 0x22406c: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x22406cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_224070:
    // 0x224070: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x224070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_224074:
    // 0x224074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224078:
    // 0x224078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22407c:
    // 0x22407c: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x22407cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_224080:
    // 0x224080: 0x8089794  j           func_225E50
label_224084:
    if (ctx->pc == 0x224084u) {
        ctx->pc = 0x224084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224080u;
        // 0x224084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224088u;
        goto label_224088;
    }
    ctx->pc = 0x224080u;
    ctx->pc = 0x224084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224080u;
    // 0x224084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x224088u;
label_224088:
    // 0x224088: 0x2def0003  sltiu       $t7, $t7, 0x3
    ctx->pc = 0x224088u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22408c:
    // 0x22408c: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
label_224090:
    if (ctx->pc == 0x224090u) {
        ctx->pc = 0x224090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22408Cu;
        // 0x224090: 0x8c8f1068  lw          $t7, 0x1068($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224094u;
        goto label_224094;
    }
    ctx->pc = 0x22408Cu;
    {
        const bool branch_taken_0x22408c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x22408c) {
            ctx->pc = 0x224090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22408Cu;
            // 0x224090: 0x8c8f1068  lw          $t7, 0x1068($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2240B8u;
            goto label_2240b8;
        }
    }
    ctx->pc = 0x224094u;
label_224094:
    // 0x224094: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_224098:
    // 0x224098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22409c:
    // 0x22409c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22409cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_2240a0:
    // 0x2240a0: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x2240a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_2240a4:
    // 0x2240a4: 0x24e73430  addiu       $a3, $a3, 0x3430
    ctx->pc = 0x2240a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13360));
label_2240a8:
    // 0x2240a8: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x2240a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_2240ac:
    // 0x2240ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2240acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2240b0:
    // 0x2240b0: 0x80897d6  j           func_225F58
label_2240b4:
    if (ctx->pc == 0x2240B4u) {
        ctx->pc = 0x2240B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240B0u;
        // 0x2240b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240B8u;
        goto label_2240b8;
    }
    ctx->pc = 0x2240B0u;
    ctx->pc = 0x2240B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240B0u;
    // 0x2240b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    sub_00225F58_0x225f58(rdram, ctx, runtime); return;
    ctx->pc = 0x2240B8u;
label_2240b8:
    // 0x2240b8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
label_2240bc:
    if (ctx->pc == 0x2240BCu) {
        ctx->pc = 0x2240BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240B8u;
        // 0x2240bc: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240C0u;
        goto label_2240c0;
    }
    ctx->pc = 0x2240B8u;
    {
        const bool branch_taken_0x2240b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2240BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240B8u;
        // 0x2240bc: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240b8) {
            ctx->pc = 0x2240D4u;
            goto label_2240d4;
        }
    }
    ctx->pc = 0x2240C0u;
label_2240c0:
    // 0x2240c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2240c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2240c4:
    // 0x2240c4: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x2240c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_2240c8:
    // 0x2240c8: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x2240c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_2240cc:
    // 0x2240cc: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_2240d0:
    if (ctx->pc == 0x2240D0u) {
        ctx->pc = 0x2240D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240CCu;
        // 0x2240d0: 0x240500a3  addiu       $a1, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240D4u;
        goto label_2240d4;
    }
    ctx->pc = 0x2240CCu;
    {
        const bool branch_taken_0x2240cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240CCu;
        // 0x2240d0: 0x240500a3  addiu       $a1, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240cc) {
            ctx->pc = 0x224074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224074;
        }
    }
    ctx->pc = 0x2240D4u;
label_2240d4:
    // 0x2240d4: 0x1e0f809  jalr        $t7
label_2240d8:
    if (ctx->pc == 0x2240D8u) {
        ctx->pc = 0x2240DCu;
        goto label_2240dc;
    }
    ctx->pc = 0x2240D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x2240DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2240D4u, 0x2240DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2240DCu;
label_2240dc:
    // 0x2240dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2240dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2240e0:
    // 0x2240e0: 0x3e00008  jr          $ra
label_2240e4:
    if (ctx->pc == 0x2240E4u) {
        ctx->pc = 0x2240E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240E0u;
        // 0x2240e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240E8u;
        goto label_fallthrough_0x2240e0;
    }
    ctx->pc = 0x2240E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2240E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240E0u;
        // 0x2240e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2240E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2240e0:
    ctx->pc = 0x2240E8u;
}
