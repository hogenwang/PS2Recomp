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

// Function: sub_00286E30
// Address: 0x286e30 - 0x286f70
void sub_00286E30_0x286e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286E30_0x286e30");
#endif

    switch (ctx->pc) {
        case 0x286e60u: goto label_286e60;
        case 0x286ec4u: goto label_286ec4;
        case 0x286f08u: goto label_286f08;
        case 0x286f50u: goto label_286f50;
        default: break;
    }

    ctx->pc = 0x286e30u;

    // 0x286e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x286e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x286e34: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x286e38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x286e3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x286e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x286e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x286e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x286e4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x286e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e50: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286E50u;
    {
        const bool branch_taken_0x286e50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E50u;
        // 0x286e54: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e50) {
            ctx->pc = 0x286E6Cu;
            goto label_286e6c;
        }
    }
    ctx->pc = 0x286E58u;
    // 0x286e58: 0xc0a1a8c  jal         func_286A30
    ctx->pc = 0x286E58u;
    SET_GPR_U32(ctx, 31, 0x286E60u);
    ctx->pc = 0x286A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A30u, 0x286E58u, 0x286E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E60u;
label_286e60:
    // 0x286e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e64: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x286E64u;
    {
        const bool branch_taken_0x286e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E64u;
        // 0x286e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e64) {
            ctx->pc = 0x286F54u;
            goto label_286f54;
        }
    }
    ctx->pc = 0x286E6Cu;
label_286e6c:
    // 0x286e6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x286e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e70: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x286E70u;
    {
        const bool branch_taken_0x286e70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E70u;
        // 0x286e74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e70) {
            ctx->pc = 0x286E84u;
            goto label_286e84;
        }
    }
    ctx->pc = 0x286E78u;
    // 0x286e78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e7c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x286E7Cu;
    {
        const bool branch_taken_0x286e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E7Cu;
        // 0x286e80: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e7c) {
            ctx->pc = 0x286F54u;
            goto label_286f54;
        }
    }
    ctx->pc = 0x286E84u;
label_286e84:
    // 0x286e84: 0x24c50009  addiu       $a1, $a2, 0x9
    ctx->pc = 0x286e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x286e88: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286e8c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286e90: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x286e90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x286e94: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x286e94u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x286e98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x286e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286e9c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x286e9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x286ea0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x286ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286ea4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x286EA4u;
    {
        const bool branch_taken_0x286ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EA4u;
        // 0x286ea8: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ea4) {
            ctx->pc = 0x286ED4u;
            goto label_286ed4;
        }
    }
    ctx->pc = 0x286EACu;
    // 0x286eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286eb0: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x286eb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286eb4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x286eb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x286eb8: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x286eb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x286ebc: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x286EBCu;
    SET_GPR_U32(ctx, 31, 0x286EC4u);
    ctx->pc = 0x286EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EBCu;
    // 0x286ec0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x286EBCu, 0x286EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EC4u;
label_286ec4:
    // 0x286ec4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286EC4u;
    {
        const bool branch_taken_0x286ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EC4u;
        // 0x286ec8: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ec4) {
            ctx->pc = 0x286EE4u;
            goto label_286ee4;
        }
    }
    ctx->pc = 0x286ECCu;
    // 0x286ecc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x286ECCu;
    {
        const bool branch_taken_0x286ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ECCu;
        // 0x286ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ecc) {
            ctx->pc = 0x286F54u;
            goto label_286f54;
        }
    }
    ctx->pc = 0x286ED4u;
label_286ed4:
    // 0x286ed4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286ED4u;
    {
        const bool branch_taken_0x286ed4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x286ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ED4u;
        // 0x286ed8: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ed4) {
            ctx->pc = 0x286EE4u;
            goto label_286ee4;
        }
    }
    ctx->pc = 0x286EDCu;
    // 0x286edc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x286EDCu;
    {
        const bool branch_taken_0x286edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EDCu;
        // 0x286ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286edc) {
            ctx->pc = 0x286F54u;
            goto label_286f54;
        }
    }
    ctx->pc = 0x286EE4u;
label_286ee4:
    // 0x286ee4: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x286ee8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286eec: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x286eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286ef0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x286ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x286ef4: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x286EF4u;
    {
        const bool branch_taken_0x286ef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EF4u;
        // 0x286ef8: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ef4) {
            ctx->pc = 0x286F48u;
            goto label_286f48;
        }
    }
    ctx->pc = 0x286EFCu;
    // 0x286efc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x286efcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x286f00: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x286f00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x286f04: 0x0  nop
    ctx->pc = 0x286f04u;
    // NOP
label_286f08:
    // 0x286f08: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x286f08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x286f0c: 0x111238  dsll        $v0, $s1, 8
    ctx->pc = 0x286f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 8);
    // 0x286f10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x286f14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x286f18: 0x14870008  bne         $a0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x286F18u;
    {
        const bool branch_taken_0x286f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x286F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F18u;
        // 0x286f1c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f18) {
            ctx->pc = 0x286F3Cu;
            goto label_286f3c;
        }
    }
    ctx->pc = 0x286F20u;
    // 0x286f20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286f24: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x286f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x286f28: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x286f2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x286f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x286f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286f34: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x286f34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x286f38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x286f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286f3c:
    // 0x286f3c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x286f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x286F40u;
    {
        const bool branch_taken_0x286f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F40u;
        // 0x286f44: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f40) {
            ctx->pc = 0x286F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286f08;
        }
    }
    ctx->pc = 0x286F48u;
label_286f48:
    // 0x286f48: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x286F48u;
    SET_GPR_U32(ctx, 31, 0x286F50u);
    ctx->pc = 0x286F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F48u;
    // 0x286f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x286F48u, 0x286F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F50u;
label_286f50:
    // 0x286f50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286f54:
    // 0x286f54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x286f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286f58: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x286f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286f5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286f60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286f68: 0x3e00008  jr          $ra
    ctx->pc = 0x286F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F68u;
        // 0x286f6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286F70u;
}
