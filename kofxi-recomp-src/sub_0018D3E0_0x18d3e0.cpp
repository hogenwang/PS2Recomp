#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D3E0
// Address: 0x18d3e0 - 0x18d430
void sub_0018D3E0_0x18d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D3E0_0x18d3e0");
#endif

    ctx->pc = 0x18d3e0u;

    // 0x18d3e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d3e4: 0x9066db10  lbu         $a2, -0x24F0($v1)
    ctx->pc = 0x18d3e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x18d3e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d3ec: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x18d3ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x18d3f0: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18D3F0u;
    {
        const bool branch_taken_0x18d3f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d3f0) {
            ctx->pc = 0x18D424u;
            goto label_18d424;
        }
    }
    ctx->pc = 0x18D3F8u;
    // 0x18d3f8: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d3fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d400: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18d404: 0x2463db94  addiu       $v1, $v1, -0x246C
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957972));
    // 0x18d408: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18d40c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18d410: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d414: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d418: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18d41c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18d420: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18d420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18d424:
    // 0x18d424: 0x3e00008  jr          $ra
    ctx->pc = 0x18D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D42Cu;
    // 0x18d42c: 0x0  nop
    ctx->pc = 0x18d42cu;
    // NOP
    ctx->pc = 0x18d430u;
}
