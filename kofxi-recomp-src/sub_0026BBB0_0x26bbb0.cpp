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

// Function: sub_0026BBB0
// Address: 0x26bbb0 - 0x26bc08
void sub_0026BBB0_0x26bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BBB0_0x26bbb0");
#endif

    switch (ctx->pc) {
        case 0x26bbf8u: goto label_26bbf8;
        default: break;
    }

    ctx->pc = 0x26bbb0u;

    // 0x26bbb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bbb8: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x26bbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x26bbbc: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x26bbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x26bbc0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BBC0u;
    {
        const bool branch_taken_0x26bbc0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBC0u;
        // 0x26bbc4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbc0) {
            ctx->pc = 0x26BBD0u;
            goto label_26bbd0;
        }
    }
    ctx->pc = 0x26BBC8u;
    // 0x26bbc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26BBC8u;
    {
        const bool branch_taken_0x26bbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBC8u;
        // 0x26bbcc: 0x3c04ff00  lui         $a0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbc8) {
            ctx->pc = 0x26BBF0u;
            goto label_26bbf0;
        }
    }
    ctx->pc = 0x26BBD0u;
label_26bbd0:
    // 0x26bbd0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x26bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x26bbd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bbd8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BBD8u;
    {
        const bool branch_taken_0x26bbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26bbd8) {
            ctx->pc = 0x26BBE8u;
            goto label_26bbe8;
        }
    }
    ctx->pc = 0x26BBE0u;
    // 0x26bbe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26BBE0u;
    {
        const bool branch_taken_0x26bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBE0u;
        // 0x26bbe4: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbe0) {
            ctx->pc = 0x26BBF0u;
            goto label_26bbf0;
        }
    }
    ctx->pc = 0x26BBE8u;
label_26bbe8:
    // 0x26bbe8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x26bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x26bbec: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x26bbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_26bbf0:
    // 0x26bbf0: 0xc08a254  jal         func_228950
    ctx->pc = 0x26BBF0u;
    SET_GPR_U32(ctx, 31, 0x26BBF8u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x26BBF0u, 0x26BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBF8u;
label_26bbf8:
    // 0x26bbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x26BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBFCu;
        // 0x26bc00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BC04u;
    // 0x26bc04: 0x0  nop
    ctx->pc = 0x26bc04u;
    // NOP
    if (ctx->pc == 0x26bc04u) { ctx->pc = 0x26bc08u; }
}
