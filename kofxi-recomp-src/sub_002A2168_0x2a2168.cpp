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

// Function: sub_002A2168
// Address: 0x2a2168 - 0x2a21d0
void sub_002A2168_0x2a2168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2168_0x2a2168");
#endif

    switch (ctx->pc) {
        case 0x2a21b4u: goto label_2a21b4;
        default: break;
    }

    ctx->pc = 0x2a2168u;

    // 0x2a2168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a216c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2178: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a2178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a217c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2a217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a2180: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a2180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a2184: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2184u;
    {
        const bool branch_taken_0x2a2184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2184u;
        // 0x2a2188: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2184) {
            ctx->pc = 0x2A2198u;
            goto label_2a2198;
        }
    }
    ctx->pc = 0x2A218Cu;
    // 0x2a218c: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x2a218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2a2190: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2190u;
    {
        const bool branch_taken_0x2a2190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2190u;
        // 0x2a2194: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2190) {
            ctx->pc = 0x2A219Cu;
            goto label_2a219c;
        }
    }
    ctx->pc = 0x2A2198u;
label_2a2198:
    // 0x2a2198: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2a2198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a219c:
    // 0x2a219c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a219cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a21a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a21a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21a4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a21a8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a21ac: 0xc0a8816  jal         func_2A2058
    ctx->pc = 0x2A21ACu;
    SET_GPR_U32(ctx, 31, 0x2A21B4u);
    ctx->pc = 0x2A21B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21ACu;
    // 0x2a21b0: 0x8e080010  lw          $t0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2058u, 0x2A21ACu, 0x2A21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21B4u;
label_2a21b4:
    // 0x2a21b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a21b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a21b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a21bc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2a21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2a21c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a21c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a21c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a21c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a21c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A21C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21C8u;
        // 0x2a21cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A21D0u;
}
