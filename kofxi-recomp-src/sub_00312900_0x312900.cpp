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

// Function: sub_00312900
// Address: 0x312900 - 0x312930
void sub_00312900_0x312900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312900_0x312900");
#endif

    ctx->pc = 0x312900u;

    // 0x312900: 0x24827fff  addiu       $v0, $a0, 0x7FFF
    ctx->pc = 0x312900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x312904: 0x24430cfb  addiu       $v1, $v0, 0xCFB
    ctx->pc = 0x312904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3323));
    // 0x312908: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x312908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x31290c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31290cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x312910: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x312910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x312914: 0x0  nop
    ctx->pc = 0x312914u;
    // NOP
    // 0x312918: 0x1810  mfhi        $v1
    ctx->pc = 0x312918u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31291c: 0x244237d0  addiu       $v0, $v0, 0x37D0
    ctx->pc = 0x31291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14288));
    // 0x312920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x312920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312928: 0x3e00008  jr          $ra
    ctx->pc = 0x312928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312928u;
        // 0x31292c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312930u;
}
