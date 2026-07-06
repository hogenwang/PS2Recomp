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

// Function: sub_0020FEA0
// Address: 0x20fea0 - 0x2103e8
void sub_0020FEA0_0x20fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FEA0_0x20fea0");
#endif

    switch (ctx->pc) {
        case 0x20ff00u: goto label_20ff00;
        case 0x20ff20u: goto label_20ff20;
        case 0x20ff28u: goto label_20ff28;
        case 0x21001cu: goto label_21001c;
        case 0x21003cu: goto label_21003c;
        case 0x210050u: goto label_210050;
        case 0x21006cu: goto label_21006c;
        case 0x210074u: goto label_210074;
        case 0x2100a4u: goto label_2100a4;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100d8u: goto label_2100d8;
        case 0x2100f0u: goto label_2100f0;
        case 0x21013cu: goto label_21013c;
        case 0x210190u: goto label_210190;
        case 0x2101a4u: goto label_2101a4;
        case 0x2101c4u: goto label_2101c4;
        case 0x21021cu: goto label_21021c;
        case 0x210230u: goto label_210230;
        case 0x210260u: goto label_210260;
        case 0x2102b0u: goto label_2102b0;
        case 0x2102c4u: goto label_2102c4;
        case 0x2102fcu: goto label_2102fc;
        case 0x210308u: goto label_210308;
        case 0x210328u: goto label_210328;
        case 0x210358u: goto label_210358;
        case 0x21038cu: goto label_21038c;
        case 0x2103acu: goto label_2103ac;
        case 0x2103c0u: goto label_2103c0;
        default: break;
    }

    ctx->pc = 0x20fea0u;

    // 0x20fea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20fea4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x20fea8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20feac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20feb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20feb4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20feb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20feb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20febc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20febcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fec0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20fec4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20fec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fec8: 0x25f2fe60  addiu       $s2, $t7, -0x1A0
    ctx->pc = 0x20fec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966880));
    // 0x20fecc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20feccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20fed0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x20fed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x20fed4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x20fed4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fed8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x20fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x20fedc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20fee0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x20fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x20fee4: 0x24e7fe78  addiu       $a3, $a3, -0x188
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966904));
    // 0x20fee8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x20fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x20feec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fef0: 0x24050208  addiu       $a1, $zero, 0x208
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x20fef4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20fef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20fef8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20FEF8u;
    SET_GPR_U32(ctx, 31, 0x20FF00u);
    ctx->pc = 0x20FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEF8u;
    // 0x20fefc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20FEF8u, 0x20FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF00u;
label_20ff00:
    // 0x20ff00: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x20ff04: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ff08: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x20FF08u;
    {
        const bool branch_taken_0x20ff08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x20FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF08u;
        // 0x20ff0c: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff08) {
            ctx->pc = 0x20FF58u;
            goto label_20ff58;
        }
    }
    ctx->pc = 0x20FF10u;
    // 0x20ff10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ff14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff18: 0x2529fc70  addiu       $t1, $t1, -0x390
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966384));
    // 0x20ff1c: 0x2405020b  addiu       $a1, $zero, 0x20B
    ctx->pc = 0x20ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
label_20ff20:
    // 0x20ff20: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ff24: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
label_20ff28:
    // 0x20ff28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ff28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ff2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ff2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ff30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ff30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ff34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20ff34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ff38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20ff38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ff3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20ff3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20ff40: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20ff40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ff44: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x20ff44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ff48: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x20ff48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ff4c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x20ff4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ff50: 0x8084408  j           func_211020
    ctx->pc = 0x20FF50u;
    ctx->pc = 0x20FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF50u;
    // 0x20ff54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20FF50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20FF58u;
label_20ff58:
    // 0x20ff58: 0x820f002a  lb          $t7, 0x2A($s0)
    ctx->pc = 0x20ff58u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x20ff5c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FF5Cu;
    {
        const bool branch_taken_0x20ff5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF5Cu;
        // 0x20ff60: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff5c) {
            ctx->pc = 0x20FF80u;
            goto label_20ff80;
        }
    }
    ctx->pc = 0x20FF64u;
    // 0x20ff64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ff68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff6c: 0x2529fc90  addiu       $t1, $t1, -0x370
    ctx->pc = 0x20ff6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966416));
    // 0x20ff70: 0x2405020d  addiu       $a1, $zero, 0x20D
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    // 0x20ff74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ff78: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x20FF78u;
    {
        const bool branch_taken_0x20ff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF78u;
        // 0x20ff7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff78) {
            ctx->pc = 0x20FF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ff28;
        }
    }
    ctx->pc = 0x20FF80u;
label_20ff80:
    // 0x20ff80: 0x820e002b  lb          $t6, 0x2B($s0)
    ctx->pc = 0x20ff80u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x20ff84: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x20ff84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ff88: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x20FF88u;
    {
        const bool branch_taken_0x20ff88 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x20FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF88u;
        // 0x20ff8c: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff88) {
            ctx->pc = 0x20FFA4u;
            goto label_20ffa4;
        }
    }
    ctx->pc = 0x20FF90u;
    // 0x20ff90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ff94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff98: 0x2529fe88  addiu       $t1, $t1, -0x178
    ctx->pc = 0x20ff98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966920));
    // 0x20ff9c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x20FF9Cu;
    {
        const bool branch_taken_0x20ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF9Cu;
        // 0x20ffa0: 0x2405020f  addiu       $a1, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff9c) {
            ctx->pc = 0x20FF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ff20;
        }
    }
    ctx->pc = 0x20FFA4u;
label_20ffa4:
    // 0x20ffa4: 0x920f0028  lbu         $t7, 0x28($s0)
    ctx->pc = 0x20ffa4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20ffa8: 0x25effffd  addiu       $t7, $t7, -0x3
    ctx->pc = 0x20ffa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967293));
    // 0x20ffac: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x20ffacu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20ffb0: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FFB0u;
    {
        const bool branch_taken_0x20ffb0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ffb0) {
            ctx->pc = 0x20FFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FFB0u;
            // 0x20ffb4: 0x8e0f0018  lw          $t7, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FFD0u;
            goto label_20ffd0;
        }
    }
    ctx->pc = 0x20FFB8u;
    // 0x20ffb8: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20ffb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20ffbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ffc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffc4: 0x2529fea8  addiu       $t1, $t1, -0x158
    ctx->pc = 0x20ffc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966952));
    // 0x20ffc8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x20FFC8u;
    {
        const bool branch_taken_0x20ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFC8u;
        // 0x20ffcc: 0x24050212  addiu       $a1, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffc8) {
            ctx->pc = 0x20FF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ff20;
        }
    }
    ctx->pc = 0x20FFD0u;
label_20ffd0:
    // 0x20ffd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20ffd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffd4: 0x8e170014  lw          $s7, 0x14($s0)
    ctx->pc = 0x20ffd4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20ffd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20ffd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffdc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FFDCu;
    {
        const bool branch_taken_0x20ffdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFDCu;
        // 0x20ffe0: 0x25fefff4  addiu       $fp, $t7, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffdc) {
            ctx->pc = 0x20FFFCu;
            goto label_20fffc;
        }
    }
    ctx->pc = 0x20FFE4u;
    // 0x20ffe4: 0x8e0f004c  lw          $t7, 0x4C($s0)
    ctx->pc = 0x20ffe4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20ffe8: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x20ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    // 0x20ffec: 0x8e0e0050  lw          $t6, 0x50($s0)
    ctx->pc = 0x20ffecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20fff0: 0xae2e0004  sw          $t6, 0x4($s1)
    ctx->pc = 0x20fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
    // 0x20fff4: 0x8e0f0054  lw          $t7, 0x54($s0)
    ctx->pc = 0x20fff4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x20fff8: 0xae2f0008  sw          $t7, 0x8($s1)
    ctx->pc = 0x20fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 15));
label_20fffc:
    // 0x20fffc: 0x8e0e0038  lw          $t6, 0x38($s0)
    ctx->pc = 0x20fffcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x210000: 0x15c000db  bnez        $t6, . + 4 + (0xDB << 2)
    ctx->pc = 0x210000u;
    {
        const bool branch_taken_0x210000 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x210004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210000u;
        // 0x210004: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210000) {
            ctx->pc = 0x210370u;
            goto label_210370;
        }
    }
    ctx->pc = 0x210008u;
    // 0x210008: 0x9605005c  lhu         $a1, 0x5C($s0)
    ctx->pc = 0x210008u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x21000c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x210010: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x210014: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x210014u;
    SET_GPR_U32(ctx, 31, 0x21001Cu);
    ctx->pc = 0x210018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210014u;
    // 0x210018: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x210014u, 0x21001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21001Cu;
label_21001c:
    // 0x21001c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x21001Cu;
    {
        const bool branch_taken_0x21001c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21001c) {
            ctx->pc = 0x210020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21001Cu;
            // 0x210020: 0x8c540008  lw          $s4, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            goto label_2100a4;
        }
    }
    ctx->pc = 0x210024u;
    // 0x210024: 0x9605005c  lhu         $a1, 0x5C($s0)
    ctx->pc = 0x210024u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x210028: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21002c: 0x2484ab68  addiu       $a0, $a0, -0x5498
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945640));
    // 0x210030: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x210034: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x210034u;
    SET_GPR_U32(ctx, 31, 0x21003Cu);
    ctx->pc = 0x210038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210034u;
    // 0x210038: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x210034u, 0x21003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21003Cu;
label_21003c:
    // 0x21003c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x21003Cu;
    {
        const bool branch_taken_0x21003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21003c) {
            ctx->pc = 0x210040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21003Cu;
            // 0x210040: 0x8c540008  lw          $s4, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            goto label_2100a4;
        }
    }
    ctx->pc = 0x210044u;
    // 0x210044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210048: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x210048u;
    SET_GPR_U32(ctx, 31, 0x210050u);
    ctx->pc = 0x21004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210048u;
    // 0x21004c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x210048u, 0x210050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210050u;
label_210050:
    // 0x210050: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210054: 0x960a005c  lhu         $t2, 0x5C($s0)
    ctx->pc = 0x210054u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x210058: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x210058u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x21005c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210064: 0x2529fcc0  addiu       $t1, $t1, -0x340
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966464));
    // 0x210068: 0x2405022e  addiu       $a1, $zero, 0x22E
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
label_21006c:
    // 0x21006c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x21006cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210070: 0x350863c0  ori         $t0, $t0, 0x63C0
    ctx->pc = 0x210070u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25536);
label_210074:
    // 0x210074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21007c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21007cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210080: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210084: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210088: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x210088u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21008c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21008cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210090: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x210090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x210094: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x210094u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210098: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x210098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21009c: 0x8084408  j           func_211020
    ctx->pc = 0x21009Cu;
    ctx->pc = 0x2100A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21009Cu;
    // 0x2100a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x21009Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2100A4u;
label_2100a4:
    // 0x2100a4: 0x8e0f0050  lw          $t7, 0x50($s0)
    ctx->pc = 0x2100a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2100a8:
    // 0x2100a8: 0x51e00061  beql        $t7, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x2100A8u;
    {
        const bool branch_taken_0x2100a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2100a8) {
            ctx->pc = 0x2100ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2100A8u;
            // 0x2100ac: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210230u;
            goto label_210230;
        }
    }
    ctx->pc = 0x2100B0u;
    // 0x2100b0: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x2100b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100b4: 0x820e0056  lb          $t6, 0x56($s0)
    ctx->pc = 0x2100b4u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2100b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2100b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2100bc: 0x55cf0019  bnel        $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x2100BCu;
    {
        const bool branch_taken_0x2100bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2100bc) {
            ctx->pc = 0x2100C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2100BCu;
            // 0x2100c0: 0x820f0057  lb          $t7, 0x57($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210124u;
            goto label_210124;
        }
    }
    ctx->pc = 0x2100C4u;
    // 0x2100c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2100c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100c8: 0x26070080  addiu       $a3, $s0, 0x80
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2100cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2100ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100d0: 0xc0893c8  jal         func_224F20
    ctx->pc = 0x2100D0u;
    SET_GPR_U32(ctx, 31, 0x2100D8u);
    ctx->pc = 0x2100D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100D0u;
    // 0x2100d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F20u, 0x2100D0u, 0x2100D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100D8u;
label_2100d8:
    // 0x2100d8: 0x3c2782a  slt         $t7, $fp, $v0
    ctx->pc = 0x2100d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2100dc: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x2100DCu;
    {
        const bool branch_taken_0x2100dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100DCu;
        // 0x2100e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100dc) {
            ctx->pc = 0x210120u;
            goto label_210120;
        }
    }
    ctx->pc = 0x2100E4u;
    // 0x2100e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2100e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100e8: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x2100E8u;
    SET_GPR_U32(ctx, 31, 0x2100F0u);
    ctx->pc = 0x2100ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100E8u;
    // 0x2100ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x2100E8u, 0x2100F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100F0u;
label_2100f0:
    // 0x2100f0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2100f4: 0x820a0056  lb          $t2, 0x56($s0)
    ctx->pc = 0x2100f4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2100f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2100f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2100fc: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2100fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210100: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x210104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210108: 0x2529fec0  addiu       $t1, $t1, -0x140
    ctx->pc = 0x210108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
    // 0x21010c: 0x24050254  addiu       $a1, $zero, 0x254
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
    // 0x210110: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x210110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210114: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x210114u;
    {
        const bool branch_taken_0x210114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210114u;
        // 0x210118: 0x350863be  ori         $t0, $t0, 0x63BE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210114) {
            ctx->pc = 0x210074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210074;
        }
    }
    ctx->pc = 0x21011Cu;
    // 0x21011c: 0x0  nop
    ctx->pc = 0x21011cu;
    // NOP
label_210120:
    // 0x210120: 0x820f0057  lb          $t7, 0x57($s0)
    ctx->pc = 0x210120u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
label_210124:
    // 0x210124: 0x11e0005b  beqz        $t7, . + 4 + (0x5B << 2)
    ctx->pc = 0x210124u;
    {
        const bool branch_taken_0x210124 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210124u;
        // 0x210128: 0xae0f002c  sw          $t7, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210124) {
            ctx->pc = 0x210294u;
            goto label_210294;
        }
    }
    ctx->pc = 0x21012Cu;
    // 0x21012c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21012cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x210130: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x210134: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x210134u;
    SET_GPR_U32(ctx, 31, 0x21013Cu);
    ctx->pc = 0x210138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210134u;
    // 0x210138: 0x2484ab68  addiu       $a0, $a0, -0x5498 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x210134u, 0x21013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21013Cu;
label_21013c:
    // 0x21013c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x21013cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x210140: 0x1680000c  bnez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x210140u;
    {
        const bool branch_taken_0x210140 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x210144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210140u;
        // 0x210144: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210140) {
            ctx->pc = 0x210174u;
            goto label_210174;
        }
    }
    ctx->pc = 0x210148u;
    // 0x210148: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x21014c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21014cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210150: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210154: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x210154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x210158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21015c: 0x2529fed8  addiu       $t1, $t1, -0x128
    ctx->pc = 0x21015cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967000));
    // 0x210160: 0x24050262  addiu       $a1, $zero, 0x262
    ctx->pc = 0x210160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
    // 0x210164: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210168: 0x350863c0  ori         $t0, $t0, 0x63C0
    ctx->pc = 0x210168u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25536);
    // 0x21016c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x21016Cu;
    {
        const bool branch_taken_0x21016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21016Cu;
        // 0x210170: 0x240a0030  addiu       $t2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21016c) {
            ctx->pc = 0x210074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210074;
        }
    }
    ctx->pc = 0x210174u;
label_210174:
    // 0x210174: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x210174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x210178: 0x25f1a944  addiu       $s1, $t7, -0x56BC
    ctx->pc = 0x210178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945092));
    // 0x21017c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210180: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x210180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210184: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x210184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210188: 0xc084566  jal         func_211598
    ctx->pc = 0x210188u;
    SET_GPR_U32(ctx, 31, 0x210190u);
    ctx->pc = 0x21018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210188u;
    // 0x21018c: 0x24070204  addiu       $a3, $zero, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211598u, 0x210188u, 0x210190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210190u;
label_210190:
    // 0x210190: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x210190u;
    {
        const bool branch_taken_0x210190 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x210194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210190u;
        // 0x210194: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210190) {
            ctx->pc = 0x2101FCu;
            goto label_2101fc;
        }
    }
    ctx->pc = 0x210198u;
    // 0x210198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21019c: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x21019Cu;
    SET_GPR_U32(ctx, 31, 0x2101A4u);
    ctx->pc = 0x2101A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21019Cu;
    // 0x2101a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x21019Cu, 0x2101A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101A4u;
label_2101a4:
    // 0x2101a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2101a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2101a8: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2101a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x2101ac: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x2101acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x2101b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2101b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101b4: 0x2529fd28  addiu       $t1, $t1, -0x2D8
    ctx->pc = 0x2101b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966568));
    // 0x2101b8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2101b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101bc: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x2101bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101c0: 0x2405026b  addiu       $a1, $zero, 0x26B
    ctx->pc = 0x2101c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
label_2101c4:
    // 0x2101c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2101c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2101c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2101c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2101cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2101ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2101d0: 0x2408d8ed  addiu       $t0, $zero, -0x2713
    ctx->pc = 0x2101d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
    // 0x2101d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2101d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2101d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2101d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2101dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2101dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2101e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2101e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2101e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2101e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2101e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2101e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2101ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2101ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2101f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2101f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2101f4: 0x8084408  j           func_211020
    ctx->pc = 0x2101F4u;
    ctx->pc = 0x2101F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101F4u;
    // 0x2101f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x2101F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2101FCu;
label_2101fc:
    // 0x2101fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2101fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210200: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210204: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x210204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x210208: 0x24e7ff08  addiu       $a3, $a3, -0xF8
    ctx->pc = 0x210208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967048));
    // 0x21020c: 0x2405026e  addiu       $a1, $zero, 0x26E
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 622));
    // 0x210210: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x210214: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210214u;
    SET_GPR_U32(ctx, 31, 0x21021Cu);
    ctx->pc = 0x210218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210214u;
    // 0x210218: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x210214u, 0x21021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21021Cu;
label_21021c:
    // 0x21021c: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x210220: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x210224: 0xae2ffffc  sw          $t7, -0x4($s1)
    ctx->pc = 0x210224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 15));
    // 0x210228: 0xae0e0030  sw          $t6, 0x30($s0)
    ctx->pc = 0x210228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 14));
    // 0x21022c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x21022cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210230:
    // 0x210230: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x210230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x210234: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x210234u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210238: 0xa20f002b  sb          $t7, 0x2B($s0)
    ctx->pc = 0x210238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 15));
    // 0x21023c: 0xae0e0068  sw          $t6, 0x68($s0)
    ctx->pc = 0x21023cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 14));
    // 0x210240: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210244: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210248: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x210248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21024c: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x210250: 0x24e7ff20  addiu       $a3, $a3, -0xE0
    ctx->pc = 0x210250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967072));
    // 0x210254: 0x24050291  addiu       $a1, $zero, 0x291
    ctx->pc = 0x210254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    // 0x210258: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210258u;
    SET_GPR_U32(ctx, 31, 0x210260u);
    ctx->pc = 0x21025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210258u;
    // 0x21025c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x210258u, 0x210260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210260u;
label_210260:
    // 0x210260: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x210260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21026c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21026cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210270: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210270u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210274: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210278: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x210278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21027c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21027cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210280: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x210280u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x210284: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x210284u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210288: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x210288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21028c: 0x3e00008  jr          $ra
    ctx->pc = 0x21028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21028Cu;
        // 0x210290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210294u;
label_210294:
    // 0x210294: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x210294u;
    {
        const bool branch_taken_0x210294 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x210298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210294u;
        // 0x210298: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210294) {
            ctx->pc = 0x210310u;
            goto label_210310;
        }
    }
    ctx->pc = 0x21029Cu;
    // 0x21029c: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2102a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2102a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2102a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102a8: 0xc084566  jal         func_211598
    ctx->pc = 0x2102A8u;
    SET_GPR_U32(ctx, 31, 0x2102B0u);
    ctx->pc = 0x2102ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102A8u;
    // 0x2102ac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211598u, 0x2102A8u, 0x2102B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102B0u;
label_2102b0:
    // 0x2102b0: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2102B0u;
    {
        const bool branch_taken_0x2102b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B0u;
        // 0x2102b4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102b0) {
            ctx->pc = 0x2102E8u;
            goto label_2102e8;
        }
    }
    ctx->pc = 0x2102B8u;
    // 0x2102b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2102b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102bc: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x2102BCu;
    SET_GPR_U32(ctx, 31, 0x2102C4u);
    ctx->pc = 0x2102C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102BCu;
    // 0x2102c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x2102BCu, 0x2102C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102C4u;
label_2102c4:
    // 0x2102c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2102c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2102c8: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x2102cc: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x2102ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x2102d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2102d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102d4: 0x2529fd28  addiu       $t1, $t1, -0x2D8
    ctx->pc = 0x2102d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966568));
    // 0x2102d8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2102d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102dc: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x2102dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102e0: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x2102E0u;
    {
        const bool branch_taken_0x2102e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102E0u;
        // 0x2102e4: 0x24050279  addiu       $a1, $zero, 0x279 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102e0) {
            ctx->pc = 0x2101C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2101c4;
        }
    }
    ctx->pc = 0x2102E8u;
label_2102e8:
    // 0x2102e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2102ec: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2102ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2102f0: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x2102f4: 0x24e7ff40  addiu       $a3, $a3, -0xC0
    ctx->pc = 0x2102f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967104));
    // 0x2102f8: 0x2405027b  addiu       $a1, $zero, 0x27B
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
label_2102fc:
    // 0x2102fc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x210300: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210300u;
    SET_GPR_U32(ctx, 31, 0x210308u);
    ctx->pc = 0x210304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210300u;
    // 0x210304: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x210300u, 0x210308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210308u;
label_210308:
    // 0x210308: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x210308u;
    {
        const bool branch_taken_0x210308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210308u;
        // 0x21030c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210308) {
            ctx->pc = 0x210230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210230;
        }
    }
    ctx->pc = 0x210310u;
label_210310:
    // 0x210310: 0x276782a  slt         $t7, $s3, $s6
    ctx->pc = 0x210310u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x210314: 0x51e0000d  beql        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x210314u;
    {
        const bool branch_taken_0x210314 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x210314) {
            ctx->pc = 0x210318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210314u;
            // 0x210318: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21034Cu;
            goto label_21034c;
        }
    }
    ctx->pc = 0x21031Cu;
    // 0x21031c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210320: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x210320u;
    SET_GPR_U32(ctx, 31, 0x210328u);
    ctx->pc = 0x210324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210320u;
    // 0x210324: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x210320u, 0x210328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210328u;
label_210328:
    // 0x210328: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21032c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x21032cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210330: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x210330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x210334: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210338: 0x2529fd28  addiu       $t1, $t1, -0x2D8
    ctx->pc = 0x210338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966568));
    // 0x21033c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x21033cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210340: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x210340u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210344: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x210344u;
    {
        const bool branch_taken_0x210344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210344u;
        // 0x210348: 0x24050282  addiu       $a1, $zero, 0x282 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 642));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210344) {
            ctx->pc = 0x2101C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2101c4;
        }
    }
    ctx->pc = 0x21034Cu;
label_21034c:
    // 0x21034c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21034cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210350: 0xc049c48  jal         func_127120
    ctx->pc = 0x210350u;
    SET_GPR_U32(ctx, 31, 0x210358u);
    ctx->pc = 0x210354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210350u;
    // 0x210354: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x210350u, 0x210358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210358u;
label_210358:
    // 0x210358: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21035c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21035cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210360: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x210360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x210364: 0x24e7ff58  addiu       $a3, $a3, -0xA8
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967128));
    // 0x210368: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x210368u;
    {
        const bool branch_taken_0x210368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210368u;
        // 0x21036c: 0x24050285  addiu       $a1, $zero, 0x285 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210368) {
            ctx->pc = 0x2102FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2102fc;
        }
    }
    ctx->pc = 0x210370u;
label_210370:
    // 0x210370: 0x55cfff4d  bnel        $t6, $t7, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x210370u;
    {
        const bool branch_taken_0x210370 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x210370) {
            ctx->pc = 0x210374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210370u;
            // 0x210374: 0x8e0f0050  lw          $t7, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2100a8;
        }
    }
    ctx->pc = 0x210378u;
    // 0x210378: 0x9605005c  lhu         $a1, 0x5C($s0)
    ctx->pc = 0x210378u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x21037c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x210380: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x210384: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x210384u;
    SET_GPR_U32(ctx, 31, 0x21038Cu);
    ctx->pc = 0x210388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210384u;
    // 0x210388: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x210384u, 0x21038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21038Cu;
label_21038c:
    // 0x21038c: 0x5440ff45  bnel        $v0, $zero, . + 4 + (-0xBB << 2)
    ctx->pc = 0x21038Cu;
    {
        const bool branch_taken_0x21038c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21038c) {
            ctx->pc = 0x210390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21038Cu;
            // 0x210390: 0x8c54000c  lw          $s4, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2100a4;
        }
    }
    ctx->pc = 0x210394u;
    // 0x210394: 0x9605005c  lhu         $a1, 0x5C($s0)
    ctx->pc = 0x210394u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x210398: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x210398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21039c: 0x2484ab68  addiu       $a0, $a0, -0x5498
    ctx->pc = 0x21039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945640));
    // 0x2103a0: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x2103a4: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x2103A4u;
    SET_GPR_U32(ctx, 31, 0x2103ACu);
    ctx->pc = 0x2103A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103A4u;
    // 0x2103a8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x2103A4u, 0x2103ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103ACu;
label_2103ac:
    // 0x2103ac: 0x5440ff3d  bnel        $v0, $zero, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x2103ACu;
    {
        const bool branch_taken_0x2103ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2103ac) {
            ctx->pc = 0x2103B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2103ACu;
            // 0x2103b0: 0x8c54000c  lw          $s4, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2100a4;
        }
    }
    ctx->pc = 0x2103B4u;
    // 0x2103b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2103b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103b8: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x2103B8u;
    SET_GPR_U32(ctx, 31, 0x2103C0u);
    ctx->pc = 0x2103BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103B8u;
    // 0x2103bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x2103B8u, 0x2103C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103C0u;
label_2103c0:
    // 0x2103c0: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2103c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x2103c4: 0x960a005c  lhu         $t2, 0x5C($s0)
    ctx->pc = 0x2103c4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2103c8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2103c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2103cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2103ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2103d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103d4: 0x2529fcc0  addiu       $t1, $t1, -0x340
    ctx->pc = 0x2103d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966464));
    // 0x2103d8: 0x1000ff24  b           . + 4 + (-0xDC << 2)
    ctx->pc = 0x2103D8u;
    {
        const bool branch_taken_0x2103d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D8u;
        // 0x2103dc: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103d8) {
            ctx->pc = 0x21006Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21006c;
        }
    }
    ctx->pc = 0x2103E0u;
    // 0x2103e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2103E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2103E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103E0u;
        // 0x2103e4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2103E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2103E8u;
}
