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

// Function: sub_00205390
// Address: 0x205390 - 0x205410
void sub_00205390_0x205390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205390_0x205390");
#endif

    switch (ctx->pc) {
        case 0x2053b8u: goto label_2053b8;
        case 0x2053e4u: goto label_2053e4;
        default: break;
    }

    ctx->pc = 0x205390u;

    // 0x205390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20539c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2053a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2053a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2053a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053a8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2053a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2053ac: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2053b0: 0xc080e9c  jal         func_203A70
    ctx->pc = 0x2053B0u;
    SET_GPR_U32(ctx, 31, 0x2053B8u);
    ctx->pc = 0x2053B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053B0u;
    // 0x2053b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A70u, 0x2053B0u, 0x2053B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053B8u;
label_2053b8:
    // 0x2053b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2053bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2053c0: 0x8c43b7d0  lw          $v1, -0x4830($v0)
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948816)));
    // 0x2053c4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2053c8: 0x34210400  ori         $at, $at, 0x400
    ctx->pc = 0x2053c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1024);
    // 0x2053cc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2053ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2053d0: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2053d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2053d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2053d8: 0x90440524  lbu         $a0, 0x524($v0)
    ctx->pc = 0x2053d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x2053dc: 0xc08144c  jal         func_205130
    ctx->pc = 0x2053DCu;
    SET_GPR_U32(ctx, 31, 0x2053E4u);
    ctx->pc = 0x2053E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053DCu;
    // 0x2053e0: 0x618021  addu        $s0, $v1, $at (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205130u, 0x2053DCu, 0x2053E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053E4u;
label_2053e4:
    // 0x2053e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2053e8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2053e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2053ec: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2053ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2053f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2053f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2053f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2053f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2053f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2053f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2053fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2053fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205400: 0x3e00008  jr          $ra
    ctx->pc = 0x205400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205400u;
        // 0x205404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205408u;
    // 0x205408: 0x0  nop
    ctx->pc = 0x205408u;
    // NOP
    // 0x20540c: 0x0  nop
    ctx->pc = 0x20540cu;
    // NOP
}
