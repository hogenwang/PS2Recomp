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

// Function: sub_00127DA8
// Address: 0x127da8 - 0x127f28
void sub_00127DA8_0x127da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127DA8_0x127da8");
#endif

    switch (ctx->pc) {
        case 0x127dd8u: goto label_127dd8;
        case 0x127de8u: goto label_127de8;
        case 0x127df4u: goto label_127df4;
        case 0x127e34u: goto label_127e34;
        case 0x127e60u: goto label_127e60;
        case 0x127eb8u: goto label_127eb8;
        case 0x127f00u: goto label_127f00;
        default: break;
    }

    ctx->pc = 0x127da8u;

    // 0x127da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127dac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127db0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127db4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127db8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x127db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x127dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x127dc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x127dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dcc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x127dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dd0: 0xc049f50  jal         func_127D40
    ctx->pc = 0x127DD0u;
    SET_GPR_U32(ctx, 31, 0x127DD8u);
    ctx->pc = 0x127DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127DD0u;
    // 0x127dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x127DD0u, 0x127DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DD8u;
label_127dd8:
    // 0x127dd8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x127DD8u;
    {
        const bool branch_taken_0x127dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DD8u;
        // 0x127ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127dd8) {
            ctx->pc = 0x127E10u;
            goto label_127e10;
        }
    }
    ctx->pc = 0x127DE0u;
    // 0x127de0: 0xc049d12  jal         func_127448
    ctx->pc = 0x127DE0u;
    SET_GPR_U32(ctx, 31, 0x127DE8u);
    ctx->pc = 0x127DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127DE0u;
    // 0x127de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x127DE0u, 0x127DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DE8u;
label_127de8:
    // 0x127de8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x127de8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127dec: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x127decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x127df0: 0xac4f0010  sw          $t7, 0x10($v0)
    ctx->pc = 0x127df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
label_127df4:
    // 0x127df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127df8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127dfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127e00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x127e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127e08: 0x3e00008  jr          $ra
    ctx->pc = 0x127E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E08u;
        // 0x127e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127E10u;
label_127e10:
    // 0x127e10: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127E10u;
    {
        const bool branch_taken_0x127e10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x127E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E10u;
        // 0x127e14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e10) {
            ctx->pc = 0x127E28u;
            goto label_127e28;
        }
    }
    ctx->pc = 0x127E18u;
    // 0x127e18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x127e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x127e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127e20: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x127e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127e28:
    // 0x127e28: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x127e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x127e2c: 0xc049d12  jal         func_127448
    ctx->pc = 0x127E2Cu;
    SET_GPR_U32(ctx, 31, 0x127E34u);
    ctx->pc = 0x127E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E2Cu;
    // 0x127e30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x127E2Cu, 0x127E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E34u;
label_127e34:
    // 0x127e34: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x127e34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x127e38: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x127e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x127e3c: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x127e3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x127e40: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x127e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x127e44: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x127e44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x127e48: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x127e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x127e4c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x127e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x127e50: 0x8e3821  addu        $a3, $a0, $t6
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x127e54: 0xaf4021  addu        $t0, $a1, $t7
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x127e58: 0x244a0014  addiu       $t2, $v0, 0x14
    ctx->pc = 0x127e58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x127e5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x127e5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127e60:
    // 0x127e60: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x127e60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127e64: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127e68: 0x31aeffff  andi        $t6, $t5, 0xFFFF
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x127e6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x127e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x127e70: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x127e70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x127e74: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x127e78: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x127e7c: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x127e80: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x127e80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x127e84: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x127e84u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x127e88: 0xe5c03  sra         $t3, $t6, 16
    ctx->pc = 0x127e88u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 14), 16));
    // 0x127e8c: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x127e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x127e90: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x127e90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x127e94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x127e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x127e98: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x127e98u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x127e9c: 0xd5c03  sra         $t3, $t5, 16
    ctx->pc = 0x127e9cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 13), 16));
    // 0x127ea0: 0xa8782b  sltu        $t7, $a1, $t0
    ctx->pc = 0x127ea0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x127ea4: 0x15e0ffee  bnez        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x127EA4u;
    {
        const bool branch_taken_0x127ea4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EA4u;
        // 0x127ea8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ea4) {
            ctx->pc = 0x127E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127e60;
        }
    }
    ctx->pc = 0x127EACu;
    // 0x127eac: 0x87782b  sltu        $t7, $a0, $a3
    ctx->pc = 0x127eacu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127eb0: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x127EB0u;
    {
        const bool branch_taken_0x127eb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EB0u;
        // 0x127eb4: 0x140702d  daddu       $t6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127eb0) {
            ctx->pc = 0x127EF0u;
            goto label_127ef0;
        }
    }
    ctx->pc = 0x127EB8u;
label_127eb8:
    // 0x127eb8: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x127eb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127ebc: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x127ebcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x127ec0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x127ec4: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x127ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x127ec8: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x127ec8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x127ecc: 0xe5c03  sra         $t3, $t6, 16
    ctx->pc = 0x127eccu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 14), 16));
    // 0x127ed0: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x127ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x127ed4: 0x1eb6821  addu        $t5, $t7, $t3
    ctx->pc = 0x127ed4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x127ed8: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x127ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x127edc: 0x87702b  sltu        $t6, $a0, $a3
    ctx->pc = 0x127edcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127ee0: 0xd5c03  sra         $t3, $t5, 16
    ctx->pc = 0x127ee0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 13), 16));
    // 0x127ee4: 0x15c0fff4  bnez        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x127EE4u;
    {
        const bool branch_taken_0x127ee4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x127EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE4u;
        // 0x127ee8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ee4) {
            ctx->pc = 0x127EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127eb8;
        }
    }
    ctx->pc = 0x127EECu;
    // 0x127eec: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x127eecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_127ef0:
    // 0x127ef0: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x127ef4: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x127ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x127ef8: 0x55e0ffbe  bnel        $t7, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x127EF8u;
    {
        const bool branch_taken_0x127ef8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x127ef8) {
            ctx->pc = 0x127EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127EF8u;
            // 0x127efc: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127df4;
        }
    }
    ctx->pc = 0x127F00u;
label_127f00:
    // 0x127f00: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x127f00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x127f04: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x127f04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x127f08: 0x0  nop
    ctx->pc = 0x127f08u;
    // NOP
    // 0x127f0c: 0x0  nop
    ctx->pc = 0x127f0cu;
    // NOP
    // 0x127f10: 0x0  nop
    ctx->pc = 0x127f10u;
    // NOP
    // 0x127f14: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127F14u;
    {
        const bool branch_taken_0x127f14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F14u;
        // 0x127f18: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f14) {
            ctx->pc = 0x127F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127f00;
        }
    }
    ctx->pc = 0x127F1Cu;
    // 0x127f1c: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x127F1Cu;
    {
        const bool branch_taken_0x127f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F1Cu;
        // 0x127f20: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f1c) {
            ctx->pc = 0x127DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127df4;
        }
    }
    ctx->pc = 0x127F24u;
    // 0x127f24: 0x0  nop
    ctx->pc = 0x127f24u;
    // NOP
    if (ctx->pc == 0x127f24u) { ctx->pc = 0x127f28u; }
}
