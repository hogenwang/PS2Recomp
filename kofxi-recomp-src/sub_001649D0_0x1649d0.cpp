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

// Function: sub_001649D0
// Address: 0x1649d0 - 0x164a20
void sub_001649D0_0x1649d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001649D0_0x1649d0");
#endif

    ctx->pc = 0x1649d0u;

    // 0x1649d0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1649d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1649d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1649d8: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x1649d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
    // 0x1649dc: 0x8c4500dc  lw          $a1, 0xDC($v0)
    ctx->pc = 0x1649dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1649e0: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x1649e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1649e4: 0x904205e4  lbu         $v0, 0x5E4($v0)
    ctx->pc = 0x1649e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1508)));
    // 0x1649e8: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1649ec: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1649ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1649f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1649f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1649f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1649f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1649f8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1649fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1649fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164a00: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x164a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164a04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x164a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a0c: 0x8055728  j           func_155CA0
    ctx->pc = 0x164A0Cu;
    ctx->pc = 0x164A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A0Cu;
    // 0x164a10: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    sub_00155CA0_0x155ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x164A14u;
    // 0x164a14: 0x0  nop
    ctx->pc = 0x164a14u;
    // NOP
    // 0x164a18: 0x0  nop
    ctx->pc = 0x164a18u;
    // NOP
    // 0x164a1c: 0x0  nop
    ctx->pc = 0x164a1cu;
    // NOP
}
