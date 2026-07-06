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

// Function: sub_002FE150
// Address: 0x2fe150 - 0x2fe1b0
void sub_002FE150_0x2fe150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE150_0x2fe150");
#endif

    switch (ctx->pc) {
        case 0x2fe168u: goto label_2fe168;
        case 0x2fe198u: goto label_2fe198;
        default: break;
    }

    ctx->pc = 0x2fe150u;

    // 0x2fe150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe154: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe160: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE160u;
    SET_GPR_U32(ctx, 31, 0x2FE168u);
    ctx->pc = 0x2FE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE160u;
    // 0x2fe164: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4740u, 0x2FE160u, 0x2FE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE168u;
label_2fe168:
    // 0x2fe168: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE168u;
    {
        const bool branch_taken_0x2fe168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe168) {
            ctx->pc = 0x2FE17Cu;
            goto label_2fe17c;
        }
    }
    ctx->pc = 0x2FE170u;
    // 0x2fe170: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe174: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE174u;
    {
        const bool branch_taken_0x2fe174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE174u;
        // 0x2fe178: 0xac50be80  sw          $s0, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe174) {
            ctx->pc = 0x2FE18Cu;
            goto label_2fe18c;
        }
    }
    ctx->pc = 0x2FE17Cu;
label_2fe17c:
    // 0x2fe17c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe180: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe184: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe188: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe18c:
    // 0x2fe18c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe190: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE190u;
    SET_GPR_U32(ctx, 31, 0x2FE198u);
    ctx->pc = 0x2FE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE190u;
    // 0x2fe194: 0x2484dd00  addiu       $a0, $a0, -0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FE190u, 0x2FE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE198u;
label_2fe198:
    // 0x2fe198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1A0u;
        // 0x2fe1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE1A8u;
    // 0x2fe1a8: 0x0  nop
    ctx->pc = 0x2fe1a8u;
    // NOP
    // 0x2fe1ac: 0x0  nop
    ctx->pc = 0x2fe1acu;
    // NOP
    if (ctx->pc == 0x2fe1acu) { ctx->pc = 0x2fe1b0u; }
}
