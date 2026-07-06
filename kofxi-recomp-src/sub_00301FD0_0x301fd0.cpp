#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301FD0
// Address: 0x301fd0 - 0x302020
void sub_00301FD0_0x301fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301FD0_0x301fd0");
#endif

    switch (ctx->pc) {
        case 0x301fe0u: goto label_301fe0;
        default: break;
    }

    ctx->pc = 0x301fd0u;

    // 0x301fd0: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x301fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x301fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301fd8: 0x24a50c70  addiu       $a1, $a1, 0xC70
    ctx->pc = 0x301fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3184));
    // 0x301fdc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x301fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_301fe0:
    // 0x301fe0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x301fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301fe4: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x301fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x301fe8: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x301fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301fec: 0x28c30007  slti        $v1, $a2, 0x7
    ctx->pc = 0x301fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x301ff0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x301ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ff4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x301ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ff8: 0xa0a40004  sb          $a0, 0x4($a1)
    ctx->pc = 0x301ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ffc: 0xa0a40005  sb          $a0, 0x5($a1)
    ctx->pc = 0x301ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x302000: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x302000u;
    {
        const bool branch_taken_0x302000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302000u;
            // 0x302004: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302000) {
            ctx->pc = 0x301FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301fe0;
        }
    }
    ctx->pc = 0x302008u;
    // 0x302008: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x302008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x30200c: 0x24630c70  addiu       $v1, $v1, 0xC70
    ctx->pc = 0x30200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3184));
    // 0x302010: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x302010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x302014: 0x3e00008  jr          $ra
    ctx->pc = 0x302014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302014u;
            // 0x302018: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30201Cu;
    // 0x30201c: 0x0  nop
    ctx->pc = 0x30201cu;
    // NOP
    ctx->pc = 0x302020u;
}
