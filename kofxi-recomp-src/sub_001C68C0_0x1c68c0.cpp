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

// Function: sub_001C68C0
// Address: 0x1c68c0 - 0x1c6900
void sub_001C68C0_0x1c68c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C68C0_0x1c68c0");
#endif

    switch (ctx->pc) {
        case 0x1c68dcu: goto label_1c68dc;
        case 0x1c68e8u: goto label_1c68e8;
        default: break;
    }

    ctx->pc = 0x1c68c0u;

    // 0x1c68c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c68c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c68c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c68c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c68c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c68c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c68ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c68d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c68d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c68d4: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C68D4u;
    SET_GPR_U32(ctx, 31, 0x1C68DCu);
    ctx->pc = 0x1C68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68D4u;
    // 0x1c68d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C68D4u, 0x1C68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68DCu;
label_1c68dc:
    // 0x1c68dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68e0: 0xc071a40  jal         func_1C6900
    ctx->pc = 0x1C68E0u;
    SET_GPR_U32(ctx, 31, 0x1C68E8u);
    ctx->pc = 0x1C68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68E0u;
    // 0x1c68e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6900u, 0x1C68E0u, 0x1C68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68E8u;
label_1c68e8:
    // 0x1c68e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c68e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c68ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c68ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c68f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c68f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c68f4: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C68F4u;
    ctx->pc = 0x1C68F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68F4u;
    // 0x1c68f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C68FCu;
    // 0x1c68fc: 0x0  nop
    ctx->pc = 0x1c68fcu;
    // NOP
    if (ctx->pc == 0x1c68fcu) { ctx->pc = 0x1c6900u; }
}
