#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001786F0
// Address: 0x1786f0 - 0x178720
void sub_001786F0_0x1786f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001786F0_0x1786f0");
#endif

    ctx->pc = 0x1786f0u;

    // 0x1786f0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1786f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1786f4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1786f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1786f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1786F8u;
    {
        const bool branch_taken_0x1786f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1786f8) {
            ctx->pc = 0x178710u;
            goto label_178710;
        }
    }
    ctx->pc = 0x178700u;
    // 0x178700: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178704: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x178704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x178708: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x178708u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x17870c: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x17870cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_178710:
    // 0x178710: 0x3e00008  jr          $ra
    ctx->pc = 0x178710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178718u;
    // 0x178718: 0x0  nop
    ctx->pc = 0x178718u;
    // NOP
    // 0x17871c: 0x0  nop
    ctx->pc = 0x17871cu;
    // NOP
    ctx->pc = 0x178720u;
}
