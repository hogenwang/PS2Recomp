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

// Function: sub_001A6A40
// Address: 0x1a6a40 - 0x1a6ab8
void sub_001A6A40_0x1a6a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6A40_0x1a6a40");
#endif

    switch (ctx->pc) {
        case 0x1a6a50u: goto label_1a6a50;
        default: break;
    }

    ctx->pc = 0x1a6a40u;

    // 0x1a6a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6a48: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6A48u;
    SET_GPR_U32(ctx, 31, 0x1A6A50u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A6A48u, 0x1A6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A50u;
label_1a6a50:
    // 0x1a6a50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6a54: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a6a58: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a6a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a6a5c: 0x9c650000  lwu         $a1, 0x0($v1)
    ctx->pc = 0x1a6a5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6a60: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x1a6a60u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 16))); // MMIO: 0x10000010
    // 0x1a6a64: 0xdc8ae118  ld          $t2, -0x1EE8($a0)
    ctx->pc = 0x1a6a64u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294959384)));
    // 0x1a6a68: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a6a68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a6a6c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6A6Cu;
    {
        const bool branch_taken_0x1a6a6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A6Cu;
        // 0x1a6a70: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a6c) {
            ctx->pc = 0x1A6A7Cu;
            goto label_1a6a7c;
        }
    }
    ctx->pc = 0x1A6A74u;
    // 0x1a6a74: 0x9c650000  lwu         $a1, 0x0($v1)
    ctx->pc = 0x1a6a74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6a78: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a6a78u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a6a7c:
    // 0x1a6a7c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a6a7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a6a80: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a6a80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a6a84: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a6a84u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a6a88: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1a6a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x1a6a8c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a6a8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a6a90: 0x1252814  dsllv       $a1, $a1, $t1
    ctx->pc = 0x1a6a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a6a94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6A94u;
    {
        const bool branch_taken_0x1a6a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A94u;
        // 0x1a6a98: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a94) {
            ctx->pc = 0x1A6AA4u;
            goto label_1a6aa4;
        }
    }
    ctx->pc = 0x1A6A9Cu;
    // 0x1a6a9c: 0xf  sync
    ctx->pc = 0x1a6a9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6aa0: 0x42000038  ei
    ctx->pc = 0x1a6aa0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a6aa4:
    // 0x1a6aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6aa8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a6aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AACu;
        // 0x1a6ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6AB4u;
    // 0x1a6ab4: 0x0  nop
    ctx->pc = 0x1a6ab4u;
    // NOP
    if (ctx->pc == 0x1a6ab4u) { ctx->pc = 0x1a6ab8u; }
}
