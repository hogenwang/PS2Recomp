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

// Function: sub_002B2658
// Address: 0x2b2658 - 0x2b2880
void sub_002B2658_0x2b2658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2658_0x2b2658");
#endif

    switch (ctx->pc) {
        case 0x2b273cu: goto label_2b273c;
        case 0x2b275cu: goto label_2b275c;
        case 0x2b2788u: goto label_2b2788;
        case 0x2b2790u: goto label_2b2790;
        case 0x2b27b8u: goto label_2b27b8;
        case 0x2b27d8u: goto label_2b27d8;
        default: break;
    }

    ctx->pc = 0x2b2658u;

    // 0x2b2658: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b2658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b265c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b265cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b2660: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b2660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b2664: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b2664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b2668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b266c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b266cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2670: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b2670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b2674: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2678: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b2678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b267c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b267cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2680: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b2680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b2684: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b2684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b2688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b268c: 0x8e280050  lw          $t0, 0x50($s1)
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b2690: 0x8d060028  lw          $a2, 0x28($t0)
    ctx->pc = 0x2b2690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2b2694: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x2b2694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b2698: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B2698u;
    {
        const bool branch_taken_0x2b2698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2698u;
        // 0x2b269c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2698) {
            ctx->pc = 0x2B26ECu;
            goto label_2b26ec;
        }
    }
    ctx->pc = 0x2B26A0u;
    // 0x2b26a0: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B26A0u;
    {
        const bool branch_taken_0x2b26a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b26a0) {
            ctx->pc = 0x2B26A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B26A0u;
            // 0x2b26a4: 0x8d03002c  lw          $v1, 0x2C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26B8u;
            goto label_2b26b8;
        }
    }
    ctx->pc = 0x2B26A8u;
    // 0x2b26a8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b26ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b26acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b26b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B26B0u;
    {
        const bool branch_taken_0x2b26b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26B0u;
        // 0x2b26b4: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26b0) {
            ctx->pc = 0x2B26C8u;
            goto label_2b26c8;
        }
    }
    ctx->pc = 0x2B26B8u;
label_2b26b8:
    // 0x2b26b8: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x2b26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2b26bc: 0xae32004c  sw          $s2, 0x4C($s1)
    ctx->pc = 0x2b26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
    // 0x2b26c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26c4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2b26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_2b26c8:
    // 0x2b26c8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b26cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b26ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b26d0: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2b26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b26d4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2b26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2b26d8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b26dc: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2b26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b26e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2b26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b26e4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2B26E4u;
    {
        const bool branch_taken_0x2b26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26E4u;
        // 0x2b26e8: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26e4) {
            ctx->pc = 0x2B2858u;
            goto label_2b2858;
        }
    }
    ctx->pc = 0x2B26ECu;
label_2b26ec:
    // 0x2b26ec: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2b26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2b26f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b26f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b26f4: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2b26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2b26f8: 0x244980a  movz        $s3, $s2, $a0
    ctx->pc = 0x2b26f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x2b26fc: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x2b26fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2b2700: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2700u;
    {
        const bool branch_taken_0x2b2700 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2700u;
        // 0x2b2704: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2700) {
            ctx->pc = 0x2B271Cu;
            goto label_2b271c;
        }
    }
    ctx->pc = 0x2B2708u;
    // 0x2b2708: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b270c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B270Cu;
    {
        const bool branch_taken_0x2b270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B270Cu;
        // 0x2b2710: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b270c) {
            ctx->pc = 0x2B2770u;
            goto label_2b2770;
        }
    }
    ctx->pc = 0x2B2714u;
    // 0x2b2714: 0x52800017  beql        $s4, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2714u;
    {
        const bool branch_taken_0x2b2714 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2714) {
            ctx->pc = 0x2B2718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2714u;
            // 0x2b2718: 0x8d020030  lw          $v0, 0x30($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2774u;
            goto label_2b2774;
        }
    }
    ctx->pc = 0x2B271Cu;
label_2b271c:
    // 0x2b271c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B271Cu;
    {
        const bool branch_taken_0x2b271c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B271Cu;
        // 0x2b2720: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b271c) {
            ctx->pc = 0x2B2744u;
            goto label_2b2744;
        }
    }
    ctx->pc = 0x2B2724u;
    // 0x2b2724: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x2b2724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2b2728: 0x8d040030  lw          $a0, 0x30($t0)
    ctx->pc = 0x2b2728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2b272c: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B272Cu;
    {
        const bool branch_taken_0x2b272c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B272Cu;
        // 0x2b2730: 0x8e35004c  lw          $s5, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b272c) {
            ctx->pc = 0x2B2768u;
            goto label_2b2768;
        }
    }
    ctx->pc = 0x2B2734u;
    // 0x2b2734: 0xc049c48  jal         func_127120
    ctx->pc = 0x2B2734u;
    SET_GPR_U32(ctx, 31, 0x2B273Cu);
    ctx->pc = 0x2B2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2734u;
    // 0x2b2738: 0x2153021  addu        $a2, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B2734u, 0x2B273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B273Cu;
label_2b273c:
    // 0x2b273c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B273Cu;
    {
        const bool branch_taken_0x2b273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B273Cu;
        // 0x2b2740: 0x8e280050  lw          $t0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b273c) {
            ctx->pc = 0x2B2768u;
            goto label_2b2768;
        }
    }
    ctx->pc = 0x2B2744u;
label_2b2744:
    // 0x2b2744: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x2b2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x2b2748: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2748u;
    {
        const bool branch_taken_0x2b2748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2748u;
        // 0x2b274c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2748) {
            ctx->pc = 0x2B2768u;
            goto label_2b2768;
        }
    }
    ctx->pc = 0x2B2750u;
    // 0x2b2750: 0x8d040030  lw          $a0, 0x30($t0)
    ctx->pc = 0x2b2750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2b2754: 0xc049c48  jal         func_127120
    ctx->pc = 0x2B2754u;
    SET_GPR_U32(ctx, 31, 0x2B275Cu);
    ctx->pc = 0x2B2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2754u;
    // 0x2b2758: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B2754u, 0x2B275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B275Cu;
label_2b275c:
    // 0x2b275c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b2760: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2b2760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2b2764: 0x8e280050  lw          $t0, 0x50($s1)
    ctx->pc = 0x2b2764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2768:
    // 0x2b2768: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x2b2768u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
    // 0x2b276c: 0x8e280050  lw          $t0, 0x50($s1)
    ctx->pc = 0x2b276cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2770:
    // 0x2b2770: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x2b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_2b2774:
    // 0x2b2774: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2b2774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b2778: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B2778u;
    {
        const bool branch_taken_0x2b2778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2778u;
        // 0x2b277c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2778) {
            ctx->pc = 0x2B27F8u;
            goto label_2b27f8;
        }
    }
    ctx->pc = 0x2B2780u;
    // 0x2b2780: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2b2780u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2784: 0x0  nop
    ctx->pc = 0x2b2784u;
    // NOP
label_2b2788:
    // 0x2b2788: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2B2788u;
    SET_GPR_U32(ctx, 31, 0x2B2790u);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x2B2788u, 0x2B2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2790u;
label_2b2790:
    // 0x2b2790: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b2790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b2794: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2b2794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2798: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2798u;
    {
        const bool branch_taken_0x2b2798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2798u;
        // 0x2b279c: 0x2b02821  addu        $a1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2798) {
            ctx->pc = 0x2B27C0u;
            goto label_2b27c0;
        }
    }
    ctx->pc = 0x2B27A0u;
    // 0x2b27a0: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x2b27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    // 0x2b27a4: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b27a8: 0x2703023  subu        $a2, $s3, $s0
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2b27ac: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2b27acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b27b0: 0xc0a1468  jal         func_2851A0
    ctx->pc = 0x2B27B0u;
    SET_GPR_U32(ctx, 31, 0x2B27B8u);
    ctx->pc = 0x2B27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27B0u;
    // 0x2b27b4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x2B27B0u, 0x2B27B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B27B8u;
label_2b27b8:
    // 0x2b27b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B27B8u;
    {
        const bool branch_taken_0x2b27b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b27b8) {
            ctx->pc = 0x2B27DCu;
            goto label_2b27dc;
        }
    }
    ctx->pc = 0x2B27C0u;
label_2b27c0:
    // 0x2b27c0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b27c4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2b27c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2b27c8: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x2b27c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2b27cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b27ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b27d0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B27D0u;
    SET_GPR_U32(ctx, 31, 0x2B27D8u);
    ctx->pc = 0x2B27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27D0u;
    // 0x2b27d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B27D0u, 0x2B27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B27D8u;
label_2b27d8:
    // 0x2b27d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b27dc:
    // 0x2b27dc: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B27DCu;
    {
        const bool branch_taken_0x2b27dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b27dc) {
            ctx->pc = 0x2B27E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B27DCu;
            // 0x2b27e0: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B283Cu;
            goto label_2b283c;
        }
    }
    ctx->pc = 0x2B27E4u;
    // 0x2b27e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b27e8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2b27e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b27ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B27ECu;
    {
        const bool branch_taken_0x2b27ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b27ec) {
            ctx->pc = 0x2B2788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b2788;
        }
    }
    ctx->pc = 0x2B27F4u;
    // 0x2b27f4: 0x8e280050  lw          $t0, 0x50($s1)
    ctx->pc = 0x2b27f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b27f8:
    // 0x2b27f8: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x2b27f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b27fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B27FCu;
    {
        const bool branch_taken_0x2b27fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27FCu;
        // 0x2b2800: 0x2551021  addu        $v0, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27fc) {
            ctx->pc = 0x2B2818u;
            goto label_2b2818;
        }
    }
    ctx->pc = 0x2B2804u;
    // 0x2b2804: 0x2122023  subu        $a0, $s0, $s2
    ctx->pc = 0x2b2804u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b2808: 0xad02002c  sw          $v0, 0x2C($t0)
    ctx->pc = 0x2b2808u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 2));
    // 0x2b280c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b2810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2810u;
    {
        const bool branch_taken_0x2b2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2810u;
        // 0x2b2814: 0xac640028  sw          $a0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2810) {
            ctx->pc = 0x2B2824u;
            goto label_2b2824;
        }
    }
    ctx->pc = 0x2B2818u;
label_2b2818:
    // 0x2b2818: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x2b2818u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x2b281c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b2820: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b2820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2b2824:
    // 0x2b2824: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2824u;
    {
        const bool branch_taken_0x2b2824 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2824) {
            ctx->pc = 0x2B2828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2824u;
            // 0x2b2828: 0xae32004c  sw          $s2, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B284Cu;
            goto label_2b284c;
        }
    }
    ctx->pc = 0x2B282Cu;
    // 0x2b282c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b2830: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b2830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b2834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2834u;
    {
        const bool branch_taken_0x2b2834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2834u;
        // 0x2b2838: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2834) {
            ctx->pc = 0x2B284Cu;
            goto label_2b284c;
        }
    }
    ctx->pc = 0x2B283Cu;
label_2b283c:
    // 0x2b283c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2b283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b2840: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b2840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b2844: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2844u;
    {
        const bool branch_taken_0x2b2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2844u;
        // 0x2b2848: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2844) {
            ctx->pc = 0x2B2858u;
            goto label_2b2858;
        }
    }
    ctx->pc = 0x2B284Cu;
label_2b284c:
    // 0x2b284c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2850: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b2850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2854: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2b2854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2b2858:
    // 0x2b2858: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b2858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b285c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b285cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2860: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b2860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2864: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b2864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2868: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b2868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b286c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b286cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2870: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b2870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2878: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2878u;
        // 0x2b287c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2880u;
}
