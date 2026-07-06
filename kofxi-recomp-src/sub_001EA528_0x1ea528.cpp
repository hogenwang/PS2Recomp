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

// Function: sub_001EA528
// Address: 0x1ea528 - 0x1ea578
void sub_001EA528_0x1ea528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA528_0x1ea528");
#endif

    switch (ctx->pc) {
        case 0x1ea560u: goto label_1ea560;
        default: break;
    }

    ctx->pc = 0x1ea528u;

    // 0x1ea528: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ea52c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea530: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ea534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea53c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ea53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea540: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ea540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ea544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea54c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ea54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ea550: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1ea550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea558: 0xc07a95e  jal         func_1EA578
    ctx->pc = 0x1EA558u;
    SET_GPR_U32(ctx, 31, 0x1EA560u);
    ctx->pc = 0x1EA55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA558u;
    // 0x1ea55c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA578u, 0x1EA558u, 0x1EA560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA560u;
label_1ea560:
    // 0x1ea560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea56c: 0x807a966  j           func_1EA598
    ctx->pc = 0x1EA56Cu;
    ctx->pc = 0x1EA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA56Cu;
    // 0x1ea570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA598u, 0x1EA56Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1EA574u;
    // 0x1ea574: 0x0  nop
    ctx->pc = 0x1ea574u;
    // NOP
}
