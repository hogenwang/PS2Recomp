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

// Function: sub_0025C9F0
// Address: 0x25c9f0 - 0x25ca38
void sub_0025C9F0_0x25c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C9F0_0x25c9f0");
#endif

    switch (ctx->pc) {
        case 0x25ca10u: goto label_25ca10;
        default: break;
    }

    ctx->pc = 0x25c9f0u;

    // 0x25c9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25c9f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25c9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca00: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25ca04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ca08: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25CA08u;
    SET_GPR_U32(ctx, 31, 0x25CA10u);
    ctx->pc = 0x25CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA08u;
    // 0x25ca0c: 0x8e041750  lw          $a0, 0x1750($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x25CA08u, 0x25CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA10u;
label_25ca10:
    // 0x25ca10: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x25ca10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x25ca14: 0x8e041750  lw          $a0, 0x1750($s0)
    ctx->pc = 0x25ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5968)));
    // 0x25ca18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25ca1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ca1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ca20: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x25ca20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ca24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25ca24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ca28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ca28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ca2c: 0x8043320  j           func_10CC80
    ctx->pc = 0x25CA2Cu;
    ctx->pc = 0x25CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA2Cu;
    // 0x25ca30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x25CA34u;
    // 0x25ca34: 0x0  nop
    ctx->pc = 0x25ca34u;
    // NOP
    if (ctx->pc == 0x25ca34u) { ctx->pc = 0x25ca38u; }
}
