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

// Function: sub_001AB6F0
// Address: 0x1ab6f0 - 0x1ab790
void sub_001AB6F0_0x1ab6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB6F0_0x1ab6f0");
#endif

    ctx->pc = 0x1ab6f0u;

    // 0x1ab6f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1ab6f4: 0x948c009a  lhu         $t4, 0x9A($a0)
    ctx->pc = 0x1ab6f4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x1ab6f8: 0x8c8f003c  lw          $t7, 0x3C($a0)
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1ab6fc: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x1ab6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1ab700: 0x8c8e0040  lw          $t6, 0x40($a0)
    ctx->pc = 0x1ab700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1ab704: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1ab704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab708: 0x8c8d0044  lw          $t5, 0x44($a0)
    ctx->pc = 0x1ab708u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ab70c: 0x3407bb80  ori         $a3, $zero, 0xBB80
    ctx->pc = 0x1ab70cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x1ab710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ab714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab718: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab71c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1ab71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1ab720: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1ab720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab724: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1ab728: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x1ab728u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x1ab72c: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1ab72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1ab730: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x1ab730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ab734: 0xa085000d  sb          $a1, 0xD($a0)
    ctx->pc = 0x1ab734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ab738: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1ab738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1ab73c: 0xa086000f  sb          $a2, 0xF($a0)
    ctx->pc = 0x1ab73cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ab740: 0xa48c0098  sh          $t4, 0x98($a0)
    ctx->pc = 0x1ab740u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 12));
    // 0x1ab744: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x1ab744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x1ab748: 0xac890054  sw          $t1, 0x54($a0)
    ctx->pc = 0x1ab748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 9));
    // 0x1ab74c: 0xac8b0058  sw          $t3, 0x58($a0)
    ctx->pc = 0x1ab74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 11));
    // 0x1ab750: 0xac8f005c  sw          $t7, 0x5C($a0)
    ctx->pc = 0x1ab750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 15));
    // 0x1ab754: 0xac8e0060  sw          $t6, 0x60($a0)
    ctx->pc = 0x1ab754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 14));
    // 0x1ab758: 0xac8d0064  sw          $t5, 0x64($a0)
    ctx->pc = 0x1ab758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 13));
    // 0x1ab75c: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1ab75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1ab760: 0xac8b0010  sw          $t3, 0x10($a0)
    ctx->pc = 0x1ab760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
    // 0x1ab764: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x1ab764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x1ab768: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x1ab768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ab76c: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x1ab76cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ab770: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x1ab770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ab774: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1ab774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1ab778: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1ab778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1ab77c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1ab77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1ab780: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1ab780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1ab784: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB784u;
        // 0x1ab788: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB78Cu;
    // 0x1ab78c: 0x0  nop
    ctx->pc = 0x1ab78cu;
    // NOP
}
