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

// Function: sub_00234D80
// Address: 0x234d80 - 0x234e70
void sub_00234D80_0x234d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234D80_0x234d80");
#endif

    switch (ctx->pc) {
        case 0x234db0u: goto label_234db0;
        case 0x234dd0u: goto label_234dd0;
        case 0x234decu: goto label_234dec;
        case 0x234e24u: goto label_234e24;
        default: break;
    }

    ctx->pc = 0x234d80u;

    // 0x234d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234d84: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234d88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x234d8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x234d90: 0x8c51fcd0  lw          $s1, -0x330($v0)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x234d94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x234d9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x234d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x234da0: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x234DA0u;
    {
        const bool branch_taken_0x234da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DA0u;
        // 0x234da4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234da0) {
            ctx->pc = 0x234E4Cu;
            goto label_234e4c;
        }
    }
    ctx->pc = 0x234DA8u;
    // 0x234da8: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x234da8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
    // 0x234dac: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x234dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_234db0:
    // 0x234db0: 0x266243b0  addiu       $v0, $s3, 0x43B0
    ctx->pc = 0x234db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 17328));
    // 0x234db4: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x234DB4u;
    {
        const bool branch_taken_0x234db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x234db4) {
            ctx->pc = 0x234DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DB4u;
            // 0x234db8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E44u;
            goto label_234e44;
        }
    }
    ctx->pc = 0x234DBCu;
    // 0x234dbc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x234dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x234dc0: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x234DC0u;
    {
        const bool branch_taken_0x234dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234dc0) {
            ctx->pc = 0x234DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DC0u;
            // 0x234dc4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E44u;
            goto label_234e44;
        }
    }
    ctx->pc = 0x234DC8u;
    // 0x234dc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x234dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234dcc: 0x0  nop
    ctx->pc = 0x234dccu;
    // NOP
label_234dd0:
    // 0x234dd0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x234dd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x234dd4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x234dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x234dd8: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x234DD8u;
    {
        const bool branch_taken_0x234dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x234dd8) {
            ctx->pc = 0x234DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DD8u;
            // 0x234ddc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E38u;
            goto label_234e38;
        }
    }
    ctx->pc = 0x234DE0u;
    // 0x234de0: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x234de0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x234de4: 0xc048c5e  jal         func_123178
    ctx->pc = 0x234DE4u;
    SET_GPR_U32(ctx, 31, 0x234DECu);
    ctx->pc = 0x234DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DE4u;
    // 0x234de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x234DE4u, 0x234DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DECu;
label_234dec:
    // 0x234dec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x234DECu;
    {
        const bool branch_taken_0x234dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DECu;
        // 0x234df0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dec) {
            ctx->pc = 0x234E50u;
            goto label_234e50;
        }
    }
    ctx->pc = 0x234DF4u;
    // 0x234df4: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x234df4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x234df8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x234df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x234dfc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x234DFCu;
    {
        const bool branch_taken_0x234dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234dfc) {
            ctx->pc = 0x234E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DFCu;
            // 0x234e00: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E38u;
            goto label_234e38;
        }
    }
    ctx->pc = 0x234E04u;
    // 0x234e04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x234e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234e08: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x234E08u;
    {
        const bool branch_taken_0x234e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e08) {
            ctx->pc = 0x234E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E08u;
            // 0x234e0c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E38u;
            goto label_234e38;
        }
    }
    ctx->pc = 0x234E10u;
    // 0x234e10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x234e10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x234e14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x234E14u;
    {
        const bool branch_taken_0x234e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E14u;
        // 0x234e18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e14) {
            ctx->pc = 0x234E34u;
            goto label_234e34;
        }
    }
    ctx->pc = 0x234E1Cu;
    // 0x234e1c: 0xc048c5e  jal         func_123178
    ctx->pc = 0x234E1Cu;
    SET_GPR_U32(ctx, 31, 0x234E24u);
    ctx->pc = 0x234E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E1Cu;
    // 0x234e20: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x234E1Cu, 0x234E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E24u;
label_234e24:
    // 0x234e24: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x234E24u;
    {
        const bool branch_taken_0x234e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234e24) {
            ctx->pc = 0x234E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E24u;
            // 0x234e28: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E38u;
            goto label_234e38;
        }
    }
    ctx->pc = 0x234E2Cu;
    // 0x234e2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x234E2Cu;
    {
        const bool branch_taken_0x234e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E2Cu;
        // 0x234e30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e2c) {
            ctx->pc = 0x234E50u;
            goto label_234e50;
        }
    }
    ctx->pc = 0x234E34u;
label_234e34:
    // 0x234e34: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x234e34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_234e38:
    // 0x234e38: 0x5600ffe5  bnel        $s0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x234E38u;
    {
        const bool branch_taken_0x234e38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x234e38) {
            ctx->pc = 0x234E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E38u;
            // 0x234e3c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234dd0;
        }
    }
    ctx->pc = 0x234E40u;
    // 0x234e40: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x234e40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_234e44:
    // 0x234e44: 0x5620ffda  bnel        $s1, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x234E44u;
    {
        const bool branch_taken_0x234e44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x234e44) {
            ctx->pc = 0x234E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E44u;
            // 0x234e48: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234db0;
        }
    }
    ctx->pc = 0x234E4Cu;
label_234e4c:
    // 0x234e4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234e50:
    // 0x234e50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234e54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x234e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234e58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x234e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234e5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x234e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234e64: 0x3e00008  jr          $ra
    ctx->pc = 0x234E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E64u;
        // 0x234e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234E6Cu;
    // 0x234e6c: 0x0  nop
    ctx->pc = 0x234e6cu;
    // NOP
    if (ctx->pc == 0x234e6cu) { ctx->pc = 0x234e70u; }
}
