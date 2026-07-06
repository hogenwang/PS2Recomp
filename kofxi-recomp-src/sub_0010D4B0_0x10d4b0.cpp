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

// Function: sub_0010D4B0
// Address: 0x10d4b0 - 0x10d558
void sub_0010D4B0_0x10d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D4B0_0x10d4b0");
#endif

    switch (ctx->pc) {
        case 0x10d4c0u: goto label_10d4c0;
        default: break;
    }

    ctx->pc = 0x10d4b0u;

    // 0x10d4b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x10d4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x10d4b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4b8: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x10d4b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x10d4bc: 0x0  nop
    ctx->pc = 0x10d4bcu;
    // NOP
label_10d4c0:
    // 0x10d4c0: 0xf  sync
    ctx->pc = 0x10d4c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d4c4: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x10d4c4u;
    // CACHE instruction (ignored)
    // 0x10d4c8: 0xf  sync
    ctx->pc = 0x10d4c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d4cc: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x10d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x10d4d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x10d4d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10d4d8: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x10d4d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d4dc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10d4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10d4e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D4E0u;
    {
        const bool branch_taken_0x10d4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d4e0) {
            ctx->pc = 0x10D4FCu;
            goto label_10d4fc;
        }
    }
    ctx->pc = 0x10D4E8u;
    // 0x10d4e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D4E8u;
    {
        const bool branch_taken_0x10d4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d4e8) {
            ctx->pc = 0x10D4FCu;
            goto label_10d4fc;
        }
    }
    ctx->pc = 0x10D4F0u;
    // 0x10d4f0: 0xf  sync
    ctx->pc = 0x10d4f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d4f4: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x10d4f4u;
    // CACHE instruction (ignored)
    // 0x10d4f8: 0xf  sync
    ctx->pc = 0x10d4f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_10d4fc:
    // 0x10d4fc: 0xf  sync
    ctx->pc = 0x10d4fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d500: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x10d500u;
    // CACHE instruction (ignored)
    // 0x10d504: 0xf  sync
    ctx->pc = 0x10d504u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d508: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x10d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x10d50c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x10d510: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10d514: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x10d514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d518: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10d518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10d51c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D51Cu;
    {
        const bool branch_taken_0x10d51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d51c) {
            ctx->pc = 0x10D538u;
            goto label_10d538;
        }
    }
    ctx->pc = 0x10D524u;
    // 0x10d524: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D524u;
    {
        const bool branch_taken_0x10d524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d524) {
            ctx->pc = 0x10D538u;
            goto label_10d538;
        }
    }
    ctx->pc = 0x10D52Cu;
    // 0x10d52c: 0xf  sync
    ctx->pc = 0x10d52cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d530: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x10d530u;
    // CACHE instruction (ignored)
    // 0x10d534: 0xf  sync
    ctx->pc = 0x10d534u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_10d538:
    // 0x10d538: 0xf  sync
    ctx->pc = 0x10d538u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d53c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10d540: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x10d540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x10d544: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x10D544u;
    {
        const bool branch_taken_0x10d544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d544) {
            ctx->pc = 0x10D4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d4c0;
        }
    }
    ctx->pc = 0x10D54Cu;
    // 0x10d54c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D554u;
    // 0x10d554: 0x0  nop
    ctx->pc = 0x10d554u;
    // NOP
    if (ctx->pc == 0x10d554u) { ctx->pc = 0x10d558u; }
}
