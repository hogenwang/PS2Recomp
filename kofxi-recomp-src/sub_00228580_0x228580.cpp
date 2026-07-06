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

// Function: sub_00228580
// Address: 0x228580 - 0x228738
void sub_00228580_0x228580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228580_0x228580");
#endif

    switch (ctx->pc) {
        case 0x228580u: goto label_228580;
        case 0x228584u: goto label_228584;
        case 0x228588u: goto label_228588;
        case 0x22858cu: goto label_22858c;
        case 0x228590u: goto label_228590;
        case 0x228594u: goto label_228594;
        case 0x228598u: goto label_228598;
        case 0x22859cu: goto label_22859c;
        case 0x2285a0u: goto label_2285a0;
        case 0x2285a4u: goto label_2285a4;
        case 0x2285a8u: goto label_2285a8;
        case 0x2285acu: goto label_2285ac;
        case 0x2285b0u: goto label_2285b0;
        case 0x2285b4u: goto label_2285b4;
        case 0x2285b8u: goto label_2285b8;
        case 0x2285bcu: goto label_2285bc;
        case 0x2285c0u: goto label_2285c0;
        case 0x2285c4u: goto label_2285c4;
        case 0x2285c8u: goto label_2285c8;
        case 0x2285ccu: goto label_2285cc;
        case 0x2285d0u: goto label_2285d0;
        case 0x2285d4u: goto label_2285d4;
        case 0x2285d8u: goto label_2285d8;
        case 0x2285dcu: goto label_2285dc;
        case 0x2285e0u: goto label_2285e0;
        case 0x2285e4u: goto label_2285e4;
        case 0x2285e8u: goto label_2285e8;
        case 0x2285ecu: goto label_2285ec;
        case 0x2285f0u: goto label_2285f0;
        case 0x2285f4u: goto label_2285f4;
        case 0x2285f8u: goto label_2285f8;
        case 0x2285fcu: goto label_2285fc;
        case 0x228600u: goto label_228600;
        case 0x228604u: goto label_228604;
        case 0x228608u: goto label_228608;
        case 0x22860cu: goto label_22860c;
        case 0x228610u: goto label_228610;
        case 0x228614u: goto label_228614;
        case 0x228618u: goto label_228618;
        case 0x22861cu: goto label_22861c;
        case 0x228620u: goto label_228620;
        case 0x228624u: goto label_228624;
        case 0x228628u: goto label_228628;
        case 0x22862cu: goto label_22862c;
        case 0x228630u: goto label_228630;
        case 0x228634u: goto label_228634;
        case 0x228638u: goto label_228638;
        case 0x22863cu: goto label_22863c;
        case 0x228640u: goto label_228640;
        case 0x228644u: goto label_228644;
        case 0x228648u: goto label_228648;
        case 0x22864cu: goto label_22864c;
        case 0x228650u: goto label_228650;
        case 0x228654u: goto label_228654;
        case 0x228658u: goto label_228658;
        case 0x22865cu: goto label_22865c;
        case 0x228660u: goto label_228660;
        case 0x228664u: goto label_228664;
        case 0x228668u: goto label_228668;
        case 0x22866cu: goto label_22866c;
        case 0x228670u: goto label_228670;
        case 0x228674u: goto label_228674;
        case 0x228678u: goto label_228678;
        case 0x22867cu: goto label_22867c;
        case 0x228680u: goto label_228680;
        case 0x228684u: goto label_228684;
        case 0x228688u: goto label_228688;
        case 0x22868cu: goto label_22868c;
        case 0x228690u: goto label_228690;
        case 0x228694u: goto label_228694;
        case 0x228698u: goto label_228698;
        case 0x22869cu: goto label_22869c;
        case 0x2286a0u: goto label_2286a0;
        case 0x2286a4u: goto label_2286a4;
        case 0x2286a8u: goto label_2286a8;
        case 0x2286acu: goto label_2286ac;
        case 0x2286b0u: goto label_2286b0;
        case 0x2286b4u: goto label_2286b4;
        case 0x2286b8u: goto label_2286b8;
        case 0x2286bcu: goto label_2286bc;
        case 0x2286c0u: goto label_2286c0;
        case 0x2286c4u: goto label_2286c4;
        case 0x2286c8u: goto label_2286c8;
        case 0x2286ccu: goto label_2286cc;
        case 0x2286d0u: goto label_2286d0;
        case 0x2286d4u: goto label_2286d4;
        case 0x2286d8u: goto label_2286d8;
        case 0x2286dcu: goto label_2286dc;
        case 0x2286e0u: goto label_2286e0;
        case 0x2286e4u: goto label_2286e4;
        case 0x2286e8u: goto label_2286e8;
        case 0x2286ecu: goto label_2286ec;
        case 0x2286f0u: goto label_2286f0;
        case 0x2286f4u: goto label_2286f4;
        case 0x2286f8u: goto label_2286f8;
        case 0x2286fcu: goto label_2286fc;
        case 0x228700u: goto label_228700;
        case 0x228704u: goto label_228704;
        case 0x228708u: goto label_228708;
        case 0x22870cu: goto label_22870c;
        case 0x228710u: goto label_228710;
        case 0x228714u: goto label_228714;
        case 0x228718u: goto label_228718;
        case 0x22871cu: goto label_22871c;
        case 0x228720u: goto label_228720;
        case 0x228724u: goto label_228724;
        case 0x228728u: goto label_228728;
        case 0x22872cu: goto label_22872c;
        case 0x228730u: goto label_228730;
        case 0x228734u: goto label_228734;
        default: break;
    }

    ctx->pc = 0x228580u;

label_228580:
    // 0x228580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_228584:
    // 0x228584: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_228588:
    // 0x228588: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22858c:
    // 0x22858c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22858cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228590:
    // 0x228590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_228594:
    // 0x228594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x228594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_228598:
    // 0x228598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x228598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22859c:
    // 0x22859c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2285a0:
    if (ctx->pc == 0x2285A0u) {
        ctx->pc = 0x2285A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22859Cu;
        // 0x2285a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285A4u;
        goto label_2285a4;
    }
    ctx->pc = 0x22859Cu;
    {
        const bool branch_taken_0x22859c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22859Cu;
        // 0x2285a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22859c) {
            ctx->pc = 0x2285B4u;
            goto label_2285b4;
        }
    }
    ctx->pc = 0x2285A4u;
label_2285a4:
    // 0x2285a4: 0xc08a136  jal         func_2284D8
label_2285a8:
    if (ctx->pc == 0x2285A8u) {
        ctx->pc = 0x2285ACu;
        goto label_2285ac;
    }
    ctx->pc = 0x2285A4u;
    SET_GPR_U32(ctx, 31, 0x2285ACu);
    ctx->pc = 0x2284D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284D8u, 0x2285A4u, 0x2285ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285ACu;
label_2285ac:
    // 0x2285ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2285b0:
    if (ctx->pc == 0x2285B0u) {
        ctx->pc = 0x2285B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285ACu;
        // 0x2285b0: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285B4u;
        goto label_2285b4;
    }
    ctx->pc = 0x2285ACu;
    {
        const bool branch_taken_0x2285ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2285ac) {
            ctx->pc = 0x2285B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2285ACu;
            // 0x2285b0: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2285BCu;
            goto label_2285bc;
        }
    }
    ctx->pc = 0x2285B4u;
label_2285b4:
    // 0x2285b4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2285b8:
    if (ctx->pc == 0x2285B8u) {
        ctx->pc = 0x2285B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285B4u;
        // 0x2285b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285BCu;
        goto label_2285bc;
    }
    ctx->pc = 0x2285B4u;
    {
        const bool branch_taken_0x2285b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285B4u;
        // 0x2285b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285b4) {
            ctx->pc = 0x228620u;
            goto label_228620;
        }
    }
    ctx->pc = 0x2285BCu;
label_2285bc:
    // 0x2285bc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2285bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2285c0:
    // 0x2285c0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2285c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2285c4:
    // 0x2285c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2285c8:
    if (ctx->pc == 0x2285C8u) {
        ctx->pc = 0x2285C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285C4u;
        // 0x2285c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285CCu;
        goto label_2285cc;
    }
    ctx->pc = 0x2285C4u;
    {
        const bool branch_taken_0x2285c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285C4u;
        // 0x2285c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285c4) {
            ctx->pc = 0x228620u;
            goto label_228620;
        }
    }
    ctx->pc = 0x2285CCu;
label_2285cc:
    // 0x2285cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2285ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2285d0:
    // 0x2285d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2285d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2285d4:
    // 0x2285d4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2285d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2285d8:
    // 0x2285d8: 0x14920004  bne         $a0, $s2, . + 4 + (0x4 << 2)
label_2285dc:
    if (ctx->pc == 0x2285DCu) {
        ctx->pc = 0x2285E0u;
        goto label_2285e0;
    }
    ctx->pc = 0x2285D8u;
    {
        const bool branch_taken_0x2285d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x2285d8) {
            ctx->pc = 0x2285ECu;
            goto label_2285ec;
        }
    }
    ctx->pc = 0x2285E0u;
label_2285e0:
    // 0x2285e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2285e4:
    // 0x2285e4: 0x1051000e  beq         $v0, $s1, . + 4 + (0xE << 2)
label_2285e8:
    if (ctx->pc == 0x2285E8u) {
        ctx->pc = 0x2285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285E4u;
        // 0x2285e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285ECu;
        goto label_2285ec;
    }
    ctx->pc = 0x2285E4u;
    {
        const bool branch_taken_0x2285e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285E4u;
        // 0x2285e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285e4) {
            ctx->pc = 0x228620u;
            goto label_228620;
        }
    }
    ctx->pc = 0x2285ECu;
label_2285ec:
    // 0x2285ec: 0x56260008  bnel        $s1, $a2, . + 4 + (0x8 << 2)
label_2285f0:
    if (ctx->pc == 0x2285F0u) {
        ctx->pc = 0x2285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285ECu;
        // 0x2285f0: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285F4u;
        goto label_2285f4;
    }
    ctx->pc = 0x2285ECu;
    {
        const bool branch_taken_0x2285ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x2285ec) {
            ctx->pc = 0x2285F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2285ECu;
            // 0x2285f0: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228610u;
            goto label_228610;
        }
    }
    ctx->pc = 0x2285F4u;
label_2285f4:
    // 0x2285f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2285f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2285f8:
    // 0x2285f8: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
label_2285fc:
    if (ctx->pc == 0x2285FCu) {
        ctx->pc = 0x2285FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285F8u;
        // 0x2285fc: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228600u;
        goto label_228600;
    }
    ctx->pc = 0x2285F8u;
    {
        const bool branch_taken_0x2285f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2285f8) {
            ctx->pc = 0x2285FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2285F8u;
            // 0x2285fc: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228610u;
            goto label_228610;
        }
    }
    ctx->pc = 0x228600u;
label_228600:
    // 0x228600: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x228600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_228604:
    // 0x228604: 0x210100b  movn        $v0, $s0, $s0
    ctx->pc = 0x228604u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_228608:
    // 0x228608: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x228608u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_22860c:
    // 0x22860c: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_228610:
    // 0x228610: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x228610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_228614:
    // 0x228614: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_228618:
    if (ctx->pc == 0x228618u) {
        ctx->pc = 0x228618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228614u;
        // 0x228618: 0x84640008  lh          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22861Cu;
        goto label_22861c;
    }
    ctx->pc = 0x228614u;
    {
        const bool branch_taken_0x228614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228614) {
            ctx->pc = 0x228618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228614u;
            // 0x228618: 0x84640008  lh          $a0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2285D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2285d8;
        }
    }
    ctx->pc = 0x22861Cu;
label_22861c:
    // 0x22861c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22861cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228620:
    // 0x228620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x228620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228624:
    // 0x228624: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228628:
    // 0x228628: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22862c:
    // 0x22862c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22862cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228630:
    // 0x228630: 0x3e00008  jr          $ra
label_228634:
    if (ctx->pc == 0x228634u) {
        ctx->pc = 0x228634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228630u;
        // 0x228634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228638u;
        goto label_228638;
    }
    ctx->pc = 0x228630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228630u;
        // 0x228634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228638u;
label_228638:
    // 0x228638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x228638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22863c:
    // 0x22863c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_228640:
    // 0x228640: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x228640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_228644:
    // 0x228644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x228644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228648:
    // 0x228648: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x228648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22864c:
    // 0x22864c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x22864cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_228650:
    // 0x228650: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_228654:
    // 0x228654: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x228654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_228658:
    // 0x228658: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22865c:
    // 0x22865c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22865cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_228660:
    // 0x228660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_228664:
    // 0x228664: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x228664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_228668:
    // 0x228668: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x228668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22866c:
    // 0x22866c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x22866cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_228670:
    // 0x228670: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_228674:
    if (ctx->pc == 0x228674u) {
        ctx->pc = 0x228674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228670u;
        // 0x228674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228678u;
        goto label_228678;
    }
    ctx->pc = 0x228670u;
    {
        const bool branch_taken_0x228670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228670u;
        // 0x228674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228670) {
            ctx->pc = 0x2286ACu;
            goto label_2286ac;
        }
    }
    ctx->pc = 0x228678u;
label_228678:
    // 0x228678: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x228678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22867c:
    // 0x22867c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_228680:
    if (ctx->pc == 0x228680u) {
        ctx->pc = 0x228684u;
        goto label_228684;
    }
    ctx->pc = 0x22867Cu;
    {
        const bool branch_taken_0x22867c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22867c) {
            ctx->pc = 0x22868Cu;
            goto label_22868c;
        }
    }
    ctx->pc = 0x228684u;
label_228684:
    // 0x228684: 0x10000023  b           . + 4 + (0x23 << 2)
label_228688:
    if (ctx->pc == 0x228688u) {
        ctx->pc = 0x228688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228684u;
        // 0x228688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22868Cu;
        goto label_22868c;
    }
    ctx->pc = 0x228684u;
    {
        const bool branch_taken_0x228684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228684u;
        // 0x228688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228684) {
            ctx->pc = 0x228714u;
            goto label_228714;
        }
    }
    ctx->pc = 0x22868Cu;
label_22868c:
    // 0x22868c: 0xc08a136  jal         func_2284D8
label_228690:
    if (ctx->pc == 0x228690u) {
        ctx->pc = 0x228694u;
        goto label_228694;
    }
    ctx->pc = 0x22868Cu;
    SET_GPR_U32(ctx, 31, 0x228694u);
    ctx->pc = 0x2284D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284D8u, 0x22868Cu, 0x228694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228694u;
label_228694:
    // 0x228694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x228694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228698:
    // 0x228698: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_22869c:
    if (ctx->pc == 0x22869Cu) {
        ctx->pc = 0x22869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228698u;
        // 0x22869c: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286A0u;
        goto label_2286a0;
    }
    ctx->pc = 0x228698u;
    {
        const bool branch_taken_0x228698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228698u;
        // 0x22869c: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228698) {
            ctx->pc = 0x228714u;
            goto label_228714;
        }
    }
    ctx->pc = 0x2286A0u;
label_2286a0:
    // 0x2286a0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2286a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2286a4:
    // 0x2286a4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2286a8:
    if (ctx->pc == 0x2286A8u) {
        ctx->pc = 0x2286A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286A4u;
        // 0x2286a8: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286ACu;
        goto label_2286ac;
    }
    ctx->pc = 0x2286A4u;
    {
        const bool branch_taken_0x2286a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2286a4) {
            ctx->pc = 0x2286A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2286A4u;
            // 0x2286a8: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2286D8u;
            goto label_2286d8;
        }
    }
    ctx->pc = 0x2286ACu;
label_2286ac:
    // 0x2286ac: 0x10000019  b           . + 4 + (0x19 << 2)
label_2286b0:
    if (ctx->pc == 0x2286B0u) {
        ctx->pc = 0x2286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286ACu;
        // 0x2286b0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286B4u;
        goto label_2286b4;
    }
    ctx->pc = 0x2286ACu;
    {
        const bool branch_taken_0x2286ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286ACu;
        // 0x2286b0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286ac) {
            ctx->pc = 0x228714u;
            goto label_228714;
        }
    }
    ctx->pc = 0x2286B4u;
label_2286b4:
    // 0x2286b4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2286b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2286b8:
    // 0x2286b8: 0x2625fffe  addiu       $a1, $s1, -0x2
    ctx->pc = 0x2286b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_2286bc:
    // 0x2286bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2286bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2286c0:
    // 0x2286c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2286c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2286c4:
    // 0x2286c4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2286c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2286c8:
    // 0x2286c8: 0x40f809  jalr        $v0
label_2286cc:
    if (ctx->pc == 0x2286CCu) {
        ctx->pc = 0x2286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286C8u;
        // 0x2286cc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286D0u;
        goto label_2286d0;
    }
    ctx->pc = 0x2286C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2286D0u);
        ctx->pc = 0x2286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286C8u;
        // 0x2286cc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2286C8u, 0x2286D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2286D0u;
label_2286d0:
    // 0x2286d0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2286d4:
    if (ctx->pc == 0x2286D4u) {
        ctx->pc = 0x2286D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286D0u;
        // 0x2286d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286D8u;
        goto label_2286d8;
    }
    ctx->pc = 0x2286D0u;
    {
        const bool branch_taken_0x2286d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286D0u;
        // 0x2286d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286d0) {
            ctx->pc = 0x228718u;
            goto label_228718;
        }
    }
    ctx->pc = 0x2286D8u;
label_2286d8:
    // 0x2286d8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2286d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2286dc:
    // 0x2286dc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2286dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2286e0:
    // 0x2286e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2286e4:
    if (ctx->pc == 0x2286E4u) {
        ctx->pc = 0x2286E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286E0u;
        // 0x2286e4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286E8u;
        goto label_2286e8;
    }
    ctx->pc = 0x2286E0u;
    {
        const bool branch_taken_0x2286e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286E0u;
        // 0x2286e4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286e0) {
            ctx->pc = 0x228710u;
            goto label_228710;
        }
    }
    ctx->pc = 0x2286E8u;
label_2286e8:
    // 0x2286e8: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x2286e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2286ec:
    // 0x2286ec: 0x0  nop
    ctx->pc = 0x2286ecu;
    // NOP
label_2286f0:
    // 0x2286f0: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
label_2286f4:
    if (ctx->pc == 0x2286F4u) {
        ctx->pc = 0x2286F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286F0u;
        // 0x2286f4: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286F8u;
        goto label_2286f8;
    }
    ctx->pc = 0x2286F0u;
    {
        const bool branch_taken_0x2286f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2286f0) {
            ctx->pc = 0x2286F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2286F0u;
            // 0x2286f4: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228704u;
            goto label_228704;
        }
    }
    ctx->pc = 0x2286F8u;
label_2286f8:
    // 0x2286f8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2286f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2286fc:
    // 0x2286fc: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_228700:
    if (ctx->pc == 0x228700u) {
        ctx->pc = 0x228700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286FCu;
        // 0x228700: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228704u;
        goto label_228704;
    }
    ctx->pc = 0x2286FCu;
    {
        const bool branch_taken_0x2286fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286FCu;
        // 0x228700: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286fc) {
            ctx->pc = 0x2286B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2286b4;
        }
    }
    ctx->pc = 0x228704u;
label_228704:
    // 0x228704: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x228704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_228708:
    // 0x228708: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_22870c:
    if (ctx->pc == 0x22870Cu) {
        ctx->pc = 0x22870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228708u;
        // 0x22870c: 0x84620008  lh          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228710u;
        goto label_228710;
    }
    ctx->pc = 0x228708u;
    {
        const bool branch_taken_0x228708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228708) {
            ctx->pc = 0x22870Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228708u;
            // 0x22870c: 0x84620008  lh          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2286F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2286f0;
        }
    }
    ctx->pc = 0x228710u;
label_228710:
    // 0x228710: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x228710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_228714:
    // 0x228714: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x228714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_228718:
    // 0x228718: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x228718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22871c:
    // 0x22871c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22871cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_228720:
    // 0x228720: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228724:
    // 0x228724: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228728:
    // 0x228728: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22872c:
    // 0x22872c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22872cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228730:
    // 0x228730: 0x3e00008  jr          $ra
label_228734:
    if (ctx->pc == 0x228734u) {
        ctx->pc = 0x228734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228730u;
        // 0x228734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228738u;
        goto label_fallthrough_0x228730;
    }
    ctx->pc = 0x228730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228730u;
        // 0x228734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228730:
    ctx->pc = 0x228738u;
}
