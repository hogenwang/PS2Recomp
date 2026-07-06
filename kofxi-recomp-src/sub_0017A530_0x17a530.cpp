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

// Function: sub_0017A530
// Address: 0x17a530 - 0x17a590
void sub_0017A530_0x17a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A530_0x17a530");
#endif

    switch (ctx->pc) {
        case 0x17a544u: goto label_17a544;
        case 0x17a560u: goto label_17a560;
        case 0x17a570u: goto label_17a570;
        default: break;
    }

    ctx->pc = 0x17a530u;

    // 0x17a530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a53c: 0xc062858  jal         func_18A160
    ctx->pc = 0x17A53Cu;
    SET_GPR_U32(ctx, 31, 0x17A544u);
    ctx->pc = 0x17A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A53Cu;
    // 0x17a540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x17A53Cu, 0x17A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A544u;
label_17a544:
    // 0x17a544: 0xa20200bd  sb          $v0, 0xBD($s0)
    ctx->pc = 0x17a544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 189), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a548: 0x920300bc  lbu         $v1, 0xBC($s0)
    ctx->pc = 0x17a548u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x17a54c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x17a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17a550: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A550u;
    {
        const bool branch_taken_0x17a550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a550) {
            ctx->pc = 0x17A568u;
            goto label_17a568;
        }
    }
    ctx->pc = 0x17A558u;
    // 0x17a558: 0xc062eb0  jal         func_18BAC0
    ctx->pc = 0x17A558u;
    SET_GPR_U32(ctx, 31, 0x17A560u);
    ctx->pc = 0x18BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BAC0u, 0x17A558u, 0x17A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A560u;
label_17a560:
    // 0x17a560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A560u;
    {
        const bool branch_taken_0x17a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A560u;
        // 0x17a564: 0xa20200bd  sb          $v0, 0xBD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 189), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a560) {
            ctx->pc = 0x17A574u;
            goto label_17a574;
        }
    }
    ctx->pc = 0x17A568u;
label_17a568:
    // 0x17a568: 0xc062858  jal         func_18A160
    ctx->pc = 0x17A568u;
    SET_GPR_U32(ctx, 31, 0x17A570u);
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x17A568u, 0x17A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A570u;
label_17a570:
    // 0x17a570: 0xa20200bd  sb          $v0, 0xBD($s0)
    ctx->pc = 0x17a570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 189), (uint8_t)GPR_U32(ctx, 2));
label_17a574:
    // 0x17a574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A57Cu;
        // 0x17a580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A584u;
    // 0x17a584: 0x0  nop
    ctx->pc = 0x17a584u;
    // NOP
    // 0x17a588: 0x0  nop
    ctx->pc = 0x17a588u;
    // NOP
    // 0x17a58c: 0x0  nop
    ctx->pc = 0x17a58cu;
    // NOP
}
