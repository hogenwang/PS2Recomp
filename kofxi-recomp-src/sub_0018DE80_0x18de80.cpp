#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018DE80
// Address: 0x18de80 - 0x18ded0
void sub_0018DE80_0x18de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DE80_0x18de80");
#endif

    ctx->pc = 0x18de80u;

    // 0x18de80: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x18de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x18de84: 0x30430c00  andi        $v1, $v0, 0xC00
    ctx->pc = 0x18de84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x18de88: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18DE88u;
    {
        const bool branch_taken_0x18de88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de88) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DE90u;
    // 0x18de90: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x18de90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x18de94: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x18de98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18de9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18dea0: 0x2442dbbc  addiu       $v0, $v0, -0x2444
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958012));
    // 0x18dea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dea8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18deac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18deb0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18deb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18deb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18debc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18dec0: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_18dec4:
    // 0x18dec4: 0x3e00008  jr          $ra
    ctx->pc = 0x18DEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DECCu;
    // 0x18decc: 0x0  nop
    ctx->pc = 0x18deccu;
    // NOP
    ctx->pc = 0x18ded0u;
}
