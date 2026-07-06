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

// Function: sub_0021FB60
// Address: 0x21fb60 - 0x21fc08
void sub_0021FB60_0x21fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FB60_0x21fb60");
#endif

    switch (ctx->pc) {
        case 0x21fbb4u: goto label_21fbb4;
        case 0x21fbc4u: goto label_21fbc4;
        case 0x21fbd4u: goto label_21fbd4;
        default: break;
    }

    ctx->pc = 0x21fb60u;

    // 0x21fb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21fb64: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21fb64u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21fb68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21fb6c: 0x25cf2240  addiu       $t7, $t6, 0x2240
    ctx->pc = 0x21fb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 8768));
    // 0x21fb70: 0x8de7001c  lw          $a3, 0x1C($t7)
    ctx->pc = 0x21fb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x21fb74: 0x8dc82240  lw          $t0, 0x2240($t6)
    ctx->pc = 0x21fb74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8768)));
    // 0x21fb78: 0x8ded0008  lw          $t5, 0x8($t7)
    ctx->pc = 0x21fb78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x21fb7c: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x21fb7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x21fb80: 0x8dec000c  lw          $t4, 0xC($t7)
    ctx->pc = 0x21fb80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x21fb84: 0x8deb0010  lw          $t3, 0x10($t7)
    ctx->pc = 0x21fb84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x21fb88: 0x8dea0014  lw          $t2, 0x14($t7)
    ctx->pc = 0x21fb88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x21fb8c: 0x8de90018  lw          $t1, 0x18($t7)
    ctx->pc = 0x21fb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x21fb90: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x21fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x21fb94: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x21fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x21fb98: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x21fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x21fb9c: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x21fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x21fba0: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x21fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x21fba4: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x21fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x21fba8: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x21fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x21fbac: 0xc089eae  jal         func_227AB8
    ctx->pc = 0x21FBACu;
    SET_GPR_U32(ctx, 31, 0x21FBB4u);
    ctx->pc = 0x21FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBACu;
    // 0x21fbb0: 0xafa7001c  sw          $a3, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227AB8u, 0x21FBACu, 0x21FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBB4u;
label_21fbb4:
    // 0x21fbb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FBB4u;
    {
        const bool branch_taken_0x21fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBB4u;
        // 0x21fbb8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbb4) {
            ctx->pc = 0x21FBD4u;
            goto label_21fbd4;
        }
    }
    ctx->pc = 0x21FBBCu;
    // 0x21fbbc: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21FBBCu;
    SET_GPR_U32(ctx, 31, 0x21FBC4u);
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21FBBCu, 0x21FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBC4u;
label_21fbc4:
    // 0x21fbc4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x21fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x21fbc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21fbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbcc: 0xc089eb4  jal         func_227AD0
    ctx->pc = 0x21FBCCu;
    SET_GPR_U32(ctx, 31, 0x21FBD4u);
    ctx->pc = 0x21FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBCCu;
    // 0x21fbd0: 0x34a55f91  ori         $a1, $a1, 0x5F91 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24465);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227AD0u, 0x21FBCCu, 0x21FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBD4u;
label_21fbd4:
    // 0x21fbd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21fbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x21FBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBD8u;
        // 0x21fbdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FBE0u;
    // 0x21fbe0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21fbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x21FBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE4u;
        // 0x21fbe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FBECu;
    // 0x21fbec: 0x0  nop
    ctx->pc = 0x21fbecu;
    // NOP
    // 0x21fbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fbf4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x21fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x21fbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fc00: 0x8087bee  j           func_21EFB8
    ctx->pc = 0x21FC00u;
    ctx->pc = 0x21FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC00u;
    // 0x21fc04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    sub_0021EFB8_0x21efb8(rdram, ctx, runtime); return;
    ctx->pc = 0x21FC08u;
}
