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

// Function: sub_001109F0
// Address: 0x1109f0 - 0x110b50
void sub_001109F0_0x1109f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001109F0_0x1109f0");
#endif

    switch (ctx->pc) {
        case 0x110a00u: goto label_110a00;
        case 0x110a10u: goto label_110a10;
        case 0x110a68u: goto label_110a68;
        case 0x110aa4u: goto label_110aa4;
        case 0x110ad0u: goto label_110ad0;
        case 0x110b0cu: goto label_110b0c;
        default: break;
    }

    ctx->pc = 0x1109f0u;

label_1109f0:
    // 0x1109f0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1109f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1109f4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1109F4u;
    {
        const bool branch_taken_0x1109f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1109f4) {
            ctx->pc = 0x110A34u;
            goto label_110a34;
        }
    }
    ctx->pc = 0x1109FCu;
    // 0x1109fc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_110a00:
    // 0x110a00: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x110A00u;
    {
        const bool branch_taken_0x110a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a00) {
            ctx->pc = 0x110A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A00u;
            // 0x110a04: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A2Cu;
            goto label_110a2c;
        }
    }
    ctx->pc = 0x110A08u;
    // 0x110a08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x110a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110a0c: 0x0  nop
    ctx->pc = 0x110a0cu;
    // NOP
label_110a10:
    // 0x110a10: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110A10u;
    {
        const bool branch_taken_0x110a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x110a10) {
            ctx->pc = 0x110A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A10u;
            // 0x110a14: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A20u;
            goto label_110a20;
        }
    }
    ctx->pc = 0x110A18u;
    // 0x110a18: 0x3e00008  jr          $ra
    ctx->pc = 0x110A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A18u;
        // 0x110a1c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110A20u;
label_110a20:
    // 0x110a20: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x110A20u;
    {
        const bool branch_taken_0x110a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110a20) {
            ctx->pc = 0x110A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A20u;
            // 0x110a24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110a10;
        }
    }
    ctx->pc = 0x110A28u;
    // 0x110a28: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x110a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_110a2c:
    // 0x110a2c: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x110A2Cu;
    {
        const bool branch_taken_0x110a2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x110a2c) {
            ctx->pc = 0x110A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A2Cu;
            // 0x110a30: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110a00;
        }
    }
    ctx->pc = 0x110A34u;
label_110a34:
    // 0x110a34: 0x3e00008  jr          $ra
    ctx->pc = 0x110A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A34u;
        // 0x110a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110A3Cu;
    // 0x110a3c: 0x0  nop
    ctx->pc = 0x110a3cu;
    // NOP
    // 0x110a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110a44: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x110a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110a50: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x110a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x110a54: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x110a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x110a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a60: 0xc04405c  jal         func_110170
    ctx->pc = 0x110A60u;
    SET_GPR_U32(ctx, 31, 0x110A68u);
    ctx->pc = 0x110A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A60u;
    // 0x110a64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110170u, 0x110A60u, 0x110A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A68u;
label_110a68:
    // 0x110a68: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x110a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x110a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a70: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x110a70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x110a74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a78: 0x3e00008  jr          $ra
    ctx->pc = 0x110A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A78u;
        // 0x110a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110A80u;
    // 0x110a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110a84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110a8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x110a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110a98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110a9c: 0xc04418e  jal         func_110638
    ctx->pc = 0x110A9Cu;
    SET_GPR_U32(ctx, 31, 0x110AA4u);
    ctx->pc = 0x110AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A9Cu;
    // 0x110aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x110A9Cu, 0x110AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AA4u;
label_110aa4:
    // 0x110aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x110aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110aa8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x110aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x110aac: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x110aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x110ab0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x110ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x110ab4: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x110ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x110ab8: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x110ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x110abc: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x110abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x110ac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x110ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ac4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x110ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x110ac8: 0xc04427c  jal         func_1109F0
    ctx->pc = 0x110AC8u;
    SET_GPR_U32(ctx, 31, 0x110AD0u);
    ctx->pc = 0x110ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AC8u;
    // 0x110acc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109F0u;
    goto label_1109f0;
    ctx->pc = 0x110AD0u;
label_110ad0:
    // 0x110ad0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x110AD0u;
    {
        const bool branch_taken_0x110ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110ad0) {
            ctx->pc = 0x110AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110AD0u;
            // 0x110ad4: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110AE4u;
            goto label_110ae4;
        }
    }
    ctx->pc = 0x110AD8u;
    // 0x110ad8: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x110ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x110adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110ADCu;
    {
        const bool branch_taken_0x110adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ADCu;
        // 0x110ae0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110adc) {
            ctx->pc = 0x110AECu;
            goto label_110aec;
        }
    }
    ctx->pc = 0x110AE4u;
label_110ae4:
    // 0x110ae4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x110ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x110ae8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x110ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_110aec:
    // 0x110aec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110af4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x110af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x110af8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x110af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x110afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b04: 0xc04405c  jal         func_110170
    ctx->pc = 0x110B04u;
    SET_GPR_U32(ctx, 31, 0x110B0Cu);
    ctx->pc = 0x110B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B04u;
    // 0x110b08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110170u, 0x110B04u, 0x110B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B0Cu;
label_110b0c:
    // 0x110b0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x110B0Cu;
    {
        const bool branch_taken_0x110b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B0Cu;
        // 0x110b10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b0c) {
            ctx->pc = 0x110B38u;
            goto label_110b38;
        }
    }
    ctx->pc = 0x110B14u;
    // 0x110b14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x110b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b18: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x110b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x110b1c: 0x24a50a40  addiu       $a1, $a1, 0xA40
    ctx->pc = 0x110b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2624));
    // 0x110b20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110b24: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x110b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x110b28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b30: 0x8046330  j           func_118CC0
    ctx->pc = 0x110B30u;
    ctx->pc = 0x110B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B30u;
    // 0x110b34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x110B30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x110B38u;
label_110b38:
    // 0x110b38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110b3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b44: 0x3e00008  jr          $ra
    ctx->pc = 0x110B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B44u;
        // 0x110b48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B4Cu;
    // 0x110b4c: 0x0  nop
    ctx->pc = 0x110b4cu;
    // NOP
}
