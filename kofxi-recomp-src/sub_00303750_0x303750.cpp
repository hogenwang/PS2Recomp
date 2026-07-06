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

// Function: sub_00303750
// Address: 0x303750 - 0x3037c0
void sub_00303750_0x303750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303750_0x303750");
#endif

    switch (ctx->pc) {
        case 0x30375cu: goto label_30375c;
        default: break;
    }

    ctx->pc = 0x303750u;

    // 0x303750: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x303750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x303754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303758: 0x24841540  addiu       $a0, $a0, 0x1540
    ctx->pc = 0x303758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5440));
label_30375c:
    // 0x30375c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x30375cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x303760: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x303760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x303764: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x303764u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x303768: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x303768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30376c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x30376cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x303770: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x303770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x303774: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x303774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x303778: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x303778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x30377c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x30377cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x303780: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x303780u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x303784: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x303784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x303788: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x303788u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x30378c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x30378cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x303790: 0xa480002c  sh          $zero, 0x2C($a0)
    ctx->pc = 0x303790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x303794: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x303794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x303798: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x303798u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x30379c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x30379cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x3037a0: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x3037a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x3037a4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3037A4u;
    {
        const bool branch_taken_0x3037a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3037A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037A4u;
        // 0x3037a8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037a4) {
            ctx->pc = 0x30375Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30375c;
        }
    }
    ctx->pc = 0x3037ACu;
    // 0x3037ac: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3037acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3037b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3037B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3037B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037B0u;
        // 0x3037b4: 0xa4601530  sh          $zero, 0x1530($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 5424), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3037B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3037B8u;
    // 0x3037b8: 0x0  nop
    ctx->pc = 0x3037b8u;
    // NOP
    // 0x3037bc: 0x0  nop
    ctx->pc = 0x3037bcu;
    // NOP
}
