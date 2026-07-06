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

// Function: sub_002CF708
// Address: 0x2cf708 - 0x2cf728
void sub_002CF708_0x2cf708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF708_0x2cf708");
#endif

    switch (ctx->pc) {
        case 0x2cf71cu: goto label_2cf71c;
        default: break;
    }

    ctx->pc = 0x2cf708u;

    // 0x2cf708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf714: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2cf714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf71c:
    // 0x2cf71c: 0x80b608e  j           func_2D8238
    ctx->pc = 0x2CF71Cu;
    ctx->pc = 0x2CF720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF71Cu;
    // 0x2cf720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    sub_002D8238_0x2d8238(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF724u;
    // 0x2cf724: 0x0  nop
    ctx->pc = 0x2cf724u;
    // NOP
}
