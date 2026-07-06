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

// Function: sub_0018A520
// Address: 0x18a520 - 0x18a630
void sub_0018A520_0x18a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A520_0x18a520");
#endif

    switch (ctx->pc) {
        case 0x18a570u: goto label_18a570;
        case 0x18a5f4u: goto label_18a5f4;
        default: break;
    }

    ctx->pc = 0x18a520u;

    // 0x18a520: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x18a524: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x18a524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x18a528: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A528u;
    {
        const bool branch_taken_0x18a528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A528u;
        // 0x18a52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a528) {
            ctx->pc = 0x18A5B4u;
            goto label_18a5b4;
        }
    }
    ctx->pc = 0x18A530u;
    // 0x18a530: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x18a530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a534: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a538: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a53c: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x18a540: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a544: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a548: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a54c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a554: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18a554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a558: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18A558u;
    {
        const bool branch_taken_0x18a558 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A558u;
        // 0x18a55c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a558) {
            ctx->pc = 0x18A620u;
            goto label_18a620;
        }
    }
    ctx->pc = 0x18A560u;
    // 0x18a560: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a564: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x18a568: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a56c: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_18a570:
    // 0x18a570: 0x8ca30078  lw          $v1, 0x78($a1)
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x18a574: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A574u;
    {
        const bool branch_taken_0x18a574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a574) {
            ctx->pc = 0x18A598u;
            goto label_18a598;
        }
    }
    ctx->pc = 0x18A57Cu;
    // 0x18a57c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18a580: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x18a580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x18a584: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x18a584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18a588: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A588u;
    {
        const bool branch_taken_0x18a588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a588) {
            ctx->pc = 0x18A598u;
            goto label_18a598;
        }
    }
    ctx->pc = 0x18A590u;
    // 0x18a590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18a594: 0x0  nop
    ctx->pc = 0x18a594u;
    // NOP
label_18a598:
    // 0x18a598: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18a598u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a59c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a5a0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18a5a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a5a4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x18A5A4u;
    {
        const bool branch_taken_0x18a5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5A4u;
        // 0x18a5a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5a4) {
            ctx->pc = 0x18A570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a570;
        }
    }
    ctx->pc = 0x18A5ACu;
    // 0x18a5ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18A5ACu;
    {
        const bool branch_taken_0x18a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5ac) {
            ctx->pc = 0x18A620u;
            goto label_18a620;
        }
    }
    ctx->pc = 0x18A5B4u;
label_18a5b4:
    // 0x18a5b4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x18a5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a5b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a5bc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a5c0: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x18a5c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a5c8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a5cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a5d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a5d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a5d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18a5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a5dc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18A5DCu;
    {
        const bool branch_taken_0x18a5dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5DCu;
        // 0x18a5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5dc) {
            ctx->pc = 0x18A620u;
            goto label_18a620;
        }
    }
    ctx->pc = 0x18A5E4u;
    // 0x18a5e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a5e8: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x18a5ec: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a5f0: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x18a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_18a5f4:
    // 0x18a5f4: 0x84a30154  lh          $v1, 0x154($a1)
    ctx->pc = 0x18a5f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x18a5f8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A5F8u;
    {
        const bool branch_taken_0x18a5f8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18a5f8) {
            ctx->pc = 0x18A608u;
            goto label_18a608;
        }
    }
    ctx->pc = 0x18A600u;
    // 0x18a600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18a604: 0x0  nop
    ctx->pc = 0x18a604u;
    // NOP
label_18a608:
    // 0x18a608: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18a608u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a60c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18a60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a610: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18a610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a614: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18A614u;
    {
        const bool branch_taken_0x18a614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A614u;
        // 0x18a618: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a614) {
            ctx->pc = 0x18A5F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a5f4;
        }
    }
    ctx->pc = 0x18A61Cu;
    // 0x18a61c: 0x0  nop
    ctx->pc = 0x18a61cu;
    // NOP
label_18a620:
    // 0x18a620: 0x3e00008  jr          $ra
    ctx->pc = 0x18A620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A628u;
    // 0x18a628: 0x0  nop
    ctx->pc = 0x18a628u;
    // NOP
    // 0x18a62c: 0x0  nop
    ctx->pc = 0x18a62cu;
    // NOP
}
