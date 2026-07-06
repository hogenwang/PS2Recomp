#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003128D0
// Address: 0x3128d0 - 0x312900
void sub_003128D0_0x3128d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003128D0_0x3128d0");
#endif

    ctx->pc = 0x3128d0u;

    // 0x3128d0: 0x24827fff  addiu       $v0, $a0, 0x7FFF
    ctx->pc = 0x3128d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x3128d4: 0x24430ca1  addiu       $v1, $v0, 0xCA1
    ctx->pc = 0x3128d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3233));
    // 0x3128d8: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x3128d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x3128dc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3128dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3128e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3128e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3128e4: 0x0  nop
    ctx->pc = 0x3128e4u;
    // NOP
    // 0x3128e8: 0x1810  mfhi        $v1
    ctx->pc = 0x3128e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3128ec: 0x244237d0  addiu       $v0, $v0, 0x37D0
    ctx->pc = 0x3128ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14288));
    // 0x3128f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3128f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3128f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3128f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3128f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3128F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3128FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3128F8u;
            // 0x3128fc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312900u;
    ctx->pc = 0x312900u;
}
