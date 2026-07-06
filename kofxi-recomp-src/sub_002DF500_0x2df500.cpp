#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF500
// Address: 0x2df500 - 0x2df540
void sub_002DF500_0x2df500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF500_0x2df500");
#endif

    switch (ctx->pc) {
        case 0x2df510u: goto label_2df510;
        default: break;
    }

    ctx->pc = 0x2df500u;

    // 0x2df500: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2df500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df504: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2df504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df50c: 0x0  nop
    ctx->pc = 0x2df50cu;
    // NOP
label_2df510:
    // 0x2df510: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2df514: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2df514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2df518: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2df518u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df51c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2df51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2df520: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2df520u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2df524: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x2df524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2df528: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2df528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2df52c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DF52Cu;
    {
        const bool branch_taken_0x2df52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF52Cu;
            // 0x2df530: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df52c) {
            ctx->pc = 0x2DF510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df510;
        }
    }
    ctx->pc = 0x2DF534u;
    // 0x2df534: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF534u;
            // 0x2df538: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF53Cu;
    // 0x2df53c: 0x0  nop
    ctx->pc = 0x2df53cu;
    // NOP
    ctx->pc = 0x2df540u;
}
