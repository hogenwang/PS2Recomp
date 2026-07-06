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

// Function: kofxiWorkerThread2Entry
// Address: 0x1b2de0 - 0x1b2ed0
void kofxiWorkerThread2Entry_0x1b2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWorkerThread2Entry_0x1b2de0");
#endif

    switch (ctx->pc) {
        case 0x1b2e40u: goto label_1b2e40;
        case 0x1b2e68u: goto label_1b2e68;
        case 0x1b2e90u: goto label_1b2e90;
        default: break;
    }

    ctx->pc = 0x1b2de0u;

    // 0x1b2de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2de4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2de8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1b2de8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1b2dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2df0: 0x26a230d8  addiu       $v0, $s5, 0x30D8
    ctx->pc = 0x1b2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12504));
    // 0x1b2df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2df8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2dfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2e00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2e04: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b2e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b2e08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b2e0c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1b2e0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2e10: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B2E10u;
    {
        const bool branch_taken_0x1b2e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E10u;
        // 0x1b2e14: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e10) {
            ctx->pc = 0x1B2E9Cu;
            goto label_1b2e9c;
        }
    }
    ctx->pc = 0x1B2E18u;
    // 0x1b2e18: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2e1c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2e20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b2e24: 0x3c121200  lui         $s2, 0x1200
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4608 << 16));
    // 0x1b2e28: 0x24543068  addiu       $s4, $v0, 0x3068
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12392));
    // 0x1b2e2c: 0x24733040  addiu       $s3, $v1, 0x3040
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12352));
    // 0x1b2e30: 0x24913114  addiu       $s1, $a0, 0x3114
    ctx->pc = 0x1b2e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12564));
    // 0x1b2e34: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b2e34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e38: 0x365200e0  ori         $s2, $s2, 0xE0
    ctx->pc = 0x1b2e38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)224);
    // 0x1b2e3c: 0x0  nop
    ctx->pc = 0x1b2e3cu;
    // NOP
label_1b2e40:
    // 0x1b2e40: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b2e40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2e44: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1b2e44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2e48: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2e48u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2e4c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1b2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1b2e50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2E50u;
    {
        const bool branch_taken_0x1b2e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E50u;
        // 0x1b2e54: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e50) {
            ctx->pc = 0x1B2E60u;
            goto label_1b2e60;
        }
    }
    ctx->pc = 0x1B2E58u;
    // 0x1b2e58: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1b2e58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2e5c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1b2e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1b2e60:
    // 0x1b2e60: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1B2E60u;
    SET_GPR_U32(ctx, 31, 0x1B2E68u);
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1B2E60u, 0x1B2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E68u;
label_1b2e68:
    // 0x1b2e68: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1b2e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2e6c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2E6Cu;
    {
        const bool branch_taken_0x1b2e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e6c) {
            ctx->pc = 0x1B2E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2E6Cu;
            // 0x1b2e70: 0xfe400000  sd          $zero, 0x0($s2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E74u;
            goto label_1b2e74;
        }
    }
    ctx->pc = 0x1B2E74u;
label_1b2e74:
    // 0x1b2e74: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b2e78: 0x26b030d8  addiu       $s0, $s5, 0x30D8
    ctx->pc = 0x1b2e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12504));
    // 0x1b2e7c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b2e7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2e80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2E80u;
    {
        const bool branch_taken_0x1b2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e80) {
            ctx->pc = 0x1B2E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2E80u;
            // 0x1b2e84: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E9Cu;
            goto label_1b2e9c;
        }
    }
    ctx->pc = 0x1B2E88u;
    // 0x1b2e88: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2E88u;
    SET_GPR_U32(ctx, 31, 0x1B2E90u);
    ctx->pc = 0x1B3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3180u, 0x1B2E88u, 0x1B2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E90u;
label_1b2e90:
    // 0x1b2e90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b2e90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2e94: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B2E94u;
    {
        const bool branch_taken_0x1b2e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E94u;
        // 0x1b2e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e94) {
            ctx->pc = 0x1B2E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2e40;
        }
    }
    ctx->pc = 0x1B2E9Cu;
label_1b2e9c:
    // 0x1b2e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2ea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2eac: 0x244230e0  addiu       $v0, $v0, 0x30E0
    ctx->pc = 0x1b2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12512));
    // 0x1b2eb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2eb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2eb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2eb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2eb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2eb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2ebc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b2ebcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ec0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b2ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2ec4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2ec8: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2EC8u;
    ctx->pc = 0x1B2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EC8u;
    // 0x1b2ecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2ED0u;
}
