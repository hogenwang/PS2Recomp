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

// Function: sub_00341860
// Address: 0x341860 - 0x341910
void sub_00341860_0x341860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341860_0x341860");
#endif

    switch (ctx->pc) {
        case 0x3418c8u: goto label_3418c8;
        case 0x3418dcu: goto label_3418dc;
        case 0x3418e0u: goto label_3418e0;
        case 0x341904u: goto label_341904;
        default: break;
    }

    ctx->pc = 0x341860u;

    // 0x341860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341864: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34186c: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x34186cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341870: 0x8c49ea48  lw          $t1, -0x15B8($v0)
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961736)));
    // 0x341874: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x341874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x341878: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34187c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34187cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x341880: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x341880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341884: 0x7d200000  sq          $zero, 0x0($t1)
    ctx->pc = 0x341884u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 0));
    // 0x341888: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34188c: 0x8ca8e900  lw          $t0, -0x1700($a1)
    ctx->pc = 0x34188cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961408)));
    // 0x341890: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x341890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x341894: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x341894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x341898: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x341898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34189c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x34189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3418a0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x3418a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x3418a4: 0x8c65ea48  lw          $a1, -0x15B8($v1)
    ctx->pc = 0x3418a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961736)));
    // 0x3418a8: 0x8c43e900  lw          $v1, -0x1700($v0)
    ctx->pc = 0x3418a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961408)));
    // 0x3418ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3418acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3418b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3418b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3418b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3418b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3418b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3418bc: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x3418bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x3418c0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3418C0u;
    SET_GPR_U32(ctx, 31, 0x3418C8u);
    ctx->pc = 0x3418C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3418C0u;
    // 0x3418c4: 0xac460010  sw          $a2, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3418C0u, 0x3418C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418C8u;
label_3418c8:
    // 0x3418c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3418cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3418d0: 0x8c45ea48  lw          $a1, -0x15B8($v0)
    ctx->pc = 0x3418d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961736)));
    // 0x3418d4: 0xc040a04  jal         func_102810
    ctx->pc = 0x3418D4u;
    SET_GPR_U32(ctx, 31, 0x3418DCu);
    ctx->pc = 0x3418D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3418D4u;
    // 0x3418d8: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x3418D4u, 0x3418DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418DCu;
label_3418dc:
    // 0x3418dc: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x3418dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_3418e0:
    // 0x3418e0: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x3418e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x3418e4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3418e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3418e8: 0x0  nop
    ctx->pc = 0x3418e8u;
    // NOP
    // 0x3418ec: 0x0  nop
    ctx->pc = 0x3418ecu;
    // NOP
    // 0x3418f0: 0x0  nop
    ctx->pc = 0x3418f0u;
    // NOP
    // 0x3418f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3418F4u;
    {
        const bool branch_taken_0x3418f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3418f4) {
            ctx->pc = 0x3418E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3418e0;
        }
    }
    ctx->pc = 0x3418FCu;
    // 0x3418fc: 0xc0d045c  jal         func_341170
    ctx->pc = 0x3418FCu;
    SET_GPR_U32(ctx, 31, 0x341904u);
    ctx->pc = 0x341170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341170u, 0x3418FCu, 0x341904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341904u;
label_341904:
    // 0x341904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341908: 0x3e00008  jr          $ra
    ctx->pc = 0x341908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341908u;
        // 0x34190c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341910u;
}
