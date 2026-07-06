#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F4D0
// Address: 0x19f4d0 - 0x19f4e0
void sub_0019F4D0_0x19f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F4D0_0x19f4d0");
#endif

    ctx->pc = 0x19f4d0u;

    // 0x19f4d0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f4d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19f4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4D4u;
            // 0x19f4d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F4DCu;
    // 0x19f4dc: 0x0  nop
    ctx->pc = 0x19f4dcu;
    // NOP
    ctx->pc = 0x19f4e0u;
}
