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

// Function: sub_00168470
// Address: 0x168470 - 0x1684e0
void sub_00168470_0x168470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168470_0x168470");
#endif

    switch (ctx->pc) {
        case 0x168494u: goto label_168494;
        case 0x1684b4u: goto label_1684b4;
        default: break;
    }

    ctx->pc = 0x168470u;

    // 0x168470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168478: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16847c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16848c: 0xc059318  jal         func_164C60
    ctx->pc = 0x16848Cu;
    SET_GPR_U32(ctx, 31, 0x168494u);
    ctx->pc = 0x168490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16848Cu;
    // 0x168490: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x16848Cu, 0x168494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168494u;
label_168494:
    // 0x168494: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x168494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168498: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x168498u;
    {
        const bool branch_taken_0x168498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x168498) {
            ctx->pc = 0x16849Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168498u;
            // 0x16849c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x1684A0u;
    // 0x1684a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1684a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1684a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1684a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684ac: 0xc0599fc  jal         func_1667F0
    ctx->pc = 0x1684ACu;
    SET_GPR_U32(ctx, 31, 0x1684B4u);
    ctx->pc = 0x1684B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684ACu;
    // 0x1684b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1667F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667F0u, 0x1684ACu, 0x1684B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684B4u;
label_1684b4:
    // 0x1684b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1684B4u;
    {
        const bool branch_taken_0x1684b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684b4) {
            ctx->pc = 0x1684C0u;
            goto label_1684c0;
        }
    }
    ctx->pc = 0x1684BCu;
    // 0x1684bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1684bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1684c0:
    // 0x1684c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1684c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1684c4:
    // 0x1684c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1684c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1684c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1684cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1684ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1684d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1684d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1684d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1684D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1684D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D4u;
        // 0x1684d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1684D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1684DCu;
    // 0x1684dc: 0x0  nop
    ctx->pc = 0x1684dcu;
    // NOP
    if (ctx->pc == 0x1684dcu) { ctx->pc = 0x1684e0u; }
}
