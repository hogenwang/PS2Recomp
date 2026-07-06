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

// Function: sub_00246778
// Address: 0x246778 - 0x246c98
void sub_00246778_0x246778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246778_0x246778");
#endif

    switch (ctx->pc) {
        case 0x246864u: goto label_246864;
        case 0x246908u: goto label_246908;
        case 0x246988u: goto label_246988;
        case 0x24699cu: goto label_24699c;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469f4u: goto label_2469f4;
        case 0x246a38u: goto label_246a38;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a84u: goto label_246a84;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246ae8u: goto label_246ae8;
        case 0x246b14u: goto label_246b14;
        case 0x246b38u: goto label_246b38;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b74u: goto label_246b74;
        case 0x246b98u: goto label_246b98;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bc4u: goto label_246bc4;
        case 0x246becu: goto label_246bec;
        case 0x246c00u: goto label_246c00;
        default: break;
    }

    ctx->pc = 0x246778u;

    // 0x246778: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24677c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x24677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x246780: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x246780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x246784: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x246784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x246788: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x246788u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24678c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x246790: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x246790u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246794: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x246794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x246798: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x246798u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24679c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2467a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2467a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2467a4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2467a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2467a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2467a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2467ac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2467acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2467b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2467b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2467b4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2467b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2467b8: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x2467b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x2467bc: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2467BCu;
    {
        const bool branch_taken_0x2467bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0xafaa0008  sw          $t2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467bc) {
            ctx->pc = 0x2467D8u;
            goto label_2467d8;
        }
    }
    ctx->pc = 0x2467C4u;
    // 0x2467c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2467c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2467c8: 0x50e2002d  beql        $a3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2467C8u;
    {
        const bool branch_taken_0x2467c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2467c8) {
            ctx->pc = 0x2467CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2467C8u;
            // 0x2467cc: 0x92f30000  lbu         $s3, 0x0($s7) (Delay Slot)
            SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246880u;
            goto label_246880;
        }
    }
    ctx->pc = 0x2467D0u;
    // 0x2467d0: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x2467D0u;
    {
        const bool branch_taken_0x2467d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467D0u;
        // 0x2467d4: 0x96c30006  lhu         $v1, 0x6($s6) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467d0) {
            ctx->pc = 0x246C5Cu;
            goto label_246c5c;
        }
    }
    ctx->pc = 0x2467D8u;
label_2467d8:
    // 0x2467d8: 0x92e30009  lbu         $v1, 0x9($s7)
    ctx->pc = 0x2467d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 9)));
    // 0x2467dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2467dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2467e0: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x2467e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2467e4: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x2467E4u;
    {
        const bool branch_taken_0x2467e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467E4u;
        // 0x2467e8: 0x240400f4  addiu       $a0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467e4) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x2467ECu;
    // 0x2467ec: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x2467ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x2467f0: 0xa2c30004  sb          $v1, 0x4($s6)
    ctx->pc = 0x2467f0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2467f4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x2467f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2467f8: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2467f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2467fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x246800: 0xa6c20006  sh          $v0, 0x6($s6)
    ctx->pc = 0x246800u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x246804: 0xa2e50009  sb          $a1, 0x9($s7)
    ctx->pc = 0x246804u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x246808: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x246808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24680c: 0x24840f48  addiu       $a0, $a0, 0xF48
    ctx->pc = 0x24680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3912));
    // 0x246810: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x246810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x246814: 0x3a880  sll         $s5, $v1, 2
    ctx->pc = 0x246814u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x246818: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x246818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x24681c: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x24681cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x246820: 0x1440010d  bnez        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x246820u;
    {
        const bool branch_taken_0x246820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246820u;
        // 0x246824: 0x2c4a021  addu        $s4, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246820) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x246828u;
    // 0x246828: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x24682c: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x24682cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x246830: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x246830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x246834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x246838: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x246838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x24683c: 0x2ea200ed  sltiu       $v0, $s5, 0xED
    ctx->pc = 0x24683cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)237) ? 1 : 0);
    // 0x246840: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x246840u;
    {
        const bool branch_taken_0x246840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246840u;
        // 0x246844: 0x3d5102b  sltu        $v0, $fp, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246840) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x246848u;
    // 0x246848: 0x54400104  bnel        $v0, $zero, . + 4 + (0x104 << 2)
    ctx->pc = 0x246848u;
    {
        const bool branch_taken_0x246848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246848) {
            ctx->pc = 0x24684Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246848u;
            // 0x24684c: 0x96c30006  lhu         $v1, 0x6($s6) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C5Cu;
            goto label_246c5c;
        }
    }
    ctx->pc = 0x246850u;
    // 0x246850: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x246850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x246854: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x246854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24685c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24685Cu;
    SET_GPR_U32(ctx, 31, 0x246864u);
    ctx->pc = 0x246860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24685Cu;
    // 0x246860: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24685Cu, 0x246864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246864u;
label_246864:
    // 0x246864: 0xa6950004  sh          $s5, 0x4($s4)
    ctx->pc = 0x246864u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 21));
    // 0x246868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x246868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24686c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x246870: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x246870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x246874: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x246874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246878: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x246878u;
    {
        const bool branch_taken_0x246878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246878u;
        // 0x24687c: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246878) {
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246880u;
label_246880:
    // 0x246880: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x246880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x246884: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x246884u;
    {
        const bool branch_taken_0x246884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246884u;
        // 0x246888: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246884) {
            ctx->pc = 0x2468A4u;
            goto label_2468a4;
        }
    }
    ctx->pc = 0x24688Cu;
    // 0x24688c: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x24688cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x246890: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246894: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246894u;
    {
        const bool branch_taken_0x246894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246894u;
        // 0x246898: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246894) {
            ctx->pc = 0x2468C8u;
            goto label_2468c8;
        }
    }
    ctx->pc = 0x24689Cu;
    // 0x24689c: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x24689Cu;
    {
        const bool branch_taken_0x24689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24689Cu;
        // 0x2468a0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24689c) {
            ctx->pc = 0x246C6Cu;
            goto label_246c6c;
        }
    }
    ctx->pc = 0x2468A4u;
label_2468a4:
    // 0x2468a4: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x2468a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x2468a8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x2468a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2468ac: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x2468ACu;
    {
        const bool branch_taken_0x2468ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468ACu;
        // 0x2468b0: 0x26f20002  addiu       $s2, $s7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468ac) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x2468B4u;
    // 0x2468b4: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x2468b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x2468b8: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2468b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2468bc: 0xa6c20006  sh          $v0, 0x6($s6)
    ctx->pc = 0x2468bcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2468c0: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x2468c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x2468c4: 0xa2c30004  sb          $v1, 0x4($s6)
    ctx->pc = 0x2468c4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 3));
label_2468c8:
    // 0x2468c8: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2468c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2468cc: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x2468ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2468d0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2468d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2468d4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2468d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2468d8: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x2468d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2468dc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2468dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2468e0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2468e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2468e4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2468e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2468e8: 0x24630f48  addiu       $v1, $v1, 0xF48
    ctx->pc = 0x2468e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3912));
    // 0x2468ec: 0x2c3a021  addu        $s4, $s6, $v1
    ctx->pc = 0x2468ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2468f0: 0x92820008  lbu         $v0, 0x8($s4)
    ctx->pc = 0x2468f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2468f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2468f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2468f8: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x2468f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2468fc: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x2468fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x246900: 0xc08a262  jal         func_228988
    ctx->pc = 0x246900u;
    SET_GPR_U32(ctx, 31, 0x246908u);
    ctx->pc = 0x246904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246900u;
    // 0x246904: 0x2838821  addu        $s1, $s4, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x246900u, 0x246908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246908u;
label_246908:
    // 0x246908: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x246908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x24690c: 0x32640010  andi        $a0, $s3, 0x10
    ctx->pc = 0x24690cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x246910: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x246910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x246914: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246914u;
    {
        const bool branch_taken_0x246914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246914u;
        // 0x246918: 0xa2230011  sb          $v1, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246914) {
            ctx->pc = 0x246928u;
            goto label_246928;
        }
    }
    ctx->pc = 0x24691Cu;
    // 0x24691c: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x24691cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x246920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x246920u;
    {
        const bool branch_taken_0x246920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246920u;
        // 0x246924: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246920) {
            ctx->pc = 0x246930u;
            goto label_246930;
        }
    }
    ctx->pc = 0x246928u;
label_246928:
    // 0x246928: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x246928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x24692c: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x24692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_246930:
    // 0x246930: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x246930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x246934: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x246934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x246938: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x246938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x24693c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24693Cu;
    {
        const bool branch_taken_0x24693c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24693Cu;
        // 0x246940: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24693c) {
            ctx->pc = 0x246980u;
            goto label_246980;
        }
    }
    ctx->pc = 0x246944u;
    // 0x246944: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x246944u;
    {
        const bool branch_taken_0x246944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246944u;
        // 0x246948: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246944) {
            ctx->pc = 0x2469C0u;
            goto label_2469c0;
        }
    }
    ctx->pc = 0x24694Cu;
    // 0x24694c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x24694Cu;
    {
        const bool branch_taken_0x24694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24694Cu;
        // 0x246950: 0x9222000d  lbu         $v0, 0xD($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24694c) {
            ctx->pc = 0x246A04u;
            goto label_246a04;
        }
    }
    ctx->pc = 0x246954u;
    // 0x246954: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x246954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x246958: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x246958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x24695c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x24695cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246960: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x246960u;
    {
        const bool branch_taken_0x246960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246960) {
            ctx->pc = 0x246964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246960u;
            // 0x246964: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2469E8u;
            goto label_2469e8;
        }
    }
    ctx->pc = 0x246968u;
    // 0x246968: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x246968u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x24696c: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x24696cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x246970: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x246974: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x246974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x246978: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x246978u;
    {
        const bool branch_taken_0x246978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246978u;
        // 0x24697c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246978) {
            ctx->pc = 0x2469ECu;
            goto label_2469ec;
        }
    }
    ctx->pc = 0x246980u;
label_246980:
    // 0x246980: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246980u;
    SET_GPR_U32(ctx, 31, 0x246988u);
    ctx->pc = 0x246984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246980u;
    // 0x246984: 0x9684000a  lhu         $a0, 0xA($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246980u, 0x246988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246988u;
label_246988:
    // 0x246988: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x246988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x24698c: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x24698cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246990: 0x9a240008  lwr         $a0, 0x8($s1)
    ctx->pc = 0x246990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x246994: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x246994u;
    SET_GPR_U32(ctx, 31, 0x24699Cu);
    ctx->pc = 0x246998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246994u;
    // 0x246998: 0x438023  subu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x246994u, 0x24699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24699Cu;
label_24699c:
    // 0x24699c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24699Cu;
    SET_GPR_U32(ctx, 31, 0x2469A4u);
    ctx->pc = 0x2469A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24699Cu;
    // 0x2469a0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24699Cu, 0x2469A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469A4u;
label_2469a4:
    // 0x2469a4: 0xaa22000b  swl         $v0, 0xB($s1)
    ctx->pc = 0x2469a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2469a8: 0xba220008  swr         $v0, 0x8($s1)
    ctx->pc = 0x2469a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2469ac: 0x8a240007  lwl         $a0, 0x7($s1)
    ctx->pc = 0x2469acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2469b0: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2469B0u;
    SET_GPR_U32(ctx, 31, 0x2469B8u);
    ctx->pc = 0x2469B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469B0u;
    // 0x2469b4: 0x9a240004  lwr         $a0, 0x4($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x2469B0u, 0x2469B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469B8u;
label_2469b8:
    // 0x2469b8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2469B8u;
    {
        const bool branch_taken_0x2469b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469B8u;
        // 0x2469bc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469b8) {
            ctx->pc = 0x246B44u;
            goto label_246b44;
        }
    }
    ctx->pc = 0x2469C0u;
label_2469c0:
    // 0x2469c0: 0x8a240007  lwl         $a0, 0x7($s1)
    ctx->pc = 0x2469c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2469c4: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2469C4u;
    SET_GPR_U32(ctx, 31, 0x2469CCu);
    ctx->pc = 0x2469C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469C4u;
    // 0x2469c8: 0x9a240004  lwr         $a0, 0x4($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x2469C4u, 0x2469CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469CCu;
label_2469cc:
    // 0x2469cc: 0x9684000a  lhu         $a0, 0xA($s4)
    ctx->pc = 0x2469ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x2469d0: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2469D0u;
    SET_GPR_U32(ctx, 31, 0x2469D8u);
    ctx->pc = 0x2469D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469D0u;
    // 0x2469d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2469D0u, 0x2469D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469D8u;
label_2469d8:
    // 0x2469d8: 0x96840004  lhu         $a0, 0x4($s4)
    ctx->pc = 0x2469d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2469dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2469dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2469e0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2469E0u;
    {
        const bool branch_taken_0x2469e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E0u;
        // 0x2469e4: 0x2042023  subu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469e0) {
            ctx->pc = 0x246B44u;
            goto label_246b44;
        }
    }
    ctx->pc = 0x2469E8u;
label_2469e8:
    // 0x2469e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2469e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2469ec:
    // 0x2469ec: 0xc08a262  jal         func_228988
    ctx->pc = 0x2469ECu;
    SET_GPR_U32(ctx, 31, 0x2469F4u);
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2469ECu, 0x2469F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469F4u;
label_2469f4:
    // 0x2469f4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2469f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2469f8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x2469f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2469fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2469FCu;
    {
        const bool branch_taken_0x2469fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469FCu;
        // 0x246a00: 0xa2230013  sb          $v1, 0x13($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469fc) {
            ctx->pc = 0x246A0Cu;
            goto label_246a0c;
        }
    }
    ctx->pc = 0x246A04u;
label_246a04:
    // 0x246a04: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x246a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x246a08: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x246a08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
label_246a0c:
    // 0x246a0c: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x246a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x246a10: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x246A10u;
    {
        const bool branch_taken_0x246a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A10u;
        // 0x246a14: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a10) {
            ctx->pc = 0x246A94u;
            goto label_246a94;
        }
    }
    ctx->pc = 0x246A18u;
    // 0x246a18: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x246a18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246a1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x246A1Cu;
    {
        const bool branch_taken_0x246a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A1Cu;
        // 0x246a20: 0x9224000f  lbu         $a0, 0xF($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a1c) {
            ctx->pc = 0x246A58u;
            goto label_246a58;
        }
    }
    ctx->pc = 0x246A24u;
    // 0x246a24: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x246a24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x246a28: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x246a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x246a2c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x246a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x246a30: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246A30u;
    SET_GPR_U32(ctx, 31, 0x246A38u);
    ctx->pc = 0x246A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A30u;
    // 0x246a34: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246A30u, 0x246A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A38u;
label_246a38:
    // 0x246a38: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x246a38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x246a3c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x246a3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x246a40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x246a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x246a44: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x246a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x246a48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x246a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x246a4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x246a50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x246A50u;
    {
        const bool branch_taken_0x246a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A50u;
        // 0x246a54: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a50) {
            ctx->pc = 0x246A7Cu;
            goto label_246a7c;
        }
    }
    ctx->pc = 0x246A58u;
label_246a58:
    // 0x246a58: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x246a58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x246a5c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x246a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x246a60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x246a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x246a64: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246A64u;
    SET_GPR_U32(ctx, 31, 0x246A6Cu);
    ctx->pc = 0x246A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A64u;
    // 0x246a68: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246A64u, 0x246A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A6Cu;
label_246a6c:
    // 0x246a6c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x246a6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246a70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x246a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x246a74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x246a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246a78: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x246a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_246a7c:
    // 0x246a7c: 0xc08a262  jal         func_228988
    ctx->pc = 0x246A7Cu;
    SET_GPR_U32(ctx, 31, 0x246A84u);
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x246A7Cu, 0x246A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A84u;
label_246a84:
    // 0x246a84: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x246a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x246a88: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x246a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x246a8c: 0xa223000f  sb          $v1, 0xF($s1)
    ctx->pc = 0x246a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x246a90: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x246a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_246a94:
    // 0x246a94: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x246A94u;
    {
        const bool branch_taken_0x246a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A94u;
        // 0x246a98: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a94) {
            ctx->pc = 0x246AF4u;
            goto label_246af4;
        }
    }
    ctx->pc = 0x246A9Cu;
    // 0x246a9c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x246a9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246aa0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246AA0u;
    {
        const bool branch_taken_0x246aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246aa0) {
            ctx->pc = 0x246ACCu;
            goto label_246acc;
        }
    }
    ctx->pc = 0x246AA8u;
    // 0x246aa8: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x246aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246aac: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x246AACu;
    SET_GPR_U32(ctx, 31, 0x246AB4u);
    ctx->pc = 0x246AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AACu;
    // 0x246ab0: 0x9a240008  lwr         $a0, 0x8($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x246AACu, 0x246AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB4u;
label_246ab4:
    // 0x246ab4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x246ab4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x246ab8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x246ab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x246abc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x246abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x246ac0: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x246ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x246ac4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x246AC4u;
    {
        const bool branch_taken_0x246ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AC4u;
        // 0x246ac8: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ac4) {
            ctx->pc = 0x246AE0u;
            goto label_246ae0;
        }
    }
    ctx->pc = 0x246ACCu;
label_246acc:
    // 0x246acc: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x246accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246ad0: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x246AD0u;
    SET_GPR_U32(ctx, 31, 0x246AD8u);
    ctx->pc = 0x246AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AD0u;
    // 0x246ad4: 0x9a240008  lwr         $a0, 0x8($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x246AD0u, 0x246AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AD8u;
label_246ad8:
    // 0x246ad8: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x246ad8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246adc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x246adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_246ae0:
    // 0x246ae0: 0xc08a254  jal         func_228950
    ctx->pc = 0x246AE0u;
    SET_GPR_U32(ctx, 31, 0x246AE8u);
    ctx->pc = 0x246AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AE0u;
    // 0x246ae4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x246AE0u, 0x246AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AE8u;
label_246ae8:
    // 0x246ae8: 0xaa22000b  swl         $v0, 0xB($s1)
    ctx->pc = 0x246ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x246aec: 0xba220008  swr         $v0, 0x8($s1)
    ctx->pc = 0x246aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x246af0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x246af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_246af4:
    // 0x246af4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x246AF4u;
    {
        const bool branch_taken_0x246af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AF4u;
        // 0x246af8: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246af4) {
            ctx->pc = 0x246B58u;
            goto label_246b58;
        }
    }
    ctx->pc = 0x246AFCu;
    // 0x246afc: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x246afcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246b00: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246B00u;
    {
        const bool branch_taken_0x246b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246b00) {
            ctx->pc = 0x246B2Cu;
            goto label_246b2c;
        }
    }
    ctx->pc = 0x246B08u;
    // 0x246b08: 0x8a240007  lwl         $a0, 0x7($s1)
    ctx->pc = 0x246b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246b0c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x246B0Cu;
    SET_GPR_U32(ctx, 31, 0x246B14u);
    ctx->pc = 0x246B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B0Cu;
    // 0x246b10: 0x9a240004  lwr         $a0, 0x4($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x246B0Cu, 0x246B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B14u;
label_246b14:
    // 0x246b14: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x246b14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x246b18: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x246b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x246b1c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x246b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x246b20: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x246b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x246b24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x246B24u;
    {
        const bool branch_taken_0x246b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B24u;
        // 0x246b28: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b24) {
            ctx->pc = 0x246B40u;
            goto label_246b40;
        }
    }
    ctx->pc = 0x246B2Cu;
label_246b2c:
    // 0x246b2c: 0x8a240007  lwl         $a0, 0x7($s1)
    ctx->pc = 0x246b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246b30: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x246B30u;
    SET_GPR_U32(ctx, 31, 0x246B38u);
    ctx->pc = 0x246B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B30u;
    // 0x246b34: 0x9a240004  lwr         $a0, 0x4($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x246B30u, 0x246B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B38u;
label_246b38:
    // 0x246b38: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x246b38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246b3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x246b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_246b40:
    // 0x246b40: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x246b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_246b44:
    // 0x246b44: 0xc08a254  jal         func_228950
    ctx->pc = 0x246B44u;
    SET_GPR_U32(ctx, 31, 0x246B4Cu);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x246B44u, 0x246B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B4Cu;
label_246b4c:
    // 0x246b4c: 0xaa220007  swl         $v0, 0x7($s1)
    ctx->pc = 0x246b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x246b50: 0xba220004  swr         $v0, 0x4($s1)
    ctx->pc = 0x246b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x246b54: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x246b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_246b58:
    // 0x246b58: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x246B58u;
    {
        const bool branch_taken_0x246b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b58) {
            ctx->pc = 0x246BACu;
            goto label_246bac;
        }
    }
    ctx->pc = 0x246B60u;
    // 0x246b60: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x246b60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246b64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246B64u;
    {
        const bool branch_taken_0x246b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246b64) {
            ctx->pc = 0x246B90u;
            goto label_246b90;
        }
    }
    ctx->pc = 0x246B6Cu;
    // 0x246b6c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246B6Cu;
    SET_GPR_U32(ctx, 31, 0x246B74u);
    ctx->pc = 0x246B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B6Cu;
    // 0x246b70: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246B6Cu, 0x246B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x246b74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x246b78: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x246b78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x246b7c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x246b80: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x246b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x246b84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x246b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x246b88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x246B88u;
    {
        const bool branch_taken_0x246b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B88u;
        // 0x246b8c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b88) {
            ctx->pc = 0x246BB8u;
            goto label_246bb8;
        }
    }
    ctx->pc = 0x246B90u;
label_246b90:
    // 0x246b90: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246B90u;
    SET_GPR_U32(ctx, 31, 0x246B98u);
    ctx->pc = 0x246B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B90u;
    // 0x246b94: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246B90u, 0x246B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B98u;
label_246b98:
    // 0x246b98: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x246b98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246b9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x246b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x246ba0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x246ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246ba4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246BA4u;
    {
        const bool branch_taken_0x246ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BA4u;
        // 0x246ba8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ba4) {
            ctx->pc = 0x246BBCu;
            goto label_246bbc;
        }
    }
    ctx->pc = 0x246BACu;
label_246bac:
    // 0x246bac: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246BACu;
    SET_GPR_U32(ctx, 31, 0x246BB4u);
    ctx->pc = 0x246BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BACu;
    // 0x246bb0: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246BACu, 0x246BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BB4u;
label_246bb4:
    // 0x246bb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_246bb8:
    // 0x246bb8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x246bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_246bbc:
    // 0x246bbc: 0xc08a262  jal         func_228988
    ctx->pc = 0x246BBCu;
    SET_GPR_U32(ctx, 31, 0x246BC4u);
    ctx->pc = 0x246BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BBCu;
    // 0x246bc0: 0x2578023  subu        $s0, $s2, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x246BBCu, 0x246BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BC4u;
label_246bc4:
    // 0x246bc4: 0x3d0f023  subu        $fp, $fp, $s0
    ctx->pc = 0x246bc4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x246bc8: 0x7c00023  bltz        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x246BC8u;
    {
        const bool branch_taken_0x246bc8 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x246BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BC8u;
        // 0x246bcc: 0xa682000c  sh          $v0, 0xC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bc8) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x246BD0u;
    // 0x246bd0: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x246bd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x246bd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x246bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bd8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x246bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246bdc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x246bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x246be0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246be4: 0xc08a262  jal         func_228988
    ctx->pc = 0x246BE4u;
    SET_GPR_U32(ctx, 31, 0x246BECu);
    ctx->pc = 0x246BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BE4u;
    // 0x246be8: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x246BE4u, 0x246BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BECu;
label_246bec:
    // 0x246bec: 0x26860008  addiu       $a2, $s4, 0x8
    ctx->pc = 0x246becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x246bf0: 0xa682000a  sh          $v0, 0xA($s4)
    ctx->pc = 0x246bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x246bf4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x246bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bf8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x246BF8u;
    {
        const bool branch_taken_0x246bf8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BF8u;
        // 0x246bfc: 0xa6800012  sh          $zero, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bf8) {
            ctx->pc = 0x246C1Cu;
            goto label_246c1c;
        }
    }
    ctx->pc = 0x246C00u;
label_246c00:
    // 0x246c00: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x246c00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246c04: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x246c04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x246c08: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x246c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x246c0c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x246c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x246c10: 0x0  nop
    ctx->pc = 0x246c10u;
    // NOP
    // 0x246c14: 0x16a0fffa  bnez        $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x246C14u;
    {
        const bool branch_taken_0x246c14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x246c14) {
            ctx->pc = 0x246C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246c00;
        }
    }
    ctx->pc = 0x246C1Cu;
label_246c1c:
    // 0x246c1c: 0x131c02  srl         $v1, $s3, 16
    ctx->pc = 0x246c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x246c20: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x246c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x246c24: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x246c24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246c28: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x246c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x246c2c: 0x132c02  srl         $a1, $s3, 16
    ctx->pc = 0x246c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x246c30: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x246c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x246c34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c38: 0x132027  nor         $a0, $zero, $s3
    ctx->pc = 0x246c38u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x246c3c: 0xa6840012  sh          $a0, 0x12($s4)
    ctx->pc = 0x246c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x246c40: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x246c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x246c44: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x246c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x246c48: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x246c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246c4c: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x246c4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x246c50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246C50u;
    {
        const bool branch_taken_0x246c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C50u;
        // 0x246c54: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c50) {
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246C58u;
label_246c58:
    // 0x246c58: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x246c58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
label_246c5c:
    // 0x246c5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x246c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246c60: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x246c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x246c64: 0xa6c30006  sh          $v1, 0x6($s6)
    ctx->pc = 0x246c64u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 3));
label_246c68:
    // 0x246c68: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x246c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_246c6c:
    // 0x246c6c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x246c6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x246c70: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x246c74: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x246c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x246c78: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x246c78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x246c7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x246c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246c80: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x246c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246c84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x246c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246c88: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x246c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246c8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x246c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246c90: 0x3e00008  jr          $ra
    ctx->pc = 0x246C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C90u;
        // 0x246c94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246C98u;
}
