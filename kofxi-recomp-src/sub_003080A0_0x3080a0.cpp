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

// Function: sub_003080A0
// Address: 0x3080a0 - 0x3081c0
void sub_003080A0_0x3080a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003080A0_0x3080a0");
#endif

    switch (ctx->pc) {
        case 0x3080b0u: goto label_3080b0;
        case 0x30813cu: goto label_30813c;
        default: break;
    }

    ctx->pc = 0x3080a0u;

    // 0x3080a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3080a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3080a4: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x3080a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3080a8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3080A8u;
    {
        const bool branch_taken_0x3080a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080A8u;
        // 0x3080ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080a8) {
            ctx->pc = 0x3080D0u;
            goto label_3080d0;
        }
    }
    ctx->pc = 0x3080B0u;
label_3080b0:
    // 0x3080b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3080b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3080b4: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x3080b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3080b8: 0x0  nop
    ctx->pc = 0x3080b8u;
    // NOP
    // 0x3080bc: 0x0  nop
    ctx->pc = 0x3080bcu;
    // NOP
    // 0x3080c0: 0x0  nop
    ctx->pc = 0x3080c0u;
    // NOP
    // 0x3080c4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3080C4u;
    {
        const bool branch_taken_0x3080c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3080c4) {
            ctx->pc = 0x3080B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3080b0;
        }
    }
    ctx->pc = 0x3080CCu;
    // 0x3080cc: 0x0  nop
    ctx->pc = 0x3080ccu;
    // NOP
label_3080d0:
    // 0x3080d0: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3080d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3080d4: 0x50e00013  beql        $a3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3080D4u;
    {
        const bool branch_taken_0x3080d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3080d4) {
            ctx->pc = 0x3080D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3080D4u;
            // 0x3080d8: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308124u;
            goto label_308124;
        }
    }
    ctx->pc = 0x3080DCu;
    // 0x3080dc: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3080dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3080e0: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x3080e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x3080e4: 0x246351c0  addiu       $v1, $v1, 0x51C0
    ctx->pc = 0x3080e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20928));
    // 0x3080e8: 0xace347ac  sw          $v1, 0x47AC($a3)
    ctx->pc = 0x3080e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18348), GPR_U32(ctx, 3));
    // 0x3080ec: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x3080ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x3080f0: 0xace651c8  sw          $a2, 0x51C8($a3)
    ctx->pc = 0x3080f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20936), GPR_U32(ctx, 6));
    // 0x3080f4: 0x8cc8002c  lw          $t0, 0x2C($a2)
    ctx->pc = 0x3080f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x3080f8: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x3080f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x3080fc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3080fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x308100: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x308100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
    // 0x308104: 0x8ce751c8  lw          $a3, 0x51C8($a3)
    ctx->pc = 0x308104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20936)));
    // 0x308108: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x30810c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x308110: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x308110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x308114: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x308114u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x308118: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x308118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x30811c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x30811cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308120: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x308120u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_308124:
    // 0x308124: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x308124u;
    {
        const bool branch_taken_0x308124 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x308124) {
            ctx->pc = 0x308190u;
            goto label_308190;
        }
    }
    ctx->pc = 0x30812Cu;
    // 0x30812c: 0x3c0a01d3  lui         $t2, 0x1D3
    ctx->pc = 0x30812cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)467 << 16));
    // 0x308130: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x308130u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308134: 0x254a51c0  addiu       $t2, $t2, 0x51C0
    ctx->pc = 0x308134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20928));
    // 0x308138: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x308138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_30813c:
    // 0x30813c: 0x256b0014  addiu       $t3, $t3, 0x14
    ctx->pc = 0x30813cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x308140: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x308140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x308144: 0x12b3821  addu        $a3, $t1, $t3
    ctx->pc = 0x308144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x308148: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x308148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x30814c: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x30814cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x308150: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x308150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308154: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308158: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x308158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x30815c: 0x8cc7002c  lw          $a3, 0x2C($a2)
    ctx->pc = 0x30815cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x308160: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x308160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308164: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x308164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x308168: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x308168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30816c: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x30816cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x308170: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x308170u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x308174: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x308174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x308178: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x308178u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x30817c: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x30817cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x308180: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308184: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x308184u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308188: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x308188u;
    {
        const bool branch_taken_0x308188 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x30818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308188u;
        // 0x30818c: 0x254a0014  addiu       $t2, $t2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308188) {
            ctx->pc = 0x30813Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30813c;
        }
    }
    ctx->pc = 0x308190u;
label_308190:
    // 0x308190: 0x2ca30064  sltiu       $v1, $a1, 0x64
    ctx->pc = 0x308190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x308194: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x308194u;
    {
        const bool branch_taken_0x308194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308194) {
            ctx->pc = 0x308198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308194u;
            // 0x308198: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3081ACu;
            goto label_3081ac;
        }
    }
    ctx->pc = 0x30819Cu;
    // 0x30819c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3081a0: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x3081a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3081a4: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x3081a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3081a8: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x3081a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3081ac:
    // 0x3081ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3081ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3081B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081ACu;
        // 0x3081b0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3081ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3081B4u;
    // 0x3081b4: 0x0  nop
    ctx->pc = 0x3081b4u;
    // NOP
    // 0x3081b8: 0x0  nop
    ctx->pc = 0x3081b8u;
    // NOP
    // 0x3081bc: 0x0  nop
    ctx->pc = 0x3081bcu;
    // NOP
    if (ctx->pc == 0x3081bcu) { ctx->pc = 0x3081c0u; }
}
