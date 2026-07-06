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

// Function: sub_002E51A0
// Address: 0x2e51a0 - 0x2e52a8
void sub_002E51A0_0x2e51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E51A0_0x2e51a0");
#endif

    switch (ctx->pc) {
        case 0x2e51e0u: goto label_2e51e0;
        case 0x2e51ecu: goto label_2e51ec;
        case 0x2e5200u: goto label_2e5200;
        case 0x2e522cu: goto label_2e522c;
        case 0x2e524cu: goto label_2e524c;
        case 0x2e525cu: goto label_2e525c;
        default: break;
    }

    ctx->pc = 0x2e51a0u;

    // 0x2e51a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e51a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e51a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e51a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e51a8: 0x3c1401ca  lui         $s4, 0x1CA
    ctx->pc = 0x2e51a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)458 << 16));
    // 0x2e51ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e51acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e51b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e51b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e51b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51b8: 0x8e824dc0  lw          $v0, 0x4DC0($s4)
    ctx->pc = 0x2e51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19904)));
    // 0x2e51bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e51bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e51c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e51c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e51c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E51C8u;
    {
        const bool branch_taken_0x2e51c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51C8u;
        // 0x2e51cc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51c8) {
            ctx->pc = 0x2E5224u;
            goto label_2e5224;
        }
    }
    ctx->pc = 0x2E51D0u;
    // 0x2e51d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e51d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51d4: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x2e51d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e51d8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e51d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51dc: 0x0  nop
    ctx->pc = 0x2e51dcu;
    // NOP
label_2e51e0:
    // 0x2e51e0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2e51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2e51e4: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2E51E4u;
    SET_GPR_U32(ctx, 31, 0x2E51ECu);
    ctx->pc = 0x2E51E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51E4u;
    // 0x2e51e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2E51E4u, 0x2E51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51ECu;
label_2e51ec:
    // 0x2e51ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E51ECu;
    {
        const bool branch_taken_0x2e51ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e51ec) {
            ctx->pc = 0x2E51F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E51ECu;
            // 0x2e51f0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E521Cu;
            goto label_2e521c;
        }
    }
    ctx->pc = 0x2E51F4u;
    // 0x2e51f4: 0x26040108  addiu       $a0, $s0, 0x108
    ctx->pc = 0x2e51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x2e51f8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2E51F8u;
    SET_GPR_U32(ctx, 31, 0x2E5200u);
    ctx->pc = 0x2E51FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51F8u;
    // 0x2e51fc: 0x26250104  addiu       $a1, $s1, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2E51F8u, 0x2E5200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5200u;
label_2e5200:
    // 0x2e5200: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5200u;
    {
        const bool branch_taken_0x2e5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5200) {
            ctx->pc = 0x2E5204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5200u;
            // 0x2e5204: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E521Cu;
            goto label_2e521c;
        }
    }
    ctx->pc = 0x2E5208u;
    // 0x2e5208: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e5208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e520c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5210: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E5210u;
    {
        const bool branch_taken_0x2e5210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5210u;
        // 0x2e5214: 0x2402ffe7  addiu       $v0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5210) {
            ctx->pc = 0x2E5284u;
            goto label_2e5284;
        }
    }
    ctx->pc = 0x2E5218u;
    // 0x2e5218: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2e5218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e521c:
    // 0x2e521c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E521Cu;
    {
        const bool branch_taken_0x2e521c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e521c) {
            ctx->pc = 0x2E5220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E521Cu;
            // 0x2e5220: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E51E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e51e0;
        }
    }
    ctx->pc = 0x2E5224u;
label_2e5224:
    // 0x2e5224: 0xc098552  jal         func_261548
    ctx->pc = 0x2E5224u;
    SET_GPR_U32(ctx, 31, 0x2E522Cu);
    ctx->pc = 0x2E5228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5224u;
    // 0x2e5228: 0x24040218  addiu       $a0, $zero, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2E5224u, 0x2E522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E522Cu;
label_2e522c:
    // 0x2e522c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5230: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5230u;
    {
        const bool branch_taken_0x2e5230 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5230u;
        // 0x2e5234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5230) {
            ctx->pc = 0x2E5240u;
            goto label_2e5240;
        }
    }
    ctx->pc = 0x2E5238u;
    // 0x2e5238: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5238u;
    {
        const bool branch_taken_0x2e5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5238u;
        // 0x2e523c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5238) {
            ctx->pc = 0x2E5284u;
            goto label_2e5284;
        }
    }
    ctx->pc = 0x2E5240u;
label_2e5240:
    // 0x2e5240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5244: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E5244u;
    SET_GPR_U32(ctx, 31, 0x2E524Cu);
    ctx->pc = 0x2E5248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5244u;
    // 0x2e5248: 0x24060218  addiu       $a2, $zero, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E5244u, 0x2E524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E524Cu;
label_2e524c:
    // 0x2e524c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5250: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2e5250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e5254: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E5254u;
    SET_GPR_U32(ctx, 31, 0x2E525Cu);
    ctx->pc = 0x2E5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5254u;
    // 0x2e5258: 0x24060214  addiu       $a2, $zero, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E5254u, 0x2E525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E525Cu;
label_2e525c:
    // 0x2e525c: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E525Cu;
    {
        const bool branch_taken_0x2e525c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e525c) {
            ctx->pc = 0x2E5260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E525Cu;
            // 0x2e5260: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5278u;
            goto label_2e5278;
        }
    }
    ctx->pc = 0x2E5264u;
    // 0x2e5264: 0x8e824dc0  lw          $v0, 0x4DC0($s4)
    ctx->pc = 0x2e5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19904)));
    // 0x2e5268: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e5268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e526c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E526Cu;
    {
        const bool branch_taken_0x2e526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E526Cu;
        // 0x2e5270: 0xae904dc0  sw          $s0, 0x4DC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 19904), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e526c) {
            ctx->pc = 0x2E5280u;
            goto label_2e5280;
        }
    }
    ctx->pc = 0x2E5274u;
    // 0x2e5274: 0x0  nop
    ctx->pc = 0x2e5274u;
    // NOP
label_2e5278:
    // 0x2e5278: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e5278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e527c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2e527cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_2e5280:
    // 0x2e5280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5284:
    // 0x2e5284: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5288: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e5288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e528c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5290: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5294: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e529c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E529Cu;
        // 0x2e52a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E529Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E52A4u;
    // 0x2e52a4: 0x0  nop
    ctx->pc = 0x2e52a4u;
    // NOP
}
