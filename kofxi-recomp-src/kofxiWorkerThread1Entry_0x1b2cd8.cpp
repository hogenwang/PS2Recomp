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

// Function: kofxiWorkerThread1Entry
// Address: 0x1b2cd8 - 0x1b2de0
void kofxiWorkerThread1Entry_0x1b2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWorkerThread1Entry_0x1b2cd8");
#endif

    switch (ctx->pc) {
        case 0x1b2d40u: goto label_1b2d40;
        case 0x1b2d54u: goto label_1b2d54;
        case 0x1b2d68u: goto label_1b2d68;
        case 0x1b2d74u: goto label_1b2d74;
        case 0x1b2d84u: goto label_1b2d84;
        case 0x1b2d8cu: goto label_1b2d8c;
        case 0x1b2d94u: goto label_1b2d94;
        case 0x1b2d9cu: goto label_1b2d9c;
        default: break;
    }

    ctx->pc = 0x1b2cd8u;

    // 0x1b2cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2cdc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2ce4: 0x244730c8  addiu       $a3, $v0, 0x30C8
    ctx->pc = 0x1b2ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12488));
    // 0x1b2ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2cec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2cf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2cf4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2cf8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2cfc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b2cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b2d00: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b2d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b2d04: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1b2d04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b2d08: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B2D08u;
    {
        const bool branch_taken_0x1b2d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D08u;
        // 0x1b2d0c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d08) {
            ctx->pc = 0x1B2DA8u;
            goto label_1b2da8;
        }
    }
    ctx->pc = 0x1B2D10u;
    // 0x1b2d10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d14: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d18: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d20: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b2d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d24: 0x24533060  addiu       $s3, $v0, 0x3060
    ctx->pc = 0x1b2d24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x1b2d28: 0x2476309c  addiu       $s6, $v1, 0x309C
    ctx->pc = 0x1b2d28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 12444));
    // 0x1b2d2c: 0x24923118  addiu       $s2, $a0, 0x3118
    ctx->pc = 0x1b2d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12568));
    // 0x1b2d30: 0x24b530a0  addiu       $s5, $a1, 0x30A0
    ctx->pc = 0x1b2d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    // 0x1b2d34: 0x24d13038  addiu       $s1, $a2, 0x3038
    ctx->pc = 0x1b2d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 12344));
    // 0x1b2d38: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b2d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d3c: 0x0  nop
    ctx->pc = 0x1b2d3cu;
    // NOP
label_1b2d40:
    // 0x1b2d40: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b2d40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2d44: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2d44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2d48: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1b2d48u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x1b2d4c: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D54u);
    ctx->pc = 0x1B2D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D4Cu;
    // 0x1b2d50: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3200u, 0x1B2D4Cu, 0x1B2D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D54u;
label_1b2d54:
    // 0x1b2d54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2d58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2D58u;
    {
        const bool branch_taken_0x1b2d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d58) {
            ctx->pc = 0x1B2D68u;
            goto label_1b2d68;
        }
    }
    ctx->pc = 0x1B2D60u;
    // 0x1b2d60: 0xc06d17e  jal         func_1B45F8
    ctx->pc = 0x1B2D60u;
    SET_GPR_U32(ctx, 31, 0x1B2D68u);
    ctx->pc = 0x1B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45F8u, 0x1B2D60u, 0x1B2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D68u;
label_1b2d68:
    // 0x1b2d68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b2d6c: 0xc06cd8e  jal         func_1B3638
    ctx->pc = 0x1B2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D74u);
    ctx->pc = 0x1B2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D6Cu;
    // 0x1b2d70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3638u, 0x1B2D6Cu, 0x1B2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D74u;
label_1b2d74:
    // 0x1b2d74: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2D74u;
    {
        const bool branch_taken_0x1b2d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1b2d74) {
            ctx->pc = 0x1B2D84u;
            goto label_1b2d84;
        }
    }
    ctx->pc = 0x1B2D7Cu;
    // 0x1b2d7c: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B2D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D84u);
    ctx->pc = 0x1B2D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D7Cu;
    // 0x1b2d80: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3200u, 0x1B2D7Cu, 0x1B2D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D84u;
label_1b2d84:
    // 0x1b2d84: 0xc06d012  jal         func_1B4048
    ctx->pc = 0x1B2D84u;
    SET_GPR_U32(ctx, 31, 0x1B2D8Cu);
    ctx->pc = 0x1B4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4048u, 0x1B2D84u, 0x1B2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D8Cu;
label_1b2d8c:
    // 0x1b2d8c: 0xc07397a  jal         func_1CE5E8
    ctx->pc = 0x1B2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D94u);
    ctx->pc = 0x1B2D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D8Cu;
    // 0x1b2d90: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5E8u, 0x1B2D8Cu, 0x1B2D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D94u;
label_1b2d94:
    // 0x1b2d94: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2D94u;
    SET_GPR_U32(ctx, 31, 0x1B2D9Cu);
    ctx->pc = 0x1B2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D94u;
    // 0x1b2d98: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3180u, 0x1B2D94u, 0x1B2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D9Cu;
label_1b2d9c:
    // 0x1b2d9c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b2d9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2da0: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B2DA0u;
    {
        const bool branch_taken_0x1b2da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DA0u;
        // 0x1b2da4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2da0) {
            ctx->pc = 0x1B2D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2d40;
        }
    }
    ctx->pc = 0x1B2DA8u;
label_1b2da8:
    // 0x1b2da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2db4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2db8: 0x244230d0  addiu       $v0, $v0, 0x30D0
    ctx->pc = 0x1b2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12496));
    // 0x1b2dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2dc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2dc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b2dc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2dcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b2dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2dd0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2dd4: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2DD4u;
    ctx->pc = 0x1B2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DD4u;
    // 0x1b2dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2DDCu;
    // 0x1b2ddc: 0x0  nop
    ctx->pc = 0x1b2ddcu;
    // NOP
}
