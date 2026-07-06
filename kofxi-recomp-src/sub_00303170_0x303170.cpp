#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303170
// Address: 0x303170 - 0x303260
void sub_00303170_0x303170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303170_0x303170");
#endif

    switch (ctx->pc) {
        case 0x30319cu: goto label_30319c;
        case 0x3031a8u: goto label_3031a8;
        case 0x3031c8u: goto label_3031c8;
        case 0x3031f0u: goto label_3031f0;
        case 0x303218u: goto label_303218;
        default: break;
    }

    ctx->pc = 0x303170u;

    // 0x303170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x303170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x303174: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x303174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x303178: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x303178u;
    {
        const bool branch_taken_0x303178 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303178u;
            // 0x30317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303178) {
            ctx->pc = 0x303258u;
            goto label_303258;
        }
    }
    ctx->pc = 0x303180u;
    // 0x303180: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x303180u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303184: 0x27aa0000  addiu       $t2, $sp, 0x0
    ctx->pc = 0x303184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x303188: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x303188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30318c: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x30318cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x303190: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x303190u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x303194: 0x865821  addu        $t3, $a0, $a2
    ctx->pc = 0x303194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x303198: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x303198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30319c:
    // 0x30319c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x30319Cu;
    {
        const bool branch_taken_0x30319c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3031A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30319Cu;
            // 0x3031a0: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30319c) {
            ctx->pc = 0x303248u;
            goto label_303248;
        }
    }
    ctx->pc = 0x3031A4u;
    // 0x3031a4: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x3031a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3031a8:
    // 0x3031a8: 0x8d86fff4  lw          $a2, -0xC($t4)
    ctx->pc = 0x3031a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967284)));
    // 0x3031ac: 0x8d840038  lw          $a0, 0x38($t4)
    ctx->pc = 0x3031acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x3031b0: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x3031b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3031b4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3031B4u;
    {
        const bool branch_taken_0x3031b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3031b4) {
            ctx->pc = 0x303238u;
            goto label_303238;
        }
    }
    ctx->pc = 0x3031BCu;
    // 0x3031bc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3031bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031c0: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x3031c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031c4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x3031c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3031c8:
    // 0x3031c8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3031c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3031cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3031ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3031d0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3031d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3031d4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3031d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3031d8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3031d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3031dc: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3031DCu;
    {
        const bool branch_taken_0x3031dc = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x3031dc) {
            ctx->pc = 0x3031C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3031c8;
        }
    }
    ctx->pc = 0x3031E4u;
    // 0x3031e4: 0x2588ffbc  addiu       $t0, $t4, -0x44
    ctx->pc = 0x3031e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967228));
    // 0x3031e8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3031e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031ec: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x3031ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3031f0:
    // 0x3031f0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3031f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3031f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3031f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3031f8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3031f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3031fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3031fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x303200: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x303200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x303204: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303204u;
    {
        const bool branch_taken_0x303204 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x303204) {
            ctx->pc = 0x3031F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3031f0;
        }
    }
    ctx->pc = 0x30320Cu;
    // 0x30320c: 0x2587ffbc  addiu       $a3, $t4, -0x44
    ctx->pc = 0x30320cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967228));
    // 0x303210: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x303210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303214: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x303214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_303218:
    // 0x303218: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x303218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30321c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30321cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x303220: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x303220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x303224: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x303224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x303228: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x303228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x30322c: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30322Cu;
    {
        const bool branch_taken_0x30322c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x30322c) {
            ctx->pc = 0x303218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303218;
        }
    }
    ctx->pc = 0x303234u;
    // 0x303234: 0x0  nop
    ctx->pc = 0x303234u;
    // NOP
label_303238:
    // 0x303238: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x303238u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30323c: 0xad082a  slt         $at, $a1, $t5
    ctx->pc = 0x30323cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x303240: 0x1420ffd9  bnez        $at, . + 4 + (-0x27 << 2)
    ctx->pc = 0x303240u;
    {
        const bool branch_taken_0x303240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x303244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303240u;
            // 0x303244: 0x258cffbc  addiu       $t4, $t4, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303240) {
            ctx->pc = 0x3031A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3031a8;
        }
    }
    ctx->pc = 0x303248u;
label_303248:
    // 0x303248: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x303248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30324c: 0xa3202a  slt         $a0, $a1, $v1
    ctx->pc = 0x30324cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303250: 0x5480ffd2  bnel        $a0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x303250u;
    {
        const bool branch_taken_0x303250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x303250) {
            ctx->pc = 0x303254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303250u;
            // 0x303254: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30319Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30319c;
        }
    }
    ctx->pc = 0x303258u;
label_303258:
    // 0x303258: 0x3e00008  jr          $ra
    ctx->pc = 0x303258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30325Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303258u;
            // 0x30325c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303260u;
    ctx->pc = 0x303260u;
}
