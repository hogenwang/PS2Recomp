#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3130
// Address: 0x1a3130 - 0x1a3180
void sub_001A3130_0x1a3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3130_0x1a3130");
#endif

    ctx->pc = 0x1a3130u;

    // 0x1a3130: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1a3130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a3134: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a3138: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a313c: 0x24a5e8d2  addiu       $a1, $a1, -0x172E
    ctx->pc = 0x1a313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961362));
    // 0x1a3140: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3144: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a3148: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a314c: 0x2484e8e4  addiu       $a0, $a0, -0x171C
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961380));
    // 0x1a3150: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a3154: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a3154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a3158: 0x2463e8dc  addiu       $v1, $v1, -0x1724
    ctx->pc = 0x1a3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961372));
    // 0x1a315c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a3160: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1a3160u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a3164: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a3164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a3168: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1a3168u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a316c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A316Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A316Cu;
            // 0x1a3170: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3174u;
    // 0x1a3174: 0x0  nop
    ctx->pc = 0x1a3174u;
    // NOP
    // 0x1a3178: 0x0  nop
    ctx->pc = 0x1a3178u;
    // NOP
    // 0x1a317c: 0x0  nop
    ctx->pc = 0x1a317cu;
    // NOP
    ctx->pc = 0x1a3180u;
}
