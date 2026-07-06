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

// Function: sub_00205C80
// Address: 0x205c80 - 0x205d60
void sub_00205C80_0x205c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205C80_0x205c80");
#endif

    ctx->pc = 0x205c80u;

    // 0x205c80: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x205c80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x205c84: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205c88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x205c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x205c8c: 0x248498a0  addiu       $a0, $a0, -0x6760
    ctx->pc = 0x205c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940832));
    // 0x205c90: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x205c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x205c94: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205c98: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x205c98u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x205c9c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205ca0: 0xa08804f9  sb          $t0, 0x4F9($a0)
    ctx->pc = 0x205ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1273), (uint8_t)GPR_U32(ctx, 8));
    // 0x205ca4: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205ca8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x205ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x205cac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205CACu;
    {
        const bool branch_taken_0x205cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cac) {
            ctx->pc = 0x205CB8u;
            goto label_205cb8;
        }
    }
    ctx->pc = 0x205CB4u;
    // 0x205cb4: 0x90850065  lbu         $a1, 0x65($a0)
    ctx->pc = 0x205cb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
label_205cb8:
    // 0x205cb8: 0xa08504fa  sb          $a1, 0x4FA($a0)
    ctx->pc = 0x205cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1274), (uint8_t)GPR_U32(ctx, 5));
    // 0x205cbc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205cc0: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205cc4: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x205cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x205cc8: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x205cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x205ccc: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x205cccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x205cd0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x205cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x205cd4: 0xa08604fd  sb          $a2, 0x4FD($a0)
    ctx->pc = 0x205cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1277), (uint8_t)GPR_U32(ctx, 6));
    // 0x205cd8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205cdc: 0x8c6b9bf8  lw          $t3, -0x6408($v1)
    ctx->pc = 0x205cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205ce0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x205ce4: 0xa16604fb  sb          $a2, 0x4FB($t3)
    ctx->pc = 0x205ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1275), (uint8_t)GPR_U32(ctx, 6));
    // 0x205ce8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205cec: 0x8d4a9bf8  lw          $t2, -0x6408($t2)
    ctx->pc = 0x205cecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941688)));
    // 0x205cf0: 0xa1460500  sb          $a2, 0x500($t2)
    ctx->pc = 0x205cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1280), (uint8_t)GPR_U32(ctx, 6));
    // 0x205cf4: 0x8d269bf8  lw          $a2, -0x6408($t1)
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294941688)));
    // 0x205cf8: 0xa0c704fe  sb          $a3, 0x4FE($a2)
    ctx->pc = 0x205cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1278), (uint8_t)GPR_U32(ctx, 7));
    // 0x205cfc: 0x8d069bf8  lw          $a2, -0x6408($t0)
    ctx->pc = 0x205cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941688)));
    // 0x205d00: 0xa0c704fc  sb          $a3, 0x4FC($a2)
    ctx->pc = 0x205d00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1276), (uint8_t)GPR_U32(ctx, 7));
    // 0x205d04: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x205d08: 0xa0a70501  sb          $a3, 0x501($a1)
    ctx->pc = 0x205d08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1281), (uint8_t)GPR_U32(ctx, 7));
    // 0x205d0c: 0x8c859bf8  lw          $a1, -0x6408($a0)
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x205d10: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x205d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x205d14: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x205d14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x205d18: 0xa0a404ff  sb          $a0, 0x4FF($a1)
    ctx->pc = 0x205d18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1279), (uint8_t)GPR_U32(ctx, 4));
    // 0x205d1c: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205d20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x205d24: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205D24u;
    {
        const bool branch_taken_0x205d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205d24) {
            ctx->pc = 0x205D40u;
            goto label_205d40;
        }
    }
    ctx->pc = 0x205D2Cu;
    // 0x205d2c: 0xa08004fb  sb          $zero, 0x4FB($a0)
    ctx->pc = 0x205d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1275), (uint8_t)GPR_U32(ctx, 0));
    // 0x205d30: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205d34: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205d38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x205d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x205d3c: 0xa06404fd  sb          $a0, 0x4FD($v1)
    ctx->pc = 0x205d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1277), (uint8_t)GPR_U32(ctx, 4));
label_205d40:
    // 0x205d40: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205d44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205d48: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x205D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D4Cu;
        // 0x205d50: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205D54u;
    // 0x205d54: 0x0  nop
    ctx->pc = 0x205d54u;
    // NOP
    // 0x205d58: 0x0  nop
    ctx->pc = 0x205d58u;
    // NOP
    // 0x205d5c: 0x0  nop
    ctx->pc = 0x205d5cu;
    // NOP
}
