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

// Function: sub_00228B38
// Address: 0x228b38 - 0x228bb0
void sub_00228B38_0x228b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228B38_0x228b38");
#endif

    ctx->pc = 0x228b38u;

    // 0x228b38: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x228b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x228b3c: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x228b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x228b40: 0x8c49a728  lw          $t1, -0x58D8($v0)
    ctx->pc = 0x228b40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944552)));
    // 0x228b44: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228b48: 0x8d6aa720  lw          $t2, -0x58E0($t3)
    ctx->pc = 0x228b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294944544)));
    // 0x228b4c: 0x1242004  sllv        $a0, $a0, $t1
    ctx->pc = 0x228b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x228b50: 0x8c62a71c  lw          $v0, -0x58E4($v1)
    ctx->pc = 0x228b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944540)));
    // 0x228b54: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x228b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x228b58: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x228b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x228b5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228B5Cu;
    {
        const bool branch_taken_0x228b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B5Cu;
        // 0x228b60: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b5c) {
            ctx->pc = 0x228B6Cu;
            goto label_228b6c;
        }
    }
    ctx->pc = 0x228B64u;
    // 0x228b64: 0x3e00008  jr          $ra
    ctx->pc = 0x228B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B64u;
        // 0x228b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228B6Cu;
label_228b6c:
    // 0x228b6c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x228b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x228b70: 0x8c43a73c  lw          $v1, -0x58C4($v0)
    ctx->pc = 0x228b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944572)));
    // 0x228b74: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x228b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x228b78: 0x8c86a740  lw          $a2, -0x58C0($a0)
    ctx->pc = 0x228b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944576)));
    // 0x228b7c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x228b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x228b80: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x228b84: 0x8ca4a74c  lw          $a0, -0x58B4($a1)
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944588)));
    // 0x228b88: 0x1231806  srlv        $v1, $v1, $t1
    ctx->pc = 0x228b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x228b8c: 0xad68a720  sw          $t0, -0x58E0($t3)
    ctx->pc = 0x228b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294944544), GPR_U32(ctx, 8));
    // 0x228b90: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x228b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x228b94: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228b98: 0xace2a744  sw          $v0, -0x58BC($a3)
    ctx->pc = 0x228b98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944580), GPR_U32(ctx, 2));
    // 0x228b9c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x228b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x228ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x228BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BA4u;
        // 0x228ba8: 0x143100b  movn        $v0, $t2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228BACu;
    // 0x228bac: 0x0  nop
    ctx->pc = 0x228bacu;
    // NOP
}
