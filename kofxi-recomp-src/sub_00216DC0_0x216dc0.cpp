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

// Function: sub_00216DC0
// Address: 0x216dc0 - 0x2170e8
void sub_00216DC0_0x216dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216DC0_0x216dc0");
#endif

    switch (ctx->pc) {
        case 0x216ddcu: goto label_216ddc;
        case 0x216decu: goto label_216dec;
        case 0x216e6cu: goto label_216e6c;
        case 0x216e84u: goto label_216e84;
        case 0x216ec0u: goto label_216ec0;
        case 0x216ed0u: goto label_216ed0;
        case 0x216f10u: goto label_216f10;
        case 0x216f20u: goto label_216f20;
        case 0x216f6cu: goto label_216f6c;
        case 0x216fa8u: goto label_216fa8;
        case 0x21703cu: goto label_21703c;
        case 0x217054u: goto label_217054;
        case 0x217080u: goto label_217080;
        case 0x21708cu: goto label_21708c;
        case 0x2170b4u: goto label_2170b4;
        case 0x2170bcu: goto label_2170bc;
        default: break;
    }

    ctx->pc = 0x216dc0u;

label_216dc0:
    // 0x216dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216dc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x216dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216dd0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216dd4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216DD4u;
    SET_GPR_U32(ctx, 31, 0x216DDCu);
    ctx->pc = 0x216DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DD4u;
    // 0x216dd8: 0x24840e18  addiu       $a0, $a0, 0xE18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216DD4u, 0x216DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DDCu;
label_216ddc:
    // 0x216ddc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216de0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216de4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216DE4u;
    SET_GPR_U32(ctx, 31, 0x216DECu);
    ctx->pc = 0x216DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DE4u;
    // 0x216de8: 0x24840e38  addiu       $a0, $a0, 0xE38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216DE4u, 0x216DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DECu;
label_216dec:
    // 0x216dec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x216decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216df0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216df4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x216df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216df8: 0x24840e08  addiu       $a0, $a0, 0xE08
    ctx->pc = 0x216df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3592));
    // 0x216dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e00: 0x8043e52  j           func_10F948
    ctx->pc = 0x216E00u;
    ctx->pc = 0x216E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E00u;
    // 0x216e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216E08u;
    // 0x216e08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x216e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x216e0c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x216e0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216e10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x216e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x216e14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x216e18: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x216e18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x216e1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x216e20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x216e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x216e24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x216e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x216e2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x216e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e30: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x216e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x216e34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x216e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x216e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x216e3c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216e40: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x216e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x216e44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e48: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x216e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x216e4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x216e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e50: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x216e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x216e54: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x216e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x216e58: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x216e58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216e5c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x216e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x216e60: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x216e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x216e64: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216E64u;
    SET_GPR_U32(ctx, 31, 0x216E6Cu);
    ctx->pc = 0x216E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E64u;
    // 0x216e68: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x216E64u, 0x216E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E6Cu;
label_216e6c:
    // 0x216e6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x216e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216e78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e7c: 0xc084520  jal         func_211480
    ctx->pc = 0x216E7Cu;
    SET_GPR_U32(ctx, 31, 0x216E84u);
    ctx->pc = 0x216E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E7Cu;
    // 0x216e80: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x216E7Cu, 0x216E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E84u;
label_216e84:
    // 0x216e84: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x216e84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e88: 0x29cf0015  slti        $t7, $t6, 0x15
    ctx->pc = 0x216e88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x216e8c: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x216E8Cu;
    {
        const bool branch_taken_0x216e8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E8Cu;
        // 0x216e90: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e8c) {
            ctx->pc = 0x216FACu;
            goto label_216fac;
        }
    }
    ctx->pc = 0x216E94u;
    // 0x216e94: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x216E94u;
    {
        const bool branch_taken_0x216e94 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x216e94) {
            ctx->pc = 0x216EA4u;
            goto label_216ea4;
        }
    }
    ctx->pc = 0x216E9Cu;
    // 0x216e9c: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x216e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x216ea0: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x216ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_216ea4:
    // 0x216ea4: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x216EA4u;
    {
        const bool branch_taken_0x216ea4 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x216EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EA4u;
        // 0x216ea8: 0x29cf0014  slti        $t7, $t6, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ea4) {
            ctx->pc = 0x216F58u;
            goto label_216f58;
        }
    }
    ctx->pc = 0x216EACu;
    // 0x216eac: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x216eacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216eb0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x216eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216eb4: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x216eb4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x216eb8: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x216eb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ebc: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x216ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_216ec0:
    // 0x216ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x216ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ec8: 0xc084920  jal         func_212480
    ctx->pc = 0x216EC8u;
    SET_GPR_U32(ctx, 31, 0x216ED0u);
    ctx->pc = 0x216ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EC8u;
    // 0x216ecc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212480u, 0x216EC8u, 0x216ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216ED0u;
label_216ed0:
    // 0x216ed0: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x216ED0u;
    {
        const bool branch_taken_0x216ed0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x216ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216ED0u;
        // 0x216ed4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ed0) {
            ctx->pc = 0x216FACu;
            goto label_216fac;
        }
    }
    ctx->pc = 0x216ED8u;
    // 0x216ed8: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x216ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x216edc: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x216EDCu;
    {
        const bool branch_taken_0x216edc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EDCu;
        // 0x216ee0: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216edc) {
            ctx->pc = 0x216F44u;
            goto label_216f44;
        }
    }
    ctx->pc = 0x216EE4u;
    // 0x216ee4: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x216ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x216ee8: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x216ee8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x216eec: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x216EECu;
    {
        const bool branch_taken_0x216eec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EECu;
        // 0x216ef0: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216eec) {
            ctx->pc = 0x216FE0u;
            goto label_216fe0;
        }
    }
    ctx->pc = 0x216EF4u;
    // 0x216ef4: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x216ef4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216ef8: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x216ef8u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x216efc: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x216f00: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x216f00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x216f04: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x216f04u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x216f08: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x216f08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216f0c: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x216f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_216f10:
    // 0x216f10: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x216f14: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x216F14u;
    {
        const bool branch_taken_0x216f14 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x216f14) {
            ctx->pc = 0x216F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F14u;
            // 0x216f18: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F40u;
            goto label_216f40;
        }
    }
    ctx->pc = 0x216F1Cu;
    // 0x216f1c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x216f1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_216f20:
    // 0x216f20: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x216f20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216f24: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x216f28: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x216f28u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x216f2c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x216f30: 0x0  nop
    ctx->pc = 0x216f30u;
    // NOP
    // 0x216f34: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x216F34u;
    {
        const bool branch_taken_0x216f34 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x216F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F34u;
        // 0x216f38: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f34) {
            ctx->pc = 0x216F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216f20;
        }
    }
    ctx->pc = 0x216F3Cu;
    // 0x216f3c: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x216f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_216f40:
    // 0x216f40: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x216f40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_216f44:
    // 0x216f44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x216f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x216f48: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x216f48u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x216f4c: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x216F4Cu;
    {
        const bool branch_taken_0x216f4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f4c) {
            ctx->pc = 0x216F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F4Cu;
            // 0x216f50: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216ec0;
        }
    }
    ctx->pc = 0x216F54u;
    // 0x216f54: 0x29cf0014  slti        $t7, $t6, 0x14
    ctx->pc = 0x216f54u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)20) ? 1 : 0);
label_216f58:
    // 0x216f58: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x216F58u;
    {
        const bool branch_taken_0x216f58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F58u;
        // 0x216f5c: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f58) {
            ctx->pc = 0x216F90u;
            goto label_216f90;
        }
    }
    ctx->pc = 0x216F60u;
    // 0x216f60: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x216f60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x216f64: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x216f64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216f68: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x216f68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_216f6c:
    // 0x216f6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x216f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x216f70: 0x25ad00d8  addiu       $t5, $t5, 0xD8
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 216));
    // 0x216f74: 0x2a2f0014  slti        $t7, $s1, 0x14
    ctx->pc = 0x216f74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x216f78: 0x0  nop
    ctx->pc = 0x216f78u;
    // NOP
    // 0x216f7c: 0x0  nop
    ctx->pc = 0x216f7cu;
    // NOP
    // 0x216f80: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x216F80u;
    {
        const bool branch_taken_0x216f80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x216F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F80u;
        // 0x216f84: 0x25ce00d8  addiu       $t6, $t6, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f80) {
            ctx->pc = 0x216F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216f6c;
        }
    }
    ctx->pc = 0x216F88u;
    // 0x216f88: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x216f88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x216f8c: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x216f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_216f90:
    // 0x216f90: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x216f90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216f94: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x216f94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216f98: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x216f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x216f9c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x216f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x216fa0: 0xc085b70  jal         func_216DC0
    ctx->pc = 0x216FA0u;
    SET_GPR_U32(ctx, 31, 0x216FA8u);
    ctx->pc = 0x216FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FA0u;
    // 0x216fa4: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216DC0u;
    goto label_216dc0;
    ctx->pc = 0x216FA8u;
label_216fa8:
    // 0x216fa8: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x216fa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_216fac:
    // 0x216fac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x216facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216fb0: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x216fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x216fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216fb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x216fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216fbc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x216fbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216fc0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x216fc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216fc4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x216fc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x216fc8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x216fc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216fcc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x216fccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x216fd0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x216fd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216fd4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x216fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x216fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x216FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FD8u;
        // 0x216fdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216FE0u;
label_216fe0:
    // 0x216fe0: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x216FE0u;
    {
        const bool branch_taken_0x216fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE0u;
        // 0x216fe4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe0) {
            ctx->pc = 0x216F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216f10;
        }
    }
    ctx->pc = 0x216FE8u;
    // 0x216fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x216fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216fec: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x216fecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216ff0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x216ff4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216ff8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x216ffc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x216ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x217000: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x217000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217004: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x217004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x217008: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21700c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x217010: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x217010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217014: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x217014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x217018: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x217018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21701c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x217020: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x217020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217024: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x217024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x217028: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21702c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21702cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217030: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x217030u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217034: 0xc084612  jal         func_211848
    ctx->pc = 0x217034u;
    SET_GPR_U32(ctx, 31, 0x21703Cu);
    ctx->pc = 0x217038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217034u;
    // 0x217038: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x217034u, 0x21703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21703Cu;
label_21703c:
    // 0x21703c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217040: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x217040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217044: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217048: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x217048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21704c: 0xc084654  jal         func_211950
    ctx->pc = 0x21704Cu;
    SET_GPR_U32(ctx, 31, 0x217054u);
    ctx->pc = 0x217050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21704Cu;
    // 0x217050: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21704Cu, 0x217054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217054u;
label_217054:
    // 0x217054: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217058: 0x29cf0015  slti        $t7, $t6, 0x15
    ctx->pc = 0x217058u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x21705c: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21705Cu;
    {
        const bool branch_taken_0x21705c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21705Cu;
        // 0x217060: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21705c) {
            ctx->pc = 0x2170BCu;
            goto label_2170bc;
        }
    }
    ctx->pc = 0x217064u;
    // 0x217064: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x217064u;
    {
        const bool branch_taken_0x217064 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x217064) {
            ctx->pc = 0x217074u;
            goto label_217074;
        }
    }
    ctx->pc = 0x21706Cu;
    // 0x21706c: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x21706cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x217070: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x217070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_217074:
    // 0x217074: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x217074u;
    {
        const bool branch_taken_0x217074 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x217078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217074u;
        // 0x217078: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217074) {
            ctx->pc = 0x2170A8u;
            goto label_2170a8;
        }
    }
    ctx->pc = 0x21707Cu;
    // 0x21707c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21707cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217080:
    // 0x217080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x217080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217084: 0xc08497e  jal         func_2125F8
    ctx->pc = 0x217084u;
    SET_GPR_U32(ctx, 31, 0x21708Cu);
    ctx->pc = 0x217088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217084u;
    // 0x217088: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125F8u, 0x217084u, 0x21708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21708Cu;
label_21708c:
    // 0x21708c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21708Cu;
    {
        const bool branch_taken_0x21708c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21708Cu;
        // 0x217090: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21708c) {
            ctx->pc = 0x2170E0u;
            goto label_2170e0;
        }
    }
    ctx->pc = 0x217094u;
    // 0x217094: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x217098: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x217098u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21709c: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21709Cu;
    {
        const bool branch_taken_0x21709c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2170A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21709Cu;
        // 0x2170a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21709c) {
            ctx->pc = 0x217080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217080;
        }
    }
    ctx->pc = 0x2170A4u;
    // 0x2170a4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2170a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2170a8:
    // 0x2170a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2170a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170ac: 0xc085b70  jal         func_216DC0
    ctx->pc = 0x2170ACu;
    SET_GPR_U32(ctx, 31, 0x2170B4u);
    ctx->pc = 0x2170B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170ACu;
    // 0x2170b0: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216DC0u;
    goto label_216dc0;
    ctx->pc = 0x2170B4u;
label_2170b4:
    // 0x2170b4: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2170b8: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_2170bc:
    // 0x2170bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2170bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2170c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2170c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2170c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2170c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2170c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2170c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2170cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2170ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2170d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2170d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2170d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2170d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2170d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2170D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2170DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170D8u;
        // 0x2170dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2170D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2170E0u;
label_2170e0:
    // 0x2170e0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2170E0u;
    {
        const bool branch_taken_0x2170e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170E0u;
        // 0x2170e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170e0) {
            ctx->pc = 0x2170BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2170bc;
        }
    }
    ctx->pc = 0x2170E8u;
}
