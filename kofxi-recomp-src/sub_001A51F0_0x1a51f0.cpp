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

// Function: sub_001A51F0
// Address: 0x1a51f0 - 0x1a5270
void sub_001A51F0_0x1a51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A51F0_0x1a51f0");
#endif

    switch (ctx->pc) {
        case 0x1a521cu: goto label_1a521c;
        default: break;
    }

    ctx->pc = 0x1a51f0u;

    // 0x1a51f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a51f4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a51f8: 0x2463b8a4  addiu       $v1, $v1, -0x475C
    ctx->pc = 0x1a51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949028));
    // 0x1a51fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5204: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1a5204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5208: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1a5208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a520c: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A520Cu;
    {
        const bool branch_taken_0x1a520c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A520Cu;
        // 0x1a5210: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a520c) {
            ctx->pc = 0x1A5260u;
            goto label_1a5260;
        }
    }
    ctx->pc = 0x1A5214u;
    // 0x1a5214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a5214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5218: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1a5218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1a521c:
    // 0x1a521c: 0x1467000c  bne         $v1, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1A521Cu;
    {
        const bool branch_taken_0x1a521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a521c) {
            ctx->pc = 0x1A5250u;
            goto label_1a5250;
        }
    }
    ctx->pc = 0x1A5224u;
    // 0x1a5224: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a5224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5228: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a522c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5230: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a5230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a5234: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x1a5234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a5238: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a5238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a523c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1a523cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a5240: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5240u;
    {
        const bool branch_taken_0x1a5240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5240) {
            ctx->pc = 0x1A5250u;
            goto label_1a5250;
        }
    }
    ctx->pc = 0x1A5248u;
    // 0x1a5248: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a5248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a524c: 0x0  nop
    ctx->pc = 0x1a524cu;
    // NOP
label_1a5250:
    // 0x1a5250: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x1a5250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a5254: 0x5500fff1  bnel        $t0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A5254u;
    {
        const bool branch_taken_0x1a5254 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5254) {
            ctx->pc = 0x1A5258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5254u;
            // 0x1a5258: 0x8d03000c  lw          $v1, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A521Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a521c;
        }
    }
    ctx->pc = 0x1A525Cu;
    // 0x1a525c: 0x0  nop
    ctx->pc = 0x1a525cu;
    // NOP
label_1a5260:
    // 0x1a5260: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5268u;
    // 0x1a5268: 0x0  nop
    ctx->pc = 0x1a5268u;
    // NOP
    // 0x1a526c: 0x0  nop
    ctx->pc = 0x1a526cu;
    // NOP
    if (ctx->pc == 0x1a526cu) { ctx->pc = 0x1a5270u; }
}
