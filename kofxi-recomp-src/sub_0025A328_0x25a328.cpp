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

// Function: sub_0025A328
// Address: 0x25a328 - 0x25a3a8
void sub_0025A328_0x25a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A328_0x25a328");
#endif

    ctx->pc = 0x25a328u;

    // 0x25a328: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x25a328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a32c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A32Cu;
    {
        const bool branch_taken_0x25a32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A32Cu;
        // 0x25a330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a32c) {
            ctx->pc = 0x25A338u;
            goto label_25a338;
        }
    }
    ctx->pc = 0x25A334u;
    // 0x25a334: 0xdc860040  ld          $a2, 0x40($a0)
    ctx->pc = 0x25a334u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 64)));
label_25a338:
    // 0x25a338: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25a33c: 0x8c4312cc  lw          $v1, 0x12CC($v0)
    ctx->pc = 0x25a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4812)));
    // 0x25a340: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25A340u;
    {
        const bool branch_taken_0x25a340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a340) {
            ctx->pc = 0x25A344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A340u;
            // 0x25a344: 0x38e20002  xori        $v0, $a3, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A36Cu;
            goto label_25a36c;
        }
    }
    ctx->pc = 0x25A348u;
    // 0x25a348: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a34c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x25a34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x25a350: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x25a350u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x25a354: 0x8c8201b8  lw          $v0, 0x1B8($a0)
    ctx->pc = 0x25a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x25a358: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x25a358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25a35c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x25a35cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x25a360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25a364: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x25a364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25a368: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x25a368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
label_25a36c:
    // 0x25a36c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x25a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25a370: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a370u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x25a374: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a378: 0x64630014  daddiu      $v1, $v1, 0x14
    ctx->pc = 0x25a378u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)20);
    // 0x25a37c: 0x8c8212a8  lw          $v0, 0x12A8($a0)
    ctx->pc = 0x25a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4776)));
    // 0x25a380: 0xc3282f  dsubu       $a1, $a2, $v1
    ctx->pc = 0x25a380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x25a384: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x25a384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x25a388: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x25a388u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x25a38c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x25a38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x25a390: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x25a390u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x25a394: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x25a394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25a398: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x25a398u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x25a39c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25a3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3A0u;
        // 0x25a3a4: 0x2103e  dsrl32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A3A8u;
}
