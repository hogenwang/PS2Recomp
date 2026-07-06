#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD6F8
// Address: 0x1ad6f8 - 0x1ad8f8
void sub_001AD6F8_0x1ad6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD6F8_0x1ad6f8");
#endif

    switch (ctx->pc) {
        case 0x1ad72cu: goto label_1ad72c;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad874u: goto label_1ad874;
        default: break;
    }

    ctx->pc = 0x1ad6f8u;

    // 0x1ad6f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad6fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad700: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ad700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad704: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ad704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ad708: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ad708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad70c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ad70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad710: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x1ad710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x1ad714: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ad714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ad718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad71c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ad71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ad720: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ad720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ad724: 0xc06b5a0  jal         func_1AD680
    ctx->pc = 0x1AD724u;
    SET_GPR_U32(ctx, 31, 0x1AD72Cu);
    ctx->pc = 0x1AD728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD724u;
            // 0x1ad728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD680u;
    if (runtime->hasFunction(0x1AD680u)) {
        auto targetFn = runtime->lookupFunction(0x1AD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD72Cu; }
        if (ctx->pc != 0x1AD72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD680_0x1ad680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD72Cu; }
        if (ctx->pc != 0x1AD72Cu) { return; }
    }
    ctx->pc = 0x1AD72Cu;
label_1ad72c:
    // 0x1ad72c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1AD72Cu;
    {
        const bool branch_taken_0x1ad72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD72Cu;
            // 0x1ad730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad72c) {
            ctx->pc = 0x1AD810u;
            goto label_1ad810;
        }
    }
    ctx->pc = 0x1AD734u;
    // 0x1ad734: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1ad734u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad738: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1ad738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad73c: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AD73Cu;
    {
        const bool branch_taken_0x1ad73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad73c) {
            ctx->pc = 0x1AD740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD73Cu;
            // 0x1ad740: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD800u;
            goto label_1ad800;
        }
    }
    ctx->pc = 0x1AD744u;
    // 0x1ad744: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x1ad744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ad748: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AD748u;
    {
        const bool branch_taken_0x1ad748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD748u;
            // 0x1ad74c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad748) {
            ctx->pc = 0x1AD810u;
            goto label_1ad810;
        }
    }
    ctx->pc = 0x1AD750u;
    // 0x1ad750: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1ad750u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad754: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ad754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ad758: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x1ad758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ad75c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1ad75cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad760: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ad760u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ad764: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad768: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ad768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ad76c: 0x14650028  bne         $v1, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AD76Cu;
    {
        const bool branch_taken_0x1ad76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD76Cu;
            // 0x1ad770: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad76c) {
            ctx->pc = 0x1AD810u;
            goto label_1ad810;
        }
    }
    ctx->pc = 0x1AD774u;
    // 0x1ad774: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x1ad774u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ad778: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x1ad778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1ad77c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ad780: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1ad780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ad784: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad788: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ad788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ad78c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ad78cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ad790: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x1ad790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1ad794: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AD794u;
    {
        const bool branch_taken_0x1ad794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD794u;
            // 0x1ad798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad794) {
            ctx->pc = 0x1AD810u;
            goto label_1ad810;
        }
    }
    ctx->pc = 0x1AD79Cu;
    // 0x1ad79c: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x1ad79cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ad7a0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1ad7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ad7a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1ad7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ad7a8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1ad7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1ad7ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad7b0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1ad7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ad7b4: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x1ad7b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1ad7b8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1ad7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad7bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ad7c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ad7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ad7c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad7c8: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x1ad7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad7cc: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x1ad7ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ad7d0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1ad7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ad7d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1ad7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ad7d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1ad7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1ad7dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad7e0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1ad7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ad7e4: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x1ad7e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1ad7e8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1ad7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad7ec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ad7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ad7f0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ad7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ad7f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad7f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD7F8u;
    {
        const bool branch_taken_0x1ad7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7F8u;
            // 0x1ad7fc: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7f8) {
            ctx->pc = 0x1AD80Cu;
            goto label_1ad80c;
        }
    }
    ctx->pc = 0x1AD800u;
label_1ad800:
    // 0x1ad800: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x1ad800u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ad804: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x1ad804u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ad808: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1ad808u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_1ad80c:
    // 0x1ad80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad810:
    // 0x1ad810: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ad810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad814: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ad814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad818: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad81c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ad81cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad824: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD824u;
            // 0x1ad828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD82Cu;
    // 0x1ad82c: 0x0  nop
    ctx->pc = 0x1ad82cu;
    // NOP
label_1ad830:
    // 0x1ad830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ad830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ad834: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ad834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ad838: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ad838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad83c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1ad83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1ad840: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ad840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad844: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ad844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ad848: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ad848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad84c: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x1ad84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ad850: 0x27a80012  addiu       $t0, $sp, 0x12
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x1ad854: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ad858: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1ad85c: 0x27a9001c  addiu       $t1, $sp, 0x1C
    ctx->pc = 0x1ad85cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ad860: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x1ad860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ad864: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x1ad864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ad868: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ad868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ad86c: 0xc06b63e  jal         func_1AD8F8
    ctx->pc = 0x1AD86Cu;
    SET_GPR_U32(ctx, 31, 0x1AD874u);
    ctx->pc = 0x1AD870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD86Cu;
            // 0x1ad870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    if (runtime->hasFunction(0x1AD8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AD8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD874u; }
        if (ctx->pc != 0x1AD874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD8F8_0x1ad8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD874u; }
        if (ctx->pc != 0x1AD874u) { return; }
    }
    ctx->pc = 0x1AD874u;
label_1ad874:
    // 0x1ad874: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x1ad874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad87c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad880: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD880u;
    {
        const bool branch_taken_0x1ad880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD880u;
            // 0x1ad884: 0x97a50010  lhu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad880) {
            ctx->pc = 0x1AD890u;
            goto label_1ad890;
        }
    }
    ctx->pc = 0x1AD888u;
    // 0x1ad888: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x1ad888u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ad88c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad890:
    // 0x1ad890: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD890u;
    {
        const bool branch_taken_0x1ad890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD890u;
            // 0x1ad894: 0xa6050000  sh          $a1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad890) {
            ctx->pc = 0x1AD8D8u;
            goto label_1ad8d8;
        }
    }
    ctx->pc = 0x1AD898u;
    // 0x1ad898: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1ad898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad89c: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x1ad89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ad8a0: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x1ad8a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ad8a4: 0x24a807ff  addiu       $t0, $a1, 0x7FF
    ctx->pc = 0x1ad8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x1ad8a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ad8a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8ac: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1ad8acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ad8b0: 0x104180b  movn        $v1, $t0, $a0
    ctx->pc = 0x1ad8b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x1ad8b4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1ad8b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1ad8b8: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x1ad8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1ad8bc: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ad8c0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x1ad8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ad8c4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ad8c8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1ad8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1ad8cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD8CCu;
    {
        const bool branch_taken_0x1ad8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8CCu;
            // 0x1ad8d0: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8cc) {
            ctx->pc = 0x1AD8E0u;
            goto label_1ad8e0;
        }
    }
    ctx->pc = 0x1AD8D4u;
    // 0x1ad8d4: 0x0  nop
    ctx->pc = 0x1ad8d4u;
    // NOP
label_1ad8d8:
    // 0x1ad8d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ad8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ad8dc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ad8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1ad8e0:
    // 0x1ad8e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ad8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad8e4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1ad8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ad8e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad8ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ad8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8F0u;
            // 0x1ad8f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD8F8u;
    ctx->pc = 0x1ad8f8u;
}
