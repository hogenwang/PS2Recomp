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

// Function: sub_0021EC38
// Address: 0x21ec38 - 0x21eda0
void sub_0021EC38_0x21ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EC38_0x21ec38");
#endif

    switch (ctx->pc) {
        case 0x21ec98u: goto label_21ec98;
        case 0x21ec9cu: goto label_21ec9c;
        case 0x21ecf0u: goto label_21ecf0;
        case 0x21ed34u: goto label_21ed34;
        case 0x21ed58u: goto label_21ed58;
        case 0x21ed64u: goto label_21ed64;
        case 0x21ed6cu: goto label_21ed6c;
        case 0x21ed98u: goto label_21ed98;
        default: break;
    }

    ctx->pc = 0x21ec38u;

    // 0x21ec38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ec3c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ec3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ec40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ec44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ec48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21ec4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ec4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21ec54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21ec5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21ec5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ec64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21ec64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21ec6c: 0x8deec25c  lw          $t6, -0x3DA4($t7)
    ctx->pc = 0x21ec6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951516)));
    // 0x21ec70: 0x240f0011  addiu       $t7, $zero, 0x11
    ctx->pc = 0x21ec70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x21ec74: 0x15cf0012  bne         $t6, $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x21EC74u;
    {
        const bool branch_taken_0x21ec74 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x21EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC74u;
        // 0x21ec78: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec74) {
            ctx->pc = 0x21ECC0u;
            goto label_21ecc0;
        }
    }
    ctx->pc = 0x21EC7Cu;
    // 0x21ec7c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ec80: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ec80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ec84: 0x24841ea0  addiu       $a0, $a0, 0x1EA0
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7840));
    // 0x21ec88: 0x24e71eb0  addiu       $a3, $a3, 0x1EB0
    ctx->pc = 0x21ec88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7856));
    // 0x21ec8c: 0x24050251  addiu       $a1, $zero, 0x251
    ctx->pc = 0x21ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x21ec90: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EC90u;
    SET_GPR_U32(ctx, 31, 0x21EC98u);
    ctx->pc = 0x21EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC90u;
    // 0x21ec94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21EC90u, 0x21EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC98u;
label_21ec98:
    // 0x21ec98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21ec9c:
    // 0x21ec9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ec9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21eca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21eca4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21eca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eca8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21eca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ecac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21ecacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ecb0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21ecb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ecb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21ecb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x21ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB8u;
        // 0x21ecbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ECC0u;
label_21ecc0:
    // 0x21ecc0: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x21ecc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21ecc4: 0x11cf000c  beq         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x21ECC4u;
    {
        const bool branch_taken_0x21ecc4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x21ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECC4u;
        // 0x21ecc8: 0x240f0012  addiu       $t7, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecc4) {
            ctx->pc = 0x21ECF8u;
            goto label_21ecf8;
        }
    }
    ctx->pc = 0x21ECCCu;
    // 0x21eccc: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x21ECCCu;
    {
        const bool branch_taken_0x21eccc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x21ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECCCu;
        // 0x21ecd0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eccc) {
            ctx->pc = 0x21ECF8u;
            goto label_21ecf8;
        }
    }
    ctx->pc = 0x21ECD4u;
    // 0x21ecd4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ecd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ecd8: 0x24841ea0  addiu       $a0, $a0, 0x1EA0
    ctx->pc = 0x21ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7840));
    // 0x21ecdc: 0x24e71ee0  addiu       $a3, $a3, 0x1EE0
    ctx->pc = 0x21ecdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7904));
    // 0x21ece0: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x21ece0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ece4: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x21ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x21ece8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21ECE8u;
    SET_GPR_U32(ctx, 31, 0x21ECF0u);
    ctx->pc = 0x21ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECE8u;
    // 0x21ecec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21ECE8u, 0x21ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECF0u;
label_21ecf0:
    // 0x21ecf0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x21ECF0u;
    {
        const bool branch_taken_0x21ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF0u;
        // 0x21ecf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf0) {
            ctx->pc = 0x21EC9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ec9c;
        }
    }
    ctx->pc = 0x21ECF8u;
label_21ecf8:
    // 0x21ecf8: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x21ECF8u;
    {
        const bool branch_taken_0x21ecf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF8u;
        // 0x21ecfc: 0x3c0f0022  lui         $t7, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf8) {
            ctx->pc = 0x21ED04u;
            goto label_21ed04;
        }
    }
    ctx->pc = 0x21ED00u;
    // 0x21ed00: 0x25f3e230  addiu       $s3, $t7, -0x1DD0
    ctx->pc = 0x21ed00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959664));
label_21ed04:
    // 0x21ed04: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x21ED04u;
    {
        const bool branch_taken_0x21ed04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED04u;
        // 0x21ed08: 0x3c0f0022  lui         $t7, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed04) {
            ctx->pc = 0x21ED10u;
            goto label_21ed10;
        }
    }
    ctx->pc = 0x21ED0Cu;
    // 0x21ed0c: 0x25f4e258  addiu       $s4, $t7, -0x1DA8
    ctx->pc = 0x21ed0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959704));
label_21ed10:
    // 0x21ed10: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ED10u;
    {
        const bool branch_taken_0x21ed10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED10u;
        // 0x21ed14: 0x240e000f  addiu       $t6, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed10) {
            ctx->pc = 0x21ED20u;
            goto label_21ed20;
        }
    }
    ctx->pc = 0x21ED18u;
    // 0x21ed18: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x21ed18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x21ed1c: 0x25f5e288  addiu       $s5, $t7, -0x1D78
    ctx->pc = 0x21ed1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959752));
label_21ed20:
    // 0x21ed20: 0x240f2000  addiu       $t7, $zero, 0x2000
    ctx->pc = 0x21ed20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x21ed24: 0x1d1880a  movz        $s1, $t6, $s1
    ctx->pc = 0x21ed24u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 14));
    // 0x21ed28: 0x1f2900a  movz        $s2, $t7, $s2
    ctx->pc = 0x21ed28u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x21ed2c: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x21ED2Cu;
    SET_GPR_U32(ctx, 31, 0x21ED34u);
    ctx->pc = 0x21ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED2Cu;
    // 0x21ed30: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x21ED2Cu, 0x21ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED34u;
label_21ed34:
    // 0x21ed34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ed34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ed38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed3c: 0xade2c260  sw          $v0, -0x3DA0($t7)
    ctx->pc = 0x21ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294951520), GPR_U32(ctx, 2));
    // 0x21ed40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21ed40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21ed44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed48: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x21ed48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21ed4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed50: 0xc089a1c  jal         func_226870
    ctx->pc = 0x21ED50u;
    SET_GPR_U32(ctx, 31, 0x21ED58u);
    ctx->pc = 0x21ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED50u;
    // 0x21ed54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226870u, 0x21ED50u, 0x21ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED58u;
label_21ed58:
    // 0x21ed58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21ed58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed5c: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x21ED5Cu;
    SET_GPR_U32(ctx, 31, 0x21ED64u);
    ctx->pc = 0x21ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED5Cu;
    // 0x21ed60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x21ED5Cu, 0x21ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED64u;
label_21ed64:
    // 0x21ed64: 0xc087bcc  jal         func_21EF30
    ctx->pc = 0x21ED64u;
    SET_GPR_U32(ctx, 31, 0x21ED6Cu);
    ctx->pc = 0x21EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF30u, 0x21ED64u, 0x21ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED6Cu;
label_21ed6c:
    // 0x21ed6c: 0x240e0011  addiu       $t6, $zero, 0x11
    ctx->pc = 0x21ed6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x21ed70: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ed70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ed74: 0xadeec25c  sw          $t6, -0x3DA4($t7)
    ctx->pc = 0x21ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294951516), GPR_U32(ctx, 14));
    // 0x21ed78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ed7c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ed7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ed80: 0x24841ea0  addiu       $a0, $a0, 0x1EA0
    ctx->pc = 0x21ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7840));
    // 0x21ed84: 0x24e71f10  addiu       $a3, $a3, 0x1F10
    ctx->pc = 0x21ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7952));
    // 0x21ed88: 0x2405028a  addiu       $a1, $zero, 0x28A
    ctx->pc = 0x21ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x21ed8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed90: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21ED90u;
    SET_GPR_U32(ctx, 31, 0x21ED98u);
    ctx->pc = 0x21ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED90u;
    // 0x21ed94: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21ED90u, 0x21ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED98u;
label_21ed98:
    // 0x21ed98: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x21ED98u;
    {
        const bool branch_taken_0x21ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED98u;
        // 0x21ed9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed98) {
            ctx->pc = 0x21EC9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ec9c;
        }
    }
    ctx->pc = 0x21EDA0u;
}
