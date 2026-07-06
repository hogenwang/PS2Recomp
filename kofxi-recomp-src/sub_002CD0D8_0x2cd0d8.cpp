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

// Function: sub_002CD0D8
// Address: 0x2cd0d8 - 0x2cd378
void sub_002CD0D8_0x2cd0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD0D8_0x2cd0d8");
#endif

    switch (ctx->pc) {
        case 0x2cd108u: goto label_2cd108;
        case 0x2cd158u: goto label_2cd158;
        case 0x2cd190u: goto label_2cd190;
        case 0x2cd2f8u: goto label_2cd2f8;
        default: break;
    }

    ctx->pc = 0x2cd0d8u;

    // 0x2cd0d8: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x2cd0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cd0dc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2cd0dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0e0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cd0e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0e4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2cd0e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0e8: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2cd0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2cd0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CD0F0u;
    {
        const bool branch_taken_0x2cd0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0F0u;
        // 0x2cd0f4: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0f0) {
            ctx->pc = 0x2CD170u;
            goto label_2cd170;
        }
    }
    ctx->pc = 0x2CD0F8u;
    // 0x2cd0f8: 0x240d002b  addiu       $t5, $zero, 0x2B
    ctx->pc = 0x2cd0f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2cd0fc: 0x240e002d  addiu       $t6, $zero, 0x2D
    ctx->pc = 0x2cd0fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2cd100: 0x240f005a  addiu       $t7, $zero, 0x5A
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2cd104: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2cd104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_2cd108:
    // 0x2cd108: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2cd108u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd10c: 0x248200d0  addiu       $v0, $a0, 0xD0
    ctx->pc = 0x2cd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2cd110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cd110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cd114: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cd114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cd118: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD118u;
    {
        const bool branch_taken_0x2cd118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD118u;
        // 0x2cd11c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd118) {
            ctx->pc = 0x2CD140u;
            goto label_2cd140;
        }
    }
    ctx->pc = 0x2CD120u;
    // 0x2cd120: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2cd120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cd124: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cd124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cd128: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd12c: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2cd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2cd130: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cd130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cd134: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CD134u;
    {
        const bool branch_taken_0x2cd134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD134u;
        // 0x2cd138: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd134) {
            ctx->pc = 0x2CD160u;
            goto label_2cd160;
        }
    }
    ctx->pc = 0x2CD13Cu;
    // 0x2cd13c: 0x0  nop
    ctx->pc = 0x2cd13cu;
    // NOP
label_2cd140:
    // 0x2cd140: 0x504d000c  beql        $v0, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD140u;
    {
        const bool branch_taken_0x2cd140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x2cd140) {
            ctx->pc = 0x2CD144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD140u;
            // 0x2cd144: 0x12c2023  subu        $a0, $t1, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD174u;
            goto label_2cd174;
        }
    }
    ctx->pc = 0x2CD148u;
    // 0x2cd148: 0x504e000a  beql        $v0, $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD148u;
    {
        const bool branch_taken_0x2cd148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x2cd148) {
            ctx->pc = 0x2CD14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD148u;
            // 0x2cd14c: 0x12c2023  subu        $a0, $t1, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD174u;
            goto label_2cd174;
        }
    }
    ctx->pc = 0x2CD150u;
    // 0x2cd150: 0x104f0007  beq         $v0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD150u;
    {
        const bool branch_taken_0x2cd150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2CD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD150u;
        // 0x2cd154: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd150) {
            ctx->pc = 0x2CD170u;
            goto label_2cd170;
        }
    }
    ctx->pc = 0x2CD158u;
label_2cd158:
    // 0x2cd158: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD160u;
label_2cd160:
    // 0x2cd160: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2cd160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2cd164: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2cd164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2cd168: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2CD168u;
    {
        const bool branch_taken_0x2cd168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD168u;
        // 0x2cd16c: 0x1691821  addu        $v1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd168) {
            ctx->pc = 0x2CD108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd108;
        }
    }
    ctx->pc = 0x2CD170u;
label_2cd170:
    // 0x2cd170: 0x12c2023  subu        $a0, $t1, $t4
    ctx->pc = 0x2cd170u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_2cd174:
    // 0x2cd174: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2cd174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2cd178: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CD178u;
    {
        const bool branch_taken_0x2cd178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD178u;
        // 0x2cd17c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd178) {
            ctx->pc = 0x2CD158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd158;
        }
    }
    ctx->pc = 0x2CD180u;
    // 0x2cd180: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2cd180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cd184: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD184u;
    {
        const bool branch_taken_0x2cd184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD184u;
        // 0x2cd188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd184) {
            ctx->pc = 0x2CD1B0u;
            goto label_2cd1b0;
        }
    }
    ctx->pc = 0x2CD18Cu;
    // 0x2cd18c: 0x0  nop
    ctx->pc = 0x2cd18cu;
    // NOP
label_2cd190:
    // 0x2cd190: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2cd190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cd194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cd194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cd198: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cd198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd19c: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x2cd19cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cd1a0: 0x0  nop
    ctx->pc = 0x2cd1a0u;
    // NOP
    // 0x2cd1a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CD1A4u;
    {
        const bool branch_taken_0x2cd1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1A4u;
        // 0x2cd1a8: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1a4) {
            ctx->pc = 0x2CD190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd190;
        }
    }
    ctx->pc = 0x2CD1ACu;
    // 0x2cd1ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cd1b0:
    // 0x2cd1b0: 0x11020025  beq         $t0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CD1B0u;
    {
        const bool branch_taken_0x2cd1b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1B0u;
        // 0x2cd1b4: 0xace90000  sw          $t1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1b0) {
            ctx->pc = 0x2CD248u;
            goto label_2cd248;
        }
    }
    ctx->pc = 0x2CD1B8u;
    // 0x2cd1b8: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x2cd1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cd1bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD1BCu;
    {
        const bool branch_taken_0x2cd1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1BCu;
        // 0x2cd1c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1bc) {
            ctx->pc = 0x2CD1D8u;
            goto label_2cd1d8;
        }
    }
    ctx->pc = 0x2CD1C4u;
    // 0x2cd1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd1c8: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD1C8u;
    {
        const bool branch_taken_0x2cd1c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cd1c8) {
            ctx->pc = 0x2CD1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD1C8u;
            // 0x2cd1cc: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1E8u;
            goto label_2cd1e8;
        }
    }
    ctx->pc = 0x2CD1D0u;
    // 0x2cd1d0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2CD1D0u;
    {
        const bool branch_taken_0x2cd1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1D0u;
        // 0x2cd1d4: 0x24180804  addiu       $t8, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1d0) {
            ctx->pc = 0x2CD2A4u;
            goto label_2cd2a4;
        }
    }
    ctx->pc = 0x2CD1D8u;
label_2cd1d8:
    // 0x2cd1d8: 0x51020032  beql        $t0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CD1D8u;
    {
        const bool branch_taken_0x2cd1d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cd1d8) {
            ctx->pc = 0x2CD1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD1D8u;
            // 0x2cd1dc: 0xad45000c  sw          $a1, 0xC($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD2A4u;
            goto label_2cd2a4;
        }
    }
    ctx->pc = 0x2CD1E0u;
    // 0x2cd1e0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2CD1E0u;
    {
        const bool branch_taken_0x2cd1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1E0u;
        // 0x2cd1e4: 0x24180804  addiu       $t8, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1e0) {
            ctx->pc = 0x2CD2A4u;
            goto label_2cd2a4;
        }
    }
    ctx->pc = 0x2CD1E8u;
label_2cd1e8:
    // 0x2cd1e8: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x2cd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x2cd1ec: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x2cd1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
    // 0x2cd1f0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2cd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd1f4: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2cd1f4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2cd1f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CD1F8u;
    {
        const bool branch_taken_0x2cd1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1f8) {
            ctx->pc = 0x2CD1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD1F8u;
            // 0x2cd1fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD200u;
            goto label_2cd200;
        }
    }
    ctx->pc = 0x2CD200u;
label_2cd200:
    // 0x2cd200: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2cd200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd204: 0x2810  mfhi        $a1
    ctx->pc = 0x2cd204u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cd208: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x2cd208u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2cd20c: 0x1012  mflo        $v0
    ctx->pc = 0x2cd20cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cd210: 0x2010  mfhi        $a0
    ctx->pc = 0x2cd210u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cd214: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cd214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd218: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2cd218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2cd21c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2cd21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2cd220: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2cd220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2cd224: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2cd224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2cd228: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2cd228u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2cd22c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2cd22cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2cd230: 0x1812  mflo        $v1
    ctx->pc = 0x2cd230u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2cd234: 0x1010  mfhi        $v0
    ctx->pc = 0x2cd234u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cd238: 0xa5430008  sh          $v1, 0x8($t2)
    ctx->pc = 0x2cd238u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cd23c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2CD23Cu;
    {
        const bool branch_taken_0x2cd23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD23Cu;
        // 0x2cd240: 0xa542000a  sh          $v0, 0xA($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd23c) {
            ctx->pc = 0x2CD2A4u;
            goto label_2cd2a4;
        }
    }
    ctx->pc = 0x2CD244u;
    // 0x2cd244: 0x0  nop
    ctx->pc = 0x2cd244u;
    // NOP
label_2cd248:
    // 0x2cd248: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2cd248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2cd24c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2cd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd250: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x2cd250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
    // 0x2cd254: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2cd254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd258: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2cd258u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2cd25c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CD25Cu;
    {
        const bool branch_taken_0x2cd25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd25c) {
            ctx->pc = 0x2CD260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD25Cu;
            // 0x2cd260: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD264u;
            goto label_2cd264;
        }
    }
    ctx->pc = 0x2CD264u;
label_2cd264:
    // 0x2cd264: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2cd264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd268: 0x2810  mfhi        $a1
    ctx->pc = 0x2cd268u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cd26c: 0xa30019  multu       $a1, $v1
    ctx->pc = 0x2cd26cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2cd270: 0x2012  mflo        $a0
    ctx->pc = 0x2cd270u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2cd274: 0x1010  mfhi        $v0
    ctx->pc = 0x2cd274u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cd278: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2cd278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2cd27c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cd27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd280: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2cd280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2cd284: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2cd284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2cd288: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2cd288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd28c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2cd28cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2cd290: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2cd290u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2cd294: 0x1812  mflo        $v1
    ctx->pc = 0x2cd294u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2cd298: 0x2010  mfhi        $a0
    ctx->pc = 0x2cd298u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cd29c: 0xa543000a  sh          $v1, 0xA($t2)
    ctx->pc = 0x2cd29cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cd2a0: 0xad44000c  sw          $a0, 0xC($t2)
    ctx->pc = 0x2cd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 4));
label_2cd2a4:
    // 0x2cd2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2A4u;
        // 0x2cd2a8: 0x300102d  daddu       $v0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD2ACu;
    // 0x2cd2ac: 0x0  nop
    ctx->pc = 0x2cd2acu;
    // NOP
    // 0x2cd2b0: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x2cd2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x2cd2b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CD2B4u;
    {
        const bool branch_taken_0x2cd2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2B4u;
        // 0x2cd2b8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2b4) {
            ctx->pc = 0x2CD2F0u;
            goto label_2cd2f0;
        }
    }
    ctx->pc = 0x2CD2BCu;
    // 0x2cd2bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2cd2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cd2c0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2cd2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cd2c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD2C4u;
    {
        const bool branch_taken_0x2cd2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2c4) {
            ctx->pc = 0x2CD2F0u;
            goto label_2cd2f0;
        }
    }
    ctx->pc = 0x2CD2CCu;
    // 0x2cd2cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd2d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cd2d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd2d8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2cd2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cd2dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD2DCu;
    {
        const bool branch_taken_0x2cd2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2DCu;
        // 0x2cd2e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2dc) {
            ctx->pc = 0x2CD2F0u;
            goto label_2cd2f0;
        }
    }
    ctx->pc = 0x2CD2E4u;
    // 0x2cd2e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CD2E4u;
    {
        const bool branch_taken_0x2cd2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2E4u;
        // 0x2cd2e8: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2e4) {
            ctx->pc = 0x2CD314u;
            goto label_2cd314;
        }
    }
    ctx->pc = 0x2CD2ECu;
    // 0x2cd2ec: 0x0  nop
    ctx->pc = 0x2cd2ecu;
    // NOP
label_2cd2f0:
    // 0x2cd2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2F0u;
        // 0x2cd2f4: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD2F8u;
label_2cd2f8:
    // 0x2cd2f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2cd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cd2fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2cd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cd300: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cd300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cd304: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2cd304u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd308: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2cd308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cd30c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cd30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cd310: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2cd310u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2cd314:
    // 0x2cd314: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2cd314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd318: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x2cd318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cd31c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CD31Cu;
    {
        const bool branch_taken_0x2cd31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd31c) {
            ctx->pc = 0x2CD320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD31Cu;
            // 0x2cd320: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd2f8;
        }
    }
    ctx->pc = 0x2CD324u;
    // 0x2cd324: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2cd324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cd328: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD328u;
    {
        const bool branch_taken_0x2cd328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD328u;
        // 0x2cd32c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd328) {
            ctx->pc = 0x2CD344u;
            goto label_2cd344;
        }
    }
    ctx->pc = 0x2CD330u;
    // 0x2cd330: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2cd330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cd334: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2cd334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2cd338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cd338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd33c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2cd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2cd340: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2cd340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2cd344:
    // 0x2cd344: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cd344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cd348: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2cd348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2cd34c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD34Cu;
    {
        const bool branch_taken_0x2cd34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD34Cu;
        // 0x2cd350: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd34c) {
            ctx->pc = 0x2CD360u;
            goto label_2cd360;
        }
    }
    ctx->pc = 0x2CD354u;
    // 0x2cd354: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2cd354u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cd358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD358u;
    {
        const bool branch_taken_0x2cd358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD358u;
        // 0x2cd35c: 0x621004  sllv        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd358) {
            ctx->pc = 0x2CD368u;
            goto label_2cd368;
        }
    }
    ctx->pc = 0x2CD360u;
label_2cd360:
    // 0x2cd360: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2cd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cd364: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2cd364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2cd368:
    // 0x2cd368: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2cd368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2cd36c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD36Cu;
        // 0x2cd370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD374u;
    // 0x2cd374: 0x0  nop
    ctx->pc = 0x2cd374u;
    // NOP
    if (ctx->pc == 0x2cd374u) { ctx->pc = 0x2cd378u; }
}
