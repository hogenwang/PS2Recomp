#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228950
// Address: 0x228950 - 0x228988
void sub_00228950_0x228950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228950_0x228950");
#endif

    ctx->pc = 0x228950u;

    // 0x228950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228954: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x228954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x228958: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x228958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22895c: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x22895cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x228960: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x228960u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x228964: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x228968: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x228968u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x22896c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22896cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x228970: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x228970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x228974: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x228974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x228978: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x228978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22897c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x228980: 0x3e00008  jr          $ra
    ctx->pc = 0x228980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228980u;
            // 0x228984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228988u;
    ctx->pc = 0x228988u;
}
