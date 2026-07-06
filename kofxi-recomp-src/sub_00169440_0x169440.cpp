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

// Function: sub_00169440
// Address: 0x169440 - 0x169590
void sub_00169440_0x169440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169440_0x169440");
#endif

    switch (ctx->pc) {
        case 0x16945cu: goto label_16945c;
        case 0x169464u: goto label_169464;
        case 0x1694e8u: goto label_1694e8;
        case 0x169530u: goto label_169530;
        case 0x169558u: goto label_169558;
        case 0x169578u: goto label_169578;
        default: break;
    }

    ctx->pc = 0x169440u;

    // 0x169440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16944c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169454: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x169454u;
    SET_GPR_U32(ctx, 31, 0x16945Cu);
    ctx->pc = 0x169458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169454u;
    // 0x169458: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x169454u, 0x16945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16945Cu;
label_16945c:
    // 0x16945c: 0xc05a108  jal         func_168420
    ctx->pc = 0x16945Cu;
    SET_GPR_U32(ctx, 31, 0x169464u);
    ctx->pc = 0x169460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16945Cu;
    // 0x169460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168420u, 0x16945Cu, 0x169464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169464u;
label_169464:
    // 0x169464: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169468: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x16946c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x16946cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169470: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169474: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x169474u;
    {
        const bool branch_taken_0x169474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169474) {
            ctx->pc = 0x169478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169474u;
            // 0x169478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1694E0u;
            goto label_1694e0;
        }
    }
    ctx->pc = 0x16947Cu;
    // 0x16947c: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169480: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169484: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169488: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x16948c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169490: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169490u;
    {
        const bool branch_taken_0x169490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169490) {
            ctx->pc = 0x1694DCu;
            goto label_1694dc;
        }
    }
    ctx->pc = 0x169498u;
    // 0x169498: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x16949c: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x16949cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x1694a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1694A0u;
    {
        const bool branch_taken_0x1694a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694a0) {
            ctx->pc = 0x1694ACu;
            goto label_1694ac;
        }
    }
    ctx->pc = 0x1694A8u;
    // 0x1694a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1694a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1694ac:
    // 0x1694ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1694acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1694b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1694b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1694b4: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x1694b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x1694b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1694b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1694bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1694BCu;
    {
        const bool branch_taken_0x1694bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694bc) {
            ctx->pc = 0x1694DCu;
            goto label_1694dc;
        }
    }
    ctx->pc = 0x1694C4u;
    // 0x1694c4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1694c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1694c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1694c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1694cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1694CCu;
    {
        const bool branch_taken_0x1694cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694cc) {
            ctx->pc = 0x1694DCu;
            goto label_1694dc;
        }
    }
    ctx->pc = 0x1694D4u;
    // 0x1694d4: 0x3202fffe  andi        $v0, $s0, 0xFFFE
    ctx->pc = 0x1694d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    // 0x1694d8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1694d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1694dc:
    // 0x1694dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1694dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1694e0:
    // 0x1694e0: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x1694E0u;
    SET_GPR_U32(ctx, 31, 0x1694E8u);
    ctx->pc = 0x168D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168D30u, 0x1694E0u, 0x1694E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1694E8u;
label_1694e8:
    // 0x1694e8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1694e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1694ec: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1694ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1694f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1694f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1694f4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1694F4u;
    {
        const bool branch_taken_0x1694f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694f4) {
            ctx->pc = 0x1694F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1694F4u;
            // 0x1694f8: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169538u;
            goto label_169538;
        }
    }
    ctx->pc = 0x1694FCu;
    // 0x1694fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1694fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x169500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169504: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x169504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169508: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x16950c: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x16950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
    // 0x169510: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x169510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169514: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169518: 0x24422d10  addiu       $v0, $v0, 0x2D10
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
    // 0x16951c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169520: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169524: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x169524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169528: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169528u;
    SET_GPR_U32(ctx, 31, 0x169530u);
    ctx->pc = 0x16952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169528u;
    // 0x16952c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169528u, 0x169530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169530u;
label_169530:
    // 0x169530: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x169530u;
    {
        const bool branch_taken_0x169530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169530u;
        // 0x169534: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169530) {
            ctx->pc = 0x16957Cu;
            goto label_16957c;
        }
    }
    ctx->pc = 0x169538u;
label_169538:
    // 0x169538: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169538u;
    {
        const bool branch_taken_0x169538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169538) {
            ctx->pc = 0x169560u;
            goto label_169560;
        }
    }
    ctx->pc = 0x169540u;
    // 0x169540: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169548: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x16954c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169550: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169550u;
    SET_GPR_U32(ctx, 31, 0x169558u);
    ctx->pc = 0x169554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169550u;
    // 0x169554: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169550u, 0x169558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169558u;
label_169558:
    // 0x169558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169558u;
    {
        const bool branch_taken_0x169558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169558u;
        // 0x16955c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169558) {
            ctx->pc = 0x16957Cu;
            goto label_16957c;
        }
    }
    ctx->pc = 0x169560u;
label_169560:
    // 0x169560: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169568: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x169568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
    // 0x16956c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16956cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169570: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169570u;
    SET_GPR_U32(ctx, 31, 0x169578u);
    ctx->pc = 0x169574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169570u;
    // 0x169574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169570u, 0x169578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169578u;
label_169578:
    // 0x169578: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16957c:
    // 0x16957c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16957cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169588: 0x3e00008  jr          $ra
    ctx->pc = 0x169588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169588u;
        // 0x16958c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169590u;
}
