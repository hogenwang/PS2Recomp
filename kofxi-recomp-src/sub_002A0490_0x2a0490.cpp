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

// Function: sub_002A0490
// Address: 0x2a0490 - 0x2a04e0
void sub_002A0490_0x2a0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0490_0x2a0490");
#endif

    switch (ctx->pc) {
        case 0x2a0490u: goto label_2a0490;
        case 0x2a0494u: goto label_2a0494;
        case 0x2a0498u: goto label_2a0498;
        case 0x2a049cu: goto label_2a049c;
        case 0x2a04a0u: goto label_2a04a0;
        case 0x2a04a4u: goto label_2a04a4;
        case 0x2a04a8u: goto label_2a04a8;
        case 0x2a04acu: goto label_2a04ac;
        case 0x2a04b0u: goto label_2a04b0;
        case 0x2a04b4u: goto label_2a04b4;
        case 0x2a04b8u: goto label_2a04b8;
        case 0x2a04bcu: goto label_2a04bc;
        case 0x2a04c0u: goto label_2a04c0;
        case 0x2a04c4u: goto label_2a04c4;
        case 0x2a04c8u: goto label_2a04c8;
        case 0x2a04ccu: goto label_2a04cc;
        case 0x2a04d0u: goto label_2a04d0;
        case 0x2a04d4u: goto label_2a04d4;
        case 0x2a04d8u: goto label_2a04d8;
        case 0x2a04dcu: goto label_2a04dc;
        default: break;
    }

    ctx->pc = 0x2a0490u;

label_2a0490:
    // 0x2a0490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a0494:
    // 0x2a0494: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0498:
    // 0x2a0498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a049c:
    // 0x2a049c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2a049cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a04a0:
    // 0x2a04a0: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a04a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a04a4:
    // 0x2a04a4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2a04a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a04a8:
    // 0x2a04a8: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2a04a8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a04ac:
    // 0x2a04ac: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a04acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a04b0:
    // 0x2a04b0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a04b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a04b4:
    // 0x2a04b4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a04b8:
    // 0x2a04b8: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2a04b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2a04bc:
    // 0x2a04bc: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2a04bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2a04c0:
    // 0x2a04c0: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2a04c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a04c4:
    // 0x2a04c4: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2a04c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a04c8:
    // 0x2a04c8: 0x40f809  jalr        $v0
label_2a04cc:
    if (ctx->pc == 0x2A04CCu) {
        ctx->pc = 0x2A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04C8u;
        // 0x2a04cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04D0u;
        goto label_2a04d0;
    }
    ctx->pc = 0x2A04C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A04D0u);
        ctx->pc = 0x2A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04C8u;
        // 0x2a04cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A04C8u, 0x2A04D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A04D0u;
label_2a04d0:
    // 0x2a04d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a04d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a04d4:
    // 0x2a04d4: 0x3e00008  jr          $ra
label_2a04d8:
    if (ctx->pc == 0x2A04D8u) {
        ctx->pc = 0x2A04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04D4u;
        // 0x2a04d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04DCu;
        goto label_2a04dc;
    }
    ctx->pc = 0x2A04D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04D4u;
        // 0x2a04d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A04D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A04DCu;
label_2a04dc:
    // 0x2a04dc: 0x0  nop
    ctx->pc = 0x2a04dcu;
    // NOP
}
