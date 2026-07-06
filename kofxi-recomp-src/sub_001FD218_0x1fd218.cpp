#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD218
// Address: 0x1fd218 - 0x1fd258
void sub_001FD218_0x1fd218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD218_0x1fd218");
#endif

    ctx->pc = 0x1fd218u;

    // 0x1fd218: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x1fd218u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd21c: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x1fd21cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fd220: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1fd220u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd224: 0xa7482a  slt         $t1, $a1, $a3
    ctx->pc = 0x1fd224u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1fd228: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1fd228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1fd22c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x1fd22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fd230: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x1fd230u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1fd234: 0xc5302d  daddu       $a2, $a2, $a1
    ctx->pc = 0x1fd234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1fd238: 0xa9380b  movn        $a3, $a1, $t1
    ctx->pc = 0x1fd238u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x1fd23c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fd240: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1fd240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1fd244: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1fd244u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1fd248: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1fd248u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1fd24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD24Cu;
            // 0x1fd250: 0xfc880010  sd          $t0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD254u;
    // 0x1fd254: 0x0  nop
    ctx->pc = 0x1fd254u;
    // NOP
    ctx->pc = 0x1fd258u;
}
