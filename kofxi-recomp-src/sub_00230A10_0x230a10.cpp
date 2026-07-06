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

// Function: sub_00230A10
// Address: 0x230a10 - 0x230a70
void sub_00230A10_0x230a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230A10_0x230a10");
#endif

    ctx->pc = 0x230a10u;

    // 0x230a10: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x230a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a14: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x230a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x230a18: 0x34428e37  ori         $v0, $v0, 0x8E37
    ctx->pc = 0x230a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36407);
    // 0x230a1c: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x230a1cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x230a20: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x230a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x230a24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230A24u;
    {
        const bool branch_taken_0x230a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A24u;
        // 0x230a28: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a24) {
            ctx->pc = 0x230A34u;
            goto label_230a34;
        }
    }
    ctx->pc = 0x230A2Cu;
    // 0x230a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x230A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A2Cu;
        // 0x230a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A34u;
label_230a34:
    // 0x230a34: 0x7287c  dsll32      $a1, $a3, 1
    ctx->pc = 0x230a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 1));
    // 0x230a38: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x230a38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x230a3c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x230a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x230a40: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x230a40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x230a44: 0xdcc30020  ld          $v1, 0x20($a2)
    ctx->pc = 0x230a44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x230a48: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x230a48u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x230a4c: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x230a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x230a50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x230a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x230a54: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x230a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x230a58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x230a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x230a5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x230A5Cu;
    {
        const bool branch_taken_0x230a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A5Cu;
        // 0x230a60: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a5c) {
            ctx->pc = 0x230A68u;
            goto label_230a68;
        }
    }
    ctx->pc = 0x230A64u;
    // 0x230a64: 0xfcc70020  sd          $a3, 0x20($a2)
    ctx->pc = 0x230a64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 7));
label_230a68:
    // 0x230a68: 0x3e00008  jr          $ra
    ctx->pc = 0x230A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A68u;
        // 0x230a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A70u;
}
