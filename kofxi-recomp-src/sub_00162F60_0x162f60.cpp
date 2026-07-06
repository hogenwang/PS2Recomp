#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162F60
// Address: 0x162f60 - 0x162fc0
void sub_00162F60_0x162f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162F60_0x162f60");
#endif

    ctx->pc = 0x162f60u;

    // 0x162f60: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x162f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x162f64: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x162f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x162f68: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x162f6c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x162f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x162f70: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x162f74: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x162f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x162f78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x162f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162f7c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x162f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x162f80: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x162f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x162f84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x162f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x162f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162f8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x162f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x162f90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x162f94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x162f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162f98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x162f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x162f9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x162f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x162fa0: 0x2442dbf8  addiu       $v0, $v0, -0x2408
    ctx->pc = 0x162fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958072));
    // 0x162fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162fa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x162fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x162fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162fb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x162FB0u;
    {
        const bool branch_taken_0x162fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162fb0) {
            ctx->pc = 0x162FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162FB0u;
            // 0x162fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162FB8u;
            goto label_162fb8;
        }
    }
    ctx->pc = 0x162FB8u;
label_162fb8:
    // 0x162fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x162FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162FC0u;
    ctx->pc = 0x162fc0u;
}
