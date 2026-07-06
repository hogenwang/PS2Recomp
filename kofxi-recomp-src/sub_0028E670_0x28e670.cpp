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

// Function: sub_0028E670
// Address: 0x28e670 - 0x28e6b8
void sub_0028E670_0x28e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E670_0x28e670");
#endif

    switch (ctx->pc) {
        case 0x28e670u: goto label_28e670;
        case 0x28e674u: goto label_28e674;
        case 0x28e678u: goto label_28e678;
        case 0x28e67cu: goto label_28e67c;
        case 0x28e680u: goto label_28e680;
        case 0x28e684u: goto label_28e684;
        case 0x28e688u: goto label_28e688;
        case 0x28e68cu: goto label_28e68c;
        case 0x28e690u: goto label_28e690;
        case 0x28e694u: goto label_28e694;
        case 0x28e698u: goto label_28e698;
        case 0x28e69cu: goto label_28e69c;
        case 0x28e6a0u: goto label_28e6a0;
        case 0x28e6a4u: goto label_28e6a4;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6acu: goto label_28e6ac;
        case 0x28e6b0u: goto label_28e6b0;
        case 0x28e6b4u: goto label_28e6b4;
        default: break;
    }

    ctx->pc = 0x28e670u;

label_28e670:
    // 0x28e670: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e674:
    // 0x28e674: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e678:
    // 0x28e678: 0x8c4245e4  lw          $v0, 0x45E4($v0)
    ctx->pc = 0x28e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17892)));
label_28e67c:
    // 0x28e67c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e680:
    if (ctx->pc == 0x28E680u) {
        ctx->pc = 0x28E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E67Cu;
        // 0x28e680: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E684u;
        goto label_28e684;
    }
    ctx->pc = 0x28E67Cu;
    {
        const bool branch_taken_0x28e67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E67Cu;
        // 0x28e680: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e67c) {
            ctx->pc = 0x28E6A4u;
            goto label_28e6a4;
        }
    }
    ctx->pc = 0x28E684u;
label_28e684:
    // 0x28e684: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e688:
    // 0x28e688: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x28e688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_28e68c:
    // 0x28e68c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e690:
    // 0x28e690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e694:
    // 0x28e694: 0xc0a5648  jal         func_295920
label_28e698:
    if (ctx->pc == 0x28E698u) {
        ctx->pc = 0x28E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E694u;
        // 0x28e698: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E69Cu;
        goto label_28e69c;
    }
    ctx->pc = 0x28E694u;
    SET_GPR_U32(ctx, 31, 0x28E69Cu);
    ctx->pc = 0x28E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E694u;
    // 0x28e698: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E694u, 0x28E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E69Cu;
label_28e69c:
    // 0x28e69c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e6a0:
    if (ctx->pc == 0x28E6A0u) {
        ctx->pc = 0x28E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E69Cu;
        // 0x28e6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6A4u;
        goto label_28e6a4;
    }
    ctx->pc = 0x28E69Cu;
    {
        const bool branch_taken_0x28e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E69Cu;
        // 0x28e6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e69c) {
            ctx->pc = 0x28E6ACu;
            goto label_28e6ac;
        }
    }
    ctx->pc = 0x28E6A4u;
label_28e6a4:
    // 0x28e6a4: 0x40f809  jalr        $v0
label_28e6a8:
    if (ctx->pc == 0x28E6A8u) {
        ctx->pc = 0x28E6ACu;
        goto label_28e6ac;
    }
    ctx->pc = 0x28E6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E6ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6A4u, 0x28E6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E6ACu;
label_28e6ac:
    // 0x28e6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e6b0:
    // 0x28e6b0: 0x3e00008  jr          $ra
label_28e6b4:
    if (ctx->pc == 0x28E6B4u) {
        ctx->pc = 0x28E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6B0u;
        // 0x28e6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6B8u;
        goto label_fallthrough_0x28e6b0;
    }
    ctx->pc = 0x28E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6B0u;
        // 0x28e6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e6b0:
    ctx->pc = 0x28E6B8u;
}
