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

// Function: sub_00300F30
// Address: 0x300f30 - 0x301110
void sub_00300F30_0x300f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300F30_0x300f30");
#endif

    switch (ctx->pc) {
        case 0x300f4cu: goto label_300f4c;
        case 0x300f60u: goto label_300f60;
        case 0x300fa8u: goto label_300fa8;
        case 0x300fb4u: goto label_300fb4;
        case 0x300fb8u: goto label_300fb8;
        case 0x300fccu: goto label_300fcc;
        case 0x300fdcu: goto label_300fdc;
        case 0x301008u: goto label_301008;
        case 0x301060u: goto label_301060;
        case 0x301098u: goto label_301098;
        case 0x3010acu: goto label_3010ac;
        case 0x3010dcu: goto label_3010dc;
        case 0x301100u: goto label_301100;
        default: break;
    }

    ctx->pc = 0x300f30u;

    // 0x300f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x300f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x300f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x300f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x300f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300f40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x300f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300f44: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x300f44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x300f48: 0x2610beb0  addiu       $s0, $s0, -0x4150
    ctx->pc = 0x300f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950576));
label_300f4c:
    // 0x300f4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x300f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300f50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300F50u;
    {
        const bool branch_taken_0x300f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x300f50) {
            ctx->pc = 0x300F68u;
            goto label_300f68;
        }
    }
    ctx->pc = 0x300F58u;
    // 0x300f58: 0xc055728  jal         func_155CA0
    ctx->pc = 0x300F58u;
    SET_GPR_U32(ctx, 31, 0x300F60u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x300F58u, 0x300F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F60u;
label_300f60:
    // 0x300f60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x300f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x300f64: 0x0  nop
    ctx->pc = 0x300f64u;
    // NOP
label_300f68:
    // 0x300f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x300f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x300f6c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x300f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x300f70: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x300F70u;
    {
        const bool branch_taken_0x300f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F70u;
        // 0x300f74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f70) {
            ctx->pc = 0x300F4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_300f4c;
        }
    }
    ctx->pc = 0x300F78u;
    // 0x300f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x300f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300f84: 0x3e00008  jr          $ra
    ctx->pc = 0x300F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F84u;
        // 0x300f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300F8Cu;
    // 0x300f8c: 0x0  nop
    ctx->pc = 0x300f8cu;
    // NOP
    // 0x300f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300f94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x300f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300fa0: 0xc069184  jal         func_1A4610
    ctx->pc = 0x300FA0u;
    SET_GPR_U32(ctx, 31, 0x300FA8u);
    ctx->pc = 0x300FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FA0u;
    // 0x300fa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x300FA0u, 0x300FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FA8u;
label_300fa8:
    // 0x300fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300fac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x300facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x300fb0: 0xac439728  sw          $v1, -0x68D8($v0)
    ctx->pc = 0x300fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
label_300fb4:
    // 0x300fb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300fb8:
    // 0x300fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fbc: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x300fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x300fc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fc4: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x300FC4u;
    SET_GPR_U32(ctx, 31, 0x300FCCu);
    ctx->pc = 0x300FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FC4u;
    // 0x300fc8: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x300FC4u, 0x300FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FCCu;
label_300fcc:
    // 0x300fcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fd4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300FD4u;
    SET_GPR_U32(ctx, 31, 0x300FDCu);
    ctx->pc = 0x300FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FD4u;
    // 0x300fd8: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300FD4u, 0x300FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FDCu;
label_300fdc:
    // 0x300fdc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x300fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300fe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300fe4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300FE4u;
    {
        const bool branch_taken_0x300fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300fe4) {
            ctx->pc = 0x300FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300FE4u;
            // 0x300fe8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301010u;
            goto label_301010;
        }
    }
    ctx->pc = 0x300FECu;
    // 0x300fec: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300ff4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300ff8: 0x24a5da50  addiu       $a1, $a1, -0x25B0
    ctx->pc = 0x300ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957648));
    // 0x300ffc: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x300ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x301000: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x301000u;
    SET_GPR_U32(ctx, 31, 0x301008u);
    ctx->pc = 0x301004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301000u;
    // 0x301004: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x301000u, 0x301008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301008u;
label_301008:
    // 0x301008: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x301008u;
    {
        const bool branch_taken_0x301008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301008u;
        // 0x30100c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301008) {
            ctx->pc = 0x301104u;
            goto label_301104;
        }
    }
    ctx->pc = 0x301010u;
label_301010:
    // 0x301010: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x301010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x301014: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x301014u;
    {
        const bool branch_taken_0x301014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301014) {
            ctx->pc = 0x3010B4u;
            goto label_3010b4;
        }
    }
    ctx->pc = 0x30101Cu;
    // 0x30101c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30101Cu;
    {
        const bool branch_taken_0x30101c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30101c) {
            ctx->pc = 0x301070u;
            goto label_301070;
        }
    }
    ctx->pc = 0x301024u;
    // 0x301024: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x301024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x301028: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301028u;
    {
        const bool branch_taken_0x301028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301028) {
            ctx->pc = 0x301038u;
            goto label_301038;
        }
    }
    ctx->pc = 0x301030u;
    // 0x301030: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x301030u;
    {
        const bool branch_taken_0x301030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301030u;
        // 0x301034: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301030) {
            ctx->pc = 0x3010F8u;
            goto label_3010f8;
        }
    }
    ctx->pc = 0x301038u;
label_301038:
    // 0x301038: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30103c: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x30103cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x301040: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x301040u;
    {
        const bool branch_taken_0x301040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301040) {
            ctx->pc = 0x301044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301040u;
            // 0x301044: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301068u;
            goto label_301068;
        }
    }
    ctx->pc = 0x301048u;
    // 0x301048: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x301048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x30104c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x30104cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x301050: 0x24a50f90  addiu       $a1, $a1, 0xF90
    ctx->pc = 0x301050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3984));
    // 0x301054: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x301054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x301058: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x301058u;
    SET_GPR_U32(ctx, 31, 0x301060u);
    ctx->pc = 0x30105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301058u;
    // 0x30105c: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1B0u, 0x301058u, 0x301060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301060u;
label_301060:
    // 0x301060: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x301060u;
    {
        const bool branch_taken_0x301060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301060) {
            ctx->pc = 0x301100u;
            goto label_301100;
        }
    }
    ctx->pc = 0x301068u;
label_301068:
    // 0x301068: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30106c: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x30106cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
label_301070:
    // 0x301070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x301070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x301074: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x301074u;
    {
        const bool branch_taken_0x301074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301074) {
            ctx->pc = 0x3010A0u;
            goto label_3010a0;
        }
    }
    ctx->pc = 0x30107Cu;
    // 0x30107c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30107cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x301080: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x301080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x301084: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x301084u;
    {
        const bool branch_taken_0x301084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301084) {
            ctx->pc = 0x301088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301084u;
            // 0x301088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_300fb8;
        }
    }
    ctx->pc = 0x30108Cu;
    // 0x30108c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x30108cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x301090: 0xc082674  jal         func_2099D0
    ctx->pc = 0x301090u;
    SET_GPR_U32(ctx, 31, 0x301098u);
    ctx->pc = 0x301094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301090u;
    // 0x301094: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x301090u, 0x301098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301098u;
label_301098:
    // 0x301098: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x301098u;
    {
        const bool branch_taken_0x301098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301098) {
            ctx->pc = 0x301100u;
            goto label_301100;
        }
    }
    ctx->pc = 0x3010A0u;
label_3010a0:
    // 0x3010a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3010a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3010a4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3010A4u;
    SET_GPR_U32(ctx, 31, 0x3010ACu);
    ctx->pc = 0x3010A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3010A4u;
    // 0x3010a8: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3010A4u, 0x3010ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010ACu;
label_3010ac:
    // 0x3010ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3010ACu;
    {
        const bool branch_taken_0x3010ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010ac) {
            ctx->pc = 0x301100u;
            goto label_301100;
        }
    }
    ctx->pc = 0x3010B4u;
label_3010b4:
    // 0x3010b4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3010b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3010b8: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x3010b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x3010bc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3010BCu;
    {
        const bool branch_taken_0x3010bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010bc) {
            ctx->pc = 0x3010C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3010BCu;
            // 0x3010c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010E4u;
            goto label_3010e4;
        }
    }
    ctx->pc = 0x3010C4u;
    // 0x3010c4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x3010c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x3010c8: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x3010c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x3010cc: 0x24a5da10  addiu       $a1, $a1, -0x25F0
    ctx->pc = 0x3010ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957584));
    // 0x3010d0: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x3010d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x3010d4: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x3010D4u;
    SET_GPR_U32(ctx, 31, 0x3010DCu);
    ctx->pc = 0x3010D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3010D4u;
    // 0x3010d8: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1B0u, 0x3010D4u, 0x3010DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010DCu;
label_3010dc:
    // 0x3010dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3010DCu;
    {
        const bool branch_taken_0x3010dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010dc) {
            ctx->pc = 0x3010F0u;
            goto label_3010f0;
        }
    }
    ctx->pc = 0x3010E4u;
label_3010e4:
    // 0x3010e4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3010e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3010e8: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x3010E8u;
    {
        const bool branch_taken_0x3010e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010E8u;
        // 0x3010ec: 0xa0430c20  sb          $v1, 0xC20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010e8) {
            ctx->pc = 0x300FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_300fb4;
        }
    }
    ctx->pc = 0x3010F0u;
label_3010f0:
    // 0x3010f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3010F0u;
    {
        const bool branch_taken_0x3010f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010f0) {
            ctx->pc = 0x301100u;
            goto label_301100;
        }
    }
    ctx->pc = 0x3010F8u;
label_3010f8:
    // 0x3010f8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3010F8u;
    SET_GPR_U32(ctx, 31, 0x301100u);
    ctx->pc = 0x3010FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3010F8u;
    // 0x3010fc: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3010F8u, 0x301100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301100u;
label_301100:
    // 0x301100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x301100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_301104:
    // 0x301104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301108: 0x3e00008  jr          $ra
    ctx->pc = 0x301108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301108u;
        // 0x30110c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301110u;
}
