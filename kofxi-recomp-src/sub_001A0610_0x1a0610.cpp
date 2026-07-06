#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0610
// Address: 0x1a0610 - 0x1a0630
void sub_001A0610_0x1a0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0610_0x1a0610");
#endif

    ctx->pc = 0x1a0610u;

    // 0x1a0610: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x1a0610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x1a0614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0618: 0x0  nop
    ctx->pc = 0x1a0618u;
    // NOP
    // 0x1a061c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1a061cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1a0620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a0620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a0624: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a0624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0628: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0630u;
    ctx->pc = 0x1a0630u;
}
