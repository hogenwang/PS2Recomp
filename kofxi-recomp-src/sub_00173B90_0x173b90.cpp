#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173B90
// Address: 0x173b90 - 0x173c20
void sub_00173B90_0x173b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B90_0x173b90");
#endif

    ctx->pc = 0x173b90u;

    // 0x173b90: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x173b90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x173b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b98: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x173b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x173b9c: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x173b9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x173ba0: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x173ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x173ba4: 0x90a30012  lbu         $v1, 0x12($a1)
    ctx->pc = 0x173ba4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x173ba8: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x173ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bac: 0x94a3000a  lhu         $v1, 0xA($a1)
    ctx->pc = 0x173bacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x173bb0: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x173bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x173bb4: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x173bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x173bb8: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x173bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x173bbc: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x173bc0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x173bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x173bc4: 0x90a30013  lbu         $v1, 0x13($a1)
    ctx->pc = 0x173bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x173bc8: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x173bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bcc: 0x90a30014  lbu         $v1, 0x14($a1)
    ctx->pc = 0x173bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x173bd0: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x173bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bd4: 0x90a30015  lbu         $v1, 0x15($a1)
    ctx->pc = 0x173bd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x173bd8: 0xa0830015  sb          $v1, 0x15($a0)
    ctx->pc = 0x173bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bdc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x173bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173be0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x173be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x173be4: 0x90a30018  lbu         $v1, 0x18($a1)
    ctx->pc = 0x173be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x173be8: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x173be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bec: 0x90a30019  lbu         $v1, 0x19($a1)
    ctx->pc = 0x173becu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
    // 0x173bf0: 0xa0830019  sb          $v1, 0x19($a0)
    ctx->pc = 0x173bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bf4: 0x90a3001a  lbu         $v1, 0x1A($a1)
    ctx->pc = 0x173bf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x173bf8: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x173bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x173bfc: 0x90a3001b  lbu         $v1, 0x1B($a1)
    ctx->pc = 0x173bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 27)));
    // 0x173c00: 0xa083001b  sb          $v1, 0x1B($a0)
    ctx->pc = 0x173c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x173c04: 0x90a3001c  lbu         $v1, 0x1C($a1)
    ctx->pc = 0x173c04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x173c08: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x173c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x173c0c: 0x84a30026  lh          $v1, 0x26($a1)
    ctx->pc = 0x173c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x173c10: 0x3e00008  jr          $ra
    ctx->pc = 0x173C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C10u;
            // 0x173c14: 0xa4830026  sh          $v1, 0x26($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173C18u;
    // 0x173c18: 0x0  nop
    ctx->pc = 0x173c18u;
    // NOP
    // 0x173c1c: 0x0  nop
    ctx->pc = 0x173c1cu;
    // NOP
    ctx->pc = 0x173c20u;
}
