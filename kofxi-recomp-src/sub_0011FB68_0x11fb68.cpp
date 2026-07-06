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

// Function: sub_0011FB68
// Address: 0x11fb68 - 0x11fbe8
void sub_0011FB68_0x11fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FB68_0x11fb68");
#endif

    switch (ctx->pc) {
        case 0x11fbb8u: goto label_11fbb8;
        case 0x11fbd4u: goto label_11fbd4;
        default: break;
    }

    ctx->pc = 0x11fb68u;

    // 0x11fb68: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x11fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x11fb6c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11fb70: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x11fb74: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x11fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x11fb78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11fb7c: 0x2442fb00  addiu       $v0, $v0, -0x500
    ctx->pc = 0x11fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x11fb80: 0x24631510  addiu       $v1, $v1, 0x1510
    ctx->pc = 0x11fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5392));
    // 0x11fb84: 0x24a5d6f0  addiu       $a1, $a1, -0x2910
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956784));
    // 0x11fb88: 0x24c6b618  addiu       $a2, $a2, -0x49E8
    ctx->pc = 0x11fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948376));
    // 0x11fb8c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x11fb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x11fb90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11fb94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11fb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11fb9c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11fba0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11fba4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x11fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x11fba8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x11fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11fbac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x11fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x11fbb0: 0xc043298  jal         func_10CA60
    ctx->pc = 0x11FBB0u;
    SET_GPR_U32(ctx, 31, 0x11FBB8u);
    ctx->pc = 0x11FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBB0u;
    // 0x11fbb4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x11FBB0u, 0x11FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBB8u;
label_11fbb8:
    // 0x11fbb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11fbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbbc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FBBCu;
    {
        const bool branch_taken_0x11fbbc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBBCu;
        // 0x11fbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbbc) {
            ctx->pc = 0x11FBCCu;
            goto label_11fbcc;
        }
    }
    ctx->pc = 0x11FBC4u;
    // 0x11fbc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FBC4u;
    {
        const bool branch_taken_0x11fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBC4u;
        // 0x11fbc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbc4) {
            ctx->pc = 0x11FBD8u;
            goto label_11fbd8;
        }
    }
    ctx->pc = 0x11FBCCu;
label_11fbcc:
    // 0x11fbcc: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x11FBCCu;
    SET_GPR_U32(ctx, 31, 0x11FBD4u);
    ctx->pc = 0x11FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBCCu;
    // 0x11fbd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x11FBCCu, 0x11FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBD4u;
label_11fbd4:
    // 0x11fbd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11fbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fbd8:
    // 0x11fbd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fbdc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11fbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBE0u;
        // 0x11fbe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FBE8u;
}
