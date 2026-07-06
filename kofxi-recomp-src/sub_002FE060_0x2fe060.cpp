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

// Function: sub_002FE060
// Address: 0x2fe060 - 0x2fe0d0
void sub_002FE060_0x2fe060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE060_0x2fe060");
#endif

    switch (ctx->pc) {
        case 0x2fe078u: goto label_2fe078;
        case 0x2fe0b4u: goto label_2fe0b4;
        default: break;
    }

    ctx->pc = 0x2fe060u;

    // 0x2fe060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe064: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe070: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE070u;
    SET_GPR_U32(ctx, 31, 0x2FE078u);
    ctx->pc = 0x2FE074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE070u;
    // 0x2fe074: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4740u, 0x2FE070u, 0x2FE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE078u;
label_2fe078:
    // 0x2fe078: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE078u;
    {
        const bool branch_taken_0x2fe078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe078) {
            ctx->pc = 0x2FE08Cu;
            goto label_2fe08c;
        }
    }
    ctx->pc = 0x2FE080u;
    // 0x2fe080: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe084: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE084u;
    {
        const bool branch_taken_0x2fe084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE084u;
        // 0x2fe088: 0xac50be80  sw          $s0, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe084) {
            ctx->pc = 0x2FE09Cu;
            goto label_2fe09c;
        }
    }
    ctx->pc = 0x2FE08Cu;
label_2fe08c:
    // 0x2fe08c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe090: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe094: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe098: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe09c:
    // 0x2fe09c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe0a0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2fe0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2fe0a4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe0a8: 0x2484dae0  addiu       $a0, $a0, -0x2520
    ctx->pc = 0x2fe0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    // 0x2fe0ac: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE0ACu;
    SET_GPR_U32(ctx, 31, 0x2FE0B4u);
    ctx->pc = 0x2FE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0ACu;
    // 0x2fe0b0: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FE0ACu, 0x2FE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0B4u;
label_2fe0b4:
    // 0x2fe0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0BCu;
        // 0x2fe0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE0C4u;
    // 0x2fe0c4: 0x0  nop
    ctx->pc = 0x2fe0c4u;
    // NOP
    // 0x2fe0c8: 0x0  nop
    ctx->pc = 0x2fe0c8u;
    // NOP
    // 0x2fe0cc: 0x0  nop
    ctx->pc = 0x2fe0ccu;
    // NOP
    if (ctx->pc == 0x2fe0ccu) { ctx->pc = 0x2fe0d0u; }
}
