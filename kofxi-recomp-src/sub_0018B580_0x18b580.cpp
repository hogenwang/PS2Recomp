#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B580
// Address: 0x18b580 - 0x18b5a0
void sub_0018B580_0x18b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B580_0x18b580");
#endif

    ctx->pc = 0x18b580u;

    // 0x18b580: 0x9085008c  lbu         $a1, 0x8C($a0)
    ctx->pc = 0x18b580u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x18b584: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18b588: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x18b588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x18b58c: 0xa085008c  sb          $a1, 0x8C($a0)
    ctx->pc = 0x18b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 5));
    // 0x18b590: 0x8c85048c  lw          $a1, 0x48C($a0)
    ctx->pc = 0x18b590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x18b594: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x18b594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18b598: 0x3e00008  jr          $ra
    ctx->pc = 0x18B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B598u;
            // 0x18b59c: 0xac83048c  sw          $v1, 0x48C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B5A0u;
    ctx->pc = 0x18b5a0u;
}
