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

// Function: sub_00283DC0
// Address: 0x283dc0 - 0x283ee0
void sub_00283DC0_0x283dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283DC0_0x283dc0");
#endif

    switch (ctx->pc) {
        case 0x283df0u: goto label_283df0;
        case 0x283e58u: goto label_283e58;
        default: break;
    }

    ctx->pc = 0x283dc0u;

    // 0x283dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283dc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x283dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x283dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x283dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x283dd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283dd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283ddc: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x283ddcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x283de0: 0x139db8  dsll        $s3, $s3, 22
    ctx->pc = 0x283de0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 22);
    // 0x283de4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283de8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x283de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283dec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x283decu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283df0:
    // 0x283df0: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x283DF0u;
    {
        const bool branch_taken_0x283df0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x283DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DF0u;
        // 0x283df4: 0x92030014  lbu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283df0) {
            ctx->pc = 0x283E3Cu;
            goto label_283e3c;
        }
    }
    ctx->pc = 0x283DF8u;
    // 0x283df8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x283df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x283dfc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x283DFCu;
    {
        const bool branch_taken_0x283dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283dfc) {
            ctx->pc = 0x283E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283DFCu;
            // 0x283e00: 0xa2000015  sb          $zero, 0x15($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283E5Cu;
            goto label_283e5c;
        }
    }
    ctx->pc = 0x283E04u;
    // 0x283e04: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x283e04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x283e08: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x283e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x283e0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x283E0Cu;
    {
        const bool branch_taken_0x283e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E0Cu;
        // 0x283e10: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e0c) {
            ctx->pc = 0x283E40u;
            goto label_283e40;
        }
    }
    ctx->pc = 0x283E14u;
    // 0x283e14: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x283e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x283e18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x283e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x283e1c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x283E1Cu;
    {
        const bool branch_taken_0x283e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283e1c) {
            ctx->pc = 0x283E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283E1Cu;
            // 0x283e20: 0xfe000000  sd          $zero, 0x0($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283E28u;
            goto label_283e28;
        }
    }
    ctx->pc = 0x283E24u;
    // 0x283e24: 0xfe120000  sd          $s2, 0x0($s0)
    ctx->pc = 0x283e24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 18));
label_283e28:
    // 0x283e28: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x283e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x283e2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283E2Cu;
    {
        const bool branch_taken_0x283e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E2Cu;
        // 0x283e30: 0xa2000015  sb          $zero, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e2c) {
            ctx->pc = 0x283E3Cu;
            goto label_283e3c;
        }
    }
    ctx->pc = 0x283E34u;
    // 0x283e34: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x283E34u;
    {
        const bool branch_taken_0x283e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E34u;
        // 0x283e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e34) {
            ctx->pc = 0x283DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283df0;
        }
    }
    ctx->pc = 0x283E3Cu;
label_283e3c:
    // 0x283e3c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x283e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_283e40:
    // 0x283e40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283E40u;
    {
        const bool branch_taken_0x283e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283e40) {
            ctx->pc = 0x283E50u;
            goto label_283e50;
        }
    }
    ctx->pc = 0x283E48u;
    // 0x283e48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283E48u;
    {
        const bool branch_taken_0x283e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E48u;
        // 0x283e4c: 0xa2000015  sb          $zero, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e48) {
            ctx->pc = 0x283E5Cu;
            goto label_283e5c;
        }
    }
    ctx->pc = 0x283E50u;
label_283e50:
    // 0x283e50: 0xc0a0fb8  jal         func_283EE0
    ctx->pc = 0x283E50u;
    SET_GPR_U32(ctx, 31, 0x283E58u);
    ctx->pc = 0x283E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E50u;
    // 0x283e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283EE0u, 0x283E50u, 0x283E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E58u;
label_283e58:
    // 0x283e58: 0xa2020015  sb          $v0, 0x15($s0)
    ctx->pc = 0x283e58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
label_283e5c:
    // 0x283e5c: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x283e5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x283e60: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x283e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x283e64: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x283e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x283e68: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x283E68u;
    {
        const bool branch_taken_0x283e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E68u;
        // 0x283e6c: 0xa2020016  sb          $v0, 0x16($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e68) {
            ctx->pc = 0x283E8Cu;
            goto label_283e8c;
        }
    }
    ctx->pc = 0x283E70u;
    // 0x283e70: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x283e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x283e74: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x283e74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x283e78: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x283e78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x283e7c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x283e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x283e80: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x283e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x283e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283E84u;
    {
        const bool branch_taken_0x283e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E84u;
        // 0x283e88: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e84) {
            ctx->pc = 0x283E9Cu;
            goto label_283e9c;
        }
    }
    ctx->pc = 0x283E8Cu;
label_283e8c:
    // 0x283e8c: 0x92030015  lbu         $v1, 0x15($s0)
    ctx->pc = 0x283e8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x283e90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x283e90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x283e94: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x283e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x283e98: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x283e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_283e9c:
    // 0x283e9c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x283e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x283ea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283EA0u;
    {
        const bool branch_taken_0x283ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EA0u;
        // 0x283ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ea0) {
            ctx->pc = 0x283EB0u;
            goto label_283eb0;
        }
    }
    ctx->pc = 0x283EA8u;
    // 0x283ea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283EA8u;
    {
        const bool branch_taken_0x283ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EA8u;
        // 0x283eac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ea8) {
            ctx->pc = 0x283EB8u;
            goto label_283eb8;
        }
    }
    ctx->pc = 0x283EB0u;
label_283eb0:
    // 0x283eb0: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x283eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x283eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283eb8:
    // 0x283eb8: 0x1600ffcd  bnez        $s0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x283EB8u;
    {
        const bool branch_taken_0x283eb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x283EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EB8u;
        // 0x283ebc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283eb8) {
            ctx->pc = 0x283DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283df0;
        }
    }
    ctx->pc = 0x283EC0u;
    // 0x283ec0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283ec4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x283ec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283ec8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283ecc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x283ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ED4u;
        // 0x283ed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283EDCu;
    // 0x283edc: 0x0  nop
    ctx->pc = 0x283edcu;
    // NOP
}
