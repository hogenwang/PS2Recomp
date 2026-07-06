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

// Function: sub_00149DF0
// Address: 0x149df0 - 0x14a6e0
void sub_00149DF0_0x149df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DF0_0x149df0");
#endif

    switch (ctx->pc) {
        case 0x149e28u: goto label_149e28;
        case 0x14a2e0u: goto label_14a2e0;
        case 0x14a340u: goto label_14a340;
        case 0x14a3a4u: goto label_14a3a4;
        case 0x14a404u: goto label_14a404;
        case 0x14a464u: goto label_14a464;
        case 0x14a4c4u: goto label_14a4c4;
        case 0x14a524u: goto label_14a524;
        case 0x14a534u: goto label_14a534;
        case 0x14a594u: goto label_14a594;
        case 0x14a5a4u: goto label_14a5a4;
        case 0x14a604u: goto label_14a604;
        case 0x14a614u: goto label_14a614;
        case 0x14a674u: goto label_14a674;
        case 0x14a684u: goto label_14a684;
        default: break;
    }

    ctx->pc = 0x149df0u;

    // 0x149df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x149df4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x149df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x149df8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149dfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149e00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149e04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149e08: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x149e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
    // 0x149e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e10: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x149e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x149e14: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x149e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
    // 0x149e18: 0x9082046c  lbu         $v0, 0x46C($a0)
    ctx->pc = 0x149e18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x149e1c: 0xa482046c  sh          $v0, 0x46C($a0)
    ctx->pc = 0x149e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1132), (uint16_t)GPR_U32(ctx, 2));
    // 0x149e20: 0xc05089c  jal         func_142270
    ctx->pc = 0x149E20u;
    SET_GPR_U32(ctx, 31, 0x149E28u);
    ctx->pc = 0x149E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E20u;
    // 0x149e24: 0xac800474  sw          $zero, 0x474($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142270u, 0x149E20u, 0x149E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E28u;
label_149e28:
    // 0x149e28: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x149e2c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x149e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x149e30: 0x3463bc00  ori         $v1, $v1, 0xBC00
    ctx->pc = 0x149e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48128);
    // 0x149e34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x149e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x149e38: 0x5060006f  beql        $v1, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x149E38u;
    {
        const bool branch_taken_0x149e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e38) {
            ctx->pc = 0x149E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149E38u;
            // 0x149e3c: 0x8e030494  lw          $v1, 0x494($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FF8u;
            goto label_149ff8;
        }
    }
    ctx->pc = 0x149E40u;
    // 0x149e40: 0x8e050410  lw          $a1, 0x410($s0)
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x149e44: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x149e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x149e48: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x149E48u;
    {
        const bool branch_taken_0x149e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e48) {
            ctx->pc = 0x149E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149E48u;
            // 0x149e4c: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149E9Cu;
            goto label_149e9c;
        }
    }
    ctx->pc = 0x149E50u;
    // 0x149e50: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x149e54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x149e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x149e58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x149E58u;
    {
        const bool branch_taken_0x149e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e58) {
            ctx->pc = 0x149E98u;
            goto label_149e98;
        }
    }
    ctx->pc = 0x149E60u;
    // 0x149e60: 0x9603041c  lhu         $v1, 0x41C($s0)
    ctx->pc = 0x149e60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x149e64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149e68: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149E68u;
    {
        const bool branch_taken_0x149e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149e68) {
            ctx->pc = 0x149E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149E68u;
            // 0x149e6c: 0x3c02ffdf  lui         $v0, 0xFFDF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149E80u;
            goto label_149e80;
        }
    }
    ctx->pc = 0x149E70u;
    // 0x149e70: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x149e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x149e74: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x149e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x149e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149E78u;
    {
        const bool branch_taken_0x149e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E78u;
        // 0x149e7c: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e78) {
            ctx->pc = 0x149E8Cu;
            goto label_149e8c;
        }
    }
    ctx->pc = 0x149E80u;
label_149e80:
    // 0x149e80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x149e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x149e84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x149e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x149e88: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x149e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_149e8c:
    // 0x149e8c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x149e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x149e90: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x149E90u;
    {
        const bool branch_taken_0x149e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E90u;
        // 0x149e94: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e90) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x149E98u;
label_149e98:
    // 0x149e98: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x149e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_149e9c:
    // 0x149e9c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x149E9Cu;
    {
        const bool branch_taken_0x149e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e9c) {
            ctx->pc = 0x149EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149E9Cu;
            // 0x149ea0: 0x30a30040  andi        $v1, $a1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149EF8u;
            goto label_149ef8;
        }
    }
    ctx->pc = 0x149EA4u;
    // 0x149ea4: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x149ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x149ea8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x149ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x149eac: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x149EACu;
    {
        const bool branch_taken_0x149eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149eac) {
            ctx->pc = 0x149EF4u;
            goto label_149ef4;
        }
    }
    ctx->pc = 0x149EB4u;
    // 0x149eb4: 0x9604041e  lhu         $a0, 0x41E($s0)
    ctx->pc = 0x149eb4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1054)));
    // 0x149eb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149ebc: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149EBCu;
    {
        const bool branch_taken_0x149ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x149ebc) {
            ctx->pc = 0x149EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EBCu;
            // 0x149ec0: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149ED8u;
            goto label_149ed8;
        }
    }
    ctx->pc = 0x149EC4u;
    // 0x149ec4: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x149ec8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x149ecc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x149eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149ed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149ED0u;
    {
        const bool branch_taken_0x149ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149ED0u;
        // 0x149ed4: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ed0) {
            ctx->pc = 0x149EE8u;
            goto label_149ee8;
        }
    }
    ctx->pc = 0x149ED8u;
label_149ed8:
    // 0x149ed8: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x149edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x149edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x149ee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149ee4: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x149ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_149ee8:
    // 0x149ee8: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x149ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x149eec: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x149EECu;
    {
        const bool branch_taken_0x149eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EECu;
        // 0x149ef0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149eec) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x149EF4u;
label_149ef4:
    // 0x149ef4: 0x30a30040  andi        $v1, $a1, 0x40
    ctx->pc = 0x149ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_149ef8:
    // 0x149ef8: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x149EF8u;
    {
        const bool branch_taken_0x149ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ef8) {
            ctx->pc = 0x149EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EF8u;
            // 0x149efc: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F68u;
            goto label_149f68;
        }
    }
    ctx->pc = 0x149F00u;
    // 0x149f00: 0x8c440494  lw          $a0, 0x494($v0)
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x149f04: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x149f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x149f08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x149f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x149f0c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x149F0Cu;
    {
        const bool branch_taken_0x149f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f0c) {
            ctx->pc = 0x149F64u;
            goto label_149f64;
        }
    }
    ctx->pc = 0x149F14u;
    // 0x149f14: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x149f18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x149f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x149f1c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x149F1Cu;
    {
        const bool branch_taken_0x149f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f1c) {
            ctx->pc = 0x149F64u;
            goto label_149f64;
        }
    }
    ctx->pc = 0x149F24u;
    // 0x149f24: 0x96040420  lhu         $a0, 0x420($s0)
    ctx->pc = 0x149f24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x149f28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149f2c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149F2Cu;
    {
        const bool branch_taken_0x149f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x149f2c) {
            ctx->pc = 0x149F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F2Cu;
            // 0x149f30: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F48u;
            goto label_149f48;
        }
    }
    ctx->pc = 0x149F34u;
    // 0x149f34: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x149f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x149f38: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x149f3c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x149f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149F40u;
    {
        const bool branch_taken_0x149f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F40u;
        // 0x149f44: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f40) {
            ctx->pc = 0x149F58u;
            goto label_149f58;
        }
    }
    ctx->pc = 0x149F48u;
label_149f48:
    // 0x149f48: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x149f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x149f4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x149f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x149f50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149f54: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x149f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_149f58:
    // 0x149f58: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x149f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x149f5c: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x149F5Cu;
    {
        const bool branch_taken_0x149f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F5Cu;
        // 0x149f60: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f5c) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x149F64u;
label_149f64:
    // 0x149f64: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x149f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_149f68:
    // 0x149f68: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x149F68u;
    {
        const bool branch_taken_0x149f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f68) {
            ctx->pc = 0x149FF4u;
            goto label_149ff4;
        }
    }
    ctx->pc = 0x149F70u;
    // 0x149f70: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x149f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x149f74: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x149f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x149f78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149f7c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x149F7Cu;
    {
        const bool branch_taken_0x149f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f7c) {
            ctx->pc = 0x149FF4u;
            goto label_149ff4;
        }
    }
    ctx->pc = 0x149F84u;
    // 0x149f84: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x149f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x149f88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149f8c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x149F8Cu;
    {
        const bool branch_taken_0x149f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149f8c) {
            ctx->pc = 0x149FF4u;
            goto label_149ff4;
        }
    }
    ctx->pc = 0x149F94u;
    // 0x149f94: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x149f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x149f98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149f9c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x149F9Cu;
    {
        const bool branch_taken_0x149f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149f9c) {
            ctx->pc = 0x149FF4u;
            goto label_149ff4;
        }
    }
    ctx->pc = 0x149FA4u;
    // 0x149fa4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x149fa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149fac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x149FACu;
    {
        const bool branch_taken_0x149fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149fac) {
            ctx->pc = 0x149FF4u;
            goto label_149ff4;
        }
    }
    ctx->pc = 0x149FB4u;
    // 0x149fb4: 0x96040422  lhu         $a0, 0x422($s0)
    ctx->pc = 0x149fb4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1058)));
    // 0x149fb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149fbc: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149FBCu;
    {
        const bool branch_taken_0x149fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x149fbc) {
            ctx->pc = 0x149FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149FBCu;
            // 0x149fc0: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FD8u;
            goto label_149fd8;
        }
    }
    ctx->pc = 0x149FC4u;
    // 0x149fc4: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x149fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x149fc8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x149fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x149fcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x149fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149fd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149FD0u;
    {
        const bool branch_taken_0x149fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FD0u;
        // 0x149fd4: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fd0) {
            ctx->pc = 0x149FE8u;
            goto label_149fe8;
        }
    }
    ctx->pc = 0x149FD8u;
label_149fd8:
    // 0x149fd8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x149fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x149fdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x149fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x149fe0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149fe4: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x149fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_149fe8:
    // 0x149fe8: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x149fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x149fec: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x149FECu;
    {
        const bool branch_taken_0x149fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FECu;
        // 0x149ff0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fec) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x149FF4u;
label_149ff4:
    // 0x149ff4: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x149ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_149ff8:
    // 0x149ff8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x149ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x149ffc: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x149ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a000: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A000u;
    {
        const bool branch_taken_0x14a000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a000) {
            ctx->pc = 0x14A004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A000u;
            // 0x14a004: 0x8e020410  lw          $v0, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A010u;
            goto label_14a010;
        }
    }
    ctx->pc = 0x14A008u;
    // 0x14a008: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x14A008u;
    {
        const bool branch_taken_0x14a008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A008u;
        // 0x14a00c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a008) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A010u;
label_14a010:
    // 0x14a010: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x14a010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14a014: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x14A014u;
    {
        const bool branch_taken_0x14a014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a014) {
            ctx->pc = 0x14A018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A014u;
            // 0x14a018: 0x30440002  andi        $a0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A064u;
            goto label_14a064;
        }
    }
    ctx->pc = 0x14A01Cu;
    // 0x14a01c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x14a01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14a020: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x14A020u;
    {
        const bool branch_taken_0x14a020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a020) {
            ctx->pc = 0x14A060u;
            goto label_14a060;
        }
    }
    ctx->pc = 0x14A028u;
    // 0x14a028: 0x96040414  lhu         $a0, 0x414($s0)
    ctx->pc = 0x14a028u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x14a02c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x14a02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a030: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A030u;
    {
        const bool branch_taken_0x14a030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a030) {
            ctx->pc = 0x14A034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A030u;
            // 0x14a034: 0x3c03fffd  lui         $v1, 0xFFFD (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A048u;
            goto label_14a048;
        }
    }
    ctx->pc = 0x14A038u;
    // 0x14a038: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x14a038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x14a03c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14a040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A040u;
    {
        const bool branch_taken_0x14a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A040u;
        // 0x14a044: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a040) {
            ctx->pc = 0x14A054u;
            goto label_14a054;
        }
    }
    ctx->pc = 0x14A048u;
label_14a048:
    // 0x14a048: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14a048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14a04c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14a04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14a050: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a054:
    // 0x14a054: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a058: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x14A058u;
    {
        const bool branch_taken_0x14a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A058u;
        // 0x14a05c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a058) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A060u;
label_14a060:
    // 0x14a060: 0x30440002  andi        $a0, $v0, 0x2
    ctx->pc = 0x14a060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_14a064:
    // 0x14a064: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A064u;
    {
        const bool branch_taken_0x14a064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a064) {
            ctx->pc = 0x14A068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A064u;
            // 0x14a068: 0x30440004  andi        $a0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A0BCu;
            goto label_14a0bc;
        }
    }
    ctx->pc = 0x14A06Cu;
    // 0x14a06c: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x14a06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x14a070: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14A070u;
    {
        const bool branch_taken_0x14a070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a070) {
            ctx->pc = 0x14A0B8u;
            goto label_14a0b8;
        }
    }
    ctx->pc = 0x14A078u;
    // 0x14a078: 0x96040416  lhu         $a0, 0x416($s0)
    ctx->pc = 0x14a078u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1046)));
    // 0x14a07c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a080: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A080u;
    {
        const bool branch_taken_0x14a080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a080) {
            ctx->pc = 0x14A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A080u;
            // 0x14a084: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A09Cu;
            goto label_14a09c;
        }
    }
    ctx->pc = 0x14A088u;
    // 0x14a088: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x14a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a08c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x14a090: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14a094: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A094u;
    {
        const bool branch_taken_0x14a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A094u;
        // 0x14a098: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a094) {
            ctx->pc = 0x14A0ACu;
            goto label_14a0ac;
        }
    }
    ctx->pc = 0x14A09Cu;
label_14a09c:
    // 0x14a09c: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x14a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x14a0a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a0a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a0a8: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a0ac:
    // 0x14a0ac: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a0b0: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x14A0B0u;
    {
        const bool branch_taken_0x14a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0B0u;
        // 0x14a0b4: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0b0) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A0B8u;
label_14a0b8:
    // 0x14a0b8: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x14a0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_14a0bc:
    // 0x14a0bc: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14A0BCu;
    {
        const bool branch_taken_0x14a0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a0bc) {
            ctx->pc = 0x14A0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A0BCu;
            // 0x14a0c0: 0x30440008  andi        $a0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A124u;
            goto label_14a124;
        }
    }
    ctx->pc = 0x14A0C4u;
    // 0x14a0c4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x14a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x14a0c8: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x14a0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14a0cc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A0CCu;
    {
        const bool branch_taken_0x14a0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a0cc) {
            ctx->pc = 0x14A120u;
            goto label_14a120;
        }
    }
    ctx->pc = 0x14A0D4u;
    // 0x14a0d4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x14a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x14a0d8: 0x652024  and         $a0, $v1, $a1
    ctx->pc = 0x14a0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14a0dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A0DCu;
    {
        const bool branch_taken_0x14a0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a0dc) {
            ctx->pc = 0x14A120u;
            goto label_14a120;
        }
    }
    ctx->pc = 0x14A0E4u;
    // 0x14a0e4: 0x96040418  lhu         $a0, 0x418($s0)
    ctx->pc = 0x14a0e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x14a0e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a0ec: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A0ECu;
    {
        const bool branch_taken_0x14a0ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a0ec) {
            ctx->pc = 0x14A0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A0ECu;
            // 0x14a0f0: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A104u;
            goto label_14a104;
        }
    }
    ctx->pc = 0x14A0F4u;
    // 0x14a0f4: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x14a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a0f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14a0fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A0FCu;
    {
        const bool branch_taken_0x14a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0FCu;
        // 0x14a100: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0fc) {
            ctx->pc = 0x14A114u;
            goto label_14a114;
        }
    }
    ctx->pc = 0x14A104u;
label_14a104:
    // 0x14a104: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x14a104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x14a108: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a10c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a110: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a114:
    // 0x14a114: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a118: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x14A118u;
    {
        const bool branch_taken_0x14a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A118u;
        // 0x14a11c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a118) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A120u;
label_14a120:
    // 0x14a120: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x14a120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_14a124:
    // 0x14a124: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14A124u;
    {
        const bool branch_taken_0x14a124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a124) {
            ctx->pc = 0x14A128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A124u;
            // 0x14a128: 0x30440100  andi        $a0, $v0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A1B4u;
            goto label_14a1b4;
        }
    }
    ctx->pc = 0x14A12Cu;
    // 0x14a12c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x14a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x14a130: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x14a130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14a134: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14A134u;
    {
        const bool branch_taken_0x14a134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a134) {
            ctx->pc = 0x14A1B0u;
            goto label_14a1b0;
        }
    }
    ctx->pc = 0x14A13Cu;
    // 0x14a13c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x14a140: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x14a140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14a144: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A144u;
    {
        const bool branch_taken_0x14a144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a144) {
            ctx->pc = 0x14A1B0u;
            goto label_14a1b0;
        }
    }
    ctx->pc = 0x14A14Cu;
    // 0x14a14c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x14a150: 0x652024  and         $a0, $v1, $a1
    ctx->pc = 0x14a150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14a154: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A154u;
    {
        const bool branch_taken_0x14a154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a154) {
            ctx->pc = 0x14A1B0u;
            goto label_14a1b0;
        }
    }
    ctx->pc = 0x14A15Cu;
    // 0x14a15c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14a160: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x14a160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14a164: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A164u;
    {
        const bool branch_taken_0x14a164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a164) {
            ctx->pc = 0x14A1B0u;
            goto label_14a1b0;
        }
    }
    ctx->pc = 0x14A16Cu;
    // 0x14a16c: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A16Cu;
    {
        const bool branch_taken_0x14a16c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a16c) {
            ctx->pc = 0x14A1B0u;
            goto label_14a1b0;
        }
    }
    ctx->pc = 0x14A174u;
    // 0x14a174: 0x9604041a  lhu         $a0, 0x41A($s0)
    ctx->pc = 0x14a174u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1050)));
    // 0x14a178: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a17c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A17Cu;
    {
        const bool branch_taken_0x14a17c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a17c) {
            ctx->pc = 0x14A180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A17Cu;
            // 0x14a180: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A194u;
            goto label_14a194;
        }
    }
    ctx->pc = 0x14A184u;
    // 0x14a184: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x14a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a188: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14a18c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A18Cu;
    {
        const bool branch_taken_0x14a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A18Cu;
        // 0x14a190: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a18c) {
            ctx->pc = 0x14A1A4u;
            goto label_14a1a4;
        }
    }
    ctx->pc = 0x14A194u;
label_14a194:
    // 0x14a194: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x14a198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a19c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a1a0: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a1a4:
    // 0x14a1a4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a1a8: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x14A1A8u;
    {
        const bool branch_taken_0x14a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1A8u;
        // 0x14a1ac: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1a8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A1B0u;
label_14a1b0:
    // 0x14a1b0: 0x30440100  andi        $a0, $v0, 0x100
    ctx->pc = 0x14a1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_14a1b4:
    // 0x14a1b4: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A1B4u;
    {
        const bool branch_taken_0x14a1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a1b4) {
            ctx->pc = 0x14A1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A1B4u;
            // 0x14a1b8: 0x30440400  andi        $a0, $v0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A20Cu;
            goto label_14a20c;
        }
    }
    ctx->pc = 0x14A1BCu;
    // 0x14a1bc: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x14a1c0: 0x652024  and         $a0, $v1, $a1
    ctx->pc = 0x14a1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14a1c4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A1C4u;
    {
        const bool branch_taken_0x14a1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a1c4) {
            ctx->pc = 0x14A208u;
            goto label_14a208;
        }
    }
    ctx->pc = 0x14A1CCu;
    // 0x14a1cc: 0x96040424  lhu         $a0, 0x424($s0)
    ctx->pc = 0x14a1ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1060)));
    // 0x14a1d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a1d4: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A1D4u;
    {
        const bool branch_taken_0x14a1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a1d4) {
            ctx->pc = 0x14A1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A1D4u;
            // 0x14a1d8: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A1ECu;
            goto label_14a1ec;
        }
    }
    ctx->pc = 0x14A1DCu;
    // 0x14a1dc: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a1e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14a1e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A1E4u;
    {
        const bool branch_taken_0x14a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1E4u;
        // 0x14a1e8: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1e4) {
            ctx->pc = 0x14A1FCu;
            goto label_14a1fc;
        }
    }
    ctx->pc = 0x14A1ECu;
label_14a1ec:
    // 0x14a1ec: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x14a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x14a1f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a1f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a1f8: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a1fc:
    // 0x14a1fc: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a200: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x14A200u;
    {
        const bool branch_taken_0x14a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A200u;
        // 0x14a204: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a200) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A208u;
label_14a208:
    // 0x14a208: 0x30440400  andi        $a0, $v0, 0x400
    ctx->pc = 0x14a208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_14a20c:
    // 0x14a20c: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A20Cu;
    {
        const bool branch_taken_0x14a20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a20c) {
            ctx->pc = 0x14A210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A20Cu;
            // 0x14a210: 0x30420200  andi        $v0, $v0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A268u;
            goto label_14a268;
        }
    }
    ctx->pc = 0x14A214u;
    // 0x14a214: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14a214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14a218: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x14a218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14a21c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14A21Cu;
    {
        const bool branch_taken_0x14a21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a21c) {
            ctx->pc = 0x14A264u;
            goto label_14a264;
        }
    }
    ctx->pc = 0x14A224u;
    // 0x14a224: 0x96040428  lhu         $a0, 0x428($s0)
    ctx->pc = 0x14a224u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x14a228: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a22c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A22Cu;
    {
        const bool branch_taken_0x14a22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a22c) {
            ctx->pc = 0x14A230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A22Cu;
            // 0x14a230: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A248u;
            goto label_14a248;
        }
    }
    ctx->pc = 0x14A234u;
    // 0x14a234: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a238: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x14a23c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14a240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A240u;
    {
        const bool branch_taken_0x14a240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A240u;
        // 0x14a244: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a240) {
            ctx->pc = 0x14A258u;
            goto label_14a258;
        }
    }
    ctx->pc = 0x14A248u;
label_14a248:
    // 0x14a248: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x14a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x14a24c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a254: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a258:
    // 0x14a258: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a25c: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x14A25Cu;
    {
        const bool branch_taken_0x14a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A25Cu;
        // 0x14a260: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a25c) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A264u;
label_14a264:
    // 0x14a264: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_14a268:
    // 0x14a268: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A268u;
    {
        const bool branch_taken_0x14a268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a268) {
            ctx->pc = 0x14A26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A268u;
            // 0x14a26c: 0x8e020470  lw          $v0, 0x470($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2C4u;
            goto label_14a2c4;
        }
    }
    ctx->pc = 0x14A270u;
    // 0x14a270: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x14a274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a278: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14A278u;
    {
        const bool branch_taken_0x14a278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a278) {
            ctx->pc = 0x14A2C0u;
            goto label_14a2c0;
        }
    }
    ctx->pc = 0x14A280u;
    // 0x14a280: 0x96040426  lhu         $a0, 0x426($s0)
    ctx->pc = 0x14a280u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1062)));
    // 0x14a284: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a288: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A288u;
    {
        const bool branch_taken_0x14a288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a288) {
            ctx->pc = 0x14A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A288u;
            // 0x14a28c: 0x8e030410  lw          $v1, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2A4u;
            goto label_14a2a4;
        }
    }
    ctx->pc = 0x14A290u;
    // 0x14a290: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a294: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14a294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14a298: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14a29c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A29Cu;
    {
        const bool branch_taken_0x14a29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A29Cu;
        // 0x14a2a0: 0xae020410  sw          $v0, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a29c) {
            ctx->pc = 0x14A2B4u;
            goto label_14a2b4;
        }
    }
    ctx->pc = 0x14A2A4u;
label_14a2a4:
    // 0x14a2a4: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x14a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x14a2a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a2ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a2b0: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x14a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14a2b4:
    // 0x14a2b4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a2b8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x14A2B8u;
    {
        const bool branch_taken_0x14a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2B8u;
        // 0x14a2bc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2b8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A2C0u;
label_14a2c0:
    // 0x14a2c0: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
label_14a2c4:
    // 0x14a2c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14a2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14a2c8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A2C8u;
    {
        const bool branch_taken_0x14a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a2c8) {
            ctx->pc = 0x14A2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A2C8u;
            // 0x14a2cc: 0x8e020470  lw          $v0, 0x470($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A324u;
            goto label_14a324;
        }
    }
    ctx->pc = 0x14A2D0u;
    // 0x14a2d0: 0x8e110478  lw          $s1, 0x478($s0)
    ctx->pc = 0x14a2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1144)));
    // 0x14a2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2d8: 0xc050d40  jal         func_143500
    ctx->pc = 0x14A2D8u;
    SET_GPR_U32(ctx, 31, 0x14A2E0u);
    ctx->pc = 0x14A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2D8u;
    // 0x14a2dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143500u, 0x14A2D8u, 0x14A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2E0u;
label_14a2e0:
    // 0x14a2e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14A2E0u;
    {
        const bool branch_taken_0x14a2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a2e0) {
            ctx->pc = 0x14A320u;
            goto label_14a320;
        }
    }
    ctx->pc = 0x14A2E8u;
    // 0x14a2e8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x14a2e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a2ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a2f0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A2F0u;
    {
        const bool branch_taken_0x14a2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a2f0) {
            ctx->pc = 0x14A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A2F0u;
            // 0x14a2f4: 0x8e030474  lw          $v1, 0x474($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A308u;
            goto label_14a308;
        }
    }
    ctx->pc = 0x14A2F8u;
    // 0x14a2f8: 0x8e020474  lw          $v0, 0x474($s0)
    ctx->pc = 0x14a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x14a2fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x14a300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A300u;
    {
        const bool branch_taken_0x14a300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A300u;
        // 0x14a304: 0xae020474  sw          $v0, 0x474($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a300) {
            ctx->pc = 0x14A314u;
            goto label_14a314;
        }
    }
    ctx->pc = 0x14A308u;
label_14a308:
    // 0x14a308: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14a308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14a30c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a310: 0xae020474  sw          $v0, 0x474($s0)
    ctx->pc = 0x14a310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 2));
label_14a314:
    // 0x14a314: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a318: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x14A318u;
    {
        const bool branch_taken_0x14a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A318u;
        // 0x14a31c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a318) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A320u;
label_14a320:
    // 0x14a320: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x14a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
label_14a324:
    // 0x14a324: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14a328: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A328u;
    {
        const bool branch_taken_0x14a328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a328) {
            ctx->pc = 0x14A32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A328u;
            // 0x14a32c: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A384u;
            goto label_14a384;
        }
    }
    ctx->pc = 0x14A330u;
    // 0x14a330: 0x8e11047c  lw          $s1, 0x47C($s0)
    ctx->pc = 0x14a330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x14a334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a338: 0xc050dd0  jal         func_143740
    ctx->pc = 0x14A338u;
    SET_GPR_U32(ctx, 31, 0x14A340u);
    ctx->pc = 0x14A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A338u;
    // 0x14a33c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143740u, 0x14A338u, 0x14A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A340u;
label_14a340:
    // 0x14a340: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14A340u;
    {
        const bool branch_taken_0x14a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a340) {
            ctx->pc = 0x14A380u;
            goto label_14a380;
        }
    }
    ctx->pc = 0x14A348u;
    // 0x14a348: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x14a348u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a34c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a350: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A350u;
    {
        const bool branch_taken_0x14a350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a350) {
            ctx->pc = 0x14A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A350u;
            // 0x14a354: 0x8e030474  lw          $v1, 0x474($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A368u;
            goto label_14a368;
        }
    }
    ctx->pc = 0x14A358u;
    // 0x14a358: 0x8e020474  lw          $v0, 0x474($s0)
    ctx->pc = 0x14a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x14a35c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14a35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14a360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A360u;
    {
        const bool branch_taken_0x14a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A360u;
        // 0x14a364: 0xae020474  sw          $v0, 0x474($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a360) {
            ctx->pc = 0x14A374u;
            goto label_14a374;
        }
    }
    ctx->pc = 0x14A368u;
label_14a368:
    // 0x14a368: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14a36c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a370: 0xae020474  sw          $v0, 0x474($s0)
    ctx->pc = 0x14a370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 2));
label_14a374:
    // 0x14a374: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x14a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x14a378: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x14A378u;
    {
        const bool branch_taken_0x14a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A378u;
        // 0x14a37c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a378) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A380u;
label_14a380:
    // 0x14a380: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a384:
    // 0x14a384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14a384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14a388: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A388u;
    {
        const bool branch_taken_0x14a388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a388) {
            ctx->pc = 0x14A38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A388u;
            // 0x14a38c: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A3E4u;
            goto label_14a3e4;
        }
    }
    ctx->pc = 0x14A390u;
    // 0x14a390: 0x9605043e  lhu         $a1, 0x43E($s0)
    ctx->pc = 0x14a390u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1086)));
    // 0x14a394: 0x96060440  lhu         $a2, 0x440($s0)
    ctx->pc = 0x14a394u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x14a398: 0x9611043c  lhu         $s1, 0x43C($s0)
    ctx->pc = 0x14a398u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x14a39c: 0xc050d24  jal         func_143490
    ctx->pc = 0x14A39Cu;
    SET_GPR_U32(ctx, 31, 0x14A3A4u);
    ctx->pc = 0x14A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A39Cu;
    // 0x14a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143490u, 0x14A39Cu, 0x14A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3A4u;
label_14a3a4:
    // 0x14a3a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A3A4u;
    {
        const bool branch_taken_0x14a3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3a4) {
            ctx->pc = 0x14A3E0u;
            goto label_14a3e0;
        }
    }
    ctx->pc = 0x14A3ACu;
    // 0x14a3ac: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a3b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a3b4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A3B4u;
    {
        const bool branch_taken_0x14a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a3b4) {
            ctx->pc = 0x14A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A3B4u;
            // 0x14a3b8: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A3CCu;
            goto label_14a3cc;
        }
    }
    ctx->pc = 0x14A3BCu;
    // 0x14a3bc: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a3bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a3c0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14a3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14a3c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3C4u;
    {
        const bool branch_taken_0x14a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3C4u;
        // 0x14a3c8: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3c4) {
            ctx->pc = 0x14A3D4u;
            goto label_14a3d4;
        }
    }
    ctx->pc = 0x14A3CCu;
label_14a3cc:
    // 0x14a3cc: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x14a3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x14a3d0: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a3d4:
    // 0x14a3d4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a3d8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x14A3D8u;
    {
        const bool branch_taken_0x14a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3D8u;
        // 0x14a3dc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3d8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A3E0u;
label_14a3e0:
    // 0x14a3e0: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a3e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a3e4:
    // 0x14a3e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14a3e8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A3E8u;
    {
        const bool branch_taken_0x14a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3e8) {
            ctx->pc = 0x14A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A3E8u;
            // 0x14a3ec: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A444u;
            goto label_14a444;
        }
    }
    ctx->pc = 0x14A3F0u;
    // 0x14a3f0: 0x96050444  lhu         $a1, 0x444($s0)
    ctx->pc = 0x14a3f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x14a3f4: 0x96060446  lhu         $a2, 0x446($s0)
    ctx->pc = 0x14a3f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1094)));
    // 0x14a3f8: 0x96110442  lhu         $s1, 0x442($s0)
    ctx->pc = 0x14a3f8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1090)));
    // 0x14a3fc: 0xc050ca0  jal         func_143280
    ctx->pc = 0x14A3FCu;
    SET_GPR_U32(ctx, 31, 0x14A404u);
    ctx->pc = 0x14A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3FCu;
    // 0x14a400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143280u, 0x14A3FCu, 0x14A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A404u;
label_14a404:
    // 0x14a404: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A404u;
    {
        const bool branch_taken_0x14a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a404) {
            ctx->pc = 0x14A440u;
            goto label_14a440;
        }
    }
    ctx->pc = 0x14A40Cu;
    // 0x14a40c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a410: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a414: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A414u;
    {
        const bool branch_taken_0x14a414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a414) {
            ctx->pc = 0x14A418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A414u;
            // 0x14a418: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A42Cu;
            goto label_14a42c;
        }
    }
    ctx->pc = 0x14A41Cu;
    // 0x14a41c: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a41cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a420: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14a424: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A424u;
    {
        const bool branch_taken_0x14a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A424u;
        // 0x14a428: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a424) {
            ctx->pc = 0x14A434u;
            goto label_14a434;
        }
    }
    ctx->pc = 0x14A42Cu;
label_14a42c:
    // 0x14a42c: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x14a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
    // 0x14a430: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a434:
    // 0x14a434: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a438: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x14A438u;
    {
        const bool branch_taken_0x14a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A438u;
        // 0x14a43c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a438) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A440u;
label_14a440:
    // 0x14a440: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a440u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a444:
    // 0x14a444: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14a444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x14a448: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A448u;
    {
        const bool branch_taken_0x14a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a448) {
            ctx->pc = 0x14A44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A448u;
            // 0x14a44c: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A4A4u;
            goto label_14a4a4;
        }
    }
    ctx->pc = 0x14A450u;
    // 0x14a450: 0x9605044a  lhu         $a1, 0x44A($s0)
    ctx->pc = 0x14a450u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1098)));
    // 0x14a454: 0x9606044c  lhu         $a2, 0x44C($s0)
    ctx->pc = 0x14a454u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1100)));
    // 0x14a458: 0x96110448  lhu         $s1, 0x448($s0)
    ctx->pc = 0x14a458u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1096)));
    // 0x14a45c: 0xc050cbc  jal         func_1432F0
    ctx->pc = 0x14A45Cu;
    SET_GPR_U32(ctx, 31, 0x14A464u);
    ctx->pc = 0x14A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A45Cu;
    // 0x14a460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1432F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1432F0u, 0x14A45Cu, 0x14A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A464u;
label_14a464:
    // 0x14a464: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A464u;
    {
        const bool branch_taken_0x14a464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a464) {
            ctx->pc = 0x14A4A0u;
            goto label_14a4a0;
        }
    }
    ctx->pc = 0x14A46Cu;
    // 0x14a46c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a470: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a474: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A474u;
    {
        const bool branch_taken_0x14a474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a474) {
            ctx->pc = 0x14A478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A474u;
            // 0x14a478: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A48Cu;
            goto label_14a48c;
        }
    }
    ctx->pc = 0x14A47Cu;
    // 0x14a47c: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a47cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a480: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14a480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x14a484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A484u;
    {
        const bool branch_taken_0x14a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A484u;
        // 0x14a488: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a484) {
            ctx->pc = 0x14A494u;
            goto label_14a494;
        }
    }
    ctx->pc = 0x14A48Cu;
label_14a48c:
    // 0x14a48c: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x14a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x14a490: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a494:
    // 0x14a494: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a498: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x14A498u;
    {
        const bool branch_taken_0x14a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A498u;
        // 0x14a49c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a498) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A4A0u;
label_14a4a0:
    // 0x14a4a0: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a4a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a4a4:
    // 0x14a4a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x14a4a8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A4A8u;
    {
        const bool branch_taken_0x14a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a4a8) {
            ctx->pc = 0x14A4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A4A8u;
            // 0x14a4ac: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A504u;
            goto label_14a504;
        }
    }
    ctx->pc = 0x14A4B0u;
    // 0x14a4b0: 0x96050450  lhu         $a1, 0x450($s0)
    ctx->pc = 0x14a4b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x14a4b4: 0x96060452  lhu         $a2, 0x452($s0)
    ctx->pc = 0x14a4b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1106)));
    // 0x14a4b8: 0x9611044e  lhu         $s1, 0x44E($s0)
    ctx->pc = 0x14a4b8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1102)));
    // 0x14a4bc: 0xc050cf0  jal         func_1433C0
    ctx->pc = 0x14A4BCu;
    SET_GPR_U32(ctx, 31, 0x14A4C4u);
    ctx->pc = 0x14A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4BCu;
    // 0x14a4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433C0u, 0x14A4BCu, 0x14A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4C4u;
label_14a4c4:
    // 0x14a4c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A4C4u;
    {
        const bool branch_taken_0x14a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a4c4) {
            ctx->pc = 0x14A500u;
            goto label_14a500;
        }
    }
    ctx->pc = 0x14A4CCu;
    // 0x14a4cc: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a4d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a4d4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A4D4u;
    {
        const bool branch_taken_0x14a4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a4d4) {
            ctx->pc = 0x14A4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A4D4u;
            // 0x14a4d8: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A4ECu;
            goto label_14a4ec;
        }
    }
    ctx->pc = 0x14A4DCu;
    // 0x14a4dc: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a4dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a4e0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x14a4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x14a4e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A4E4u;
    {
        const bool branch_taken_0x14a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4E4u;
        // 0x14a4e8: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4e4) {
            ctx->pc = 0x14A4F4u;
            goto label_14a4f4;
        }
    }
    ctx->pc = 0x14A4ECu;
label_14a4ec:
    // 0x14a4ec: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x14a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x14a4f0: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a4f4:
    // 0x14a4f4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a4f8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x14A4F8u;
    {
        const bool branch_taken_0x14a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F8u;
        // 0x14a4fc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A500u;
label_14a500:
    // 0x14a500: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a500u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a504:
    // 0x14a504: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14a508: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A508u;
    {
        const bool branch_taken_0x14a508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a508) {
            ctx->pc = 0x14A50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A508u;
            // 0x14a50c: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A574u;
            goto label_14a574;
        }
    }
    ctx->pc = 0x14A510u;
    // 0x14a510: 0x96110454  lhu         $s1, 0x454($s0)
    ctx->pc = 0x14a510u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x14a514: 0x96130456  lhu         $s3, 0x456($s0)
    ctx->pc = 0x14a514u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1110)));
    // 0x14a518: 0x96120458  lhu         $s2, 0x458($s0)
    ctx->pc = 0x14a518u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1112)));
    // 0x14a51c: 0xc062804  jal         func_18A010
    ctx->pc = 0x14A51Cu;
    SET_GPR_U32(ctx, 31, 0x14A524u);
    ctx->pc = 0x14A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A51Cu;
    // 0x14a520: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x14A51Cu, 0x14A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A524u;
label_14a524:
    // 0x14a524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a528: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14a528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a52c: 0xc050d24  jal         func_143490
    ctx->pc = 0x14A52Cu;
    SET_GPR_U32(ctx, 31, 0x14A534u);
    ctx->pc = 0x14A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A52Cu;
    // 0x14a530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143490u, 0x14A52Cu, 0x14A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A534u;
label_14a534:
    // 0x14a534: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A534u;
    {
        const bool branch_taken_0x14a534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a534) {
            ctx->pc = 0x14A570u;
            goto label_14a570;
        }
    }
    ctx->pc = 0x14A53Cu;
    // 0x14a53c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a540: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a544: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A544u;
    {
        const bool branch_taken_0x14a544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a544) {
            ctx->pc = 0x14A548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A544u;
            // 0x14a548: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A55Cu;
            goto label_14a55c;
        }
    }
    ctx->pc = 0x14A54Cu;
    // 0x14a54c: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a54cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a550: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x14a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x14a554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A554u;
    {
        const bool branch_taken_0x14a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A554u;
        // 0x14a558: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a554) {
            ctx->pc = 0x14A564u;
            goto label_14a564;
        }
    }
    ctx->pc = 0x14A55Cu;
label_14a55c:
    // 0x14a55c: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x14a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x14a560: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a564:
    // 0x14a564: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a568: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x14A568u;
    {
        const bool branch_taken_0x14a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A568u;
        // 0x14a56c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a568) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A570u;
label_14a570:
    // 0x14a570: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a570u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a574:
    // 0x14a574: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14a574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14a578: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A578u;
    {
        const bool branch_taken_0x14a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a578) {
            ctx->pc = 0x14A57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A578u;
            // 0x14a57c: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A5E4u;
            goto label_14a5e4;
        }
    }
    ctx->pc = 0x14A580u;
    // 0x14a580: 0x9611045a  lhu         $s1, 0x45A($s0)
    ctx->pc = 0x14a580u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1114)));
    // 0x14a584: 0x9613045c  lhu         $s3, 0x45C($s0)
    ctx->pc = 0x14a584u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1116)));
    // 0x14a588: 0x9612045e  lhu         $s2, 0x45E($s0)
    ctx->pc = 0x14a588u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1118)));
    // 0x14a58c: 0xc062804  jal         func_18A010
    ctx->pc = 0x14A58Cu;
    SET_GPR_U32(ctx, 31, 0x14A594u);
    ctx->pc = 0x14A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A58Cu;
    // 0x14a590: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x14A58Cu, 0x14A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A594u;
label_14a594:
    // 0x14a594: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14a598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a59c: 0xc050ca0  jal         func_143280
    ctx->pc = 0x14A59Cu;
    SET_GPR_U32(ctx, 31, 0x14A5A4u);
    ctx->pc = 0x14A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A59Cu;
    // 0x14a5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143280u, 0x14A59Cu, 0x14A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5A4u;
label_14a5a4:
    // 0x14a5a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A5A4u;
    {
        const bool branch_taken_0x14a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a5a4) {
            ctx->pc = 0x14A5E0u;
            goto label_14a5e0;
        }
    }
    ctx->pc = 0x14A5ACu;
    // 0x14a5ac: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a5b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a5b4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A5B4u;
    {
        const bool branch_taken_0x14a5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a5b4) {
            ctx->pc = 0x14A5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A5B4u;
            // 0x14a5b8: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A5CCu;
            goto label_14a5cc;
        }
    }
    ctx->pc = 0x14A5BCu;
    // 0x14a5bc: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a5bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a5c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x14a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x14a5c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A5C4u;
    {
        const bool branch_taken_0x14a5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5C4u;
        // 0x14a5c8: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5c4) {
            ctx->pc = 0x14A5D4u;
            goto label_14a5d4;
        }
    }
    ctx->pc = 0x14A5CCu;
label_14a5cc:
    // 0x14a5cc: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x14a5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x14a5d0: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a5d4:
    // 0x14a5d4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a5d8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x14A5D8u;
    {
        const bool branch_taken_0x14a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5D8u;
        // 0x14a5dc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5d8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A5E0u;
label_14a5e0:
    // 0x14a5e0: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a5e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a5e4:
    // 0x14a5e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14a5e8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A5E8u;
    {
        const bool branch_taken_0x14a5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a5e8) {
            ctx->pc = 0x14A5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A5E8u;
            // 0x14a5ec: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A654u;
            goto label_14a654;
        }
    }
    ctx->pc = 0x14A5F0u;
    // 0x14a5f0: 0x96110460  lhu         $s1, 0x460($s0)
    ctx->pc = 0x14a5f0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14a5f4: 0x96130462  lhu         $s3, 0x462($s0)
    ctx->pc = 0x14a5f4u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1122)));
    // 0x14a5f8: 0x96120464  lhu         $s2, 0x464($s0)
    ctx->pc = 0x14a5f8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x14a5fc: 0xc062804  jal         func_18A010
    ctx->pc = 0x14A5FCu;
    SET_GPR_U32(ctx, 31, 0x14A604u);
    ctx->pc = 0x14A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5FCu;
    // 0x14a600: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x14A5FCu, 0x14A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A604u;
label_14a604:
    // 0x14a604: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a608: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14a608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a60c: 0xc050cbc  jal         func_1432F0
    ctx->pc = 0x14A60Cu;
    SET_GPR_U32(ctx, 31, 0x14A614u);
    ctx->pc = 0x14A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A60Cu;
    // 0x14a610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1432F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1432F0u, 0x14A60Cu, 0x14A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A614u;
label_14a614:
    // 0x14a614: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A614u;
    {
        const bool branch_taken_0x14a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a614) {
            ctx->pc = 0x14A650u;
            goto label_14a650;
        }
    }
    ctx->pc = 0x14A61Cu;
    // 0x14a61c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a620: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a624: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A624u;
    {
        const bool branch_taken_0x14a624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a624) {
            ctx->pc = 0x14A628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A624u;
            // 0x14a628: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A63Cu;
            goto label_14a63c;
        }
    }
    ctx->pc = 0x14A62Cu;
    // 0x14a62c: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a62cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a630: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14a634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A634u;
    {
        const bool branch_taken_0x14a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A634u;
        // 0x14a638: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a634) {
            ctx->pc = 0x14A644u;
            goto label_14a644;
        }
    }
    ctx->pc = 0x14A63Cu;
label_14a63c:
    // 0x14a63c: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x14a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x14a640: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a644:
    // 0x14a644: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a648: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14A648u;
    {
        const bool branch_taken_0x14a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A648u;
        // 0x14a64c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a648) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A650u;
label_14a650:
    // 0x14a650: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a650u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a654:
    // 0x14a654: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14a654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x14a658: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A658u;
    {
        const bool branch_taken_0x14a658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a658) {
            ctx->pc = 0x14A65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A658u;
            // 0x14a65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A660u;
    // 0x14a660: 0x96110466  lhu         $s1, 0x466($s0)
    ctx->pc = 0x14a660u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1126)));
    // 0x14a664: 0x96130468  lhu         $s3, 0x468($s0)
    ctx->pc = 0x14a664u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x14a668: 0x9612046a  lhu         $s2, 0x46A($s0)
    ctx->pc = 0x14a668u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1130)));
    // 0x14a66c: 0xc062804  jal         func_18A010
    ctx->pc = 0x14A66Cu;
    SET_GPR_U32(ctx, 31, 0x14A674u);
    ctx->pc = 0x14A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A66Cu;
    // 0x14a670: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x14A66Cu, 0x14A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A674u;
label_14a674:
    // 0x14a674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a678: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14a678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a67c: 0xc050cf0  jal         func_1433C0
    ctx->pc = 0x14A67Cu;
    SET_GPR_U32(ctx, 31, 0x14A684u);
    ctx->pc = 0x14A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A67Cu;
    // 0x14a680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433C0u, 0x14A67Cu, 0x14A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A684u;
label_14a684:
    // 0x14a684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A684u;
    {
        const bool branch_taken_0x14a684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a684) {
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A68Cu;
    // 0x14a68c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x14a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14a690: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a694: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A694u;
    {
        const bool branch_taken_0x14a694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a694) {
            ctx->pc = 0x14A698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A694u;
            // 0x14a698: 0x9602046c  lhu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6ACu;
            goto label_14a6ac;
        }
    }
    ctx->pc = 0x14A69Cu;
    // 0x14a69c: 0x9602046c  lhu         $v0, 0x46C($s0)
    ctx->pc = 0x14a69cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a6a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14a6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14a6a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A6A4u;
    {
        const bool branch_taken_0x14a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6A4u;
        // 0x14a6a8: 0xa602046c  sh          $v0, 0x46C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6a4) {
            ctx->pc = 0x14A6B4u;
            goto label_14a6b4;
        }
    }
    ctx->pc = 0x14A6ACu;
label_14a6ac:
    // 0x14a6ac: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14a6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14a6b0: 0xa602046c  sh          $v0, 0x46C($s0)
    ctx->pc = 0x14a6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1132), (uint16_t)GPR_U32(ctx, 2));
label_14a6b4:
    // 0x14a6b4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14a6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14a6b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A6B8u;
    {
        const bool branch_taken_0x14a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6B8u;
        // 0x14a6bc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6b8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A6C0u;
label_14a6c0:
    // 0x14a6c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14a6c4:
    // 0x14a6c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14a6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a6c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a6c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6D8u;
        // 0x14a6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A6E0u;
}
