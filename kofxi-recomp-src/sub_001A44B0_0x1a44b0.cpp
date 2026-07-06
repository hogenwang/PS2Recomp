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

// Function: sub_001A44B0
// Address: 0x1a44b0 - 0x1a45a0
void sub_001A44B0_0x1a44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A44B0_0x1a44b0");
#endif

    switch (ctx->pc) {
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a4518u: goto label_1a4518;
        default: break;
    }

    ctx->pc = 0x1a44b0u;

    // 0x1a44b0: 0x865021  addu        $t2, $a0, $a2
    ctx->pc = 0x1a44b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a44b4: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1a44b4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a44b8: 0x8a082b  sltu        $at, $a0, $t2
    ctx->pc = 0x1a44b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1a44bc: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A44BCu;
    {
        const bool branch_taken_0x1a44bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44BCu;
        // 0x1a44c0: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44bc) {
            ctx->pc = 0x1A4580u;
            goto label_1a4580;
        }
    }
    ctx->pc = 0x1A44C4u;
    // 0x1a44c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a44c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a44c8: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1a44cc:
    // 0x1a44cc: 0x11a0001c  beqz        $t5, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A44CCu;
    {
        const bool branch_taken_0x1a44cc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a44cc) {
            ctx->pc = 0x1A4540u;
            goto label_1a4540;
        }
    }
    ctx->pc = 0x1A44D4u;
    // 0x1a44d4: 0x31a200ff  andi        $v0, $t5, 0xFF
    ctx->pc = 0x1a44d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x1a44d8: 0x14490007  bne         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A44D8u;
    {
        const bool branch_taken_0x1a44d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1a44d8) {
            ctx->pc = 0x1A44F8u;
            goto label_1a44f8;
        }
    }
    ctx->pc = 0x1A44E0u;
    // 0x1a44e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a44e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a44e4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a44e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44e8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a44e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a44ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a44ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a44f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A44F0u;
    {
        const bool branch_taken_0x1a44f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44F0u;
        // 0x1a44f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44f0) {
            ctx->pc = 0x1A4570u;
            goto label_1a4570;
        }
    }
    ctx->pc = 0x1A44F8u;
label_1a44f8:
    // 0x1a44f8: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x1a44f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a44fc: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1a44fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4500: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x1a4500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1a4504: 0x304d00ff  andi        $t5, $v0, 0xFF
    ctx->pc = 0x1a4504u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a4508: 0xa86023  subu        $t4, $a1, $t0
    ctx->pc = 0x1a4508u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a450c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A450Cu;
    {
        const bool branch_taken_0x1a450c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A450Cu;
        // 0x1a4510: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a450c) {
            ctx->pc = 0x1A4538u;
            goto label_1a4538;
        }
    }
    ctx->pc = 0x1A4514u;
    // 0x1a4514: 0x0  nop
    ctx->pc = 0x1a4514u;
    // NOP
label_1a4518:
    // 0x1a4518: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x1a4518u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a451c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1a451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4520: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1a4524: 0x304d00ff  andi        $t5, $v0, 0xFF
    ctx->pc = 0x1a4524u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a4528: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x1a4528u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a452c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1a452cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a4530: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A4530u;
    {
        const bool branch_taken_0x1a4530 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4530u;
        // 0x1a4534: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4530) {
            ctx->pc = 0x1A4518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4518;
        }
    }
    ctx->pc = 0x1A4538u;
label_1a4538:
    // 0x1a4538: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A4538u;
    {
        const bool branch_taken_0x1a4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4538u;
        // 0x1a453c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4538) {
            ctx->pc = 0x1A4570u;
            goto label_1a4570;
        }
    }
    ctx->pc = 0x1A4540u;
label_1a4540:
    // 0x1a4540: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1a4540u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4544: 0x30c200c0  andi        $v0, $a2, 0xC0
    ctx->pc = 0x1a4544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)192);
    // 0x1a4548: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4548u;
    {
        const bool branch_taken_0x1a4548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4548) {
            ctx->pc = 0x1A454Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4548u;
            // 0x1a454c: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4568u;
            goto label_1a4568;
        }
    }
    ctx->pc = 0x1A4550u;
    // 0x1a4550: 0x30cd003f  andi        $t5, $a2, 0x3F
    ctx->pc = 0x1a4550u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1a4554: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4554u;
    {
        const bool branch_taken_0x1a4554 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4554u;
        // 0x1a4558: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4554) {
            ctx->pc = 0x1A4570u;
            goto label_1a4570;
        }
    }
    ctx->pc = 0x1A455Cu;
    // 0x1a455c: 0xa0ed0000  sb          $t5, 0x0($a3)
    ctx->pc = 0x1a455cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x1a4560: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A4560u;
    {
        const bool branch_taken_0x1a4560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4560u;
        // 0x1a4564: 0xab1023  subu        $v0, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4560) {
            ctx->pc = 0x1A458Cu;
            goto label_1a458c;
        }
    }
    ctx->pc = 0x1A4568u;
label_1a4568:
    // 0x1a4568: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a456c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a4570:
    // 0x1a4570: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x1a4570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1a4574: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A4574u;
    {
        const bool branch_taken_0x1a4574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4574) {
            ctx->pc = 0x1A44CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a44cc;
        }
    }
    ctx->pc = 0x1A457Cu;
    // 0x1a457c: 0x0  nop
    ctx->pc = 0x1a457cu;
    // NOP
label_1a4580:
    // 0x1a4580: 0xab1023  subu        $v0, $a1, $t3
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1a4584: 0xa0ed0000  sb          $t5, 0x0($a3)
    ctx->pc = 0x1a4584u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x1a4588: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1a4588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1a458c:
    // 0x1a458c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A458Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A458Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4594u;
    // 0x1a4594: 0x0  nop
    ctx->pc = 0x1a4594u;
    // NOP
    // 0x1a4598: 0x0  nop
    ctx->pc = 0x1a4598u;
    // NOP
    // 0x1a459c: 0x0  nop
    ctx->pc = 0x1a459cu;
    // NOP
    if (ctx->pc == 0x1a459cu) { ctx->pc = 0x1a45a0u; }
}
