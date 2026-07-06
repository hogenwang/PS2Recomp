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

// Function: sub_00323980
// Address: 0x323980 - 0x3239e0
void sub_00323980_0x323980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323980_0x323980");
#endif

    switch (ctx->pc) {
        case 0x32399cu: goto label_32399c;
        case 0x3239c8u: goto label_3239c8;
        default: break;
    }

    ctx->pc = 0x323980u;

    // 0x323980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x323988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32398c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323994: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323994u;
    SET_GPR_U32(ctx, 31, 0x32399Cu);
    ctx->pc = 0x323998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323994u;
    // 0x323998: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x323994u, 0x32399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32399Cu;
label_32399c:
    // 0x32399c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3239a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3239a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3239a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3239A4u;
    {
        const bool branch_taken_0x3239a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3239A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239A4u;
        // 0x3239a8: 0xa0400004  sb          $zero, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239a4) {
            ctx->pc = 0x3239C8u;
            goto label_3239c8;
        }
    }
    ctx->pc = 0x3239ACu;
    // 0x3239ac: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3239acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3239b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3239b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3239b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239b8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x3239b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3239bc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3239bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3239c0: 0xc0c8de0  jal         func_323780
    ctx->pc = 0x3239C0u;
    SET_GPR_U32(ctx, 31, 0x3239C8u);
    ctx->pc = 0x3239C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239C0u;
    // 0x3239c4: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323780u, 0x3239C0u, 0x3239C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239C8u;
label_3239c8:
    // 0x3239c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3239c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3239cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3239ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3239d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3239d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3239d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3239D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239D4u;
        // 0x3239d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3239DCu;
    // 0x3239dc: 0x0  nop
    ctx->pc = 0x3239dcu;
    // NOP
    if (ctx->pc == 0x3239dcu) { ctx->pc = 0x3239e0u; }
}
