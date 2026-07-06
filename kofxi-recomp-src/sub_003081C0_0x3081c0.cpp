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

// Function: sub_003081C0
// Address: 0x3081c0 - 0x308270
void sub_003081C0_0x3081c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003081C0_0x3081c0");
#endif

    switch (ctx->pc) {
        case 0x308210u: goto label_308210;
        default: break;
    }

    ctx->pc = 0x3081c0u;

    // 0x3081c0: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x3081c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3081c4: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3081c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3081c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3081C8u;
    {
        const bool branch_taken_0x3081c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081C8u;
        // 0x3081cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081c8) {
            ctx->pc = 0x3081ECu;
            goto label_3081ec;
        }
    }
    ctx->pc = 0x3081D0u;
    // 0x3081d0: 0x3c0a01d3  lui         $t2, 0x1D3
    ctx->pc = 0x3081d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)467 << 16));
    // 0x3081d4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3081d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3081d8: 0x254a4f40  addiu       $t2, $t2, 0x4F40
    ctx->pc = 0x3081d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20288));
    // 0x3081dc: 0xac6a47b0  sw          $t2, 0x47B0($v1)
    ctx->pc = 0x3081dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18352), GPR_U32(ctx, 10));
    // 0x3081e0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3081e4: 0xac6c4f48  sw          $t4, 0x4F48($v1)
    ctx->pc = 0x3081e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20296), GPR_U32(ctx, 12));
    // 0x3081e8: 0x258c003c  addiu       $t4, $t4, 0x3C
    ctx->pc = 0x3081e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 60));
label_3081ec:
    // 0x3081ec: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3081ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3081f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3081F0u;
    {
        const bool branch_taken_0x3081f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3081f0) {
            ctx->pc = 0x308258u;
            goto label_308258;
        }
    }
    ctx->pc = 0x3081F8u;
    // 0x3081f8: 0x3c0801d3  lui         $t0, 0x1D3
    ctx->pc = 0x3081f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)467 << 16));
    // 0x3081fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3081fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308200: 0x25084f40  addiu       $t0, $t0, 0x4F40
    ctx->pc = 0x308200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20288));
    // 0x308204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308208: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x308208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30820c: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x30820cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_308210:
    // 0x308210: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x308214: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x308214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x308218: 0x2d630020  sltiu       $v1, $t3, 0x20
    ctx->pc = 0x308218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x30821c: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x30821cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
    // 0x308220: 0xad0a0014  sw          $t2, 0x14($t0)
    ctx->pc = 0x308220u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 10));
    // 0x308224: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308224u;
    {
        const bool branch_taken_0x308224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308224u;
        // 0x308228: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308224) {
            ctx->pc = 0x308238u;
            goto label_308238;
        }
    }
    ctx->pc = 0x30822Cu;
    // 0x30822c: 0xb8050001  swr         $a1, 0x1($zero)
    ctx->pc = 0x30822cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x308230: 0xa8050004  swl         $a1, 0x4($zero)
    ctx->pc = 0x308230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x308234: 0x0  nop
    ctx->pc = 0x308234u;
    // NOP
label_308238:
    // 0x308238: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x308238u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x30823c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x30823cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x308240: 0xad4c0008  sw          $t4, 0x8($t2)
    ctx->pc = 0x308240u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 12));
    // 0x308244: 0x258c003c  addiu       $t4, $t4, 0x3C
    ctx->pc = 0x308244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 60));
    // 0x308248: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x308248u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30824c: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30824Cu;
    {
        const bool branch_taken_0x30824c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30824c) {
            ctx->pc = 0x308250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30824Cu;
            // 0x308250: 0x25290014  addiu       $t1, $t1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308210;
        }
    }
    ctx->pc = 0x308254u;
    // 0x308254: 0x0  nop
    ctx->pc = 0x308254u;
    // NOP
label_308258:
    // 0x308258: 0x25830004  addiu       $v1, $t4, 0x4
    ctx->pc = 0x308258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x30825c: 0x3e00008  jr          $ra
    ctx->pc = 0x30825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30825Cu;
        // 0x308260: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308264u;
    // 0x308264: 0x0  nop
    ctx->pc = 0x308264u;
    // NOP
    // 0x308268: 0x0  nop
    ctx->pc = 0x308268u;
    // NOP
    // 0x30826c: 0x0  nop
    ctx->pc = 0x30826cu;
    // NOP
}
