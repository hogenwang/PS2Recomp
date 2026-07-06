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

// Function: sub_00122438
// Address: 0x122438 - 0x122490
void sub_00122438_0x122438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122438_0x122438");
#endif

    ctx->pc = 0x122438u;

    // 0x122438: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x122438u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12243c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x12243cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x122440: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x122440u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x122444: 0xf67c2  srl         $t4, $t7, 31
    ctx->pc = 0x122444u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x122448: 0xf75c2  srl         $t6, $t7, 23
    ctx->pc = 0x122448u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x12244c: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x12244cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x122450: 0xacac0004  sw          $t4, 0x4($a1)
    ctx->pc = 0x122450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x122454: 0xf69c0  sll         $t5, $t7, 7
    ctx->pc = 0x122454u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 7));
    // 0x122458: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x122458u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x12245c: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12245Cu;
    {
        const bool branch_taken_0x12245c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x122460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12245Cu;
        // 0x122460: 0x25cfff81  addiu       $t7, $t6, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12245c) {
            ctx->pc = 0x122470u;
            goto label_122470;
        }
    }
    ctx->pc = 0x122464u;
    // 0x122464: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122468: 0x3e00008  jr          $ra
    ctx->pc = 0x122468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122468u;
        // 0x12246c: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122470u;
label_122470:
    // 0x122470: 0xacaf0008  sw          $t7, 0x8($a1)
    ctx->pc = 0x122470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 15));
    // 0x122474: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x122474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122478: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x122478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x12247c: 0x3c0f4000  lui         $t7, 0x4000
    ctx->pc = 0x12247cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
    // 0x122480: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x122480u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x122484: 0x3e00008  jr          $ra
    ctx->pc = 0x122484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122484u;
        // 0x122488: 0xacaf000c  sw          $t7, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12248Cu;
    // 0x12248c: 0x0  nop
    ctx->pc = 0x12248cu;
    // NOP
    if (ctx->pc == 0x12248cu) { ctx->pc = 0x122490u; }
}
