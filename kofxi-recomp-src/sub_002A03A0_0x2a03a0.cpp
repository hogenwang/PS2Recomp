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

// Function: sub_002A03A0
// Address: 0x2a03a0 - 0x2a03f0
void sub_002A03A0_0x2a03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A03A0_0x2a03a0");
#endif

    switch (ctx->pc) {
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a03a4u: goto label_2a03a4;
        case 0x2a03a8u: goto label_2a03a8;
        case 0x2a03acu: goto label_2a03ac;
        case 0x2a03b0u: goto label_2a03b0;
        case 0x2a03b4u: goto label_2a03b4;
        case 0x2a03b8u: goto label_2a03b8;
        case 0x2a03bcu: goto label_2a03bc;
        case 0x2a03c0u: goto label_2a03c0;
        case 0x2a03c4u: goto label_2a03c4;
        case 0x2a03c8u: goto label_2a03c8;
        case 0x2a03ccu: goto label_2a03cc;
        case 0x2a03d0u: goto label_2a03d0;
        case 0x2a03d4u: goto label_2a03d4;
        case 0x2a03d8u: goto label_2a03d8;
        case 0x2a03dcu: goto label_2a03dc;
        case 0x2a03e0u: goto label_2a03e0;
        case 0x2a03e4u: goto label_2a03e4;
        case 0x2a03e8u: goto label_2a03e8;
        case 0x2a03ecu: goto label_2a03ec;
        default: break;
    }

    ctx->pc = 0x2a03a0u;

label_2a03a0:
    // 0x2a03a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a03a4:
    // 0x2a03a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a03a8:
    // 0x2a03a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a03ac:
    // 0x2a03ac: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2a03acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a03b0:
    // 0x2a03b0: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a03b0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a03b4:
    // 0x2a03b4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2a03b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a03b8:
    // 0x2a03b8: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2a03b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a03bc:
    // 0x2a03bc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a03bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a03c0:
    // 0x2a03c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a03c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a03c4:
    // 0x2a03c4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a03c8:
    // 0x2a03c8: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2a03c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2a03cc:
    // 0x2a03cc: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2a03ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2a03d0:
    // 0x2a03d0: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2a03d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a03d4:
    // 0x2a03d4: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2a03d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a03d8:
    // 0x2a03d8: 0x40f809  jalr        $v0
label_2a03dc:
    if (ctx->pc == 0x2A03DCu) {
        ctx->pc = 0x2A03DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03D8u;
        // 0x2a03dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03E0u;
        goto label_2a03e0;
    }
    ctx->pc = 0x2A03D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A03E0u);
        ctx->pc = 0x2A03DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03D8u;
        // 0x2a03dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A03D8u, 0x2A03E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A03E0u;
label_2a03e0:
    // 0x2a03e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a03e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a03e4:
    // 0x2a03e4: 0x3e00008  jr          $ra
label_2a03e8:
    if (ctx->pc == 0x2A03E8u) {
        ctx->pc = 0x2A03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03E4u;
        // 0x2a03e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03ECu;
        goto label_2a03ec;
    }
    ctx->pc = 0x2A03E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03E4u;
        // 0x2a03e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A03E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A03ECu;
label_2a03ec:
    // 0x2a03ec: 0x0  nop
    ctx->pc = 0x2a03ecu;
    // NOP
}
