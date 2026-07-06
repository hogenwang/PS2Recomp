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

// Function: sub_002D2F68
// Address: 0x2d2f68 - 0x2d3008
void sub_002D2F68_0x2d2f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2F68_0x2d2f68");
#endif

    switch (ctx->pc) {
        case 0x2d2fa8u: goto label_2d2fa8;
        case 0x2d2fc0u: goto label_2d2fc0;
        default: break;
    }

    ctx->pc = 0x2d2f68u;

    // 0x2d2f68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2f6c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d2f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d2f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f74: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x2d2f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d2f78: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d2f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d2f7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d2f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d2f80: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d2f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d2f88: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d2f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d2f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d2f90: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x2d2f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d2f94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d2f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2F98u;
    {
        const bool branch_taken_0x2d2f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F98u;
        // 0x2d2f9c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f98) {
            ctx->pc = 0x2D2FE0u;
            goto label_2d2fe0;
        }
    }
    ctx->pc = 0x2D2FA0u;
    // 0x2d2fa0: 0xc0b4c02  jal         func_2D3008
    ctx->pc = 0x2D2FA0u;
    SET_GPR_U32(ctx, 31, 0x2D2FA8u);
    ctx->pc = 0x2D3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3008u, 0x2D2FA0u, 0x2D2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FA8u;
label_2d2fa8:
    // 0x2d2fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fac: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x2d2facu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2fb0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d2fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2fb4: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x2d2fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2d2fb8: 0xc0b4c02  jal         func_2D3008
    ctx->pc = 0x2D2FB8u;
    SET_GPR_U32(ctx, 31, 0x2D2FC0u);
    ctx->pc = 0x2D2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2FB8u;
    // 0x2d2fbc: 0x11303c  dsll32      $a2, $s1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3008u, 0x2D2FB8u, 0x2D2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FC0u;
label_2d2fc0:
    // 0x2d2fc0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2d2fc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2fc4: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x2d2fc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2fc8: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x2d2fc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2fcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d2fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d2fd0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2d2fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d2fd4: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2d2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2d2fd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2FD8u;
    {
        const bool branch_taken_0x2d2fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FD8u;
        // 0x2d2fdc: 0xfe440000  sd          $a0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fd8) {
            ctx->pc = 0x2D2FECu;
            goto label_2d2fec;
        }
    }
    ctx->pc = 0x2D2FE0u;
label_2d2fe0:
    // 0x2d2fe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2fe4: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2d2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2d2fe8: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x2d2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
label_2d2fec:
    // 0x2d2fec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d2fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2ff0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d2ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2ff4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d2ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2ff8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d2ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2ffc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d2ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3000: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3000u;
        // 0x2d3004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3008u;
}
