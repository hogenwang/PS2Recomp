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

// Function: sub_001F0FA0
// Address: 0x1f0fa0 - 0x1f1108
void sub_001F0FA0_0x1f0fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0FA0_0x1f0fa0");
#endif

    switch (ctx->pc) {
        case 0x1f0ff0u: goto label_1f0ff0;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f1058u: goto label_1f1058;
        case 0x1f1070u: goto label_1f1070;
        case 0x1f1080u: goto label_1f1080;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f10c0u: goto label_1f10c0;
        case 0x1f10d4u: goto label_1f10d4;
        default: break;
    }

    ctx->pc = 0x1f0fa0u;

    // 0x1f0fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0fa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f0fa8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f0fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f0facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f0fb0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f0fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f0fb4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f0fbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f0fc0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f0fc4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f0fc8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f0fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f0fcc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1f0fccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1f0fd0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f0fd4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F0FD4u;
    {
        const bool branch_taken_0x1f0fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FD4u;
        // 0x1f0fd8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fd4) {
            ctx->pc = 0x1F10A8u;
            goto label_1f10a8;
        }
    }
    ctx->pc = 0x1F0FDCu;
    // 0x1f0fdc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f0fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fe4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f0fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fe8: 0xc0762e6  jal         func_1D8B98
    ctx->pc = 0x1F0FE8u;
    SET_GPR_U32(ctx, 31, 0x1F0FF0u);
    ctx->pc = 0x1F0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FE8u;
    // 0x1f0fec: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B98u, 0x1F0FE8u, 0x1F0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FF0u;
label_1f0ff0:
    // 0x1f0ff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ff4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0FF4u;
    {
        const bool branch_taken_0x1f0ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ff4) {
            ctx->pc = 0x1F0FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0FF4u;
            // 0x1f0ff8: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0FFCu;
    // 0x1f0ffc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F0FFCu;
    {
        const bool branch_taken_0x1f0ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ffc) {
            ctx->pc = 0x1F10CCu;
            goto label_1f10cc;
        }
    }
    ctx->pc = 0x1F1004u;
    // 0x1f1004: 0x0  nop
    ctx->pc = 0x1f1004u;
    // NOP
label_1f1008:
    // 0x1f1008: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f100c: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x1f100cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x1f1010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1014: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f1014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f1018: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1F1018u;
    {
        const bool branch_taken_0x1f1018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1018u;
        // 0x1f101c: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1018) {
            ctx->pc = 0x1F10DCu;
            goto label_1f10dc;
        }
    }
    ctx->pc = 0x1F1020u;
label_1f1020:
    // 0x1f1020: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f1020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1024: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x1f1024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f1028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f102c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f102cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1030: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1f1030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1034: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1f1034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f1038: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f1038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f103c: 0xe2980a  movz        $s3, $a3, $v0
    ctx->pc = 0x1f103cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
    // 0x1f1040: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1f1040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f1044: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1f1044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f1048: 0xe2800a  movz        $s0, $a3, $v0
    ctx->pc = 0x1f1048u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x1f104c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f104cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1050: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F1050u;
    SET_GPR_U32(ctx, 31, 0x1F1058u);
    ctx->pc = 0x1F1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1050u;
    // 0x1f1054: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1F1050u, 0x1F1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1058u;
label_1f1058:
    // 0x1f1058: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f1058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f105c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f105cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1060: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f1064: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x1f1064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x1f1068: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F1068u;
    SET_GPR_U32(ctx, 31, 0x1F1070u);
    ctx->pc = 0x1F106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1068u;
    // 0x1f106c: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1F1068u, 0x1F1070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1070u;
label_1f1070:
    // 0x1f1070: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1f1070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f1074: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1074u;
    {
        const bool branch_taken_0x1f1074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1074) {
            ctx->pc = 0x1F1078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1074u;
            // 0x1f1078: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F10ACu;
            goto label_1f10ac;
        }
    }
    ctx->pc = 0x1F107Cu;
    // 0x1f107c: 0x0  nop
    ctx->pc = 0x1f107cu;
    // NOP
label_1f1080:
    // 0x1f1080: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F1080u;
    SET_GPR_U32(ctx, 31, 0x1F1088u);
    ctx->pc = 0x1F1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1080u;
    // 0x1f1084: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1F1080u, 0x1F1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1088u;
label_1f1088:
    // 0x1f1088: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f108c: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x1f108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1f1090: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F1090u;
    {
        const bool branch_taken_0x1f1090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1090) {
            ctx->pc = 0x1F1094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1090u;
            // 0x1f1094: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1008;
        }
    }
    ctx->pc = 0x1F1098u;
    // 0x1f1098: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f1098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f109c: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x1f109cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f10a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F10A0u;
    {
        const bool branch_taken_0x1f10a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f10a0) {
            ctx->pc = 0x1F1080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1080;
        }
    }
    ctx->pc = 0x1F10A8u;
label_1f10a8:
    // 0x1f10a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f10ac:
    // 0x1f10ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f10acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f10b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f10b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f10b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10b8: 0xc0762e6  jal         func_1D8B98
    ctx->pc = 0x1F10B8u;
    SET_GPR_U32(ctx, 31, 0x1F10C0u);
    ctx->pc = 0x1F10BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10B8u;
    // 0x1f10bc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B98u, 0x1F10B8u, 0x1F10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10C0u;
label_1f10c0:
    // 0x1f10c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f10c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10c4: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F10C4u;
    {
        const bool branch_taken_0x1f10c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10c4) {
            ctx->pc = 0x1F10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F10C4u;
            // 0x1f10c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F10E0u;
            goto label_1f10e0;
        }
    }
    ctx->pc = 0x1F10CCu;
label_1f10cc:
    // 0x1f10cc: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F10CCu;
    SET_GPR_U32(ctx, 31, 0x1F10D4u);
    ctx->pc = 0x1F10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10CCu;
    // 0x1f10d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1F10CCu, 0x1F10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10D4u;
label_1f10d4:
    // 0x1f10d4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1f10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1f10d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f10d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f10dc:
    // 0x1f10dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f10dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f10e0:
    // 0x1f10e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f10e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f10e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f10e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f10e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f10e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f10ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f10f0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f10f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f10f4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f10f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f10f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f10f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f10fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F10FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10FCu;
        // 0x1f1100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F10FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1104u;
    // 0x1f1104: 0x0  nop
    ctx->pc = 0x1f1104u;
    // NOP
}
