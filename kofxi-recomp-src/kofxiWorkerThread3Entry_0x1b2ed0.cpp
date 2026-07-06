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

// Function: kofxiWorkerThread3Entry
// Address: 0x1b2ed0 - 0x1b3008
void kofxiWorkerThread3Entry_0x1b2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWorkerThread3Entry_0x1b2ed0");
#endif

    switch (ctx->pc) {
        case 0x1b2f38u: goto label_1b2f38;
        case 0x1b2f4cu: goto label_1b2f4c;
        case 0x1b2f68u: goto label_1b2f68;
        case 0x1b2f78u: goto label_1b2f78;
        case 0x1b2f8cu: goto label_1b2f8c;
        case 0x1b2fa0u: goto label_1b2fa0;
        case 0x1b2fb8u: goto label_1b2fb8;
        case 0x1b2fc4u: goto label_1b2fc4;
        default: break;
    }

    ctx->pc = 0x1b2ed0u;

    // 0x1b2ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b2ed4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2edc: 0x244630e8  addiu       $a2, $v0, 0x30E8
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12520));
    // 0x1b2ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2ee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2eec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2ef0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2ef4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b2ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b2ef8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b2ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b2efc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b2f00: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1b2f00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2f04: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B2F04u;
    {
        const bool branch_taken_0x1b2f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F04u;
        // 0x1b2f08: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f04) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2F0Cu;
    // 0x1b2f0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f10: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f1c: 0x24543070  addiu       $s4, $v0, 0x3070
    ctx->pc = 0x1b2f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x1b2f20: 0x24733044  addiu       $s3, $v1, 0x3044
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12356));
    // 0x1b2f24: 0x24923034  addiu       $s2, $a0, 0x3034
    ctx->pc = 0x1b2f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12340));
    // 0x1b2f28: 0x24b73118  addiu       $s7, $a1, 0x3118
    ctx->pc = 0x1b2f28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 12568));
    // 0x1b2f2c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b2f2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2f34: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1b2f38:
    // 0x1b2f38: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b2f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2f3c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2f3cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2f40: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1b2f40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1b2f44: 0xc073992  jal         func_1CE648
    ctx->pc = 0x1B2F44u;
    SET_GPR_U32(ctx, 31, 0x1B2F4Cu);
    ctx->pc = 0x1B2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F44u;
    // 0x1b2f48: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE648u, 0x1B2F44u, 0x1B2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F4Cu;
label_1b2f4c:
    // 0x1b2f4c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b2f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2f58: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2F58u;
    {
        const bool branch_taken_0x1b2f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b2f58) {
            ctx->pc = 0x1B2F68u;
            goto label_1b2f68;
        }
    }
    ctx->pc = 0x1B2F60u;
    // 0x1b2f60: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2F60u;
    SET_GPR_U32(ctx, 31, 0x1B2F68u);
    ctx->pc = 0x1B2F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F60u;
    // 0x1b2f64: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3180u, 0x1B2F60u, 0x1B2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F68u;
label_1b2f68:
    // 0x1b2f68: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2F68u;
    {
        const bool branch_taken_0x1b2f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f68) {
            ctx->pc = 0x1B2FC4u;
            goto label_1b2fc4;
        }
    }
    ctx->pc = 0x1B2F70u;
    // 0x1b2f70: 0xc06cd8e  jal         func_1B3638
    ctx->pc = 0x1B2F70u;
    SET_GPR_U32(ctx, 31, 0x1B2F78u);
    ctx->pc = 0x1B3638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3638u, 0x1B2F70u, 0x1B2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F78u;
label_1b2f78:
    // 0x1b2f78: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2F78u;
    {
        const bool branch_taken_0x1b2f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F78u;
        // 0x1b2f7c: 0x26b030a0  addiu       $s0, $s5, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f78) {
            ctx->pc = 0x1B2FA0u;
            goto label_1b2fa0;
        }
    }
    ctx->pc = 0x1B2F80u;
    // 0x1b2f80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2f84: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B2F84u;
    SET_GPR_U32(ctx, 31, 0x1B2F8Cu);
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B2F84u, 0x1B2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F8Cu;
label_1b2f8c:
    // 0x1b2f8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2f90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2F90u;
    {
        const bool branch_taken_0x1b2f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b2f90) {
            ctx->pc = 0x1B2FA0u;
            goto label_1b2fa0;
        }
    }
    ctx->pc = 0x1B2F98u;
    // 0x1b2f98: 0xc06cc4c  jal         func_1B3130
    ctx->pc = 0x1B2F98u;
    SET_GPR_U32(ctx, 31, 0x1B2FA0u);
    ctx->pc = 0x1B2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F98u;
    // 0x1b2f9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3130u, 0x1B2F98u, 0x1B2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FA0u;
label_1b2fa0:
    // 0x1b2fa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2fa4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b2fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2fa8: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2FA8u;
    {
        const bool branch_taken_0x1b2fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b2fa8) {
            ctx->pc = 0x1B2FBCu;
            goto label_1b2fbc;
        }
    }
    ctx->pc = 0x1B2FB0u;
    // 0x1b2fb0: 0xc06d17e  jal         func_1B45F8
    ctx->pc = 0x1B2FB0u;
    SET_GPR_U32(ctx, 31, 0x1B2FB8u);
    ctx->pc = 0x1B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45F8u, 0x1B2FB0u, 0x1B2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FB8u;
label_1b2fb8:
    // 0x1b2fb8: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x1b2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_1b2fbc:
    // 0x1b2fbc: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2FBCu;
    SET_GPR_U32(ctx, 31, 0x1B2FC4u);
    ctx->pc = 0x1B3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3180u, 0x1B2FBCu, 0x1B2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FC4u;
label_1b2fc4:
    // 0x1b2fc4: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x1b2fc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b2fc8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B2FC8u;
    {
        const bool branch_taken_0x1b2fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FC8u;
        // 0x1b2fcc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fc8) {
            ctx->pc = 0x1B2F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2f38;
        }
    }
    ctx->pc = 0x1B2FD0u;
label_1b2fd0:
    // 0x1b2fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2fe0: 0x244230f0  addiu       $v0, $v0, 0x30F0
    ctx->pc = 0x1b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12528));
    // 0x1b2fe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2fe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2fec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2fecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2ff0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b2ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ff4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b2ff4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2ffc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b3000: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B3000u;
    ctx->pc = 0x1B3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3000u;
    // 0x1b3004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B3008u;
}
