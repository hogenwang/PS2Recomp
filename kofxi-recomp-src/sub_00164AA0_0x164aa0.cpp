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

// Function: sub_00164AA0
// Address: 0x164aa0 - 0x164b80
void sub_00164AA0_0x164aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164AA0_0x164aa0");
#endif

    switch (ctx->pc) {
        case 0x164b0cu: goto label_164b0c;
        case 0x164b34u: goto label_164b34;
        case 0x164b50u: goto label_164b50;
        default: break;
    }

    ctx->pc = 0x164aa0u;

    // 0x164aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x164aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x164aa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x164aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x164aa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x164aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x164aac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x164ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164ab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x164ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164abc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x164abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164ac4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x164ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ac8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164AC8u;
    {
        const bool branch_taken_0x164ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AC8u;
        // 0x164acc: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ac8) {
            ctx->pc = 0x164AE4u;
            goto label_164ae4;
        }
    }
    ctx->pc = 0x164AD0u;
    // 0x164ad0: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x164ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x164ad4: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x164ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x164ad8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x164adc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164ADCu;
    {
        const bool branch_taken_0x164adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ADCu;
        // 0x164ae0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164adc) {
            ctx->pc = 0x164AE8u;
            goto label_164ae8;
        }
    }
    ctx->pc = 0x164AE4u;
label_164ae4:
    // 0x164ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164ae8:
    // 0x164ae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164aec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x164aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164af0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x164af4: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x164af8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x164af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164afc: 0x24a5d450  addiu       $a1, $a1, -0x2BB0
    ctx->pc = 0x164afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956112));
    // 0x164b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x164b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b04: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x164B04u;
    SET_GPR_U32(ctx, 31, 0x164B0Cu);
    ctx->pc = 0x164B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B04u;
    // 0x164b08: 0x2407060c  addiu       $a3, $zero, 0x60C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x164B04u, 0x164B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B0Cu;
label_164b0c:
    // 0x164b0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x164b0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b10: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164B10u;
    {
        const bool branch_taken_0x164b10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b10) {
            ctx->pc = 0x164B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164B10u;
            // 0x164b14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164B18u;
    // 0x164b18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x164B18u;
    {
        const bool branch_taken_0x164b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B18u;
        // 0x164b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b18) {
            ctx->pc = 0x164B54u;
            goto label_164b54;
        }
    }
    ctx->pc = 0x164B20u;
label_164b20:
    // 0x164b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x164b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b24: 0x8e930010  lw          $s3, 0x10($s4)
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x164b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b2c: 0xc05906c  jal         func_1641B0
    ctx->pc = 0x164B2Cu;
    SET_GPR_U32(ctx, 31, 0x164B34u);
    ctx->pc = 0x164B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B2Cu;
    // 0x164b30: 0xae7405dc  sw          $s4, 0x5DC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1500), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1641B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1641B0u, 0x164B2Cu, 0x164B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B34u;
label_164b34:
    // 0x164b34: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x164B34u;
    {
        const bool branch_taken_0x164b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x164b34) {
            ctx->pc = 0x164B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164B34u;
            // 0x164b38: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164B54u;
            goto label_164b54;
        }
    }
    ctx->pc = 0x164B3Cu;
    // 0x164b3c: 0xa67205ec  sh          $s2, 0x5EC($s3)
    ctx->pc = 0x164b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1516), (uint16_t)GPR_U32(ctx, 18));
    // 0x164b40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b48: 0xc0591d0  jal         func_164740
    ctx->pc = 0x164B48u;
    SET_GPR_U32(ctx, 31, 0x164B50u);
    ctx->pc = 0x164B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B48u;
    // 0x164b4c: 0xa67105ee  sh          $s1, 0x5EE($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 1518), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164740u, 0x164B48u, 0x164B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B50u;
label_164b50:
    // 0x164b50: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x164b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_164b54:
    // 0x164b54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x164b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164b58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164b5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164b60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x164B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B6Cu;
        // 0x164b70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B74u;
    // 0x164b74: 0x0  nop
    ctx->pc = 0x164b74u;
    // NOP
    // 0x164b78: 0x0  nop
    ctx->pc = 0x164b78u;
    // NOP
    // 0x164b7c: 0x0  nop
    ctx->pc = 0x164b7cu;
    // NOP
}
