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

// Function: sub_0021AC08
// Address: 0x21ac08 - 0x21af30
void sub_0021AC08_0x21ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AC08_0x21ac08");
#endif

    switch (ctx->pc) {
        case 0x21ac24u: goto label_21ac24;
        case 0x21ac34u: goto label_21ac34;
        case 0x21acb4u: goto label_21acb4;
        case 0x21acccu: goto label_21accc;
        case 0x21ad08u: goto label_21ad08;
        case 0x21ad18u: goto label_21ad18;
        case 0x21ad58u: goto label_21ad58;
        case 0x21ad68u: goto label_21ad68;
        case 0x21adb4u: goto label_21adb4;
        case 0x21adf0u: goto label_21adf0;
        case 0x21ae84u: goto label_21ae84;
        case 0x21ae9cu: goto label_21ae9c;
        case 0x21aec8u: goto label_21aec8;
        case 0x21aed4u: goto label_21aed4;
        case 0x21aefcu: goto label_21aefc;
        case 0x21af04u: goto label_21af04;
        default: break;
    }

    ctx->pc = 0x21ac08u;

label_21ac08:
    // 0x21ac08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ac0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ac10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ac14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ac14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ac1c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AC1Cu;
    SET_GPR_U32(ctx, 31, 0x21AC24u);
    ctx->pc = 0x21AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC1Cu;
    // 0x21ac20: 0x24841510  addiu       $a0, $a0, 0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21AC1Cu, 0x21AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC24u;
label_21ac24:
    // 0x21ac24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ac28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ac2c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AC2Cu;
    SET_GPR_U32(ctx, 31, 0x21AC34u);
    ctx->pc = 0x21AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC2Cu;
    // 0x21ac30: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21AC2Cu, 0x21AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC34u;
label_21ac34:
    // 0x21ac34: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ac38: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ac3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ac3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ac40: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21ac44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ac44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ac48: 0x8043e52  j           func_10F948
    ctx->pc = 0x21AC48u;
    ctx->pc = 0x21AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC48u;
    // 0x21ac4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21AC50u;
    // 0x21ac50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21ac54: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21ac54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ac58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21ac5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ac60: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21ac60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21ac64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21ac68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ac6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ac6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21ac74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ac74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac78: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21ac7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21ac7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac80: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21ac84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ac88: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21ac8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21ac8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac90: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21ac94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21ac94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac98: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21ac9c: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x21ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x21aca0: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x21aca0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21aca4: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21aca8: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x21aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x21acac: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21ACACu;
    SET_GPR_U32(ctx, 31, 0x21ACB4u);
    ctx->pc = 0x21ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACACu;
    // 0x21acb0: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21ACACu, 0x21ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACB4u;
label_21acb4:
    // 0x21acb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21acb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acbc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21acc0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21acc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acc4: 0xc084520  jal         func_211480
    ctx->pc = 0x21ACC4u;
    SET_GPR_U32(ctx, 31, 0x21ACCCu);
    ctx->pc = 0x21ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACC4u;
    // 0x21acc8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21ACC4u, 0x21ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACCCu;
label_21accc:
    // 0x21accc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21acccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21acd0: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x21acd0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21acd4: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21ACD4u;
    {
        const bool branch_taken_0x21acd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACD4u;
        // 0x21acd8: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acd4) {
            ctx->pc = 0x21ADF4u;
            goto label_21adf4;
        }
    }
    ctx->pc = 0x21ACDCu;
    // 0x21acdc: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ACDCu;
    {
        const bool branch_taken_0x21acdc = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21acdc) {
            ctx->pc = 0x21ACECu;
            goto label_21acec;
        }
    }
    ctx->pc = 0x21ACE4u;
    // 0x21ace4: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21ace8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21acec:
    // 0x21acec: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x21ACECu;
    {
        const bool branch_taken_0x21acec = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACECu;
        // 0x21acf0: 0x29cf0032  slti        $t7, $t6, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acec) {
            ctx->pc = 0x21ADA0u;
            goto label_21ada0;
        }
    }
    ctx->pc = 0x21ACF4u;
    // 0x21acf4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acf8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21acfc: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21ad00: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21ad00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad04: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x21ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_21ad08:
    // 0x21ad08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad10: 0xc084e44  jal         func_213910
    ctx->pc = 0x21AD10u;
    SET_GPR_U32(ctx, 31, 0x21AD18u);
    ctx->pc = 0x21AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD10u;
    // 0x21ad14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213910u, 0x21AD10u, 0x21AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD18u;
label_21ad18:
    // 0x21ad18: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21AD18u;
    {
        const bool branch_taken_0x21ad18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD18u;
        // 0x21ad1c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad18) {
            ctx->pc = 0x21ADF4u;
            goto label_21adf4;
        }
    }
    ctx->pc = 0x21AD20u;
    // 0x21ad20: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x21ad24: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x21AD24u;
    {
        const bool branch_taken_0x21ad24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD24u;
        // 0x21ad28: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad24) {
            ctx->pc = 0x21AD8Cu;
            goto label_21ad8c;
        }
    }
    ctx->pc = 0x21AD2Cu;
    // 0x21ad2c: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x21ad2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21ad30: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21ad30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21ad34: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x21AD34u;
    {
        const bool branch_taken_0x21ad34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD34u;
        // 0x21ad38: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad34) {
            ctx->pc = 0x21AE28u;
            goto label_21ae28;
        }
    }
    ctx->pc = 0x21AD3Cu;
    // 0x21ad3c: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21ad3cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21ad40: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21ad40u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21ad44: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21ad48: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x21ad4c: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x21ad4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21ad50: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21ad50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ad54: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21ad54u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21ad58:
    // 0x21ad58: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21ad58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21ad5c: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x21AD5Cu;
    {
        const bool branch_taken_0x21ad5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x21ad5c) {
            ctx->pc = 0x21AD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AD5Cu;
            // 0x21ad60: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AD88u;
            goto label_21ad88;
        }
    }
    ctx->pc = 0x21AD64u;
    // 0x21ad64: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21ad64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21ad68:
    // 0x21ad68: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ad6c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21ad6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21ad70: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21ad70u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ad74: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21ad78: 0x0  nop
    ctx->pc = 0x21ad78u;
    // NOP
    // 0x21ad7c: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21AD7Cu;
    {
        const bool branch_taken_0x21ad7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD7Cu;
        // 0x21ad80: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad7c) {
            ctx->pc = 0x21AD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ad68;
        }
    }
    ctx->pc = 0x21AD84u;
    // 0x21ad84: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_21ad88:
    // 0x21ad88: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21ad8c:
    // 0x21ad8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ad8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ad90: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x21ad90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21ad94: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21AD94u;
    {
        const bool branch_taken_0x21ad94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad94) {
            ctx->pc = 0x21AD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AD94u;
            // 0x21ad98: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ad08;
        }
    }
    ctx->pc = 0x21AD9Cu;
    // 0x21ad9c: 0x29cf0032  slti        $t7, $t6, 0x32
    ctx->pc = 0x21ad9cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
label_21ada0:
    // 0x21ada0: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21ADA0u;
    {
        const bool branch_taken_0x21ada0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADA0u;
        // 0x21ada4: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ada0) {
            ctx->pc = 0x21ADD8u;
            goto label_21add8;
        }
    }
    ctx->pc = 0x21ADA8u;
    // 0x21ada8: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21ada8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x21adac: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21adacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21adb0: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x21adb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21adb4:
    // 0x21adb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21adb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21adb8: 0x25ad02a0  addiu       $t5, $t5, 0x2A0
    ctx->pc = 0x21adb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 672));
    // 0x21adbc: 0x2a2f0032  slti        $t7, $s1, 0x32
    ctx->pc = 0x21adbcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x21adc0: 0x0  nop
    ctx->pc = 0x21adc0u;
    // NOP
    // 0x21adc4: 0x0  nop
    ctx->pc = 0x21adc4u;
    // NOP
    // 0x21adc8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21ADC8u;
    {
        const bool branch_taken_0x21adc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADC8u;
        // 0x21adcc: 0x25ce02a0  addiu       $t6, $t6, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adc8) {
            ctx->pc = 0x21ADB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21adb4;
        }
    }
    ctx->pc = 0x21ADD0u;
    // 0x21add0: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x21add0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21add4: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21add4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21add8:
    // 0x21add8: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21add8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21addc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21addcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ade0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21ade4: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21ade8: 0xc086b02  jal         func_21AC08
    ctx->pc = 0x21ADE8u;
    SET_GPR_U32(ctx, 31, 0x21ADF0u);
    ctx->pc = 0x21ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ADE8u;
    // 0x21adec: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC08u;
    goto label_21ac08;
    ctx->pc = 0x21ADF0u;
label_21adf0:
    // 0x21adf0: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x21adf0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21adf4:
    // 0x21adf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21adf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21adf8: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21adf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21adfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ae00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ae00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ae04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21ae04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ae08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21ae08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ae0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21ae0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ae10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21ae10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ae14: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21ae14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21ae18: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21ae18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ae1c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21ae1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x21AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE20u;
        // 0x21ae24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AE28u;
label_21ae28:
    // 0x21ae28: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x21AE28u;
    {
        const bool branch_taken_0x21ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE28u;
        // 0x21ae2c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae28) {
            ctx->pc = 0x21AD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ad58;
        }
    }
    ctx->pc = 0x21AE30u;
    // 0x21ae30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21ae34: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21ae34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ae38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ae3c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ae3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ae40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21ae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21ae44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ae48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21ae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21ae50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ae54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21ae58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ae58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae5c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21ae60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21ae60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21ae68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ae68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21ae70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ae70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae74: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21ae78: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x21ae78u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ae7c: 0xc084612  jal         func_211848
    ctx->pc = 0x21AE7Cu;
    SET_GPR_U32(ctx, 31, 0x21AE84u);
    ctx->pc = 0x21AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE7Cu;
    // 0x21ae80: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21AE7Cu, 0x21AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE84u;
label_21ae84:
    // 0x21ae84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21ae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ae90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ae90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae94: 0xc084654  jal         func_211950
    ctx->pc = 0x21AE94u;
    SET_GPR_U32(ctx, 31, 0x21AE9Cu);
    ctx->pc = 0x21AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE94u;
    // 0x21ae98: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21AE94u, 0x21AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE9Cu;
label_21ae9c:
    // 0x21ae9c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21ae9cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aea0: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x21aea0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21aea4: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21AEA4u;
    {
        const bool branch_taken_0x21aea4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEA4u;
        // 0x21aea8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aea4) {
            ctx->pc = 0x21AF04u;
            goto label_21af04;
        }
    }
    ctx->pc = 0x21AEACu;
    // 0x21aeac: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AEACu;
    {
        const bool branch_taken_0x21aeac = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21aeac) {
            ctx->pc = 0x21AEBCu;
            goto label_21aebc;
        }
    }
    ctx->pc = 0x21AEB4u;
    // 0x21aeb4: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21aeb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21aeb8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21aebc:
    // 0x21aebc: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x21AEBCu;
    {
        const bool branch_taken_0x21aebc = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEBCu;
        // 0x21aec0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aebc) {
            ctx->pc = 0x21AEF0u;
            goto label_21aef0;
        }
    }
    ctx->pc = 0x21AEC4u;
    // 0x21aec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21aec8:
    // 0x21aec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aecc: 0xc084e8e  jal         func_213A38
    ctx->pc = 0x21AECCu;
    SET_GPR_U32(ctx, 31, 0x21AED4u);
    ctx->pc = 0x21AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AECCu;
    // 0x21aed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A38u, 0x21AECCu, 0x21AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AED4u;
label_21aed4:
    // 0x21aed4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21AED4u;
    {
        const bool branch_taken_0x21aed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED4u;
        // 0x21aed8: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aed4) {
            ctx->pc = 0x21AF28u;
            goto label_21af28;
        }
    }
    ctx->pc = 0x21AEDCu;
    // 0x21aedc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21aedcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21aee0: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x21aee0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21aee4: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21AEE4u;
    {
        const bool branch_taken_0x21aee4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEE4u;
        // 0x21aee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aee4) {
            ctx->pc = 0x21AEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21aec8;
        }
    }
    ctx->pc = 0x21AEECu;
    // 0x21aeec: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21aeecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21aef0:
    // 0x21aef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aef4: 0xc086b02  jal         func_21AC08
    ctx->pc = 0x21AEF4u;
    SET_GPR_U32(ctx, 31, 0x21AEFCu);
    ctx->pc = 0x21AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEF4u;
    // 0x21aef8: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC08u;
    goto label_21ac08;
    ctx->pc = 0x21AEFCu;
label_21aefc:
    // 0x21aefc: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21aefcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21af00: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x21af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21af04:
    // 0x21af04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21af04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21af08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21af08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21af0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21af0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21af10: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21af10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21af14: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21af14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21af18: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21af18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21af1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21af1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21af20: 0x3e00008  jr          $ra
    ctx->pc = 0x21AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF20u;
        // 0x21af24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AF28u;
label_21af28:
    // 0x21af28: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x21AF28u;
    {
        const bool branch_taken_0x21af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF28u;
        // 0x21af2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af28) {
            ctx->pc = 0x21AF04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21af04;
        }
    }
    ctx->pc = 0x21AF30u;
}
