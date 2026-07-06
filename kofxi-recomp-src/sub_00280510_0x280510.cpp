#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280510
// Address: 0x280510 - 0x2805a8
void sub_00280510_0x280510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280510_0x280510");
#endif

    switch (ctx->pc) {
        case 0x280534u: goto label_280534;
        case 0x28053cu: goto label_28053c;
        case 0x28055cu: goto label_28055c;
        case 0x280578u: goto label_280578;
        default: break;
    }

    ctx->pc = 0x280510u;

    // 0x280510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280514: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280514u;
    {
        const bool branch_taken_0x280514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280514u;
            // 0x280518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280514) {
            ctx->pc = 0x280534u;
            goto label_280534;
        }
    }
    ctx->pc = 0x28051Cu;
    // 0x28051c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x28051cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x280520: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x280520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x280524: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280524u;
    {
        const bool branch_taken_0x280524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x280528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280524u;
            // 0x280528: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280524) {
            ctx->pc = 0x28053Cu;
            goto label_28053c;
        }
    }
    ctx->pc = 0x28052Cu;
    // 0x28052c: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28052Cu;
    {
        const bool branch_taken_0x28052c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28052c) {
            ctx->pc = 0x280530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28052Cu;
            // 0x280530: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280544u;
            goto label_280544;
        }
    }
    ctx->pc = 0x280534u;
label_280534:
    // 0x280534: 0x3e00008  jr          $ra
    ctx->pc = 0x280534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280534u;
            // 0x280538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28053Cu;
label_28053c:
    // 0x28053c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28053cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_280544:
    // 0x280544: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x280544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x280548: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x280548u;
    {
        const bool branch_taken_0x280548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280548) {
            ctx->pc = 0x28054Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280548u;
            // 0x28054c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28055Cu;
            goto label_28055c;
        }
    }
    ctx->pc = 0x280550u;
    // 0x280550: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280554: 0x3e00008  jr          $ra
    ctx->pc = 0x280554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280554u;
            // 0x280558: 0x2103e  dsrl32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28055Cu;
label_28055c:
    // 0x28055c: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28055Cu;
    {
        const bool branch_taken_0x28055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28055c) {
            ctx->pc = 0x280534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280534;
        }
    }
    ctx->pc = 0x280564u;
    // 0x280564: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x280564u;
    {
        const bool branch_taken_0x280564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280564u;
            // 0x280568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280564) {
            ctx->pc = 0x280598u;
            goto label_280598;
        }
    }
    ctx->pc = 0x28056Cu;
    // 0x28056c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28056cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280570: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x280570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280574: 0x0  nop
    ctx->pc = 0x280574u;
    // NOP
label_280578:
    // 0x280578: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x280578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28057c: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x28057cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x280580: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x280580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280584: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x280584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280588: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x280588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28058c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x28058cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x280590: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x280590u;
    {
        const bool branch_taken_0x280590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280590) {
            ctx->pc = 0x280578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280578;
        }
    }
    ctx->pc = 0x280598u;
label_280598:
    // 0x280598: 0x6102f  dsubu       $v0, $zero, $a2
    ctx->pc = 0x280598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x28059c: 0x3e00008  jr          $ra
    ctx->pc = 0x28059Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2805A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28059Cu;
            // 0x2805a0: 0xc8100a  movz        $v0, $a2, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2805A4u;
    // 0x2805a4: 0x0  nop
    ctx->pc = 0x2805a4u;
    // NOP
    ctx->pc = 0x2805a8u;
}
