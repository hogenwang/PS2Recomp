#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5C20
// Address: 0x1c5c20 - 0x1c5ca8
void sub_001C5C20_0x1c5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5C20_0x1c5c20");
#endif

    switch (ctx->pc) {
        case 0x1c5c70u: goto label_1c5c70;
        case 0x1c5c88u: goto label_1c5c88;
        case 0x1c5c98u: goto label_1c5c98;
        default: break;
    }

    ctx->pc = 0x1c5c20u;

    // 0x1c5c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5c24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c5c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c28: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5C28u;
    {
        const bool branch_taken_0x1c5c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C28u;
            // 0x1c5c2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c28) {
            ctx->pc = 0x1C5C70u;
            goto label_1c5c70;
        }
    }
    ctx->pc = 0x1C5C30u;
    // 0x1c5c30: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c5c34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c5c38: 0x2447a5d0  addiu       $a3, $v0, -0x5A30
    ctx->pc = 0x1c5c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944208));
    // 0x1c5c3c: 0x2466f070  addiu       $a2, $v1, -0xF90
    ctx->pc = 0x1c5c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963312));
    // 0x1c5c40: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1c5c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1c5c44: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1c5c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1c5c48: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x1c5c48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1c5c4c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1c5c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c5c50: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1c5c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c5c54: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x1c5c54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c5c58: 0x80e40005  lb          $a0, 0x5($a3)
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x1c5c5c: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x1c5c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C64u;
            // 0x1c5c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5C6Cu;
    // 0x1c5c6c: 0x0  nop
    ctx->pc = 0x1c5c6cu;
    // NOP
label_1c5c70:
    // 0x1c5c70: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c5c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c78: 0x2484f070  addiu       $a0, $a0, -0xF90
    ctx->pc = 0x1c5c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963312));
    // 0x1c5c7c: 0x804a7dc  j           func_129F70
    ctx->pc = 0x1C5C7Cu;
    ctx->pc = 0x1C5C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C7Cu;
            // 0x1c5c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129F70_0x129f70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5C84u;
    // 0x1c5c84: 0x0  nop
    ctx->pc = 0x1c5c84u;
    // NOP
label_1c5c88:
    // 0x1c5c88: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C8Cu;
            // 0x1c5c90: 0x2442f070  addiu       $v0, $v0, -0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5C94u;
    // 0x1c5c94: 0x0  nop
    ctx->pc = 0x1c5c94u;
    // NOP
label_1c5c98:
    // 0x1c5c98: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c5c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C9Cu;
            // 0x1c5ca0: 0x8c62ef60  lw          $v0, -0x10A0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963040)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5CA4u;
    // 0x1c5ca4: 0x0  nop
    ctx->pc = 0x1c5ca4u;
    // NOP
    ctx->pc = 0x1c5ca8u;
}
