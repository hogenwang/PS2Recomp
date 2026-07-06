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

// Function: sub_001250F0
// Address: 0x1250f0 - 0x1253d0
void sub_001250F0_0x1250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001250F0_0x1250f0");
#endif

    switch (ctx->pc) {
        case 0x125114u: goto label_125114;
        case 0x1251a0u: goto label_1251a0;
        case 0x1251e4u: goto label_1251e4;
        case 0x125228u: goto label_125228;
        case 0x125288u: goto label_125288;
        case 0x1252a8u: goto label_1252a8;
        case 0x1252f0u: goto label_1252f0;
        case 0x125318u: goto label_125318;
        case 0x125390u: goto label_125390;
        default: break;
    }

    ctx->pc = 0x1250f0u;

    // 0x1250f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1250f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1250f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1250f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1250f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1250fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1250fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125100: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125104: 0x10a000ac  beqz        $a1, . + 4 + (0xAC << 2)
    ctx->pc = 0x125104u;
    {
        const bool branch_taken_0x125104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125104u;
        // 0x125108: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125104) {
            ctx->pc = 0x1253B8u;
            goto label_1253b8;
        }
    }
    ctx->pc = 0x12510Cu;
    // 0x12510c: 0xc049ce6  jal         func_127398
    ctx->pc = 0x12510Cu;
    SET_GPR_U32(ctx, 31, 0x125114u);
    ctx->pc = 0x127398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127398u, 0x12510Cu, 0x125114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125114u;
label_125114:
    // 0x125114: 0x2607fff8  addiu       $a3, $s0, -0x8
    ctx->pc = 0x125114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x125118: 0x240efffe  addiu       $t6, $zero, -0x2
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12511c: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x125120: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x125120u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x125124: 0x25e6bdf8  addiu       $a2, $t7, -0x4208
    ctx->pc = 0x125124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x125128: 0x16e4824  and         $t1, $t3, $t6
    ctx->pc = 0x125128u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x12512c: 0x8ccd0008  lw          $t5, 0x8($a2)
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x125130: 0xe96021  addu        $t4, $a3, $t1
    ctx->pc = 0x125130u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x125134: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x125134u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125138: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x125138u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x12513c: 0x158d001e  bne         $t4, $t5, . + 4 + (0x1E << 2)
    ctx->pc = 0x12513Cu;
    {
        const bool branch_taken_0x12513c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x125140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12513Cu;
        // 0x125140: 0x1cf4024  and         $t0, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12513c) {
            ctx->pc = 0x1251B8u;
            goto label_1251b8;
        }
    }
    ctx->pc = 0x125144u;
    // 0x125144: 0x316f0001  andi        $t7, $t3, 0x1
    ctx->pc = 0x125144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x125148: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x125148u;
    {
        const bool branch_taken_0x125148 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125148u;
        // 0x12514c: 0x1284821  addu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125148) {
            ctx->pc = 0x12516Cu;
            goto label_12516c;
        }
    }
    ctx->pc = 0x125150u;
    // 0x125150: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x125150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x125154: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x125158: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x125158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12515c: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x12515cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x125160: 0x8ceb0008  lw          $t3, 0x8($a3)
    ctx->pc = 0x125160u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x125164: 0xad4b0008  sw          $t3, 0x8($t2)
    ctx->pc = 0x125164u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 11));
    // 0x125168: 0xad6a000c  sw          $t2, 0xC($t3)
    ctx->pc = 0x125168u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 10));
label_12516c:
    // 0x12516c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x125170: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x125170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x125174: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x125174u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
    // 0x125178: 0xddecc200  ld          $t4, -0x3E00($t7)
    ctx->pc = 0x125178u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 15), 4294951424)));
    // 0x12517c: 0x352d0001  ori         $t5, $t1, 0x1
    ctx->pc = 0x12517cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x125180: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x125180u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x125184: 0x1cc702b  sltu        $t6, $t6, $t4
    ctx->pc = 0x125184u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x125188: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x125188u;
    {
        const bool branch_taken_0x125188 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125188u;
        // 0x12518c: 0xaced0004  sw          $t5, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125188) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x125190u;
    // 0x125190: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x125194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125198: 0xc0494f4  jal         func_1253D0
    ctx->pc = 0x125198u;
    SET_GPR_U32(ctx, 31, 0x1251A0u);
    ctx->pc = 0x12519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125198u;
    // 0x12519c: 0x8de5c208  lw          $a1, -0x3DF8($t7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253D0u, 0x125198u, 0x1251A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251A0u;
label_1251a0:
    // 0x1251a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1251a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1251a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1251a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1251ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1251acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1251b0: 0x8049cfc  j           func_1273F0
    ctx->pc = 0x1251B0u;
    ctx->pc = 0x1251B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251B0u;
    // 0x1251b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    sub_001273F0_0x1273f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1251B8u;
label_1251b8:
    // 0x1251b8: 0xad880004  sw          $t0, 0x4($t4)
    ctx->pc = 0x1251b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 8));
    // 0x1251bc: 0x316f0001  andi        $t7, $t3, 0x1
    ctx->pc = 0x1251bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1251c0: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1251C0u;
    {
        const bool branch_taken_0x1251c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251C0u;
        // 0x1251c4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251c0) {
            ctx->pc = 0x1251E4u;
            goto label_1251e4;
        }
    }
    ctx->pc = 0x1251C8u;
    // 0x1251c8: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x1251cc: 0x24cf0008  addiu       $t7, $a2, 0x8
    ctx->pc = 0x1251ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1251d0: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1251d4: 0x8cee0008  lw          $t6, 0x8($a3)
    ctx->pc = 0x1251d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1251d8: 0x15cf0073  bne         $t6, $t7, . + 4 + (0x73 << 2)
    ctx->pc = 0x1251D8u;
    {
        const bool branch_taken_0x1251d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1251DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251D8u;
        // 0x1251dc: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251d8) {
            ctx->pc = 0x1253A8u;
            goto label_1253a8;
        }
    }
    ctx->pc = 0x1251E0u;
    // 0x1251e0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1251e4:
    // 0x1251e4: 0x1887021  addu        $t6, $t4, $t0
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1251e8: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1251ec: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1251ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1251f0: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x1251F0u;
    {
        const bool branch_taken_0x1251f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251F0u;
        // 0x1251f4: 0x352f0001  ori         $t7, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251f0) {
            ctx->pc = 0x12522Cu;
            goto label_12522c;
        }
    }
    ctx->pc = 0x1251F8u;
    // 0x1251f8: 0x15a00069  bnez        $t5, . + 4 + (0x69 << 2)
    ctx->pc = 0x1251F8u;
    {
        const bool branch_taken_0x1251f8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251F8u;
        // 0x1251fc: 0x1284821  addu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251f8) {
            ctx->pc = 0x1253A0u;
            goto label_1253a0;
        }
    }
    ctx->pc = 0x125200u;
    // 0x125200: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x125204: 0x8d8e0008  lw          $t6, 0x8($t4)
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x125208: 0x25efbe00  addiu       $t7, $t7, -0x4200
    ctx->pc = 0x125208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950400));
    // 0x12520c: 0x55cf0061  bnel        $t6, $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x12520Cu;
    {
        const bool branch_taken_0x12520c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12520c) {
            ctx->pc = 0x125210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12520Cu;
            // 0x125210: 0x8d8a000c  lw          $t2, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125394u;
            goto label_125394;
        }
    }
    ctx->pc = 0x125214u;
    // 0x125214: 0xadc7000c  sw          $a3, 0xC($t6)
    ctx->pc = 0x125214u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 7));
    // 0x125218: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x125218u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12521c: 0xadc70008  sw          $a3, 0x8($t6)
    ctx->pc = 0x12521cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 7));
    // 0x125220: 0xacee000c  sw          $t6, 0xC($a3)
    ctx->pc = 0x125220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 14));
    // 0x125224: 0xacee0008  sw          $t6, 0x8($a3)
    ctx->pc = 0x125224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 14));
label_125228:
    // 0x125228: 0x352f0001  ori         $t7, $t1, 0x1
    ctx->pc = 0x125228u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_12522c:
    // 0x12522c: 0xe97021  addu        $t6, $a3, $t1
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x125230: 0xacef0004  sw          $t7, 0x4($a3)
    ctx->pc = 0x125230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 15));
    // 0x125234: 0x15a0ffda  bnez        $t5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x125234u;
    {
        const bool branch_taken_0x125234 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x125238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125234u;
        // 0x125238: 0xadc90000  sw          $t1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125234) {
            ctx->pc = 0x1251A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1251a0;
        }
    }
    ctx->pc = 0x12523Cu;
    // 0x12523c: 0x2d2f0200  sltiu       $t7, $t1, 0x200
    ctx->pc = 0x12523cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x125240: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x125240u;
    {
        const bool branch_taken_0x125240 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125240u;
        // 0x125244: 0x960c2  srl         $t4, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125240) {
            ctx->pc = 0x125290u;
            goto label_125290;
        }
    }
    ctx->pc = 0x125248u;
    // 0x125248: 0x3c0d0036  lui         $t5, 0x36
    ctx->pc = 0x125248u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)54 << 16));
    // 0x12524c: 0x25adbdf8  addiu       $t5, $t5, -0x4208
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294950392));
    // 0x125250: 0xc78c0  sll         $t7, $t4, 3
    ctx->pc = 0x125250u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x125254: 0x1ed5021  addu        $t2, $t7, $t5
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x125258: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x12525c: 0xc6082  srl         $t4, $t4, 2
    ctx->pc = 0x12525cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 2));
    // 0x125260: 0x8d4b0008  lw          $t3, 0x8($t2)
    ctx->pc = 0x125260u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x125264: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x125264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125268: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x125268u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x12526c: 0x18f7814  dsllv       $t7, $t7, $t4
    ctx->pc = 0x12526cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x125270: 0xaceb0008  sw          $t3, 0x8($a3)
    ctx->pc = 0x125270u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 11));
    // 0x125274: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x125274u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x125278: 0xad67000c  sw          $a3, 0xC($t3)
    ctx->pc = 0x125278u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 7));
    // 0x12527c: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12527cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x125280: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x125280u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x125284: 0xadae0004  sw          $t6, 0x4($t5)
    ctx->pc = 0x125284u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
label_125288:
    // 0x125288: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x125288u;
    {
        const bool branch_taken_0x125288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125288u;
        // 0x12528c: 0xad470008  sw          $a3, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125288) {
            ctx->pc = 0x1251A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1251a0;
        }
    }
    ctx->pc = 0x125290u;
label_125290:
    // 0x125290: 0x97242  srl         $t6, $t1, 9
    ctx->pc = 0x125290u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x125294: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x125294u;
    {
        const bool branch_taken_0x125294 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125294u;
        // 0x125298: 0x2dcf0005  sltiu       $t7, $t6, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125294) {
            ctx->pc = 0x1252A8u;
            goto label_1252a8;
        }
    }
    ctx->pc = 0x12529Cu;
    // 0x12529c: 0x11e00027  beqz        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x12529Cu;
    {
        const bool branch_taken_0x12529c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12529Cu;
        // 0x1252a0: 0x97982  srl         $t7, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12529c) {
            ctx->pc = 0x12533Cu;
            goto label_12533c;
        }
    }
    ctx->pc = 0x1252A4u;
    // 0x1252a4: 0x25ec0038  addiu       $t4, $t7, 0x38
    ctx->pc = 0x1252a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 56));
label_1252a8:
    // 0x1252a8: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1252ac: 0xc70c0  sll         $t6, $t4, 3
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1252b0: 0x25e8bdf8  addiu       $t0, $t7, -0x4208
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x1252b4: 0x1c85021  addu        $t2, $t6, $t0
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1252b8: 0x8d4b0008  lw          $t3, 0x8($t2)
    ctx->pc = 0x1252b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1252bc: 0x556a0010  bnel        $t3, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1252BCu;
    {
        const bool branch_taken_0x1252bc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x1252bc) {
            ctx->pc = 0x1252C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1252BCu;
            // 0x1252c0: 0x8d6f0004  lw          $t7, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125300u;
            goto label_125300;
        }
    }
    ctx->pc = 0x1252C4u;
    // 0x1252c4: 0x258e0003  addiu       $t6, $t4, 0x3
    ctx->pc = 0x1252c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x1252c8: 0x298f0000  slti        $t7, $t4, 0x0
    ctx->pc = 0x1252c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1252cc: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x1252ccu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x1252d0: 0xc6883  sra         $t5, $t4, 2
    ctx->pc = 0x1252d0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 12), 2));
    // 0x1252d4: 0x8d0e0004  lw          $t6, 0x4($t0)
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1252d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1252d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1252dc: 0x1af7814  dsllv       $t7, $t7, $t5
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x1252e0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1252e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1252e4: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1252e4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1252e8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1252e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1252ec: 0xad0e0004  sw          $t6, 0x4($t0)
    ctx->pc = 0x1252ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 14));
label_1252f0:
    // 0x1252f0: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1252f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x1252f4: 0xaceb0008  sw          $t3, 0x8($a3)
    ctx->pc = 0x1252f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 11));
    // 0x1252f8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1252F8u;
    {
        const bool branch_taken_0x1252f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252F8u;
        // 0x1252fc: 0xad67000c  sw          $a3, 0xC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252f8) {
            ctx->pc = 0x125288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125288;
        }
    }
    ctx->pc = 0x125300u;
label_125300:
    // 0x125300: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x125300u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125304: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x125304u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x125308: 0x12f782b  sltu        $t7, $t1, $t7
    ctx->pc = 0x125308u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12530c: 0x51e0fff8  beql        $t7, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12530Cu;
    {
        const bool branch_taken_0x12530c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12530c) {
            ctx->pc = 0x125310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12530Cu;
            // 0x125310: 0x8d6a000c  lw          $t2, 0xC($t3) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1252F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252f0;
        }
    }
    ctx->pc = 0x125314u;
    // 0x125314: 0x8d6b0008  lw          $t3, 0x8($t3)
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_125318:
    // 0x125318: 0x516afff5  beql        $t3, $t2, . + 4 + (-0xB << 2)
    ctx->pc = 0x125318u;
    {
        const bool branch_taken_0x125318 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x125318) {
            ctx->pc = 0x12531Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125318u;
            // 0x12531c: 0x8d6a000c  lw          $t2, 0xC($t3) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1252F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252f0;
        }
    }
    ctx->pc = 0x125320u;
    // 0x125320: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x125320u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x125324: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x125324u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x125328: 0x12f782b  sltu        $t7, $t1, $t7
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12532c: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12532Cu;
    {
        const bool branch_taken_0x12532c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12532c) {
            ctx->pc = 0x125330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12532Cu;
            // 0x125330: 0x8d6b0008  lw          $t3, 0x8($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125318;
        }
    }
    ctx->pc = 0x125334u;
    // 0x125334: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x125334u;
    {
        const bool branch_taken_0x125334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125334u;
        // 0x125338: 0x8d6a000c  lw          $t2, 0xC($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125334) {
            ctx->pc = 0x1252F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252f0;
        }
    }
    ctx->pc = 0x12533Cu;
label_12533c:
    // 0x12533c: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x12533cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x125340: 0x15e0ffd9  bnez        $t7, . + 4 + (-0x27 << 2)
    ctx->pc = 0x125340u;
    {
        const bool branch_taken_0x125340 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125340u;
        // 0x125344: 0x25cc005b  addiu       $t4, $t6, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125340) {
            ctx->pc = 0x1252A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252a8;
        }
    }
    ctx->pc = 0x125348u;
    // 0x125348: 0x2dcf0055  sltiu       $t7, $t6, 0x55
    ctx->pc = 0x125348u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x12534c: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12534Cu;
    {
        const bool branch_taken_0x12534c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12534Cu;
        // 0x125350: 0x97b02  srl         $t7, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12534c) {
            ctx->pc = 0x12535Cu;
            goto label_12535c;
        }
    }
    ctx->pc = 0x125354u;
    // 0x125354: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x125354u;
    {
        const bool branch_taken_0x125354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125354u;
        // 0x125358: 0x25ec006e  addiu       $t4, $t7, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125354) {
            ctx->pc = 0x1252A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252a8;
        }
    }
    ctx->pc = 0x12535Cu;
label_12535c:
    // 0x12535c: 0x2dcf0155  sltiu       $t7, $t6, 0x155
    ctx->pc = 0x12535cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x125360: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125360u;
    {
        const bool branch_taken_0x125360 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125360u;
        // 0x125364: 0x97bc2  srl         $t7, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125360) {
            ctx->pc = 0x125370u;
            goto label_125370;
        }
    }
    ctx->pc = 0x125368u;
    // 0x125368: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x125368u;
    {
        const bool branch_taken_0x125368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125368u;
        // 0x12536c: 0x25ec0077  addiu       $t4, $t7, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125368) {
            ctx->pc = 0x1252A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252a8;
        }
    }
    ctx->pc = 0x125370u;
label_125370:
    // 0x125370: 0x2dcf0555  sltiu       $t7, $t6, 0x555
    ctx->pc = 0x125370u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x125374: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125374u;
    {
        const bool branch_taken_0x125374 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125374u;
        // 0x125378: 0x97c82  srl         $t7, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125374) {
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x12537Cu;
    // 0x12537c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12537Cu;
    {
        const bool branch_taken_0x12537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12537Cu;
        // 0x125380: 0x25ec007c  addiu       $t4, $t7, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12537c) {
            ctx->pc = 0x1252A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252a8;
        }
    }
    ctx->pc = 0x125384u;
label_125384:
    // 0x125384: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x125384u;
    {
        const bool branch_taken_0x125384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125384u;
        // 0x125388: 0x240c007e  addiu       $t4, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125384) {
            ctx->pc = 0x1252A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1252a8;
        }
    }
    ctx->pc = 0x12538Cu;
    // 0x12538c: 0x0  nop
    ctx->pc = 0x12538cu;
    // NOP
label_125390:
    // 0x125390: 0x8d8a000c  lw          $t2, 0xC($t4)
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_125394:
    // 0x125394: 0xad4e0008  sw          $t6, 0x8($t2)
    ctx->pc = 0x125394u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 14));
    // 0x125398: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x125398u;
    {
        const bool branch_taken_0x125398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125398u;
        // 0x12539c: 0xadca000c  sw          $t2, 0xC($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125398) {
            ctx->pc = 0x125228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125228;
        }
    }
    ctx->pc = 0x1253A0u;
label_1253a0:
    // 0x1253a0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1253A0u;
    {
        const bool branch_taken_0x1253a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253A0u;
        // 0x1253a4: 0x8d8e0008  lw          $t6, 0x8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253a0) {
            ctx->pc = 0x125390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125390;
        }
    }
    ctx->pc = 0x1253A8u;
label_1253a8:
    // 0x1253a8: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x1253a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1253ac: 0xad4e0008  sw          $t6, 0x8($t2)
    ctx->pc = 0x1253acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 14));
    // 0x1253b0: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
    ctx->pc = 0x1253B0u;
    {
        const bool branch_taken_0x1253b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253B0u;
        // 0x1253b4: 0xadca000c  sw          $t2, 0xC($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253b0) {
            ctx->pc = 0x1251E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1251e4;
        }
    }
    ctx->pc = 0x1253B8u;
label_1253b8:
    // 0x1253b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1253b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1253bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1253bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1253c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1253c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1253c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1253C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1253C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C4u;
        // 0x1253c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1253CCu;
    // 0x1253cc: 0x0  nop
    ctx->pc = 0x1253ccu;
    // NOP
}
