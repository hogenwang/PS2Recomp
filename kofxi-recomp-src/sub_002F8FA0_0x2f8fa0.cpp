#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8FA0
// Address: 0x2f8fa0 - 0x2f90a0
void sub_002F8FA0_0x2f8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8FA0_0x2f8fa0");
#endif

    switch (ctx->pc) {
        case 0x2f8fa0u: goto label_2f8fa0;
        case 0x2f8fa4u: goto label_2f8fa4;
        case 0x2f8fa8u: goto label_2f8fa8;
        case 0x2f8facu: goto label_2f8fac;
        case 0x2f8fb0u: goto label_2f8fb0;
        case 0x2f8fb4u: goto label_2f8fb4;
        case 0x2f8fb8u: goto label_2f8fb8;
        case 0x2f8fbcu: goto label_2f8fbc;
        case 0x2f8fc0u: goto label_2f8fc0;
        case 0x2f8fc4u: goto label_2f8fc4;
        case 0x2f8fc8u: goto label_2f8fc8;
        case 0x2f8fccu: goto label_2f8fcc;
        case 0x2f8fd0u: goto label_2f8fd0;
        case 0x2f8fd4u: goto label_2f8fd4;
        case 0x2f8fd8u: goto label_2f8fd8;
        case 0x2f8fdcu: goto label_2f8fdc;
        case 0x2f8fe0u: goto label_2f8fe0;
        case 0x2f8fe4u: goto label_2f8fe4;
        case 0x2f8fe8u: goto label_2f8fe8;
        case 0x2f8fecu: goto label_2f8fec;
        case 0x2f8ff0u: goto label_2f8ff0;
        case 0x2f8ff4u: goto label_2f8ff4;
        case 0x2f8ff8u: goto label_2f8ff8;
        case 0x2f8ffcu: goto label_2f8ffc;
        case 0x2f9000u: goto label_2f9000;
        case 0x2f9004u: goto label_2f9004;
        case 0x2f9008u: goto label_2f9008;
        case 0x2f900cu: goto label_2f900c;
        case 0x2f9010u: goto label_2f9010;
        case 0x2f9014u: goto label_2f9014;
        case 0x2f9018u: goto label_2f9018;
        case 0x2f901cu: goto label_2f901c;
        case 0x2f9020u: goto label_2f9020;
        case 0x2f9024u: goto label_2f9024;
        case 0x2f9028u: goto label_2f9028;
        case 0x2f902cu: goto label_2f902c;
        case 0x2f9030u: goto label_2f9030;
        case 0x2f9034u: goto label_2f9034;
        case 0x2f9038u: goto label_2f9038;
        case 0x2f903cu: goto label_2f903c;
        case 0x2f9040u: goto label_2f9040;
        case 0x2f9044u: goto label_2f9044;
        case 0x2f9048u: goto label_2f9048;
        case 0x2f904cu: goto label_2f904c;
        case 0x2f9050u: goto label_2f9050;
        case 0x2f9054u: goto label_2f9054;
        case 0x2f9058u: goto label_2f9058;
        case 0x2f905cu: goto label_2f905c;
        case 0x2f9060u: goto label_2f9060;
        case 0x2f9064u: goto label_2f9064;
        case 0x2f9068u: goto label_2f9068;
        case 0x2f906cu: goto label_2f906c;
        case 0x2f9070u: goto label_2f9070;
        case 0x2f9074u: goto label_2f9074;
        case 0x2f9078u: goto label_2f9078;
        case 0x2f907cu: goto label_2f907c;
        case 0x2f9080u: goto label_2f9080;
        case 0x2f9084u: goto label_2f9084;
        case 0x2f9088u: goto label_2f9088;
        case 0x2f908cu: goto label_2f908c;
        case 0x2f9090u: goto label_2f9090;
        case 0x2f9094u: goto label_2f9094;
        case 0x2f9098u: goto label_2f9098;
        case 0x2f909cu: goto label_2f909c;
        default: break;
    }

    ctx->pc = 0x2f8fa0u;

label_2f8fa0:
    // 0x2f8fa0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2f8fa4:
    // 0x2f8fa4: 0x3e00008  jr          $ra
label_2f8fa8:
    if (ctx->pc == 0x2F8FA8u) {
        ctx->pc = 0x2F8FA8u;
            // 0x2f8fa8: 0x8c620650  lw          $v0, 0x650($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1616)));
        ctx->pc = 0x2F8FACu;
        goto label_2f8fac;
    }
    ctx->pc = 0x2F8FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FA4u;
            // 0x2f8fa8: 0x8c620650  lw          $v0, 0x650($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8FACu;
label_2f8fac:
    // 0x2f8fac: 0x0  nop
    ctx->pc = 0x2f8facu;
    // NOP
label_2f8fb0:
    // 0x2f8fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f8fb4:
    // 0x2f8fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f8fb8:
    // 0x2f8fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f8fbc:
    // 0x2f8fbc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f8fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f8fc0:
    // 0x2f8fc0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2f8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f8fc4:
    // 0x2f8fc4: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x2f8fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
label_2f8fc8:
    // 0x2f8fc8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8fcc:
    // 0x2f8fcc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
label_2f8fd0:
    // 0x2f8fd0: 0x8c430684  lw          $v1, 0x684($v0)
    ctx->pc = 0x2f8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1668)));
label_2f8fd4:
    // 0x2f8fd4: 0xacc50690  sw          $a1, 0x690($a2)
    ctx->pc = 0x2f8fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1680), GPR_U32(ctx, 5));
label_2f8fd8:
    // 0x2f8fd8: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f8fd8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8fdc:
    // 0x2f8fdc: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2f8fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
label_2f8fe0:
    // 0x2f8fe0: 0x8ca20678  lw          $v0, 0x678($a1)
    ctx->pc = 0x2f8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1656)));
label_2f8fe4:
    // 0x2f8fe4: 0x40f809  jalr        $v0
label_2f8fe8:
    if (ctx->pc == 0x2F8FE8u) {
        ctx->pc = 0x2F8FECu;
        goto label_2f8fec;
    }
    ctx->pc = 0x2F8FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8FECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FECu; }
            if (ctx->pc != 0x2F8FECu) { return; }
        }
        }
    }
    ctx->pc = 0x2F8FECu;
label_2f8fec:
    // 0x2f8fec: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f8fecu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ff0:
    // 0x2f8ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8ff4:
    // 0x2f8ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8ff8:
    // 0x2f8ff8: 0x3e00008  jr          $ra
label_2f8ffc:
    if (ctx->pc == 0x2F8FFCu) {
        ctx->pc = 0x2F8FFCu;
            // 0x2f8ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F9000u;
        goto label_2f9000;
    }
    ctx->pc = 0x2F8FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FF8u;
            // 0x2f8ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9000u;
label_2f9000:
    // 0x2f9000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f9004:
    // 0x2f9004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f9008:
    // 0x2f9008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f900c:
    // 0x2f900c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f900cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9010:
    // 0x2f9010: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2f9010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f9014:
    // 0x2f9014: 0x3c0701cb  lui         $a3, 0x1CB
    ctx->pc = 0x2f9014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)459 << 16));
label_2f9018:
    // 0x2f9018: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f9018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f901c:
    // 0x2f901c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
label_2f9020:
    // 0x2f9020: 0x8c430688  lw          $v1, 0x688($v0)
    ctx->pc = 0x2f9020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1672)));
label_2f9024:
    // 0x2f9024: 0xace60690  sw          $a2, 0x690($a3)
    ctx->pc = 0x2f9024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1680), GPR_U32(ctx, 6));
label_2f9028:
    // 0x2f9028: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f9028u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f902c:
    // 0x2f902c: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
label_2f9030:
    // 0x2f9030: 0x8cc2067c  lw          $v0, 0x67C($a2)
    ctx->pc = 0x2f9030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1660)));
label_2f9034:
    // 0x2f9034: 0x40f809  jalr        $v0
label_2f9038:
    if (ctx->pc == 0x2F9038u) {
        ctx->pc = 0x2F903Cu;
        goto label_2f903c;
    }
    ctx->pc = 0x2F9034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F903Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F903Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F903Cu; }
            if (ctx->pc != 0x2F903Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F903Cu;
label_2f903c:
    // 0x2f903c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f903cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9040:
    // 0x2f9040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9044:
    // 0x2f9044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9048:
    // 0x2f9048: 0x3e00008  jr          $ra
label_2f904c:
    if (ctx->pc == 0x2F904Cu) {
        ctx->pc = 0x2F904Cu;
            // 0x2f904c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F9050u;
        goto label_2f9050;
    }
    ctx->pc = 0x2F9048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F904Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9048u;
            // 0x2f904c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9050u;
label_2f9050:
    // 0x2f9050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f9054:
    // 0x2f9054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f9058:
    // 0x2f9058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f905c:
    // 0x2f905c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f905cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9060:
    // 0x2f9060: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2f9060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f9064:
    // 0x2f9064: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x2f9064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
label_2f9068:
    // 0x2f9068: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f9068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f906c:
    // 0x2f906c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
label_2f9070:
    // 0x2f9070: 0x8c43068c  lw          $v1, 0x68C($v0)
    ctx->pc = 0x2f9070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
label_2f9074:
    // 0x2f9074: 0xacc50690  sw          $a1, 0x690($a2)
    ctx->pc = 0x2f9074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1680), GPR_U32(ctx, 5));
label_2f9078:
    // 0x2f9078: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f9078u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f907c:
    // 0x2f907c: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2f907cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
label_2f9080:
    // 0x2f9080: 0x8ca20680  lw          $v0, 0x680($a1)
    ctx->pc = 0x2f9080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1664)));
label_2f9084:
    // 0x2f9084: 0x40f809  jalr        $v0
label_2f9088:
    if (ctx->pc == 0x2F9088u) {
        ctx->pc = 0x2F908Cu;
        goto label_2f908c;
    }
    ctx->pc = 0x2F9084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F908Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F908Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F908Cu; }
            if (ctx->pc != 0x2F908Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F908Cu;
label_2f908c:
    // 0x2f908c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f908cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9090:
    // 0x2f9090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9094:
    // 0x2f9094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9098:
    // 0x2f9098: 0x3e00008  jr          $ra
label_2f909c:
    if (ctx->pc == 0x2F909Cu) {
        ctx->pc = 0x2F909Cu;
            // 0x2f909c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F90A0u;
        goto label_fallthrough_0x2f9098;
    }
    ctx->pc = 0x2F9098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9098u;
            // 0x2f909c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f9098:
    ctx->pc = 0x2F90A0u;
    ctx->pc = 0x2f90a0u;
}
