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

// Function: sub_001FC518
// Address: 0x1fc518 - 0x1fc630
void sub_001FC518_0x1fc518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC518_0x1fc518");
#endif

    switch (ctx->pc) {
        case 0x1fc518u: goto label_1fc518;
        case 0x1fc51cu: goto label_1fc51c;
        case 0x1fc520u: goto label_1fc520;
        case 0x1fc524u: goto label_1fc524;
        case 0x1fc528u: goto label_1fc528;
        case 0x1fc52cu: goto label_1fc52c;
        case 0x1fc530u: goto label_1fc530;
        case 0x1fc534u: goto label_1fc534;
        case 0x1fc538u: goto label_1fc538;
        case 0x1fc53cu: goto label_1fc53c;
        case 0x1fc540u: goto label_1fc540;
        case 0x1fc544u: goto label_1fc544;
        case 0x1fc548u: goto label_1fc548;
        case 0x1fc54cu: goto label_1fc54c;
        case 0x1fc550u: goto label_1fc550;
        case 0x1fc554u: goto label_1fc554;
        case 0x1fc558u: goto label_1fc558;
        case 0x1fc55cu: goto label_1fc55c;
        case 0x1fc560u: goto label_1fc560;
        case 0x1fc564u: goto label_1fc564;
        case 0x1fc568u: goto label_1fc568;
        case 0x1fc56cu: goto label_1fc56c;
        case 0x1fc570u: goto label_1fc570;
        case 0x1fc574u: goto label_1fc574;
        case 0x1fc578u: goto label_1fc578;
        case 0x1fc57cu: goto label_1fc57c;
        case 0x1fc580u: goto label_1fc580;
        case 0x1fc584u: goto label_1fc584;
        case 0x1fc588u: goto label_1fc588;
        case 0x1fc58cu: goto label_1fc58c;
        case 0x1fc590u: goto label_1fc590;
        case 0x1fc594u: goto label_1fc594;
        case 0x1fc598u: goto label_1fc598;
        case 0x1fc59cu: goto label_1fc59c;
        case 0x1fc5a0u: goto label_1fc5a0;
        case 0x1fc5a4u: goto label_1fc5a4;
        case 0x1fc5a8u: goto label_1fc5a8;
        case 0x1fc5acu: goto label_1fc5ac;
        case 0x1fc5b0u: goto label_1fc5b0;
        case 0x1fc5b4u: goto label_1fc5b4;
        case 0x1fc5b8u: goto label_1fc5b8;
        case 0x1fc5bcu: goto label_1fc5bc;
        case 0x1fc5c0u: goto label_1fc5c0;
        case 0x1fc5c4u: goto label_1fc5c4;
        case 0x1fc5c8u: goto label_1fc5c8;
        case 0x1fc5ccu: goto label_1fc5cc;
        case 0x1fc5d0u: goto label_1fc5d0;
        case 0x1fc5d4u: goto label_1fc5d4;
        case 0x1fc5d8u: goto label_1fc5d8;
        case 0x1fc5dcu: goto label_1fc5dc;
        case 0x1fc5e0u: goto label_1fc5e0;
        case 0x1fc5e4u: goto label_1fc5e4;
        case 0x1fc5e8u: goto label_1fc5e8;
        case 0x1fc5ecu: goto label_1fc5ec;
        case 0x1fc5f0u: goto label_1fc5f0;
        case 0x1fc5f4u: goto label_1fc5f4;
        case 0x1fc5f8u: goto label_1fc5f8;
        case 0x1fc5fcu: goto label_1fc5fc;
        case 0x1fc600u: goto label_1fc600;
        case 0x1fc604u: goto label_1fc604;
        case 0x1fc608u: goto label_1fc608;
        case 0x1fc60cu: goto label_1fc60c;
        case 0x1fc610u: goto label_1fc610;
        case 0x1fc614u: goto label_1fc614;
        case 0x1fc618u: goto label_1fc618;
        case 0x1fc61cu: goto label_1fc61c;
        case 0x1fc620u: goto label_1fc620;
        case 0x1fc624u: goto label_1fc624;
        case 0x1fc628u: goto label_1fc628;
        case 0x1fc62cu: goto label_1fc62c;
        default: break;
    }

    ctx->pc = 0x1fc518u;

label_1fc518:
    // 0x1fc518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc51c:
    // 0x1fc51c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1fc51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc520:
    // 0x1fc520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fc524:
    // 0x1fc524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fc524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc528:
    // 0x1fc528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fc52c:
    // 0x1fc52c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fc52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc530:
    // 0x1fc530: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fc534:
    // 0x1fc534: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fc534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1fc538:
    // 0x1fc538: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fc538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1fc53c:
    // 0x1fc53c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fc53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc540:
    // 0x1fc540: 0x34a50221  ori         $a1, $a1, 0x221
    ctx->pc = 0x1fc540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)545);
label_1fc544:
    // 0x1fc544: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1fc544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc548:
    // 0x1fc548: 0x8d120000  lw          $s2, 0x0($t0)
    ctx->pc = 0x1fc548u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc54c:
    // 0x1fc54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fc54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc550:
    // 0x1fc550: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1fc550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1fc554:
    // 0x1fc554: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1fc554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1fc558:
    // 0x1fc558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc55c:
    // 0x1fc55c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc560:
    // 0x1fc560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1fc560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1fc564:
    // 0x1fc564: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1fc564u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1fc568:
    // 0x1fc568: 0x8c22eb68  lw          $v0, -0x1498($at)
    ctx->pc = 0x1fc568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962024)));
label_1fc56c:
    // 0x1fc56c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fc570:
    if (ctx->pc == 0x1FC570u) {
        ctx->pc = 0x1FC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC56Cu;
        // 0x1fc570: 0x124880  sll         $t1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC574u;
        goto label_1fc574;
    }
    ctx->pc = 0x1FC56Cu;
    {
        const bool branch_taken_0x1fc56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC56Cu;
        // 0x1fc570: 0x124880  sll         $t1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc56c) {
            ctx->pc = 0x1FC590u;
            goto label_1fc590;
        }
    }
    ctx->pc = 0x1FC574u;
label_1fc574:
    // 0x1fc574: 0xc07b5c0  jal         func_1ED700
label_1fc578:
    if (ctx->pc == 0x1FC578u) {
        ctx->pc = 0x1FC57Cu;
        goto label_1fc57c;
    }
    ctx->pc = 0x1FC574u;
    SET_GPR_U32(ctx, 31, 0x1FC57Cu);
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1FC574u, 0x1FC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC57Cu;
label_1fc57c:
    // 0x1fc57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc580:
    // 0x1fc580: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fc580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1fc584:
    // 0x1fc584: 0x10000023  b           . + 4 + (0x23 << 2)
label_1fc588:
    if (ctx->pc == 0x1FC588u) {
        ctx->pc = 0x1FC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC584u;
        // 0x1fc588: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC58Cu;
        goto label_1fc58c;
    }
    ctx->pc = 0x1FC584u;
    {
        const bool branch_taken_0x1fc584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC584u;
        // 0x1fc588: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc584) {
            ctx->pc = 0x1FC614u;
            goto label_1fc614;
        }
    }
    ctx->pc = 0x1FC58Cu;
label_1fc58c:
    // 0x1fc58c: 0x0  nop
    ctx->pc = 0x1fc58cu;
    // NOP
label_1fc590:
    // 0x1fc590: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1fc590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1fc594:
    // 0x1fc594: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1fc598:
    // 0x1fc598: 0x8c84eb40  lw          $a0, -0x14C0($a0)
    ctx->pc = 0x1fc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961984)));
label_1fc59c:
    // 0x1fc59c: 0x40f809  jalr        $v0
label_1fc5a0:
    if (ctx->pc == 0x1FC5A0u) {
        ctx->pc = 0x1FC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC59Cu;
        // 0x1fc5a0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5A4u;
        goto label_1fc5a4;
    }
    ctx->pc = 0x1FC59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC5A4u);
        ctx->pc = 0x1FC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC59Cu;
        // 0x1fc5a0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC59Cu, 0x1FC5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC5A4u;
label_1fc5a4:
    // 0x1fc5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc5a8:
    // 0x1fc5a8: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
label_1fc5ac:
    if (ctx->pc == 0x1FC5ACu) {
        ctx->pc = 0x1FC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A8u;
        // 0x1fc5ac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5B0u;
        goto label_1fc5b0;
    }
    ctx->pc = 0x1FC5A8u;
    {
        const bool branch_taken_0x1fc5a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A8u;
        // 0x1fc5ac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5a8) {
            ctx->pc = 0x1FC5E8u;
            goto label_1fc5e8;
        }
    }
    ctx->pc = 0x1FC5B0u;
label_1fc5b0:
    // 0x1fc5b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc5b4:
    // 0x1fc5b4: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1fc5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1fc5b8:
    // 0x1fc5b8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1fc5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1fc5bc:
    // 0x1fc5bc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1fc5bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1fc5c0:
    // 0x1fc5c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1fc5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1fc5c4:
    // 0x1fc5c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fc5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fc5c8:
    // 0x1fc5c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fc5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fc5cc:
    // 0x1fc5cc: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1fc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1fc5d0:
    // 0x1fc5d0: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1fc5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1fc5d4:
    // 0x1fc5d4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1fc5d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1fc5d8:
    // 0x1fc5d8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1fc5d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1fc5dc:
    // 0x1fc5dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1fc5e0:
    if (ctx->pc == 0x1FC5E0u) {
        ctx->pc = 0x1FC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5DCu;
        // 0x1fc5e0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5E4u;
        goto label_1fc5e4;
    }
    ctx->pc = 0x1FC5DCu;
    {
        const bool branch_taken_0x1fc5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5DCu;
        // 0x1fc5e0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5dc) {
            ctx->pc = 0x1FC614u;
            goto label_1fc614;
        }
    }
    ctx->pc = 0x1FC5E4u;
label_1fc5e4:
    // 0x1fc5e4: 0x0  nop
    ctx->pc = 0x1fc5e4u;
    // NOP
label_1fc5e8:
    // 0x1fc5e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc5ec:
    // 0x1fc5ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1fc5f0:
    // 0x1fc5f0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1fc5f4:
    if (ctx->pc == 0x1FC5F4u) {
        ctx->pc = 0x1FC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5F0u;
        // 0x1fc5f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5F8u;
        goto label_1fc5f8;
    }
    ctx->pc = 0x1FC5F0u;
    {
        const bool branch_taken_0x1fc5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc5f0) {
            ctx->pc = 0x1FC5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC5F0u;
            // 0x1fc5f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5F8u;
            goto label_1fc5f8;
        }
    }
    ctx->pc = 0x1FC5F8u;
label_1fc5f8:
    // 0x1fc5f8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1fc5f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1fc5fc:
    // 0x1fc5fc: 0x1012  mflo        $v0
    ctx->pc = 0x1fc5fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1fc600:
    // 0x1fc600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fc600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fc604:
    // 0x1fc604: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fc608:
    // 0x1fc608: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1fc608u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1fc60c:
    // 0x1fc60c: 0x1012  mflo        $v0
    ctx->pc = 0x1fc60cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1fc610:
    // 0x1fc610: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fc614:
    // 0x1fc614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc618:
    // 0x1fc618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fc61c:
    // 0x1fc61c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc61cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc620:
    // 0x1fc620: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fc620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fc624:
    // 0x1fc624: 0x3e00008  jr          $ra
label_1fc628:
    if (ctx->pc == 0x1FC628u) {
        ctx->pc = 0x1FC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC624u;
        // 0x1fc628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC62Cu;
        goto label_1fc62c;
    }
    ctx->pc = 0x1FC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC624u;
        // 0x1fc628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC62Cu;
label_1fc62c:
    // 0x1fc62c: 0x0  nop
    ctx->pc = 0x1fc62cu;
    // NOP
    if (ctx->pc == 0x1fc62cu) { ctx->pc = 0x1fc630u; }
}
