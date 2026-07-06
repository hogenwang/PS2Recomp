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

// Function: sub_0012E458
// Address: 0x12e458 - 0x12e548
void sub_0012E458_0x12e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E458_0x12e458");
#endif

    switch (ctx->pc) {
        case 0x12e474u: goto label_12e474;
        case 0x12e47cu: goto label_12e47c;
        case 0x12e4b4u: goto label_12e4b4;
        case 0x12e4c0u: goto label_12e4c0;
        case 0x12e4e4u: goto label_12e4e4;
        case 0x12e518u: goto label_12e518;
        default: break;
    }

    ctx->pc = 0x12e458u;

    // 0x12e458: 0x80ad0000  lb          $t5, 0x0($a1)
    ctx->pc = 0x12e458u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e45c: 0x240f005e  addiu       $t7, $zero, 0x5E
    ctx->pc = 0x12e45cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12e460: 0x15af0036  bne         $t5, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x12E460u;
    {
        const bool branch_taken_0x12e460 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x12E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E460u;
        // 0x12e464: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e460) {
            ctx->pc = 0x12E53Cu;
            goto label_12e53c;
        }
    }
    ctx->pc = 0x12E468u;
    // 0x12e468: 0x80ad0000  lb          $t5, 0x0($a1)
    ctx->pc = 0x12e468u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e46c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12e46cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e470: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12e470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12e474:
    // 0x12e474: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12e474u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e478: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x12e478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_12e47c:
    // 0x12e47c: 0xa1eb0000  sb          $t3, 0x0($t7)
    ctx->pc = 0x12e47cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x12e480: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12e484: 0x29cf0100  slti        $t7, $t6, 0x100
    ctx->pc = 0x12e484u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12e488: 0x0  nop
    ctx->pc = 0x12e488u;
    // NOP
    // 0x12e48c: 0x0  nop
    ctx->pc = 0x12e48cu;
    // NOP
    // 0x12e490: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E490u;
        // 0x12e494: 0x8e7821  addu        $t7, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E47Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e47c;
        }
    }
    ctx->pc = 0x12E498u;
    // 0x12e498: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x12E498u;
    {
        const bool branch_taken_0x12e498 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E498u;
        // 0x12e49c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e498) {
            ctx->pc = 0x12E4E4u;
            goto label_12e4e4;
        }
    }
    ctx->pc = 0x12E4A0u;
    // 0x12e4a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e4a4: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x12e4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12e4a8: 0x1eb5823  subu        $t3, $t7, $t3
    ctx->pc = 0x12e4a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x12e4ac: 0x2408005d  addiu       $t0, $zero, 0x5D
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12e4b0: 0x240a005d  addiu       $t2, $zero, 0x5D
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_12e4b4:
    // 0x12e4b4: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x12e4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x12e4b8: 0xa1eb0000  sb          $t3, 0x0($t7)
    ctx->pc = 0x12e4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x12e4bc: 0x80ac0000  lb          $t4, 0x0($a1)
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12e4c0:
    // 0x12e4c0: 0x1189000e  beq         $t4, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x12E4C0u;
    {
        const bool branch_taken_0x12e4c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 9));
        ctx->pc = 0x12E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4C0u;
        // 0x12e4c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4c0) {
            ctx->pc = 0x12E4FCu;
            goto label_12e4fc;
        }
    }
    ctx->pc = 0x12E4C8u;
    // 0x12e4c8: 0x298f002e  slti        $t7, $t4, 0x2E
    ctx->pc = 0x12e4c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x12e4cc: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E4CCu;
    {
        const bool branch_taken_0x12e4cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e4cc) {
            ctx->pc = 0x12E4ECu;
            goto label_12e4ec;
        }
    }
    ctx->pc = 0x12E4D4u;
    // 0x12e4d4: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E4D4u;
    {
        const bool branch_taken_0x12e4d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4D4u;
        // 0x12e4d8: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4d4) {
            ctx->pc = 0x12E4E4u;
            goto label_12e4e4;
        }
    }
    ctx->pc = 0x12E4DCu;
    // 0x12e4dc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12E4DCu;
    {
        const bool branch_taken_0x12e4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4DCu;
        // 0x12e4e0: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4dc) {
            ctx->pc = 0x12E4B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e4b4;
        }
    }
    ctx->pc = 0x12E4E4u;
label_12e4e4:
    // 0x12e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E4ECu;
label_12e4ec:
    // 0x12e4ec: 0x1188fffd  beq         $t4, $t0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x12E4ECu;
    {
        const bool branch_taken_0x12e4ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 8));
        ctx->pc = 0x12E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4ECu;
        // 0x12e4f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4ec) {
            ctx->pc = 0x12E4E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e4e4;
        }
    }
    ctx->pc = 0x12E4F4u;
    // 0x12e4f4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x12E4F4u;
    {
        const bool branch_taken_0x12e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F4u;
        // 0x12e4f8: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4f4) {
            ctx->pc = 0x12E4B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e4b4;
        }
    }
    ctx->pc = 0x12E4FCu;
label_12e4fc:
    // 0x12e4fc: 0x80ac0000  lb          $t4, 0x0($a1)
    ctx->pc = 0x12e4fcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e500: 0x118a0003  beq         $t4, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E500u;
    {
        const bool branch_taken_0x12e500 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        ctx->pc = 0x12E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E500u;
        // 0x12e504: 0x18d782a  slt         $t7, $t4, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e500) {
            ctx->pc = 0x12E510u;
            goto label_12e510;
        }
    }
    ctx->pc = 0x12E508u;
    // 0x12e508: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E508u;
    {
        const bool branch_taken_0x12e508 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e508) {
            ctx->pc = 0x12E50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E508u;
            // 0x12e50c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E518u;
            goto label_12e518;
        }
    }
    ctx->pc = 0x12E510u;
label_12e510:
    // 0x12e510: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12E510u;
    {
        const bool branch_taken_0x12e510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E510u;
        // 0x12e514: 0x240d002d  addiu       $t5, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e510) {
            ctx->pc = 0x12E4B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e4b4;
        }
    }
    ctx->pc = 0x12E518u;
label_12e518:
    // 0x12e518: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12e518u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12e51c: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x12e51cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x12e520: 0x1ac702a  slt         $t6, $t5, $t4
    ctx->pc = 0x12e520u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x12e524: 0x0  nop
    ctx->pc = 0x12e524u;
    // NOP
    // 0x12e528: 0x0  nop
    ctx->pc = 0x12e528u;
    // NOP
    // 0x12e52c: 0x15c0fffa  bnez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E52Cu;
    {
        const bool branch_taken_0x12e52c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E52Cu;
        // 0x12e530: 0xa1eb0000  sb          $t3, 0x0($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e52c) {
            ctx->pc = 0x12E518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e518;
        }
    }
    ctx->pc = 0x12E534u;
    // 0x12e534: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x12E534u;
    {
        const bool branch_taken_0x12e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E534u;
        // 0x12e538: 0x80ac0000  lb          $t4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e534) {
            ctx->pc = 0x12E4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e4c0;
        }
    }
    ctx->pc = 0x12E53Cu;
label_12e53c:
    // 0x12e53c: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x12E53Cu;
    {
        const bool branch_taken_0x12e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E53Cu;
        // 0x12e540: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e53c) {
            ctx->pc = 0x12E474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e474;
        }
    }
    ctx->pc = 0x12E544u;
    // 0x12e544: 0x0  nop
    ctx->pc = 0x12e544u;
    // NOP
    if (ctx->pc == 0x12e544u) { ctx->pc = 0x12e548u; }
}
