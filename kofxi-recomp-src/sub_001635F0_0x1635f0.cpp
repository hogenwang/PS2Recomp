#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001635F0
// Address: 0x1635f0 - 0x163630
void sub_001635F0_0x1635f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001635F0_0x1635f0");
#endif

    ctx->pc = 0x1635f0u;

    // 0x1635f0: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x1635f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1635f4: 0x23082  srl         $a2, $v0, 2
    ctx->pc = 0x1635f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1635f8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1635f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1635fc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1635fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x163600: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x163600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x163604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163608: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x163608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16360c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x163610: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x163614: 0x2463dbf8  addiu       $v1, $v1, -0x2408
    ctx->pc = 0x163614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958072));
    // 0x163618: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x163618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16361c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163624: 0x3e00008  jr          $ra
    ctx->pc = 0x163624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163624u;
            // 0x163628: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16362Cu;
    // 0x16362c: 0x0  nop
    ctx->pc = 0x16362cu;
    // NOP
    ctx->pc = 0x163630u;
}
