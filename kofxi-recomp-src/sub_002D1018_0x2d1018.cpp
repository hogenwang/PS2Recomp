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

// Function: sub_002D1018
// Address: 0x2d1018 - 0x2d13f0
void sub_002D1018_0x2d1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1018_0x2d1018");
#endif

    switch (ctx->pc) {
        case 0x2d1070u: goto label_2d1070;
        case 0x2d1084u: goto label_2d1084;
        case 0x2d109cu: goto label_2d109c;
        case 0x2d10a8u: goto label_2d10a8;
        case 0x2d10b0u: goto label_2d10b0;
        case 0x2d10c0u: goto label_2d10c0;
        case 0x2d10d0u: goto label_2d10d0;
        case 0x2d10d8u: goto label_2d10d8;
        case 0x2d10f0u: goto label_2d10f0;
        case 0x2d111cu: goto label_2d111c;
        case 0x2d1150u: goto label_2d1150;
        case 0x2d1174u: goto label_2d1174;
        case 0x2d1198u: goto label_2d1198;
        case 0x2d11acu: goto label_2d11ac;
        case 0x2d11c0u: goto label_2d11c0;
        case 0x2d11e8u: goto label_2d11e8;
        case 0x2d1204u: goto label_2d1204;
        case 0x2d121cu: goto label_2d121c;
        case 0x2d1230u: goto label_2d1230;
        case 0x2d1240u: goto label_2d1240;
        case 0x2d125cu: goto label_2d125c;
        case 0x2d1278u: goto label_2d1278;
        case 0x2d128cu: goto label_2d128c;
        case 0x2d12acu: goto label_2d12ac;
        case 0x2d12c4u: goto label_2d12c4;
        case 0x2d12f8u: goto label_2d12f8;
        case 0x2d1318u: goto label_2d1318;
        case 0x2d1330u: goto label_2d1330;
        case 0x2d1360u: goto label_2d1360;
        case 0x2d1374u: goto label_2d1374;
        case 0x2d137cu: goto label_2d137c;
        case 0x2d1390u: goto label_2d1390;
        case 0x2d1398u: goto label_2d1398;
        case 0x2d13a0u: goto label_2d13a0;
        case 0x2d13acu: goto label_2d13ac;
        case 0x2d13b8u: goto label_2d13b8;
        default: break;
    }

    ctx->pc = 0x2d1018u;

    // 0x2d1018: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d101c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2d101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2d1020: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2d1020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d1024: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2d1024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2d1028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d102c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2d102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2d1030: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d1030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1034: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2d1034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2d1038: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d1038u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d103c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2d103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2d1040: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2d1040u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1044: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2d1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d1048: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2d1048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2d104c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d1050: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2d1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2d1054: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2d1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2d1058: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2d1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2d105c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2d105cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2d1060: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x2d1060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x2d1064: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x2d1064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x2d1068: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1068u;
    SET_GPR_U32(ctx, 31, 0x2D1070u);
    ctx->pc = 0x2D106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1068u;
    // 0x2d106c: 0xafa90034  sw          $t1, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1068u, 0x2D1070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1070u;
label_2d1070:
    // 0x2d1070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1074: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1078: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2d1078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d107c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D107Cu;
    SET_GPR_U32(ctx, 31, 0x2D1084u);
    ctx->pc = 0x2D1080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D107Cu;
    // 0x2d1080: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D107Cu, 0x2D1084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1084u;
label_2d1084:
    // 0x2d1084: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2d1084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d1088: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d108c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1090: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2d1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d1094: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D1094u;
    SET_GPR_U32(ctx, 31, 0x2D109Cu);
    ctx->pc = 0x2D1098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1094u;
    // 0x2d1098: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D1094u, 0x2D109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D109Cu;
label_2d109c:
    // 0x2d109c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2d109cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d10a0: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D10A0u;
    SET_GPR_U32(ctx, 31, 0x2D10A8u);
    ctx->pc = 0x2D10A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D10A0u;
    // 0x2d10a4: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D10A0u, 0x2D10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10A8u;
label_2d10a8:
    // 0x2d10a8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2D10A8u;
    {
        const bool branch_taken_0x2d10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d10a8) {
            ctx->pc = 0x2D1310u;
            goto label_2d1310;
        }
    }
    ctx->pc = 0x2D10B0u;
label_2d10b0:
    // 0x2d10b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d10b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d10b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10b8: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D10B8u;
    SET_GPR_U32(ctx, 31, 0x2D10C0u);
    ctx->pc = 0x2D10BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D10B8u;
    // 0x2d10bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D10B8u, 0x2D10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10C0u;
label_2d10c0:
    // 0x2d10c0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2d10c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D10C4u;
    {
        const bool branch_taken_0x2d10c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10C4u;
        // 0x2d10c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10c4) {
            ctx->pc = 0x2D1128u;
            goto label_2d1128;
        }
    }
    ctx->pc = 0x2D10CCu;
    // 0x2d10cc: 0x0  nop
    ctx->pc = 0x2d10ccu;
    // NOP
label_2d10d0:
    // 0x2d10d0: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D10D0u;
    SET_GPR_U32(ctx, 31, 0x2D10D8u);
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D10D0u, 0x2D10D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10D8u;
label_2d10d8:
    // 0x2d10d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d10dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d10dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10e0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d10e4: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2d10e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d10e8: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D10E8u;
    SET_GPR_U32(ctx, 31, 0x2D10F0u);
    ctx->pc = 0x2D10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D10E8u;
    // 0x2d10ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D10E8u, 0x2D10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10F0u;
label_2d10f0:
    // 0x2d10f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d10f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2d10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d10fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d10fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1100: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2d1100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1104: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x2d1104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d1108: 0x1620008d  bnez        $s1, . + 4 + (0x8D << 2)
    ctx->pc = 0x2D1108u;
    {
        const bool branch_taken_0x2d1108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1108u;
        // 0x2d110c: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1108) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1110u;
    // 0x2d1110: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2d1110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1114: 0xc0b426e  jal         func_2D09B8
    ctx->pc = 0x2D1114u;
    SET_GPR_U32(ctx, 31, 0x2D111Cu);
    ctx->pc = 0x2D1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1114u;
    // 0x2d1118: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D09B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D09B8u, 0x2D1114u, 0x2D111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D111Cu;
label_2d111c:
    // 0x2d111c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d111cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1120: 0x16200087  bnez        $s1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2D1120u;
    {
        const bool branch_taken_0x2d1120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1120u;
        // 0x2d1124: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1120) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1128u;
label_2d1128:
    // 0x2d1128: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x2d1128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2d112c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D112Cu;
    {
        const bool branch_taken_0x2d112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d112c) {
            ctx->pc = 0x2D1160u;
            goto label_2d1160;
        }
    }
    ctx->pc = 0x2D1134u;
    // 0x2d1134: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1134u;
    {
        const bool branch_taken_0x2d1134 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1134u;
        // 0x2d1138: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1134) {
            ctx->pc = 0x2D1148u;
            goto label_2d1148;
        }
    }
    ctx->pc = 0x2D113Cu;
    // 0x2d113c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D113Cu;
    {
        const bool branch_taken_0x2d113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D113Cu;
        // 0x2d1140: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d113c) {
            ctx->pc = 0x2D10D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d10d8;
        }
    }
    ctx->pc = 0x2D1144u;
    // 0x2d1144: 0x0  nop
    ctx->pc = 0x2d1144u;
    // NOP
label_2d1148:
    // 0x2d1148: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D1148u;
    SET_GPR_U32(ctx, 31, 0x2D1150u);
    ctx->pc = 0x2D114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1148u;
    // 0x2d114c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2D1148u, 0x2D1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1150u;
label_2d1150:
    // 0x2d1150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1154: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2D1154u;
    {
        const bool branch_taken_0x2d1154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1154u;
        // 0x2d1158: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1154) {
            ctx->pc = 0x2D10D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d10d0;
        }
    }
    ctx->pc = 0x2D115Cu;
    // 0x2d115c: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x2d115cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d1160:
    // 0x2d1160: 0x16200077  bnez        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2D1160u;
    {
        const bool branch_taken_0x2d1160 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1160) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1168u;
    // 0x2d1168: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d116c: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D116Cu;
    SET_GPR_U32(ctx, 31, 0x2D1174u);
    ctx->pc = 0x2D1170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D116Cu;
    // 0x2d1170: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D116Cu, 0x2D1174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1174u;
label_2d1174:
    // 0x2d1174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1178: 0x16200071  bnez        $s1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2D1178u;
    {
        const bool branch_taken_0x2d1178 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1178u;
        // 0x2d117c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1178) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1180u;
    // 0x2d1180: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d1180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1184: 0x8fb40030  lw          $s4, 0x30($sp)
    ctx->pc = 0x2d1184u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1188: 0x26f00004  addiu       $s0, $s7, 0x4
    ctx->pc = 0x2d1188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2d118c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2D118Cu;
    {
        const bool branch_taken_0x2d118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D118Cu;
        // 0x2d1190: 0x2452000c  addiu       $s2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d118c) {
            ctx->pc = 0x2D12DCu;
            goto label_2d12dc;
        }
    }
    ctx->pc = 0x2D1194u;
    // 0x2d1194: 0x0  nop
    ctx->pc = 0x2d1194u;
    // NOP
label_2d1198:
    // 0x2d1198: 0x4430023  bgezl       $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D1198u;
    {
        const bool branch_taken_0x2d1198 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d1198) {
            ctx->pc = 0x2D119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1198u;
            // 0x2d119c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1228u;
            goto label_2d1228;
        }
    }
    ctx->pc = 0x2D11A0u;
    // 0x2d11a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11a4: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D11A4u;
    SET_GPR_U32(ctx, 31, 0x2D11ACu);
    ctx->pc = 0x2D11A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11A4u;
    // 0x2d11a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D11A4u, 0x2D11ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11ACu;
label_2d11ac:
    // 0x2d11ac: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D11ACu;
    {
        const bool branch_taken_0x2d11ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11ACu;
        // 0x2d11b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11ac) {
            ctx->pc = 0x2D11D8u;
            goto label_2d11d8;
        }
    }
    ctx->pc = 0x2D11B4u;
    // 0x2d11b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d11b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d11b8: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D11B8u;
    SET_GPR_U32(ctx, 31, 0x2D11C0u);
    ctx->pc = 0x2D11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11B8u;
    // 0x2d11bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D11B8u, 0x2D11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11C0u;
label_2d11c0:
    // 0x2d11c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d11c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11c4: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D11C4u;
    {
        const bool branch_taken_0x2d11c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11c4) {
            ctx->pc = 0x2D11C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D11C4u;
            // 0x2d11c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1234u;
            goto label_2d1234;
        }
    }
    ctx->pc = 0x2D11CCu;
    // 0x2d11cc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2D11CCu;
    {
        const bool branch_taken_0x2d11cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11cc) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D11D4u;
    // 0x2d11d4: 0x0  nop
    ctx->pc = 0x2d11d4u;
    // NOP
label_2d11d8:
    // 0x2d11d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d11dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d11dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11e0: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D11E0u;
    SET_GPR_U32(ctx, 31, 0x2D11E8u);
    ctx->pc = 0x2D11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11E0u;
    // 0x2d11e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D11E0u, 0x2D11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11E8u;
label_2d11e8:
    // 0x2d11e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d11e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11ec: 0x16200054  bnez        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D11ECu;
    {
        const bool branch_taken_0x2d11ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d11ec) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D11F4u;
    // 0x2d11f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d11f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d11f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d11f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11fc: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D11FCu;
    SET_GPR_U32(ctx, 31, 0x2D1204u);
    ctx->pc = 0x2D1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11FCu;
    // 0x2d1200: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D11FCu, 0x2D1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1204u;
label_2d1204:
    // 0x2d1204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1208: 0x1620004d  bnez        $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D1208u;
    {
        const bool branch_taken_0x2d1208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1208) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1210u;
    // 0x2d1210: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d1210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1214: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D1214u;
    SET_GPR_U32(ctx, 31, 0x2D121Cu);
    ctx->pc = 0x2D1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1214u;
    // 0x2d1218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D1214u, 0x2D121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D121Cu;
label_2d121c:
    // 0x2d121c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D121Cu;
    {
        const bool branch_taken_0x2d121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D121Cu;
        // 0x2d1220: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d121c) {
            ctx->pc = 0x2D1234u;
            goto label_2d1234;
        }
    }
    ctx->pc = 0x2D1224u;
    // 0x2d1224: 0x0  nop
    ctx->pc = 0x2d1224u;
    // NOP
label_2d1228:
    // 0x2d1228: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D1228u;
    SET_GPR_U32(ctx, 31, 0x2D1230u);
    ctx->pc = 0x2D122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1228u;
    // 0x2d122c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D1228u, 0x2D1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1230u;
label_2d1230:
    // 0x2d1230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d1230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d1234:
    // 0x2d1234: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d1234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1238: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D1238u;
    SET_GPR_U32(ctx, 31, 0x2D1240u);
    ctx->pc = 0x2D123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1238u;
    // 0x2d123c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D1238u, 0x2D1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1240u;
label_2d1240:
    // 0x2d1240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1244: 0x1620003e  bnez        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D1244u;
    {
        const bool branch_taken_0x2d1244 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1244) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D124Cu;
    // 0x2d124c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1254: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D1254u;
    SET_GPR_U32(ctx, 31, 0x2D125Cu);
    ctx->pc = 0x2D1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1254u;
    // 0x2d1258: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D1254u, 0x2D125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D125Cu;
label_2d125c:
    // 0x2d125c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d125cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1260: 0x16200037  bnez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D1260u;
    {
        const bool branch_taken_0x2d1260 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1260) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1268u;
    // 0x2d1268: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d1268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d126c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1270: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D1270u;
    SET_GPR_U32(ctx, 31, 0x2D1278u);
    ctx->pc = 0x2D1274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1270u;
    // 0x2d1274: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D1270u, 0x2D1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1278u;
label_2d1278:
    // 0x2d1278: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D1278u;
    {
        const bool branch_taken_0x2d1278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1278) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1280u;
    // 0x2d1280: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x2d1280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d1284: 0xc0b4fac  jal         func_2D3EB0
    ctx->pc = 0x2D1284u;
    SET_GPR_U32(ctx, 31, 0x2D128Cu);
    ctx->pc = 0x2D1288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1284u;
    // 0x2d1288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3EB0u, 0x2D1284u, 0x2D128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D128Cu;
label_2d128c:
    // 0x2d128c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D128Cu;
    {
        const bool branch_taken_0x2d128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D128Cu;
        // 0x2d1290: 0x26c2ffff  addiu       $v0, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d128c) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1294u;
    // 0x2d1294: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2d1294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d1298: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D1298u;
    {
        const bool branch_taken_0x2d1298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1298u;
        // 0x2d129c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1298) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D12A0u;
    // 0x2d12a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d12a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12a4: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D12A4u;
    SET_GPR_U32(ctx, 31, 0x2D12ACu);
    ctx->pc = 0x2D12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12A4u;
    // 0x2d12a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D12A4u, 0x2D12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12ACu;
label_2d12ac:
    // 0x2d12ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d12acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12b0: 0x16200023  bnez        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D12B0u;
    {
        const bool branch_taken_0x2d12b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d12b0) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D12B8u;
    // 0x2d12b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12bc: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D12BCu;
    SET_GPR_U32(ctx, 31, 0x2D12C4u);
    ctx->pc = 0x2D12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12BCu;
    // 0x2d12c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D12BCu, 0x2D12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12C4u;
label_2d12c4:
    // 0x2d12c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d12c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12c8: 0x1620001d  bnez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D12C8u;
    {
        const bool branch_taken_0x2d12c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12C8u;
        // 0x2d12cc: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12c8) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D12D0u;
    // 0x2d12d0: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x2d12d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2d12d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d12d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d12d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d12d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2d12dc:
    // 0x2d12dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d12e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d12e4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x2d12e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d12e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d12e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d12ec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2d12ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12f0: 0xc0b5066  jal         func_2D4198
    ctx->pc = 0x2D12F0u;
    SET_GPR_U32(ctx, 31, 0x2D12F8u);
    ctx->pc = 0x2D12F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12F0u;
    // 0x2d12f4: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4198u, 0x2D12F0u, 0x2D12F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12F8u;
label_2d12f8:
    // 0x2d12f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d12f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12fc: 0x1220ffa6  beqz        $s1, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2D12FCu;
    {
        const bool branch_taken_0x2d12fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12FCu;
        // 0x2d1300: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12fc) {
            ctx->pc = 0x2D1198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1198;
        }
    }
    ctx->pc = 0x2D1304u;
    // 0x2d1304: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D1304u;
    {
        const bool branch_taken_0x2d1304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1304) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D130Cu;
    // 0x2d130c: 0x0  nop
    ctx->pc = 0x2d130cu;
    // NOP
label_2d1310:
    // 0x2d1310: 0xc0b6178  jal         func_2D85E0
    ctx->pc = 0x2D1310u;
    SET_GPR_U32(ctx, 31, 0x2D1318u);
    ctx->pc = 0x2D1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1310u;
    // 0x2d1314: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85E0u, 0x2D1310u, 0x2D1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1318u;
label_2d1318:
    // 0x2d1318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d131c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D131Cu;
    {
        const bool branch_taken_0x2d131c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d131c) {
            ctx->pc = 0x2D1340u;
            goto label_2d1340;
        }
    }
    ctx->pc = 0x2D1324u;
    // 0x2d1324: 0x168080  sll         $s0, $s6, 2
    ctx->pc = 0x2d1324u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2d1328: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D1328u;
    SET_GPR_U32(ctx, 31, 0x2D1330u);
    ctx->pc = 0x2D132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1328u;
    // 0x2d132c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2D1328u, 0x2D1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1330u;
label_2d1330:
    // 0x2d1330: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d1330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1334: 0x16e0ff5e  bnez        $s7, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x2D1334u;
    {
        const bool branch_taken_0x2d1334 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1334u;
        // 0x2d1338: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1334) {
            ctx->pc = 0x2D10B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d10b0;
        }
    }
    ctx->pc = 0x2D133Cu;
    // 0x2d133c: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d1340:
    // 0x2d1340: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1340u;
    {
        const bool branch_taken_0x2d1340 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1340) {
            ctx->pc = 0x2D1390u;
            goto label_2d1390;
        }
    }
    ctx->pc = 0x2D1348u;
    // 0x2d1348: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d1348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d134c: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x2d134cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2d1350: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1350u;
    {
        const bool branch_taken_0x2d1350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1350) {
            ctx->pc = 0x2D1388u;
            goto label_2d1388;
        }
    }
    ctx->pc = 0x2D1358u;
    // 0x2d1358: 0x26d5ffff  addiu       $s5, $s6, -0x1
    ctx->pc = 0x2d1358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2d135c: 0x26f00004  addiu       $s0, $s7, 0x4
    ctx->pc = 0x2d135cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_2d1360:
    // 0x2d1360: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1364: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1364u;
    {
        const bool branch_taken_0x2d1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1364u;
        // 0x2d1368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1364) {
            ctx->pc = 0x2D137Cu;
            goto label_2d137c;
        }
    }
    ctx->pc = 0x2D136Cu;
    // 0x2d136c: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D136Cu;
    SET_GPR_U32(ctx, 31, 0x2D1374u);
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D136Cu, 0x2D1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1374u;
label_2d1374:
    // 0x2d1374: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D1374u;
    SET_GPR_U32(ctx, 31, 0x2D137Cu);
    ctx->pc = 0x2D1378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1374u;
    // 0x2d1378: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D1374u, 0x2D137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D137Cu;
label_2d137c:
    // 0x2d137c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2d137cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2d1380: 0x16a0fff7  bnez        $s5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D1380u;
    {
        const bool branch_taken_0x2d1380 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1380u;
        // 0x2d1384: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1380) {
            ctx->pc = 0x2D1360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1360;
        }
    }
    ctx->pc = 0x2D1388u;
label_2d1388:
    // 0x2d1388: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D1388u;
    SET_GPR_U32(ctx, 31, 0x2D1390u);
    ctx->pc = 0x2D138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1388u;
    // 0x2d138c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D1388u, 0x2D1390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1390u;
label_2d1390:
    // 0x2d1390: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1390u;
    SET_GPR_U32(ctx, 31, 0x2D1398u);
    ctx->pc = 0x2D1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1390u;
    // 0x2d1394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1390u, 0x2D1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1398u;
label_2d1398:
    // 0x2d1398: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1398u;
    SET_GPR_U32(ctx, 31, 0x2D13A0u);
    ctx->pc = 0x2D139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1398u;
    // 0x2d139c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1398u, 0x2D13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13A0u;
label_2d13a0:
    // 0x2d13a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13a4: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D13A4u;
    SET_GPR_U32(ctx, 31, 0x2D13ACu);
    ctx->pc = 0x2D13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13A4u;
    // 0x2d13a8: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D13A4u, 0x2D13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13ACu;
label_2d13ac:
    // 0x2d13ac: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2d13acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d13b0: 0xc0b3eee  jal         func_2CFBB8
    ctx->pc = 0x2D13B0u;
    SET_GPR_U32(ctx, 31, 0x2D13B8u);
    ctx->pc = 0x2D13B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13B0u;
    // 0x2d13b4: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB8u, 0x2D13B0u, 0x2D13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13B8u;
label_2d13b8:
    // 0x2d13b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d13b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13bc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2d13bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d13c0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2d13c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d13c4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d13c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d13c8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2d13c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d13cc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2d13ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d13d0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2d13d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d13d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2d13d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d13d8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2d13d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d13dc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2d13dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d13e0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2d13e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d13e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D13E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13E4u;
        // 0x2d13e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D13E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D13ECu;
    // 0x2d13ec: 0x0  nop
    ctx->pc = 0x2d13ecu;
    // NOP
    if (ctx->pc == 0x2d13ecu) { ctx->pc = 0x2d13f0u; }
}
