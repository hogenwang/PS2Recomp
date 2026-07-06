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

// Function: sub_0010D5F0
// Address: 0x10d5f0 - 0x10d698
void sub_0010D5F0_0x10d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D5F0_0x10d5f0");
#endif

    switch (ctx->pc) {
        case 0x10d600u: goto label_10d600;
        default: break;
    }

    ctx->pc = 0x10d5f0u;

    // 0x10d5f0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x10d5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x10d5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5f8: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x10d5f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x10d5fc: 0x0  nop
    ctx->pc = 0x10d5fcu;
    // NOP
label_10d600:
    // 0x10d600: 0xf  sync
    ctx->pc = 0x10d600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d604: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x10d604u;
    // CACHE instruction (ignored)
    // 0x10d608: 0xf  sync
    ctx->pc = 0x10d608u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d60c: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x10d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x10d610: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x10d614: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10d618: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x10d618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d61c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10d61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10d620: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D620u;
    {
        const bool branch_taken_0x10d620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d620) {
            ctx->pc = 0x10D63Cu;
            goto label_10d63c;
        }
    }
    ctx->pc = 0x10D628u;
    // 0x10d628: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D628u;
    {
        const bool branch_taken_0x10d628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d628) {
            ctx->pc = 0x10D63Cu;
            goto label_10d63c;
        }
    }
    ctx->pc = 0x10D630u;
    // 0x10d630: 0xf  sync
    ctx->pc = 0x10d630u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d634: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x10d634u;
    // CACHE instruction (ignored)
    // 0x10d638: 0xf  sync
    ctx->pc = 0x10d638u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_10d63c:
    // 0x10d63c: 0xf  sync
    ctx->pc = 0x10d63cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d640: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x10d640u;
    // CACHE instruction (ignored)
    // 0x10d644: 0xf  sync
    ctx->pc = 0x10d644u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d648: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x10d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x10d64c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10d64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x10d650: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10d654: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x10d654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d658: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10d65c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D65Cu;
    {
        const bool branch_taken_0x10d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d65c) {
            ctx->pc = 0x10D678u;
            goto label_10d678;
        }
    }
    ctx->pc = 0x10D664u;
    // 0x10d664: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D664u;
    {
        const bool branch_taken_0x10d664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d664) {
            ctx->pc = 0x10D678u;
            goto label_10d678;
        }
    }
    ctx->pc = 0x10D66Cu;
    // 0x10d66c: 0xf  sync
    ctx->pc = 0x10d66cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d670: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x10d670u;
    // CACHE instruction (ignored)
    // 0x10d674: 0xf  sync
    ctx->pc = 0x10d674u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_10d678:
    // 0x10d678: 0xf  sync
    ctx->pc = 0x10d678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d67c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10d680: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x10d680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x10d684: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x10D684u;
    {
        const bool branch_taken_0x10d684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d684) {
            ctx->pc = 0x10D600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d600;
        }
    }
    ctx->pc = 0x10D68Cu;
    // 0x10d68c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D694u;
    // 0x10d694: 0x0  nop
    ctx->pc = 0x10d694u;
    // NOP
    if (ctx->pc == 0x10d694u) { ctx->pc = 0x10d698u; }
}
