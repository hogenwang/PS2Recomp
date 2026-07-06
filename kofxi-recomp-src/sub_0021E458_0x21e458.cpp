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

// Function: sub_0021E458
// Address: 0x21e458 - 0x21e5b8
void sub_0021E458_0x21e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E458_0x21e458");
#endif

    switch (ctx->pc) {
        case 0x21e4a8u: goto label_21e4a8;
        case 0x21e4c4u: goto label_21e4c4;
        case 0x21e4d0u: goto label_21e4d0;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e508u: goto label_21e508;
        case 0x21e53cu: goto label_21e53c;
        case 0x21e568u: goto label_21e568;
        case 0x21e5acu: goto label_21e5ac;
        default: break;
    }

    ctx->pc = 0x21e458u;

    // 0x21e458: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x21e458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x21e45c: 0xffb00420  sd          $s0, 0x420($sp)
    ctx->pc = 0x21e45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 16));
    // 0x21e460: 0xffb40440  sd          $s4, 0x440($sp)
    ctx->pc = 0x21e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 20));
    // 0x21e464: 0xffb70458  sd          $s7, 0x458($sp)
    ctx->pc = 0x21e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 23));
    // 0x21e468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e46c: 0xffbe0460  sd          $fp, 0x460($sp)
    ctx->pc = 0x21e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 30));
    // 0x21e470: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x21e470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e474: 0xffb10428  sd          $s1, 0x428($sp)
    ctx->pc = 0x21e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 17));
    // 0x21e478: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x21e478u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e47c: 0xffb30438  sd          $s3, 0x438($sp)
    ctx->pc = 0x21e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 19));
    // 0x21e480: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x21e480u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e484: 0xffb50448  sd          $s5, 0x448($sp)
    ctx->pc = 0x21e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 21));
    // 0x21e488: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x21e488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e48c: 0xffb60450  sd          $s6, 0x450($sp)
    ctx->pc = 0x21e48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 22));
    // 0x21e490: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21e490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e494: 0xafa60410  sw          $a2, 0x410($sp)
    ctx->pc = 0x21e494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 6));
    // 0x21e498: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x21e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x21e49c: 0xffbf0468  sd          $ra, 0x468($sp)
    ctx->pc = 0x21e49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 31));
    // 0x21e4a0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x21E4A0u;
    SET_GPR_U32(ctx, 31, 0x21E4A8u);
    ctx->pc = 0x21E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E4A0u;
    // 0x21e4a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x21E4A0u, 0x21E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4A8u;
label_21e4a8:
    // 0x21e4a8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e4ac: 0x8fa60410  lw          $a2, 0x410($sp)
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x21e4b0: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21e4b4: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    // 0x21e4b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e4bc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21E4BCu;
    SET_GPR_U32(ctx, 31, 0x21E4C4u);
    ctx->pc = 0x21E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E4BCu;
    // 0x21e4c0: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21E4BCu, 0x21E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4C4u;
label_21e4c4:
    // 0x21e4c4: 0x680002b  bltz        $s4, . + 4 + (0x2B << 2)
    ctx->pc = 0x21E4C4u;
    {
        const bool branch_taken_0x21e4c4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x21E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4C4u;
        // 0x21e4c8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4c4) {
            ctx->pc = 0x21E574u;
            goto label_21e574;
        }
    }
    ctx->pc = 0x21E4CCu;
    // 0x21e4cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e4d0:
    // 0x21e4d0: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E4D0u;
    SET_GPR_U32(ctx, 31, 0x21E4D8u);
    ctx->pc = 0x21E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E4D0u;
    // 0x21e4d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x21E4D0u, 0x21E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4D8u;
label_21e4d8:
    // 0x21e4d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e4dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e4e0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21E4E0u;
    {
        const bool branch_taken_0x21e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4E0u;
        // 0x21e4e4: 0x55782b  sltu        $t7, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4e0) {
            ctx->pc = 0x21E570u;
            goto label_21e570;
        }
    }
    ctx->pc = 0x21E4E8u;
    // 0x21e4e8: 0x11e00022  beqz        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x21E4E8u;
    {
        const bool branch_taken_0x21e4e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4E8u;
        // 0x21e4ec: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4e8) {
            ctx->pc = 0x21E574u;
            goto label_21e574;
        }
    }
    ctx->pc = 0x21E4F0u;
    // 0x21e4f0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x21E4F0u;
    SET_GPR_U32(ctx, 31, 0x21E4F8u);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x21E4F0u, 0x21E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4F8u;
label_21e4f8:
    // 0x21e4f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x21e4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21e4fc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x21e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x21e500: 0xc04a726  jal         func_129C98
    ctx->pc = 0x21E500u;
    SET_GPR_U32(ctx, 31, 0x21E508u);
    ctx->pc = 0x21E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E500u;
    // 0x21e504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x21E500u, 0x21E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E508u;
label_21e508:
    // 0x21e508: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21e508u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21e50c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e510: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x21e510u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21e514: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e518: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e51c: 0x25c61c08  addiu       $a2, $t6, 0x1C08
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 7176));
    // 0x21e520: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E520u;
    {
        const bool branch_taken_0x21e520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E520u;
        // 0x21e524: 0x235782b  sltu        $t7, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e520) {
            ctx->pc = 0x21E570u;
            goto label_21e570;
        }
    }
    ctx->pc = 0x21E528u;
    // 0x21e528: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E528u;
    {
        const bool branch_taken_0x21e528 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E528u;
        // 0x21e52c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e528) {
            ctx->pc = 0x21E574u;
            goto label_21e574;
        }
    }
    ctx->pc = 0x21E530u;
    // 0x21e530: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x21e530u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e534: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21E534u;
    SET_GPR_U32(ctx, 31, 0x21E53Cu);
    ctx->pc = 0x21E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E534u;
    // 0x21e538: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21E534u, 0x21E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E53Cu;
label_21e53c:
    // 0x21e53c: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21e540: 0x8fa50410  lw          $a1, 0x410($sp)
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x21e544: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21e544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e548: 0x274782a  slt         $t7, $s3, $s4
    ctx->pc = 0x21e548u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x21e54c: 0x25c41c10  addiu       $a0, $t6, 0x1C10
    ctx->pc = 0x21e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 7184));
    // 0x21e550: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x21e550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e554: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E554u;
    {
        const bool branch_taken_0x21e554 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E554u;
        // 0x21e558: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e554) {
            ctx->pc = 0x21E5A4u;
            goto label_21e5a4;
        }
    }
    ctx->pc = 0x21E55Cu;
    // 0x21e55c: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x21e55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21e560: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21e560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21e564: 0x293782a  slt         $t7, $s4, $s3
    ctx->pc = 0x21e564u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_21e568:
    // 0x21e568: 0x51e0ffd9  beql        $t7, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x21E568u;
    {
        const bool branch_taken_0x21e568 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e568) {
            ctx->pc = 0x21E56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E568u;
            // 0x21e56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E4D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e4d0;
        }
    }
    ctx->pc = 0x21E570u;
label_21e570:
    // 0x21e570: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x21e570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21e574:
    // 0x21e574: 0xdfb00420  ld          $s0, 0x420($sp)
    ctx->pc = 0x21e574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x21e578: 0xdfb10428  ld          $s1, 0x428($sp)
    ctx->pc = 0x21e578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x21e57c: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x21e57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x21e580: 0xdfb30438  ld          $s3, 0x438($sp)
    ctx->pc = 0x21e580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x21e584: 0xdfb40440  ld          $s4, 0x440($sp)
    ctx->pc = 0x21e584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x21e588: 0xdfb50448  ld          $s5, 0x448($sp)
    ctx->pc = 0x21e588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x21e58c: 0xdfb60450  ld          $s6, 0x450($sp)
    ctx->pc = 0x21e58cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x21e590: 0xdfb70458  ld          $s7, 0x458($sp)
    ctx->pc = 0x21e590u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x21e594: 0xdfbe0460  ld          $fp, 0x460($sp)
    ctx->pc = 0x21e594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x21e598: 0xdfbf0468  ld          $ra, 0x468($sp)
    ctx->pc = 0x21e598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x21e59c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E59Cu;
        // 0x21e5a0: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E5A4u;
label_21e5a4:
    // 0x21e5a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21E5A4u;
    SET_GPR_U32(ctx, 31, 0x21E5ACu);
    ctx->pc = 0x21E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5A4u;
    // 0x21e5a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21E5A4u, 0x21E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5ACu;
label_21e5ac:
    // 0x21e5ac: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x21E5ACu;
    {
        const bool branch_taken_0x21e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5ACu;
        // 0x21e5b0: 0x293782a  slt         $t7, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5ac) {
            ctx->pc = 0x21E568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e568;
        }
    }
    ctx->pc = 0x21E5B4u;
    // 0x21e5b4: 0x0  nop
    ctx->pc = 0x21e5b4u;
    // NOP
    if (ctx->pc == 0x21e5b4u) { ctx->pc = 0x21e5b8u; }
}
