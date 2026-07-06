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

// Function: sub_0031E820
// Address: 0x31e820 - 0x31ea20
void sub_0031E820_0x31e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E820_0x31e820");
#endif

    switch (ctx->pc) {
        case 0x31e8d4u: goto label_31e8d4;
        case 0x31e9bcu: goto label_31e9bc;
        case 0x31e9d0u: goto label_31e9d0;
        case 0x31e9d4u: goto label_31e9d4;
        default: break;
    }

    ctx->pc = 0x31e820u;

    // 0x31e820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31e824: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31e824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31e828: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31e82c: 0x3c0b01da  lui         $t3, 0x1DA
    ctx->pc = 0x31e82cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)474 << 16));
    // 0x31e830: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31e834: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x31e834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x31e838: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31e83c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31e840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31e844: 0x3c038026  lui         $v1, 0x8026
    ctx->pc = 0x31e844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32806 << 16));
    // 0x31e848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31e84c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x31e84cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31e854: 0x256b2a00  addiu       $t3, $t3, 0x2A00
    ctx->pc = 0x31e854u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10752));
    // 0x31e858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31e85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e860: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x31e860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x31e864: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x31e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31e868: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31e868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e86c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x31e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31e870: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31e870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31e874: 0x3c025151  lui         $v0, 0x5151
    ctx->pc = 0x31e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20817 << 16));
    // 0x31e878: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x31e878u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x31e87c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x31e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x31e880: 0x34425151  ori         $v0, $v0, 0x5151
    ctx->pc = 0x31e880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20817);
    // 0x31e884: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x31e884u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x31e888: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31e88c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x31e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31e890: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31e890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31e894: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x31e894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31e898: 0xac550370  sw          $s5, 0x370($v0)
    ctx->pc = 0x31e898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 21));
    // 0x31e89c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x31e89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x31e8a0: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x31e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x31e8a4: 0x3c1401dc  lui         $s4, 0x1DC
    ctx->pc = 0x31e8a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)476 << 16));
    // 0x31e8a8: 0x3c1301dc  lui         $s3, 0x1DC
    ctx->pc = 0x31e8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)476 << 16));
    // 0x31e8ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x31e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31e8b0: 0x3c1201dc  lui         $s2, 0x1DC
    ctx->pc = 0x31e8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)476 << 16));
    // 0x31e8b4: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x31e8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x31e8b8: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x31e8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x31e8bc: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x31e8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x31e8c0: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x31e8c0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x31e8c4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31e8c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31e8c8: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x31e8c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x31e8cc: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31e8ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31e8d0: 0x3c0a00ff  lui         $t2, 0xFF
    ctx->pc = 0x31e8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)255 << 16));
label_31e8d4:
    // 0x31e8d4: 0x8d760000  lw          $s6, 0x0($t3)
    ctx->pc = 0x31e8d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x31e8d8: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x31e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x31e8dc: 0x2ca3824  and         $a3, $s6, $t2
    ctx->pc = 0x31e8dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & GPR_U64(ctx, 10));
    // 0x31e8e0: 0x32c3ff00  andi        $v1, $s6, 0xFF00
    ctx->pc = 0x31e8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65280);
    // 0x31e8e4: 0x74c03  sra         $t1, $a3, 16
    ctx->pc = 0x31e8e4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 16));
    // 0x31e8e8: 0x34203  sra         $t0, $v1, 8
    ctx->pc = 0x31e8e8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31e8ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E8ECu;
    {
        const bool branch_taken_0x31e8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8ECu;
        // 0x31e8f0: 0x32c700ff  andi        $a3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8ec) {
            ctx->pc = 0x31E8FCu;
            goto label_31e8fc;
        }
    }
    ctx->pc = 0x31E8F4u;
    // 0x31e8f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E8F4u;
    {
        const bool branch_taken_0x31e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8F4u;
        // 0x31e8f8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8f4) {
            ctx->pc = 0x31E900u;
            goto label_31e900;
        }
    }
    ctx->pc = 0x31E8FCu;
label_31e8fc:
    // 0x31e8fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31e8fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e900:
    // 0x31e900: 0x29810002  slti        $at, $t4, 0x2
    ctx->pc = 0x31e900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e904: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E904u;
    {
        const bool branch_taken_0x31e904 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e904) {
            ctx->pc = 0x31E908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E904u;
            // 0x31e908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E910u;
            goto label_31e910;
        }
    }
    ctx->pc = 0x31E90Cu;
    // 0x31e90c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31e90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e910:
    // 0x31e910: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x31e910u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x31e914: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31e914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31e918: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x31e918u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x31e91c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e920: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x31e920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x31e924: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31e924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x31e928: 0x8e950370  lw          $s5, 0x370($s4)
    ctx->pc = 0x31e928u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x31e92c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x31e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x31e930: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x31e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
    // 0x31e934: 0x29890004  slti        $t1, $t4, 0x4
    ctx->pc = 0x31e934u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31e938: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x31e938u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x31e93c: 0xaea80004  sw          $t0, 0x4($s5)
    ctx->pc = 0x31e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 8));
    // 0x31e940: 0x8e680370  lw          $t0, 0x370($s3)
    ctx->pc = 0x31e940u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
    // 0x31e944: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x31e944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x31e948: 0x8e470370  lw          $a3, 0x370($s2)
    ctx->pc = 0x31e948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x31e94c: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x31e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x31e950: 0x8e270370  lw          $a3, 0x370($s1)
    ctx->pc = 0x31e950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x31e954: 0x24f50010  addiu       $s5, $a3, 0x10
    ctx->pc = 0x31e954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31e958: 0xae150370  sw          $s5, 0x370($s0)
    ctx->pc = 0x31e958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 21));
    // 0x31e95c: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x31e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x31e960: 0x8f230370  lw          $v1, 0x370($t9)
    ctx->pc = 0x31e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
    // 0x31e964: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31e964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31e968: 0x8f020370  lw          $v0, 0x370($t8)
    ctx->pc = 0x31e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x31e96c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31e970: 0x8de20370  lw          $v0, 0x370($t7)
    ctx->pc = 0x31e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x31e974: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31e974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31e978: 0x8dc20370  lw          $v0, 0x370($t6)
    ctx->pc = 0x31e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x31e97c: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x31e97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31e980: 0x1520ffd4  bnez        $t1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x31E980u;
    {
        const bool branch_taken_0x31e980 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E980u;
        // 0x31e984: 0xadb50370  sw          $s5, 0x370($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e980) {
            ctx->pc = 0x31E8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e8d4;
        }
    }
    ctx->pc = 0x31E988u;
    // 0x31e988: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e98c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31e990: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x31e990u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x31e994: 0x34640009  ori         $a0, $v1, 0x9
    ctx->pc = 0x31e994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x31e998: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31e998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31e99c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e9a0: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x31e9a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4)); // MMIO: 0x700000c0
    // 0x31e9a4: 0x7c400160  sq          $zero, 0x160($v0)
    ctx->pc = 0x31e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 0));
    // 0x31e9a8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31e9ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e9b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e9b4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31E9B4u;
    SET_GPR_U32(ctx, 31, 0x31E9BCu);
    ctx->pc = 0x31E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E9B4u;
    // 0x31e9b8: 0xac430160  sw          $v1, 0x160($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31E9B4u, 0x31E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E9BCu;
label_31e9bc:
    // 0x31e9bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31e9c0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31e9c4: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31e9c8: 0xc040a04  jal         func_102810
    ctx->pc = 0x31E9C8u;
    SET_GPR_U32(ctx, 31, 0x31E9D0u);
    ctx->pc = 0x31E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E9C8u;
    // 0x31e9cc: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31E9C8u, 0x31E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E9D0u;
label_31e9d0:
    // 0x31e9d0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31e9d4:
    // 0x31e9d4: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31e9d8: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31e9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31e9dc: 0x0  nop
    ctx->pc = 0x31e9dcu;
    // NOP
    // 0x31e9e0: 0x0  nop
    ctx->pc = 0x31e9e0u;
    // NOP
    // 0x31e9e4: 0x0  nop
    ctx->pc = 0x31e9e4u;
    // NOP
    // 0x31e9e8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E9E8u;
    {
        const bool branch_taken_0x31e9e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e9e8) {
            ctx->pc = 0x31E9D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e9d4;
        }
    }
    ctx->pc = 0x31E9F0u;
    // 0x31e9f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e9f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31e9f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e9f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31e9f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e9fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31e9fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ea00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31ea00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ea04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ea04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ea08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ea08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ea0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ea0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ea10: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA10u;
        // 0x31ea14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA18u;
    // 0x31ea18: 0x0  nop
    ctx->pc = 0x31ea18u;
    // NOP
    // 0x31ea1c: 0x0  nop
    ctx->pc = 0x31ea1cu;
    // NOP
    if (ctx->pc == 0x31ea1cu) { ctx->pc = 0x31ea20u; }
}
