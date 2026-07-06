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

// Function: sub_0011CC68
// Address: 0x11cc68 - 0x11cd60
void sub_0011CC68_0x11cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CC68_0x11cc68");
#endif

    switch (ctx->pc) {
        case 0x11cc90u: goto label_11cc90;
        case 0x11ccfcu: goto label_11ccfc;
        case 0x11cd14u: goto label_11cd14;
        case 0x11cd30u: goto label_11cd30;
        case 0x11cd44u: goto label_11cd44;
        default: break;
    }

    ctx->pc = 0x11cc68u;

    // 0x11cc68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11cc6c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11cc70: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11cc74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11cc78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11cc7c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x11cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x11cc80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11cc84: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x11cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x11cc88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cc8c: 0x0  nop
    ctx->pc = 0x11cc8cu;
    // NOP
label_11cc90:
    // 0x11cc90: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x11cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x11cc94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11cc98: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x11cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x11cc9c: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x11cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    // 0x11cca0: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x11cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x11cca4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11cca8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11ccac: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CCACu;
    {
        const bool branch_taken_0x11ccac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCACu;
        // 0x11ccb0: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccac) {
            ctx->pc = 0x11CC90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cc90;
        }
    }
    ctx->pc = 0x11CCB4u;
    // 0x11ccb4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11ccb8: 0x24b1dd40  addiu       $s1, $a1, -0x22C0
    ctx->pc = 0x11ccb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958400));
    // 0x11ccbc: 0x8c43b994  lw          $v1, -0x466C($v0)
    ctx->pc = 0x11ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949268)));
    // 0x11ccc0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11ccc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11ccc8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x11ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x11cccc: 0xaca2dd40  sw          $v0, -0x22C0($a1)
    ctx->pc = 0x11ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294958400), GPR_U32(ctx, 2));
    // 0x11ccd0: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11ccd4: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x11ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x11ccd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ccdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ccdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cce0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11cce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cce4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11cce8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11cce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ccec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11ccecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccf0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ccf4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11CCF4u;
    SET_GPR_U32(ctx, 31, 0x11CCFCu);
    ctx->pc = 0x11CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCF4u;
    // 0x11ccf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11CCF4u, 0x11CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCFCu;
label_11ccfc:
    // 0x11ccfc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CCFCu;
    {
        const bool branch_taken_0x11ccfc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCFCu;
        // 0x11cd00: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccfc) {
            ctx->pc = 0x11CD0Cu;
            goto label_11cd0c;
        }
    }
    ctx->pc = 0x11CD04u;
    // 0x11cd04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11CD04u;
    {
        const bool branch_taken_0x11cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD04u;
        // 0x11cd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd04) {
            ctx->pc = 0x11CD48u;
            goto label_11cd48;
        }
    }
    ctx->pc = 0x11CD0Cu;
label_11cd0c:
    // 0x11cd0c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11CD0Cu;
    SET_GPR_U32(ctx, 31, 0x11CD14u);
    ctx->pc = 0x11CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD0Cu;
    // 0x11cd10: 0xac40b990  sw          $zero, -0x4670($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949264), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11CD0Cu, 0x11CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD14u;
label_11cd14:
    // 0x11cd14: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11cd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11cd18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11cd1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd20: 0x24a5cc20  addiu       $a1, $a1, -0x33E0
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954016));
    // 0x11cd24: 0x34840019  ori         $a0, $a0, 0x19
    ctx->pc = 0x11cd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25);
    // 0x11cd28: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x11CD28u;
    SET_GPR_U32(ctx, 31, 0x11CD30u);
    ctx->pc = 0x11CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD28u;
    // 0x11cd2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF30u, 0x11CD28u, 0x11CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD30u;
label_11cd30:
    // 0x11cd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cd34: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CD34u;
    {
        const bool branch_taken_0x11cd34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cd34) {
            ctx->pc = 0x11CD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CD34u;
            // 0x11cd38: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CD48u;
            goto label_11cd48;
        }
    }
    ctx->pc = 0x11CD3Cu;
    // 0x11cd3c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11CD3Cu;
    SET_GPR_U32(ctx, 31, 0x11CD44u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11CD3Cu, 0x11CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD44u;
label_11cd44:
    // 0x11cd44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_11cd48:
    // 0x11cd48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11cd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cd4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11cd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cd50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11cd50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x11CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD54u;
        // 0x11cd58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CD5Cu;
    // 0x11cd5c: 0x0  nop
    ctx->pc = 0x11cd5cu;
    // NOP
    if (ctx->pc == 0x11cd5cu) { ctx->pc = 0x11cd60u; }
}
