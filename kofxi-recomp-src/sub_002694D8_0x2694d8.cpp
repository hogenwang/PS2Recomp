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

// Function: sub_002694D8
// Address: 0x2694d8 - 0x2695d0
void sub_002694D8_0x2694d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002694D8_0x2694d8");
#endif

    switch (ctx->pc) {
        case 0x2694d8u: goto label_2694d8;
        case 0x2694dcu: goto label_2694dc;
        case 0x2694e0u: goto label_2694e0;
        case 0x2694e4u: goto label_2694e4;
        case 0x2694e8u: goto label_2694e8;
        case 0x2694ecu: goto label_2694ec;
        case 0x2694f0u: goto label_2694f0;
        case 0x2694f4u: goto label_2694f4;
        case 0x2694f8u: goto label_2694f8;
        case 0x2694fcu: goto label_2694fc;
        case 0x269500u: goto label_269500;
        case 0x269504u: goto label_269504;
        case 0x269508u: goto label_269508;
        case 0x26950cu: goto label_26950c;
        case 0x269510u: goto label_269510;
        case 0x269514u: goto label_269514;
        case 0x269518u: goto label_269518;
        case 0x26951cu: goto label_26951c;
        case 0x269520u: goto label_269520;
        case 0x269524u: goto label_269524;
        case 0x269528u: goto label_269528;
        case 0x26952cu: goto label_26952c;
        case 0x269530u: goto label_269530;
        case 0x269534u: goto label_269534;
        case 0x269538u: goto label_269538;
        case 0x26953cu: goto label_26953c;
        case 0x269540u: goto label_269540;
        case 0x269544u: goto label_269544;
        case 0x269548u: goto label_269548;
        case 0x26954cu: goto label_26954c;
        case 0x269550u: goto label_269550;
        case 0x269554u: goto label_269554;
        case 0x269558u: goto label_269558;
        case 0x26955cu: goto label_26955c;
        case 0x269560u: goto label_269560;
        case 0x269564u: goto label_269564;
        case 0x269568u: goto label_269568;
        case 0x26956cu: goto label_26956c;
        case 0x269570u: goto label_269570;
        case 0x269574u: goto label_269574;
        case 0x269578u: goto label_269578;
        case 0x26957cu: goto label_26957c;
        case 0x269580u: goto label_269580;
        case 0x269584u: goto label_269584;
        case 0x269588u: goto label_269588;
        case 0x26958cu: goto label_26958c;
        case 0x269590u: goto label_269590;
        case 0x269594u: goto label_269594;
        case 0x269598u: goto label_269598;
        case 0x26959cu: goto label_26959c;
        case 0x2695a0u: goto label_2695a0;
        case 0x2695a4u: goto label_2695a4;
        case 0x2695a8u: goto label_2695a8;
        case 0x2695acu: goto label_2695ac;
        case 0x2695b0u: goto label_2695b0;
        case 0x2695b4u: goto label_2695b4;
        case 0x2695b8u: goto label_2695b8;
        case 0x2695bcu: goto label_2695bc;
        case 0x2695c0u: goto label_2695c0;
        case 0x2695c4u: goto label_2695c4;
        case 0x2695c8u: goto label_2695c8;
        case 0x2695ccu: goto label_2695cc;
        default: break;
    }

    ctx->pc = 0x2694d8u;

label_2694d8:
    // 0x2694d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2694d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2694dc:
    // 0x2694dc: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x2694dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2694e0:
    // 0x2694e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2694e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2694e4:
    // 0x2694e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2694e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2694e8:
    // 0x2694e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2694e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2694ec:
    // 0x2694ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2694ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2694f0:
    // 0x2694f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2694f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2694f4:
    // 0x2694f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2694f8:
    if (ctx->pc == 0x2694F8u) {
        ctx->pc = 0x2694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694F4u;
        // 0x2694f8: 0x8e3201b8  lw          $s2, 0x1B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694FCu;
        goto label_2694fc;
    }
    ctx->pc = 0x2694F4u;
    {
        const bool branch_taken_0x2694f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694F4u;
        // 0x2694f8: 0x8e3201b8  lw          $s2, 0x1B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694f4) {
            ctx->pc = 0x269568u;
            goto label_269568;
        }
    }
    ctx->pc = 0x2694FCu;
label_2694fc:
    // 0x2694fc: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x2694fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_269500:
    // 0x269500: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_269504:
    if (ctx->pc == 0x269504u) {
        ctx->pc = 0x269504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269500u;
        // 0x269504: 0x262408c4  addiu       $a0, $s1, 0x8C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269508u;
        goto label_269508;
    }
    ctx->pc = 0x269500u;
    {
        const bool branch_taken_0x269500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269500) {
            ctx->pc = 0x269504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269500u;
            // 0x269504: 0x262408c4  addiu       $a0, $s1, 0x8C4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2244));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26956Cu;
            goto label_26956c;
        }
    }
    ctx->pc = 0x269508u;
label_269508:
    // 0x269508: 0xc09baf4  jal         func_26EBD0
label_26950c:
    if (ctx->pc == 0x26950Cu) {
        ctx->pc = 0x269510u;
        goto label_269510;
    }
    ctx->pc = 0x269508u;
    SET_GPR_U32(ctx, 31, 0x269510u);
    ctx->pc = 0x26EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EBD0u, 0x269508u, 0x269510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269510u;
label_269510:
    // 0x269510: 0x4420016  bltzl       $v0, . + 4 + (0x16 << 2)
label_269514:
    if (ctx->pc == 0x269514u) {
        ctx->pc = 0x269514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269510u;
        // 0x269514: 0x262408c4  addiu       $a0, $s1, 0x8C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269518u;
        goto label_269518;
    }
    ctx->pc = 0x269510u;
    {
        const bool branch_taken_0x269510 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x269510) {
            ctx->pc = 0x269514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269510u;
            // 0x269514: 0x262408c4  addiu       $a0, $s1, 0x8C4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2244));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26956Cu;
            goto label_26956c;
        }
    }
    ctx->pc = 0x269518u;
label_269518:
    // 0x269518: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x269518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_26951c:
    // 0x26951c: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x26951cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_269520:
    // 0x269520: 0xc09b08c  jal         func_26C230
label_269524:
    if (ctx->pc == 0x269524u) {
        ctx->pc = 0x269524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269520u;
        // 0x269524: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269528u;
        goto label_269528;
    }
    ctx->pc = 0x269520u;
    SET_GPR_U32(ctx, 31, 0x269528u);
    ctx->pc = 0x269524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269520u;
    // 0x269524: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C230u, 0x269520u, 0x269528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269528u;
label_269528:
    // 0x269528: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x269528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_26952c:
    // 0x26952c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_269530:
    // 0x269530: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x269530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_269534:
    // 0x269534: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x269534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_269538:
    // 0x269538: 0x886403eb  lwl         $a0, 0x3EB($v1)
    ctx->pc = 0x269538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 1003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26953c:
    // 0x26953c: 0x986403e8  lwr         $a0, 0x3E8($v1)
    ctx->pc = 0x26953cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 1000); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269540:
    // 0x269540: 0x261080a8  addiu       $s0, $s0, -0x7F58
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934696));
label_269544:
    // 0x269544: 0xc0990d8  jal         func_264360
label_269548:
    if (ctx->pc == 0x269548u) {
        ctx->pc = 0x269548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269544u;
        // 0x269548: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26954Cu;
        goto label_26954c;
    }
    ctx->pc = 0x269544u;
    SET_GPR_U32(ctx, 31, 0x26954Cu);
    ctx->pc = 0x269548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269544u;
    // 0x269548: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x269544u, 0x26954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26954Cu;
label_26954c:
    // 0x26954c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26954cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269550:
    // 0x269550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269554:
    // 0x269554: 0xc08b5ac  jal         func_22D6B0
label_269558:
    if (ctx->pc == 0x269558u) {
        ctx->pc = 0x269558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269554u;
        // 0x269558: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26955Cu;
        goto label_26955c;
    }
    ctx->pc = 0x269554u;
    SET_GPR_U32(ctx, 31, 0x26955Cu);
    ctx->pc = 0x269558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269554u;
    // 0x269558: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x269554u, 0x26955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26955Cu;
label_26955c:
    // 0x26955c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_269560:
    // 0x269560: 0xc043736  jal         func_10DCD8
label_269564:
    if (ctx->pc == 0x269564u) {
        ctx->pc = 0x269564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269560u;
        // 0x269564: 0x348486a0  ori         $a0, $a0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269568u;
        goto label_269568;
    }
    ctx->pc = 0x269560u;
    SET_GPR_U32(ctx, 31, 0x269568u);
    ctx->pc = 0x269564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269560u;
    // 0x269564: 0x348486a0  ori         $a0, $a0, 0x86A0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x269560u, 0x269568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269568u;
label_269568:
    // 0x269568: 0x262408c4  addiu       $a0, $s1, 0x8C4
    ctx->pc = 0x269568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2244));
label_26956c:
    // 0x26956c: 0xc09a2ca  jal         func_268B28
label_269570:
    if (ctx->pc == 0x269570u) {
        ctx->pc = 0x269570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26956Cu;
        // 0x269570: 0x262508ca  addiu       $a1, $s1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269574u;
        goto label_269574;
    }
    ctx->pc = 0x26956Cu;
    SET_GPR_U32(ctx, 31, 0x269574u);
    ctx->pc = 0x269570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26956Cu;
    // 0x269570: 0x262508ca  addiu       $a1, $s1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268B28u, 0x26956Cu, 0x269574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269574u;
label_269574:
    // 0x269574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269578:
    // 0x269578: 0xc09ae2a  jal         func_26B8A8
label_26957c:
    if (ctx->pc == 0x26957Cu) {
        ctx->pc = 0x26957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269578u;
        // 0x26957c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269580u;
        goto label_269580;
    }
    ctx->pc = 0x269578u;
    SET_GPR_U32(ctx, 31, 0x269580u);
    ctx->pc = 0x26957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269578u;
    // 0x26957c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8A8u, 0x269578u, 0x269580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269580u;
label_269580:
    // 0x269580: 0xc09a50a  jal         func_269428
label_269584:
    if (ctx->pc == 0x269584u) {
        ctx->pc = 0x269584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269580u;
        // 0x269584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269588u;
        goto label_269588;
    }
    ctx->pc = 0x269580u;
    SET_GPR_U32(ctx, 31, 0x269588u);
    ctx->pc = 0x269584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269580u;
    // 0x269584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269428u, 0x269580u, 0x269588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269588u;
label_269588:
    // 0x269588: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x269588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_26958c:
    // 0x26958c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_269590:
    if (ctx->pc == 0x269590u) {
        ctx->pc = 0x269590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26958Cu;
        // 0x269590: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269594u;
        goto label_269594;
    }
    ctx->pc = 0x26958Cu;
    {
        const bool branch_taken_0x26958c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26958Cu;
        // 0x269590: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26958c) {
            ctx->pc = 0x2695A8u;
            goto label_2695a8;
        }
    }
    ctx->pc = 0x269594u;
label_269594:
    // 0x269594: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x269594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_269598:
    // 0x269598: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x269598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_26959c:
    // 0x26959c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26959cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2695a0:
    // 0x2695a0: 0x40f809  jalr        $v0
label_2695a4:
    if (ctx->pc == 0x2695A4u) {
        ctx->pc = 0x2695A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695A0u;
        // 0x2695a4: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695A8u;
        goto label_2695a8;
    }
    ctx->pc = 0x2695A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2695A8u);
        ctx->pc = 0x2695A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695A0u;
        // 0x2695a4: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2695A0u, 0x2695A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2695A8u;
label_2695a8:
    // 0x2695a8: 0xc0432d4  jal         func_10CB50
label_2695ac:
    if (ctx->pc == 0x2695ACu) {
        ctx->pc = 0x2695B0u;
        goto label_2695b0;
    }
    ctx->pc = 0x2695A8u;
    SET_GPR_U32(ctx, 31, 0x2695B0u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x2695A8u, 0x2695B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695B0u;
label_2695b0:
    // 0x2695b0: 0xc097360  jal         func_25CD80
label_2695b4:
    if (ctx->pc == 0x2695B4u) {
        ctx->pc = 0x2695B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695B0u;
        // 0x2695b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695B8u;
        goto label_2695b8;
    }
    ctx->pc = 0x2695B0u;
    SET_GPR_U32(ctx, 31, 0x2695B8u);
    ctx->pc = 0x2695B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695B0u;
    // 0x2695b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x2695B0u, 0x2695B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695B8u;
label_2695b8:
    // 0x2695b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2695b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2695bc:
    // 0x2695bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2695bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2695c0:
    // 0x2695c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2695c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2695c4:
    // 0x2695c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2695c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2695c8:
    // 0x2695c8: 0x80432a8  j           func_10CAA0
label_2695cc:
    if (ctx->pc == 0x2695CCu) {
        ctx->pc = 0x2695CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695C8u;
        // 0x2695cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695D0u;
        goto label_fallthrough_0x2695c8;
    }
    ctx->pc = 0x2695C8u;
    ctx->pc = 0x2695CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695C8u;
    // 0x2695cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
label_fallthrough_0x2695c8:
    ctx->pc = 0x2695D0u;
}
