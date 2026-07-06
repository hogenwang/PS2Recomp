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

// Function: sub_00128EF8
// Address: 0x128ef8 - 0x128f50
void sub_00128EF8_0x128ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128EF8_0x128ef8");
#endif

    switch (ctx->pc) {
        case 0x128f1cu: goto label_128f1c;
        default: break;
    }

    ctx->pc = 0x128ef8u;

    // 0x128ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128efc: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x128efcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x128f00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x128f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x128f04: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x128f04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x128f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128f0c: 0x8df0bde8  lw          $s0, -0x4218($t7)
    ctx->pc = 0x128f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x128f10: 0xddc5ba98  ld          $a1, -0x4568($t6)
    ctx->pc = 0x128f10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 4294949528)));
    // 0x128f14: 0xc048082  jal         func_120208
    ctx->pc = 0x128F14u;
    SET_GPR_U32(ctx, 31, 0x128F1Cu);
    ctx->pc = 0x128F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F14u;
    // 0x128f18: 0xde0400a8  ld          $a0, 0xA8($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x128F14u, 0x128F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F1Cu;
label_128f1c:
    // 0x128f1c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x128f1cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x128f20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x128f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128f24: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x128f24u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x128f28: 0xfe0200a8  sd          $v0, 0xA8($s0)
    ctx->pc = 0x128f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 2));
    // 0x128f2c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x128f2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x128f30: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x128f30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x128f34: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x128f34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x128f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128f3c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128f3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128f40: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x128f40u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x128f44: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x128f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f48: 0x3e00008  jr          $ra
    ctx->pc = 0x128F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F48u;
        // 0x128f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128F50u;
}
