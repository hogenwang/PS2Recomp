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

// Function: sub_0031F610
// Address: 0x31f610 - 0x31f660
void sub_0031F610_0x31f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F610_0x31f610");
#endif

    ctx->pc = 0x31f610u;

    // 0x31f610: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x31f610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x31f614: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x31f614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x31f618: 0x9447f104  lhu         $a3, -0xEFC($v0)
    ctx->pc = 0x31f618u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963460)));
    // 0x31f61c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31f620: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x31f620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31f624: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x31f624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x31f628: 0x24e7fec0  addiu       $a3, $a3, -0x140
    ctx->pc = 0x31f628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966976));
    // 0x31f62c: 0x9446f102  lhu         $a2, -0xEFE($v0)
    ctx->pc = 0x31f62cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963458)));
    // 0x31f630: 0xa467db20  sh          $a3, -0x24E0($v1)
    ctx->pc = 0x31f630u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957856), (uint16_t)GPR_U32(ctx, 7));
    // 0x31f634: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31f634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31f638: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f63c: 0xa460db28  sh          $zero, -0x24D8($v1)
    ctx->pc = 0x31f63cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957864), (uint16_t)GPR_U32(ctx, 0));
    // 0x31f640: 0xac45db24  sw          $a1, -0x24DC($v0)
    ctx->pc = 0x31f640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957860), GPR_U32(ctx, 5));
    // 0x31f644: 0x24c2fe20  addiu       $v0, $a2, -0x1E0
    ctx->pc = 0x31f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966816));
    // 0x31f648: 0xa482db22  sh          $v0, -0x24DE($a0)
    ctx->pc = 0x31f648u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957858), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f64c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f650: 0x80c7d30  j           func_31F4C0
    ctx->pc = 0x31F650u;
    ctx->pc = 0x31F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F650u;
    // 0x31f654: 0xa440db2a  sh          $zero, -0x24D6($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957866), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F4C0u;
    sub_0031F4C0_0x31f4c0(rdram, ctx, runtime); return;
    ctx->pc = 0x31F658u;
    // 0x31f658: 0x0  nop
    ctx->pc = 0x31f658u;
    // NOP
    // 0x31f65c: 0x0  nop
    ctx->pc = 0x31f65cu;
    // NOP
}
