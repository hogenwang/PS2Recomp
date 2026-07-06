#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A810
// Address: 0x32a810 - 0x32a850
void sub_0032A810_0x32a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A810_0x32a810");
#endif

    ctx->pc = 0x32a810u;

    // 0x32a810: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32a814: 0x8c42ef78  lw          $v0, -0x1088($v0)
    ctx->pc = 0x32a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963064)));
    // 0x32a818: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x32a818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32a81c: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x32a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x32a820: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x32a820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32a824: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x32a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32a828: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32a828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32a82c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A82Cu;
    {
        const bool branch_taken_0x32a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A82Cu;
            // 0x32a830: 0x24a20002  addiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a82c) {
            ctx->pc = 0x32A844u;
            goto label_32a844;
        }
    }
    ctx->pc = 0x32A834u;
    // 0x32a834: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x32a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32a838: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x32a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32a83c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x32a83cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32a840: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x32a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_32a844:
    // 0x32a844: 0x3e00008  jr          $ra
    ctx->pc = 0x32A844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A84Cu;
    // 0x32a84c: 0x0  nop
    ctx->pc = 0x32a84cu;
    // NOP
    ctx->pc = 0x32a850u;
}
