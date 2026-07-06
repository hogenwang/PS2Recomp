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

// Function: sub_002110D0
// Address: 0x2110d0 - 0x211150
void sub_002110D0_0x2110d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002110D0_0x2110d0");
#endif

    ctx->pc = 0x2110d0u;

    // 0x2110d0: 0x94af0002  lhu         $t7, 0x2($a1)
    ctx->pc = 0x2110d0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2110d4: 0x90ae0000  lbu         $t6, 0x0($a1)
    ctx->pc = 0x2110d4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2110d8: 0xf6a02  srl         $t5, $t7, 8
    ctx->pc = 0x2110d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x2110dc: 0x90ac0001  lbu         $t4, 0x1($a1)
    ctx->pc = 0x2110dcu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2110e0: 0xf7a00  sll         $t7, $t7, 8
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 8));
    // 0x2110e4: 0xa08e0000  sb          $t6, 0x0($a0)
    ctx->pc = 0x2110e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x2110e8: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x2110e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x2110ec: 0xa08c0001  sb          $t4, 0x1($a0)
    ctx->pc = 0x2110ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 12));
    // 0x2110f0: 0xa48f0002  sh          $t7, 0x2($a0)
    ctx->pc = 0x2110f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 15));
    // 0x2110f4: 0x94ac0008  lhu         $t4, 0x8($a1)
    ctx->pc = 0x2110f4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2110f8: 0x90ad0006  lbu         $t5, 0x6($a1)
    ctx->pc = 0x2110f8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2110fc: 0x90ae0005  lbu         $t6, 0x5($a1)
    ctx->pc = 0x2110fcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x211100: 0xc4a02  srl         $t1, $t4, 8
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x211104: 0x90af0004  lbu         $t7, 0x4($a1)
    ctx->pc = 0x211104u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x211108: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x211108u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x21110c: 0x90ab0007  lbu         $t3, 0x7($a1)
    ctx->pc = 0x21110cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x211110: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x211110u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x211114: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x211114u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x211118: 0x90aa000b  lbu         $t2, 0xB($a1)
    ctx->pc = 0x211118u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x21111c: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x211120: 0x90ae000a  lbu         $t6, 0xA($a1)
    ctx->pc = 0x211120u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x211124: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x211124u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x211128: 0xa08a000b  sb          $t2, 0xB($a0)
    ctx->pc = 0x211128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 10));
    // 0x21112c: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x211130: 0xa08e000a  sb          $t6, 0xA($a0)
    ctx->pc = 0x211130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 14));
    // 0x211134: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x211134u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x211138: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x21113c: 0xa48c0008  sh          $t4, 0x8($a0)
    ctx->pc = 0x21113cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 12));
    // 0x211140: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x211140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211144: 0x3e00008  jr          $ra
    ctx->pc = 0x211144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211144u;
        // 0x211148: 0xac8f0004  sw          $t7, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21114Cu;
    // 0x21114c: 0x0  nop
    ctx->pc = 0x21114cu;
    // NOP
}
