#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002306F0
// Address: 0x2306f0 - 0x230750
void sub_002306F0_0x2306f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002306F0_0x2306f0");
#endif

    ctx->pc = 0x2306f0u;

    // 0x2306f0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2306f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2306f4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2306F4u;
    {
        const bool branch_taken_0x2306f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2306F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306F4u;
            // 0x2306f8: 0xace40010  sw          $a0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306f4) {
            ctx->pc = 0x230710u;
            goto label_230710;
        }
    }
    ctx->pc = 0x2306FCu;
    // 0x2306fc: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x2306fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x230700: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x230704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230708: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230708u;
    {
        const bool branch_taken_0x230708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230708u;
            // 0x23070c: 0xa4820030  sh          $v0, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230708) {
            ctx->pc = 0x230720u;
            goto label_230720;
        }
    }
    ctx->pc = 0x230710u;
label_230710:
    // 0x230710: 0x94820032  lhu         $v0, 0x32($a0)
    ctx->pc = 0x230710u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x230714: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x230714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x230718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23071c: 0xa4820032  sh          $v0, 0x32($a0)
    ctx->pc = 0x23071cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
label_230720:
    // 0x230720: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x230720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x230724: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x230724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x230728: 0x24e50028  addiu       $a1, $a3, 0x28
    ctx->pc = 0x230728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x23072c: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x23072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x230730: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x230730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x230734: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x230734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x230738: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23073c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x23073cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x230740: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x230740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x230744: 0x3e00008  jr          $ra
    ctx->pc = 0x230744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230744u;
            // 0x230748: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23074Cu;
    // 0x23074c: 0x0  nop
    ctx->pc = 0x23074cu;
    // NOP
    ctx->pc = 0x230750u;
}
