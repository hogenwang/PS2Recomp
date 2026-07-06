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

// Function: sub_0021D798
// Address: 0x21d798 - 0x21d828
void sub_0021D798_0x21d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D798_0x21d798");
#endif

    switch (ctx->pc) {
        case 0x21d7d0u: goto label_21d7d0;
        case 0x21d808u: goto label_21d808;
        default: break;
    }

    ctx->pc = 0x21d798u;

label_21d798:
    // 0x21d798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d79c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d7a4: 0x248419e8  addiu       $a0, $a0, 0x19E8
    ctx->pc = 0x21d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6632));
    // 0x21d7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d7ac: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D7ACu;
    ctx->pc = 0x21D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7ACu;
    // 0x21d7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21D7B4u;
    // 0x21d7b4: 0x0  nop
    ctx->pc = 0x21d7b4u;
    // NOP
    // 0x21d7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d7bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d7c0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d7c8: 0xc0875e6  jal         func_21D798
    ctx->pc = 0x21D7C8u;
    SET_GPR_U32(ctx, 31, 0x21D7D0u);
    ctx->pc = 0x21D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7C8u;
    // 0x21d7cc: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D798u;
    goto label_21d798;
    ctx->pc = 0x21D7D0u;
label_21d7d0:
    // 0x21d7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7D8u;
        // 0x21d7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D7E0u;
    // 0x21d7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d7e4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d7e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d7e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d7ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d7f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d7f4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21d7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d7f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d800: 0xc0875e6  jal         func_21D798
    ctx->pc = 0x21D800u;
    SET_GPR_U32(ctx, 31, 0x21D808u);
    ctx->pc = 0x21D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D800u;
    // 0x21d804: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D798u;
    goto label_21d798;
    ctx->pc = 0x21D808u;
label_21d808:
    // 0x21d808: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21d80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d810: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21d814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D81Cu;
        // 0x21d820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D824u;
    // 0x21d824: 0x0  nop
    ctx->pc = 0x21d824u;
    // NOP
    if (ctx->pc == 0x21d824u) { ctx->pc = 0x21d828u; }
}
