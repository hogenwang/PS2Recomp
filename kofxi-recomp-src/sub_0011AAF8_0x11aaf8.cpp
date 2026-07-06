#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011AAF8
// Address: 0x11aaf8 - 0x11ab20
void sub_0011AAF8_0x11aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AAF8_0x11aaf8");
#endif

    ctx->pc = 0x11aaf8u;

    // 0x11aaf8: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x11aaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x11aafc: 0x3c0c7fff  lui         $t4, 0x7FFF
    ctx->pc = 0x11aafcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32767 << 16));
    // 0x11ab00: 0x440f6800  mfc1        $t7, $f13
    ctx->pc = 0x11ab00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ab04: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x11ab04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x11ab08: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x11ab08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x11ab0c: 0x1ac6824  and         $t5, $t5, $t4
    ctx->pc = 0x11ab0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x11ab10: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x11ab10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11ab14: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x11ab14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x11ab18: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB18u;
            // 0x11ab1c: 0x448d0000  mtc1        $t5, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11AB20u;
    ctx->pc = 0x11ab20u;
}
