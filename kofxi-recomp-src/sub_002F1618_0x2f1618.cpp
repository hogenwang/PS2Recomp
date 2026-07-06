#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1618
// Address: 0x2f1618 - 0x2f1640
void sub_002F1618_0x2f1618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1618_0x2f1618");
#endif

    ctx->pc = 0x2f1618u;

    // 0x2f1618: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1618u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f161c: 0x25eef052  addiu       $t6, $t7, -0xFAE
    ctx->pc = 0x2f161cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963282));
    // 0x2f1620: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x2f1620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2f1624: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x2f1624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2f1628: 0x808c0008  lb          $t4, 0x8($a0)
    ctx->pc = 0x2f1628u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f162c: 0xb1cb0007  sdl         $t3, 0x7($t6)
    ctx->pc = 0x2f162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f1630: 0xb5cb0000  sdr         $t3, 0x0($t6)
    ctx->pc = 0x2f1630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f1634: 0xa1cc0008  sb          $t4, 0x8($t6)
    ctx->pc = 0x2f1634u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 8), (uint8_t)GPR_U32(ctx, 12));
    // 0x2f1638: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F163Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1638u;
            // 0x2f163c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1640u;
    ctx->pc = 0x2f1640u;
}
