#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303480
// Address: 0x303480 - 0x3034b0
void sub_00303480_0x303480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303480_0x303480");
#endif

    ctx->pc = 0x303480u;

    // 0x303480: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x303480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303484: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x303484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x303488: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x303488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x30348c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x30348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x303490: 0xe4c09790  swc1        $f0, -0x6870($a2)
    ctx->pc = 0x303490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294940560), bits); }
    // 0x303494: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x303494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303498: 0xe4a09794  swc1        $f0, -0x686C($a1)
    ctx->pc = 0x303498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294940564), bits); }
    // 0x30349c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x30349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3034a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3034A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3034A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3034A0u;
            // 0x3034a4: 0xe4609798  swc1        $f0, -0x6868($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294940568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3034A8u;
    // 0x3034a8: 0x0  nop
    ctx->pc = 0x3034a8u;
    // NOP
    // 0x3034ac: 0x0  nop
    ctx->pc = 0x3034acu;
    // NOP
    ctx->pc = 0x3034b0u;
}
