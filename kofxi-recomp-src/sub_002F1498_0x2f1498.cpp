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

// Function: sub_002F1498
// Address: 0x2f1498 - 0x2f1510
void sub_002F1498_0x2f1498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1498_0x2f1498");
#endif

    ctx->pc = 0x2f1498u;

    // 0x2f1498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f149c: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x2f149cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
    // 0x2f14a0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2f14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2f14a4: 0x258ceca8  addiu       $t4, $t4, -0x1358
    ctx->pc = 0x2f14a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962344));
    // 0x2f14a8: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x2f14a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f14ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f14acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f14b0: 0x918a03a8  lbu         $t2, 0x3A8($t4)
    ctx->pc = 0x2f14b0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 936)));
    // 0x2f14b4: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x2f14b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2f14b8: 0x93ae0000  lbu         $t6, 0x0($sp)
    ctx->pc = 0x2f14b8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f14bc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2f14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2f14c0: 0xa08a0000  sb          $t2, 0x0($a0)
    ctx->pc = 0x2f14c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f14c4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x2f14c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x2f14c8: 0x93ad0002  lbu         $t5, 0x2($sp)
    ctx->pc = 0x2f14c8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2f14cc: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x2f14ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x2f14d0: 0x93af0001  lbu         $t7, 0x1($sp)
    ctx->pc = 0x2f14d0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2f14d4: 0x93aa0003  lbu         $t2, 0x3($sp)
    ctx->pc = 0x2f14d4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2f14d8: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x2f14d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x2f14dc: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x2f14dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x2f14e0: 0x918903a9  lbu         $t1, 0x3A9($t4)
    ctx->pc = 0x2f14e0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 937)));
    // 0x2f14e4: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x2f14e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x2f14e8: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x2f14e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x2f14ec: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x2f14ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2f14f0: 0xa0890001  sb          $t1, 0x1($a0)
    ctx->pc = 0x2f14f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f14f4: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x2f14f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2f14f8: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x2f14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x2f14fc: 0xa087000a  sb          $a3, 0xA($a0)
    ctx->pc = 0x2f14fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f1500: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x2f1500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1504: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x2f1504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f1508: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1508u;
        // 0x2f150c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1510u;
}
