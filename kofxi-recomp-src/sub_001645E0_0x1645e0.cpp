#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001645E0
// Address: 0x1645e0 - 0x164740
void sub_001645E0_0x1645e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001645E0_0x1645e0");
#endif

    switch (ctx->pc) {
        case 0x164608u: goto label_164608;
        default: break;
    }

    ctx->pc = 0x1645e0u;

    // 0x1645e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1645e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1645e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1645e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1645e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1645e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1645ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1645ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1645f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1645f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1645f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1645f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1645f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1645fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164600: 0xc059154  jal         func_164550
    ctx->pc = 0x164600u;
    SET_GPR_U32(ctx, 31, 0x164608u);
    ctx->pc = 0x164604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164600u;
            // 0x164604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164550u;
    if (runtime->hasFunction(0x164550u)) {
        auto targetFn = runtime->lookupFunction(0x164550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164608u; }
        if (ctx->pc != 0x164608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164550_0x164550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164608u; }
        if (ctx->pc != 0x164608u) { return; }
    }
    ctx->pc = 0x164608u;
label_164608:
    // 0x164608: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x164608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16460c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164610: 0x5083002f  beql        $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x164610u;
    {
        const bool branch_taken_0x164610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164610) {
            ctx->pc = 0x164614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164610u;
            // 0x164614: 0x3223000c  andi        $v1, $s1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1646D0u;
            goto label_1646d0;
        }
    }
    ctx->pc = 0x164618u;
    // 0x164618: 0x3225000c  andi        $a1, $s1, 0xC
    ctx->pc = 0x164618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
    // 0x16461c: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x164620: 0x53882  srl         $a3, $a1, 2
    ctx->pc = 0x164620u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x164624: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x164624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x164628: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x164628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x16462c: 0x25addc10  addiu       $t5, $t5, -0x23F0
    ctx->pc = 0x16462cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294958096));
    // 0x164630: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x164634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164638: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x164638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16463c: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x16463cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x164640: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x164640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x164644: 0x3205000c  andi        $a1, $s0, 0xC
    ctx->pc = 0x164644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
    // 0x164648: 0x53882  srl         $a3, $a1, 2
    ctx->pc = 0x164648u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x16464c: 0x670c0  sll         $t6, $a2, 3
    ctx->pc = 0x16464cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x164650: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x164650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x164654: 0x1ae4021  addu        $t0, $t5, $t6
    ctx->pc = 0x164654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x164658: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x164658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16465c: 0x686021  addu        $t4, $v1, $t0
    ctx->pc = 0x16465cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x164660: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x164660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x164664: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x164668: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16466c: 0x3205003f  andi        $a1, $s0, 0x3F
    ctx->pc = 0x16466cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x164670: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x164674: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x164674u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x164678: 0x24e7dc50  addiu       $a3, $a3, -0x23B0
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958160));
    // 0x16467c: 0xee3021  addu        $a2, $a3, $t6
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x164680: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x164680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164684: 0x1aa3021  addu        $a2, $t5, $t2
    ctx->pc = 0x164684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x164688: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x16468c: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x164690: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x164694: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x164694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x164698: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x16469c: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x16469cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1646a0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1646a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1646a4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1646a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1646a8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1646ac: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1646acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1646b0: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x1646b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1646b4: 0xa0c405e4  sb          $a0, 0x5E4($a2)
    ctx->pc = 0x1646b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1508), (uint8_t)GPR_U32(ctx, 4));
    // 0x1646b8: 0x8cc400dc  lw          $a0, 0xDC($a2)
    ctx->pc = 0x1646b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x1646bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1646bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1646c0: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x1646c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1646c4: 0xacc400dc  sw          $a0, 0xDC($a2)
    ctx->pc = 0x1646c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 4));
    // 0x1646c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1646C8u;
    {
        const bool branch_taken_0x1646c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1646C8u;
            // 0x1646cc: 0xacc300dc  sw          $v1, 0xDC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c8) {
            ctx->pc = 0x164728u;
            goto label_164728;
        }
    }
    ctx->pc = 0x1646D0u;
label_1646d0:
    // 0x1646d0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1646d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1646d4: 0x33882  srl         $a3, $v1, 2
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1646d8: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x1646d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1646dc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1646dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1646e0: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1646e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1646e4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1646e8: 0x24a5dc50  addiu       $a1, $a1, -0x23B0
    ctx->pc = 0x1646e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958160));
    // 0x1646ec: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1646ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1646f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1646f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1646f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1646f8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1646f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1646fc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1646fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x164700: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
    // 0x164704: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x164704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164708: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x164708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16470c: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x16470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x164710: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x164710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x164714: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x164714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x164718: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x16471c: 0xa0a405e4  sb          $a0, 0x5E4($a1)
    ctx->pc = 0x16471cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1508), (uint8_t)GPR_U32(ctx, 4));
    // 0x164720: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x164720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x164724: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x164724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_164728:
    // 0x164728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16472c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16472cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164738: 0x3e00008  jr          $ra
    ctx->pc = 0x164738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164738u;
            // 0x16473c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164740u;
    ctx->pc = 0x164740u;
}
