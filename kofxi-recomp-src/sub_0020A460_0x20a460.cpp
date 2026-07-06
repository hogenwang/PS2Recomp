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

// Function: sub_0020A460
// Address: 0x20a460 - 0x20a510
void sub_0020A460_0x20a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A460_0x20a460");
#endif

    ctx->pc = 0x20a460u;

    // 0x20a460: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a464: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20a468: 0xa060a450  sb          $zero, -0x5BB0($v1)
    ctx->pc = 0x20a468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943824), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a46c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a470: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a474: 0xac85a4b0  sw          $a1, -0x5B50($a0)
    ctx->pc = 0x20a474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943920), GPR_U32(ctx, 5));
    // 0x20a478: 0xa060a451  sb          $zero, -0x5BAF($v1)
    ctx->pc = 0x20a478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943825), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a47c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20a480: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a484: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20a484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20a488: 0xa060a452  sb          $zero, -0x5BAE($v1)
    ctx->pc = 0x20a488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943826), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a48c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a490: 0xa060a453  sb          $zero, -0x5BAD($v1)
    ctx->pc = 0x20a490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943827), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a494: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a498: 0xac60a4a8  sw          $zero, -0x5B58($v1)
    ctx->pc = 0x20a498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943912), GPR_U32(ctx, 0));
    // 0x20a49c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4a0: 0xac60a4a0  sw          $zero, -0x5B60($v1)
    ctx->pc = 0x20a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943904), GPR_U32(ctx, 0));
    // 0x20a4a4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4a8: 0x8c64a478  lw          $a0, -0x5B88($v1)
    ctx->pc = 0x20a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943864)));
    // 0x20a4ac: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4b0: 0xac60a070  sw          $zero, -0x5F90($v1)
    ctx->pc = 0x20a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942832), GPR_U32(ctx, 0));
    // 0x20a4b4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4b8: 0x8c67a468  lw          $a3, -0x5B98($v1)
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943848)));
    // 0x20a4bc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20a4c0: 0xacc3a470  sw          $v1, -0x5B90($a2)
    ctx->pc = 0x20a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943856), GPR_U32(ctx, 3));
    // 0x20a4c4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a4c8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4cc: 0xac80a078  sw          $zero, -0x5F88($a0)
    ctx->pc = 0x20a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942840), GPR_U32(ctx, 0));
    // 0x20a4d0: 0x8c66a488  lw          $a2, -0x5B78($v1)
    ctx->pc = 0x20a4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943880)));
    // 0x20a4d4: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x20a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x20a4d8: 0xaca4a460  sw          $a0, -0x5BA0($a1)
    ctx->pc = 0x20a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943840), GPR_U32(ctx, 4));
    // 0x20a4dc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a4e0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x20a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20a4e8: 0xac60a068  sw          $zero, -0x5F98($v1)
    ctx->pc = 0x20a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942824), GPR_U32(ctx, 0));
    // 0x20a4ec: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4f0: 0xac86a480  sw          $a2, -0x5B80($a0)
    ctx->pc = 0x20a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943872), GPR_U32(ctx, 6));
    // 0x20a4f4: 0x8c65a060  lw          $a1, -0x5FA0($v1)
    ctx->pc = 0x20a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20a4f8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a4fc: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x20a4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x20a500: 0x3e00008  jr          $ra
    ctx->pc = 0x20A500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A500u;
        // 0x20a504: 0xac64a060  sw          $a0, -0x5FA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A508u;
    // 0x20a508: 0x0  nop
    ctx->pc = 0x20a508u;
    // NOP
    // 0x20a50c: 0x0  nop
    ctx->pc = 0x20a50cu;
    // NOP
    if (ctx->pc == 0x20a50cu) { ctx->pc = 0x20a510u; }
}
