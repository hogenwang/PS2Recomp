#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203618
// Address: 0x203618 - 0x203740
void sub_00203618_0x203618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203618_0x203618");
#endif

    switch (ctx->pc) {
        case 0x203648u: goto label_203648;
        default: break;
    }

    ctx->pc = 0x203618u;

    // 0x203618: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x203618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20361c: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x20361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x203620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203624: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203624u;
    {
        const bool branch_taken_0x203624 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x203628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203624u;
            // 0x203628: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203624) {
            ctx->pc = 0x20363Cu;
            goto label_20363c;
        }
    }
    ctx->pc = 0x20362Cu;
    // 0x20362c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x203630: 0x8c462084  lw          $a2, 0x2084($v0)
    ctx->pc = 0x203630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8324)));
    // 0x203634: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203634u;
    {
        const bool branch_taken_0x203634 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x203638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203634u;
            // 0x203638: 0x3c0901c1  lui         $t1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203634) {
            ctx->pc = 0x203648u;
            goto label_203648;
        }
    }
    ctx->pc = 0x20363Cu;
label_20363c:
    // 0x20363c: 0x3e00008  jr          $ra
    ctx->pc = 0x20363Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20363Cu;
            // 0x203640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203644u;
    // 0x203644: 0x0  nop
    ctx->pc = 0x203644u;
    // NOP
label_203648:
    // 0x203648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x203648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20364c: 0x25239bdc  addiu       $v1, $t1, -0x6424
    ctx->pc = 0x20364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941660));
    // 0x203650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x203654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x203658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x203658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20365c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203660: 0x1485001f  bne         $a0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x203660u;
    {
        const bool branch_taken_0x203660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x203664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203660u;
            // 0x203664: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203660) {
            ctx->pc = 0x2036E0u;
            goto label_2036e0;
        }
    }
    ctx->pc = 0x203668u;
    // 0x203668: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20366c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203670: 0x24479bb8  addiu       $a3, $v0, -0x6448
    ctx->pc = 0x203670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941624));
    // 0x203674: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x203674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x203678: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x203678u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20367c: 0x24639bc8  addiu       $v1, $v1, -0x6438
    ctx->pc = 0x20367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941640));
    // 0x203680: 0x24489bd8  addiu       $t0, $v0, -0x6428
    ctx->pc = 0x203680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941656));
    // 0x203684: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x203688: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x203688u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x20368c: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x20368cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x203690: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x203694: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x203698: 0x8cc6f490  lw          $a2, -0xB70($a2)
    ctx->pc = 0x203698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964368)));
    // 0x20369c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x20369cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x2036a0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2036a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2036a4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2036a8: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x2036a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2036ac: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x2036acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2036b0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2036b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2036b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2036B4u;
    {
        const bool branch_taken_0x2036b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036b4) {
            ctx->pc = 0x2036CCu;
            goto label_2036cc;
        }
    }
    ctx->pc = 0x2036BCu;
    // 0x2036bc: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2036bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2036c0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2036c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2036c4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2036c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2036c8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2036c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_2036cc:
    // 0x2036cc: 0xa4e60008  sh          $a2, 0x8($a3)
    ctx->pc = 0x2036ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x2036d0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2036d4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2036d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x2036d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2036D8u;
    {
        const bool branch_taken_0x2036d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2036D8u;
            // 0x2036dc: 0xc2282d  daddu       $a1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036d8) {
            ctx->pc = 0x203724u;
            goto label_203724;
        }
    }
    ctx->pc = 0x2036E0u;
label_2036e0:
    // 0x2036e0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2036e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2036e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2036e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2036e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2036e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2036ec: 0x8c84f490  lw          $a0, -0xB70($a0)
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964368)));
    // 0x2036f0: 0x24429bd8  addiu       $v0, $v0, -0x6428
    ctx->pc = 0x2036f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941656));
    // 0x2036f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2036f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2036f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2036fc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2036fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203700: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x203700u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203708: 0xc4282d  daddu       $a1, $a2, $a0
    ctx->pc = 0x203708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
    // 0x20370c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x20370cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x203710: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x203710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x203714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203714u;
    {
        const bool branch_taken_0x203714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203714u;
            // 0x203718: 0x25249bdc  addiu       $a0, $t1, -0x6424 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203714) {
            ctx->pc = 0x203728u;
            goto label_203728;
        }
    }
    ctx->pc = 0x20371Cu;
    // 0x20371c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x203720: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x203720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_203724:
    // 0x203724: 0x25249bdc  addiu       $a0, $t1, -0x6424
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941660));
label_203728:
    // 0x203728: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x203728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20372c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203730: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x203730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x203734: 0x3e00008  jr          $ra
    ctx->pc = 0x203734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203734u;
            // 0x203738: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20373Cu;
    // 0x20373c: 0x0  nop
    ctx->pc = 0x20373cu;
    // NOP
    ctx->pc = 0x203740u;
}
