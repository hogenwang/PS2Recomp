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

// Function: sub_00180740
// Address: 0x180740 - 0x180ba0
void sub_00180740_0x180740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180740_0x180740");
#endif

    switch (ctx->pc) {
        case 0x1807a0u: goto label_1807a0;
        case 0x180810u: goto label_180810;
        case 0x180824u: goto label_180824;
        case 0x180830u: goto label_180830;
        case 0x180858u: goto label_180858;
        case 0x18086cu: goto label_18086c;
        case 0x180878u: goto label_180878;
        case 0x180908u: goto label_180908;
        case 0x180948u: goto label_180948;
        case 0x1809b0u: goto label_1809b0;
        case 0x1809ecu: goto label_1809ec;
        case 0x1809f8u: goto label_1809f8;
        case 0x180a10u: goto label_180a10;
        case 0x180b5cu: goto label_180b5c;
        case 0x180b78u: goto label_180b78;
        default: break;
    }

    ctx->pc = 0x180740u;

    // 0x180740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x180744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18074c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180750: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x180750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180758: 0x908404f0  lbu         $a0, 0x4F0($a0)
    ctx->pc = 0x180758u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x18075c: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x18075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x180760: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x180760u;
    {
        const bool branch_taken_0x180760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180760u;
        // 0x180764: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180760) {
            ctx->pc = 0x180918u;
            goto label_180918;
        }
    }
    ctx->pc = 0x180768u;
    // 0x180768: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18076c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x180770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180774: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x180774u;
    {
        const bool branch_taken_0x180774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180774) {
            ctx->pc = 0x180778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180774u;
            // 0x180778: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18091Cu;
            goto label_18091c;
        }
    }
    ctx->pc = 0x18077Cu;
    // 0x18077c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x180780: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x180780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x180784: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x180784u;
    {
        const bool branch_taken_0x180784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180784) {
            ctx->pc = 0x1807FCu;
            goto label_1807fc;
        }
    }
    ctx->pc = 0x18078Cu;
    // 0x18078c: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x18078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x180790: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x180790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x180794: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x180798: 0xc062894  jal         func_18A250
    ctx->pc = 0x180798u;
    SET_GPR_U32(ctx, 31, 0x1807A0u);
    ctx->pc = 0x18079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180798u;
    // 0x18079c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A250u, 0x180798u, 0x1807A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1807A0u;
label_1807a0:
    // 0x1807a0: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1807a4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1807a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1807a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1807a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1807ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1807acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1807b0: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x1807b4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1807b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1807b8: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1807bc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1807c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1807c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1807c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1807c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1807c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1807cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1807d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1807d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1807d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1807d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1807d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1807dc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1807DCu;
    {
        const bool branch_taken_0x1807dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1807dc) {
            ctx->pc = 0x1807E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1807DCu;
            // 0x1807e0: 0x8e420528  lw          $v0, 0x528($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180814u;
            goto label_180814;
        }
    }
    ctx->pc = 0x1807E4u;
    // 0x1807e4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1807e8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x1807ec: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x1807f0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1807f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1807f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1807F4u;
    {
        const bool branch_taken_0x1807f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807F4u;
        // 0x1807f8: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807f4) {
            ctx->pc = 0x180810u;
            goto label_180810;
        }
    }
    ctx->pc = 0x1807FCu;
label_1807fc:
    // 0x1807fc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x180800: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x180800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x180804: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x180804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x180808: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x180808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x18080c: 0xac43d918  sw          $v1, -0x26E8($v0)
    ctx->pc = 0x18080cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
label_180810:
    // 0x180810: 0x8e420528  lw          $v0, 0x528($s2)
    ctx->pc = 0x180810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1320)));
label_180814:
    // 0x180814: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180814u;
    {
        const bool branch_taken_0x180814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180814) {
            ctx->pc = 0x180818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180814u;
            // 0x180818: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x18081Cu;
    // 0x18081c: 0xc0601b0  jal         func_1806C0
    ctx->pc = 0x18081Cu;
    SET_GPR_U32(ctx, 31, 0x180824u);
    ctx->pc = 0x180820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18081Cu;
    // 0x180820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806C0u, 0x18081Cu, 0x180824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180824u;
label_180824:
    // 0x180824: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_180828:
    // 0x180828: 0xc062794  jal         func_189E50
    ctx->pc = 0x180828u;
    SET_GPR_U32(ctx, 31, 0x180830u);
    ctx->pc = 0x18082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180828u;
    // 0x18082c: 0x2410010f  addiu       $s0, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x180828u, 0x180830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180830u;
label_180830:
    // 0x180830: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x180830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180834: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x180834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180838: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x18083c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180840: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x180844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18084c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x18084cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x180850: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x180850u;
    SET_GPR_U32(ctx, 31, 0x180858u);
    ctx->pc = 0x180854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180850u;
    // 0x180854: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F60u, 0x180850u, 0x180858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180858u;
label_180858:
    // 0x180858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18085c: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x18085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x180860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180864: 0xc05721c  jal         func_15C870
    ctx->pc = 0x180864u;
    SET_GPR_U32(ctx, 31, 0x18086Cu);
    ctx->pc = 0x180868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180864u;
    // 0x180868: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x180864u, 0x18086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18086Cu;
label_18086c:
    // 0x18086c: 0x240402ff  addiu       $a0, $zero, 0x2FF
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
    // 0x180870: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x180870u;
    SET_GPR_U32(ctx, 31, 0x180878u);
    ctx->pc = 0x180874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180870u;
    // 0x180874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x180870u, 0x180878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180878u;
label_180878:
    // 0x180878: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x180878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18087c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x180880: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180884: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x180884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x180888: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x180888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x18088c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x18088Cu;
    {
        const bool branch_taken_0x18088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18088c) {
            ctx->pc = 0x180890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18088Cu;
            // 0x180890: 0x92420521  lbu         $v0, 0x521($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1808D0u;
            goto label_1808d0;
        }
    }
    ctx->pc = 0x180894u;
    // 0x180894: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x180894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x180898: 0x284202a0  slti        $v0, $v0, 0x2A0
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x18089c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18089Cu;
    {
        const bool branch_taken_0x18089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18089c) {
            ctx->pc = 0x1808CCu;
            goto label_1808cc;
        }
    }
    ctx->pc = 0x1808A4u;
    // 0x1808a4: 0x8e42048c  lw          $v0, 0x48C($s2)
    ctx->pc = 0x1808a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
    // 0x1808a8: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x1808a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x1808ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1808ACu;
    {
        const bool branch_taken_0x1808ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808ac) {
            ctx->pc = 0x1808B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1808ACu;
            // 0x1808b0: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1808C0u;
            goto label_1808c0;
        }
    }
    ctx->pc = 0x1808B4u;
    // 0x1808b4: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x1808b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x1808b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1808B8u;
    {
        const bool branch_taken_0x1808b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808B8u;
        // 0x1808bc: 0xa642050c  sh          $v0, 0x50C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808b8) {
            ctx->pc = 0x1808C4u;
            goto label_1808c4;
        }
    }
    ctx->pc = 0x1808C0u;
label_1808c0:
    // 0x1808c0: 0xa642050c  sh          $v0, 0x50C($s2)
    ctx->pc = 0x1808c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 2));
label_1808c4:
    // 0x1808c4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1808C4u;
    {
        const bool branch_taken_0x1808c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808C4u;
        // 0x1808c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808c4) {
            ctx->pc = 0x180B88u;
            goto label_180b88;
        }
    }
    ctx->pc = 0x1808CCu;
label_1808cc:
    // 0x1808cc: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x1808ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
label_1808d0:
    // 0x1808d0: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x1808d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x1808d4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1808D4u;
    {
        const bool branch_taken_0x1808d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1808d4) {
            ctx->pc = 0x1808D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1808D4u;
            // 0x1808d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180900u;
            goto label_180900;
        }
    }
    ctx->pc = 0x1808DCu;
    // 0x1808dc: 0x8642050c  lh          $v0, 0x50C($s2)
    ctx->pc = 0x1808dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1292)));
    // 0x1808e0: 0x28410130  slti        $at, $v0, 0x130
    ctx->pc = 0x1808e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)304) ? 1 : 0);
    // 0x1808e4: 0x502000a7  beql        $at, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1808E4u;
    {
        const bool branch_taken_0x1808e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808e4) {
            ctx->pc = 0x1808E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1808E4u;
            // 0x1808e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x1808ECu;
    // 0x1808ec: 0x24110142  addiu       $s1, $zero, 0x142
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x1808f0: 0xa651050c  sh          $s1, 0x50C($s2)
    ctx->pc = 0x1808f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 17));
    // 0x1808f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1808f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808f8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1808F8u;
    {
        const bool branch_taken_0x1808f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808f8) {
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x180900u;
label_180900:
    // 0x180900: 0xc060190  jal         func_180640
    ctx->pc = 0x180900u;
    SET_GPR_U32(ctx, 31, 0x180908u);
    ctx->pc = 0x180904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180900u;
    // 0x180904: 0x26450520  addiu       $a1, $s2, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180640u, 0x180900u, 0x180908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180908u;
label_180908:
    // 0x180908: 0xa642050c  sh          $v0, 0x50C($s2)
    ctx->pc = 0x180908u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 2));
    // 0x18090c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18090cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180910: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x180910u;
    {
        const bool branch_taken_0x180910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180910u;
        // 0x180914: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180910) {
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x180918u;
label_180918:
    // 0x180918: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x180918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_18091c:
    // 0x18091c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x18091Cu;
    {
        const bool branch_taken_0x18091c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18091c) {
            ctx->pc = 0x180920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18091Cu;
            // 0x180920: 0x8e430494  lw          $v1, 0x494($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1809D4u;
            goto label_1809d4;
        }
    }
    ctx->pc = 0x180924u;
    // 0x180924: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x180924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x180928: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x180928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18092c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x18092Cu;
    {
        const bool branch_taken_0x18092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18092c) {
            ctx->pc = 0x1809D0u;
            goto label_1809d0;
        }
    }
    ctx->pc = 0x180934u;
    // 0x180934: 0x8e420528  lw          $v0, 0x528($s2)
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x180938: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180938u;
    {
        const bool branch_taken_0x180938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180938) {
            ctx->pc = 0x18093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180938u;
            // 0x18093c: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18094Cu;
            goto label_18094c;
        }
    }
    ctx->pc = 0x180940u;
    // 0x180940: 0xc0601b0  jal         func_1806C0
    ctx->pc = 0x180940u;
    SET_GPR_U32(ctx, 31, 0x180948u);
    ctx->pc = 0x180944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180940u;
    // 0x180944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806C0u, 0x180940u, 0x180948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180948u;
label_180948:
    // 0x180948: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x180948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_18094c:
    // 0x18094c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18094cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x180950: 0x24c6dca8  addiu       $a2, $a2, -0x2358
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958248));
    // 0x180954: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x180958: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x18095c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180960: 0x3067000c  andi        $a3, $v1, 0xC
    ctx->pc = 0x180960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x180964: 0x26450520  addiu       $a1, $s2, 0x520
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1312));
    // 0x180968: 0x74082  srl         $t0, $a3, 2
    ctx->pc = 0x180968u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x18096c: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x18096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x180970: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x180974: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x180978: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18097c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180980: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x180984: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x180984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x180988: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x180988u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18098c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18098cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180990: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180994: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x180994u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x180998: 0xa64204ba  sh          $v0, 0x4BA($s2)
    ctx->pc = 0x180998u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1210), (uint16_t)GPR_U32(ctx, 2));
    // 0x18099c: 0xa64004bc  sh          $zero, 0x4BC($s2)
    ctx->pc = 0x18099cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1212), (uint16_t)GPR_U32(ctx, 0));
    // 0x1809a0: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1809a4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1809a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1809a8: 0xc0600a8  jal         func_1802A0
    ctx->pc = 0x1809A8u;
    SET_GPR_U32(ctx, 31, 0x1809B0u);
    ctx->pc = 0x1809ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809A8u;
    // 0x1809ac: 0xae420494  sw          $v0, 0x494($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1802A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1802A0u, 0x1809A8u, 0x1809B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809B0u;
label_1809b0:
    // 0x1809b0: 0xa642050c  sh          $v0, 0x50C($s2)
    ctx->pc = 0x1809b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 2));
    // 0x1809b4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1809b8: 0xa6430582  sh          $v1, 0x582($s2)
    ctx->pc = 0x1809b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 3));
    // 0x1809bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1809bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1809c0: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1809c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1809c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1809c8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1809C8u;
    {
        const bool branch_taken_0x1809c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809C8u;
        // 0x1809cc: 0xa643039a  sh          $v1, 0x39A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 922), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809c8) {
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x1809D0u;
label_1809d0:
    // 0x1809d0: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
label_1809d4:
    // 0x1809d4: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1809d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1809d8: 0x30630180  andi        $v1, $v1, 0x180
    ctx->pc = 0x1809d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)384);
    // 0x1809dc: 0x5462002a  bnel        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1809DCu;
    {
        const bool branch_taken_0x1809dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1809dc) {
            ctx->pc = 0x1809E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809DCu;
            // 0x1809e0: 0x924204f0  lbu         $v0, 0x4F0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A88u;
            goto label_180a88;
        }
    }
    ctx->pc = 0x1809E4u;
    // 0x1809e4: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x1809E4u;
    SET_GPR_U32(ctx, 31, 0x1809ECu);
    ctx->pc = 0x1809E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809E4u;
    // 0x1809e8: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x1809E4u, 0x1809ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809ECu;
label_1809ec:
    // 0x1809ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1809ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809f0: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x1809F0u;
    SET_GPR_U32(ctx, 31, 0x1809F8u);
    ctx->pc = 0x1809F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809F0u;
    // 0x1809f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x1809F0u, 0x1809F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809F8u;
label_1809f8:
    // 0x1809f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1809f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1809fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1809FCu;
    {
        const bool branch_taken_0x1809fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1809fc) {
            ctx->pc = 0x180A1Cu;
            goto label_180a1c;
        }
    }
    ctx->pc = 0x180A04u;
    // 0x180a04: 0x26440268  addiu       $a0, $s2, 0x268
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
    // 0x180a08: 0xc057c1c  jal         func_15F070
    ctx->pc = 0x180A08u;
    SET_GPR_U32(ctx, 31, 0x180A10u);
    ctx->pc = 0x180A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A08u;
    // 0x180a0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F070u, 0x180A08u, 0x180A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A10u;
label_180a10:
    // 0x180a10: 0x86420582  lh          $v0, 0x582($s2)
    ctx->pc = 0x180a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x180a14: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x180a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x180a18: 0xa6420582  sh          $v0, 0x582($s2)
    ctx->pc = 0x180a18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 2));
label_180a1c:
    // 0x180a1c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x180a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x180a20: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x180a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x180a24: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x180a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x180a28: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x180a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x180a2c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x180a30: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x180A30u;
    {
        const bool branch_taken_0x180a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180a30) {
            ctx->pc = 0x180A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A30u;
            // 0x180a34: 0x86430582  lh          $v1, 0x582($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A40u;
            goto label_180a40;
        }
    }
    ctx->pc = 0x180A38u;
    // 0x180a38: 0xa6400582  sh          $zero, 0x582($s2)
    ctx->pc = 0x180a38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 0));
    // 0x180a3c: 0x86430582  lh          $v1, 0x582($s2)
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
label_180a40:
    // 0x180a40: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x180a44: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x180A44u;
    {
        const bool branch_taken_0x180a44 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x180A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A44u;
        // 0x180a48: 0xa6420582  sh          $v0, 0x582($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a44) {
            ctx->pc = 0x180A84u;
            goto label_180a84;
        }
    }
    ctx->pc = 0x180A4Cu;
    // 0x180a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x180a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180a50: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x180a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x180a54: 0xa6420582  sh          $v0, 0x582($s2)
    ctx->pc = 0x180a54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 2));
    // 0x180a58: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x180a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x180a5c: 0x924504f0  lbu         $a1, 0x4F0($s2)
    ctx->pc = 0x180a5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
    // 0x180a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a64: 0x30a500bf  andi        $a1, $a1, 0xBF
    ctx->pc = 0x180a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x180a68: 0xa24504f0  sb          $a1, 0x4F0($s2)
    ctx->pc = 0x180a68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1264), (uint8_t)GPR_U32(ctx, 5));
    // 0x180a6c: 0x8e450494  lw          $a1, 0x494($s2)
    ctx->pc = 0x180a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x180a70: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x180a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x180a74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180a78: 0xae440494  sw          $a0, 0x494($s2)
    ctx->pc = 0x180a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 4));
    // 0x180a7c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x180A7Cu;
    {
        const bool branch_taken_0x180a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A7Cu;
        // 0x180a80: 0xae430494  sw          $v1, 0x494($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a7c) {
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x180A84u;
label_180a84:
    // 0x180a84: 0x924204f0  lbu         $v0, 0x4F0($s2)
    ctx->pc = 0x180a84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
label_180a88:
    // 0x180a88: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x180a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x180a8c: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x180A8Cu;
    {
        const bool branch_taken_0x180a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180a8c) {
            ctx->pc = 0x180A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A8Cu;
            // 0x180a90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x180A94u;
    // 0x180a94: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x180a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x180a98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x180a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x180a9c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x180A9Cu;
    {
        const bool branch_taken_0x180a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180a9c) {
            ctx->pc = 0x180B80u;
            goto label_180b80;
        }
    }
    ctx->pc = 0x180AA4u;
    // 0x180aa4: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x180aa8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x180aac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x180ab0: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x180ab4: 0x2463dcaa  addiu       $v1, $v1, -0x2356
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958250));
    // 0x180ab8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x180abc: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x180abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x180ac0: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x180ac4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x180ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x180ac8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180acc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180ad0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180ad4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180ad8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x180ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x180adc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180ae0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x180ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x180ae4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x180ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x180ae8: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x180aec: 0x3044000c  andi        $a0, $v0, 0xC
    ctx->pc = 0x180aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x180af0: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x180af4: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x180af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x180af8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x180afc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x180afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x180b00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180b04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x180b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180b08: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180b0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180b10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180b10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180b14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180b1c: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x180b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x180b20: 0xa64004c4  sh          $zero, 0x4C4($s2)
    ctx->pc = 0x180b20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1220), (uint16_t)GPR_U32(ctx, 0));
    // 0x180b24: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x180b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x180b28: 0x284202a0  slti        $v0, $v0, 0x2A0
    ctx->pc = 0x180b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x180b2c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180B2Cu;
    {
        const bool branch_taken_0x180b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180b2c) {
            ctx->pc = 0x180B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180B2Cu;
            // 0x180b30: 0x24100142  addiu       $s0, $zero, 0x142 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180B44u;
            goto label_180b44;
        }
    }
    ctx->pc = 0x180B34u;
    // 0x180b34: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x180b38: 0x24100124  addiu       $s0, $zero, 0x124
    ctx->pc = 0x180b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x180b3c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x180b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x180b40: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x180b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_180b44:
    // 0x180b44: 0xa650050c  sh          $s0, 0x50C($s2)
    ctx->pc = 0x180b44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 16));
    // 0x180b48: 0x924204f0  lbu         $v0, 0x4F0($s2)
    ctx->pc = 0x180b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
    // 0x180b4c: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x180b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x180b50: 0xa24204f0  sb          $v0, 0x4F0($s2)
    ctx->pc = 0x180b50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1264), (uint8_t)GPR_U32(ctx, 2));
    // 0x180b54: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x180B54u;
    SET_GPR_U32(ctx, 31, 0x180B5Cu);
    ctx->pc = 0x180B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B54u;
    // 0x180b58: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x180B54u, 0x180B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B5Cu;
label_180b5c:
    // 0x180b5c: 0x8646037c  lh          $a2, 0x37C($s2)
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 892)));
    // 0x180b60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b64: 0x8647037e  lh          $a3, 0x37E($s2)
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 894)));
    // 0x180b68: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x180b6c: 0x92480381  lbu         $t0, 0x381($s2)
    ctx->pc = 0x180b6cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 897)));
    // 0x180b70: 0xc05721c  jal         func_15C870
    ctx->pc = 0x180B70u;
    SET_GPR_U32(ctx, 31, 0x180B78u);
    ctx->pc = 0x180B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B70u;
    // 0x180b74: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x180B70u, 0x180B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B78u;
label_180b78:
    // 0x180b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180B78u;
    {
        const bool branch_taken_0x180b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B78u;
        // 0x180b7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b78) {
            ctx->pc = 0x180B84u;
            goto label_180b84;
        }
    }
    ctx->pc = 0x180B80u;
label_180b80:
    // 0x180b80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_180b84:
    // 0x180b84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x180b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_180b88:
    // 0x180b88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180b8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180b94: 0x3e00008  jr          $ra
    ctx->pc = 0x180B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B94u;
        // 0x180b98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B9Cu;
    // 0x180b9c: 0x0  nop
    ctx->pc = 0x180b9cu;
    // NOP
}
