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

// Function: kofxiWorkerThread4Entry
// Address: 0x1b3008 - 0x1b30e0
void kofxiWorkerThread4Entry_0x1b3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWorkerThread4Entry_0x1b3008");
#endif

    switch (ctx->pc) {
        case 0x1b3060u: goto label_1b3060;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b30a0u: goto label_1b30a0;
        default: break;
    }

    ctx->pc = 0x1b3008u;

    // 0x1b3008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b300c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3014: 0x244530f8  addiu       $a1, $v0, 0x30F8
    ctx->pc = 0x1b3014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12536));
    // 0x1b3018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b301c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3020: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3024: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3028: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b3028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b302c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3030: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1b3030u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3034: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B3034u;
    {
        const bool branch_taken_0x1b3034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3034u;
        // 0x1b3038: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3034) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B303Cu;
    // 0x1b303c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3040: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3044: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b3044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b3048: 0x24543078  addiu       $s4, $v0, 0x3078
    ctx->pc = 0x1b3048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12408));
    // 0x1b304c: 0x24733048  addiu       $s3, $v1, 0x3048
    ctx->pc = 0x1b304cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12360));
    // 0x1b3050: 0x24923034  addiu       $s2, $a0, 0x3034
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12340));
    // 0x1b3054: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b3054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3058: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b305c: 0x0  nop
    ctx->pc = 0x1b305cu;
    // NOP
label_1b3060:
    // 0x1b3060: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b3060u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b3064: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b3064u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b3068: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1b3068u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1b306c: 0xc073998  jal         func_1CE660
    ctx->pc = 0x1B306Cu;
    SET_GPR_U32(ctx, 31, 0x1B3074u);
    ctx->pc = 0x1B3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B306Cu;
    // 0x1b3070: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE660u, 0x1B306Cu, 0x1B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3074u;
label_1b3074:
    // 0x1b3074: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b3074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b3078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b307c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b3080: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3080u;
    {
        const bool branch_taken_0x1b3080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b3080) {
            ctx->pc = 0x1B3090u;
            goto label_1b3090;
        }
    }
    ctx->pc = 0x1B3088u;
    // 0x1b3088: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B3088u;
    SET_GPR_U32(ctx, 31, 0x1B3090u);
    ctx->pc = 0x1B308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3088u;
    // 0x1b308c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3180u, 0x1B3088u, 0x1B3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3090u;
label_1b3090:
    // 0x1b3090: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3090u;
    {
        const bool branch_taken_0x1b3090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3090) {
            ctx->pc = 0x1B30A0u;
            goto label_1b30a0;
        }
    }
    ctx->pc = 0x1B3098u;
    // 0x1b3098: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B3098u;
    SET_GPR_U32(ctx, 31, 0x1B30A0u);
    ctx->pc = 0x1B3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3180u, 0x1B3098u, 0x1B30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30A0u;
label_1b30a0:
    // 0x1b30a0: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x1b30a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b30a4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B30A4u;
    {
        const bool branch_taken_0x1b30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30A4u;
        // 0x1b30a8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30a4) {
            ctx->pc = 0x1B3060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3060;
        }
    }
    ctx->pc = 0x1B30ACu;
label_1b30ac:
    // 0x1b30ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b30b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b30b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b30b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b30b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b30b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b30bc: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    // 0x1b30c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b30c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b30c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b30c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b30c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b30c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b30cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b30ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b30d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b30d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b30d4: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B30D4u;
    ctx->pc = 0x1B30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30D4u;
    // 0x1b30d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B30DCu;
    // 0x1b30dc: 0x0  nop
    ctx->pc = 0x1b30dcu;
    // NOP
}
