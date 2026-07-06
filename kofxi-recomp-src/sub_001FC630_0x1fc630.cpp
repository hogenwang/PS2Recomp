#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC630
// Address: 0x1fc630 - 0x1fc948
void sub_001FC630_0x1fc630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC630_0x1fc630");
#endif

    switch (ctx->pc) {
        case 0x1fc6c0u: goto label_1fc6c0;
        case 0x1fc6e0u: goto label_1fc6e0;
        case 0x1fc6f8u: goto label_1fc6f8;
        case 0x1fc718u: goto label_1fc718;
        case 0x1fc730u: goto label_1fc730;
        case 0x1fc750u: goto label_1fc750;
        case 0x1fc768u: goto label_1fc768;
        case 0x1fc808u: goto label_1fc808;
        case 0x1fc8a0u: goto label_1fc8a0;
        default: break;
    }

    ctx->pc = 0x1fc630u;

label_1fc630:
    // 0x1fc630: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1fc630u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fc634: 0x8cac000c  lw          $t4, 0xC($a1)
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fc638: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x1fc638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1fc63c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1fc640: 0x8cab0014  lw          $t3, 0x14($a1)
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fc644: 0x1846018  mult        $t4, $t4, $a0
    ctx->pc = 0x1fc644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1fc648: 0x84ad001e  lh          $t5, 0x1E($a1)
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1fc64c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1fc650: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fc654: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x1fc654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1fc658: 0xb1940  sll         $v1, $t3, 5
    ctx->pc = 0x1fc658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x1fc65c: 0xd2940  sll         $a1, $t5, 5
    ctx->pc = 0x1fc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x1fc660: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fc664: 0x1244818  mult        $t1, $t1, $a0
    ctx->pc = 0x1fc664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1fc668: 0xad2823  subu        $a1, $a1, $t5
    ctx->pc = 0x1fc668u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1fc66c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1fc670: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x1fc670u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1fc674: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1fc678: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fc67c: 0x10c4023  subu        $t0, $t0, $t4
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1fc680: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc684: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc688: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1fc68c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1fc690: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc694: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1fc694u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fc698: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fc698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc69c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc6a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc6a4: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1fc6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6ac: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1fc6b0: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x1fc6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1fc6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6B4u;
            // 0x1fc6b8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC6BCu;
    // 0x1fc6bc: 0x0  nop
    ctx->pc = 0x1fc6bcu;
    // NOP
label_1fc6c0:
    // 0x1fc6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc6c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6cc: 0x24045dc0  addiu       $a0, $zero, 0x5DC0
    ctx->pc = 0x1fc6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x1fc6d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc6d8: 0xc07f18c  jal         func_1FC630
    ctx->pc = 0x1FC6D8u;
    SET_GPR_U32(ctx, 31, 0x1FC6E0u);
    ctx->pc = 0x1FC6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6D8u;
            // 0x1fc6dc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC630u;
    goto label_1fc630;
    ctx->pc = 0x1FC6E0u;
label_1fc6e0:
    // 0x1fc6e0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1fc6e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc6ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6F0u;
            // 0x1fc6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC6F8u;
label_1fc6f8:
    // 0x1fc6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc6fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc704: 0x24047530  addiu       $a0, $zero, 0x7530
    ctx->pc = 0x1fc704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x1fc708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc70c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc710: 0xc07f18c  jal         func_1FC630
    ctx->pc = 0x1FC710u;
    SET_GPR_U32(ctx, 31, 0x1FC718u);
    ctx->pc = 0x1FC714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC710u;
            // 0x1fc714: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC630u;
    goto label_1fc630;
    ctx->pc = 0x1FC718u;
label_1fc718:
    // 0x1fc718: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fc718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1fc71c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc728: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC728u;
            // 0x1fc72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC730u;
label_1fc730:
    // 0x1fc730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc73c: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x1fc73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x1fc740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc748: 0xc07f18c  jal         func_1FC630
    ctx->pc = 0x1FC748u;
    SET_GPR_U32(ctx, 31, 0x1FC750u);
    ctx->pc = 0x1FC74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC748u;
            // 0x1fc74c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC630u;
    goto label_1fc630;
    ctx->pc = 0x1FC750u;
label_1fc750:
    // 0x1fc750: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fc750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1fc754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc75c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc760: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC760u;
            // 0x1fc764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC768u;
label_1fc768:
    // 0x1fc768: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fc76c: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x1fc76cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fc770: 0x8cac0010  lw          $t4, 0x10($a1)
    ctx->pc = 0x1fc770u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fc774: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fc774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1fc778: 0x10b001a  div         $zero, $t0, $t3
    ctx->pc = 0x1fc778u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fc77c: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fc780: 0x34425114  ori         $v0, $v0, 0x5114
    ctx->pc = 0x1fc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20756);
    // 0x1fc784: 0x2409059e  addiu       $t1, $zero, 0x59E
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1438));
    // 0x1fc788: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1fc78c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC78Cu;
    {
        const bool branch_taken_0x1fc78c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc78c) {
            ctx->pc = 0x1FC790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC78Cu;
            // 0x1fc790: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC794u;
            goto label_1fc794;
        }
    }
    ctx->pc = 0x1FC794u;
label_1fc794:
    // 0x1fc794: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1fc798: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x1fc798u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fc79c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc7a0: 0x6812  mflo        $t5
    ctx->pc = 0x1fc7a0u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1fc7a4: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x1fc7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1fc7a8: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x1fc7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1fc7ac: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x1fc7acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1fc7b0: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x1fc7b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1fc7b4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1fc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1fc7b8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc7bc: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x1fc7bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1fc7c0: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1fc7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1fc7c4: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x1fc7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1fc7c8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fc7cc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1fc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1fc7d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc7d4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1fc7d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fc7dc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1fc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1fc7e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fc7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc7e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc7f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fc7f8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1fc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1fc7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC7FCu;
            // 0x1fc800: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC804u;
    // 0x1fc804: 0x0  nop
    ctx->pc = 0x1fc804u;
    // NOP
label_1fc808:
    // 0x1fc808: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fc80c: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x1fc80cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fc810: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fc814: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1fc818: 0x12b001a  div         $zero, $t1, $t3
    ctx->pc = 0x1fc818u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fc81c: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x1fc81cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fc820: 0x3442a574  ori         $v0, $v0, 0xA574
    ctx->pc = 0x1fc820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42356);
    // 0x1fc824: 0x24030706  addiu       $v1, $zero, 0x706
    ctx->pc = 0x1fc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
    // 0x1fc828: 0x71234818  mult1       $t1, $t1, $v1
    ctx->pc = 0x1fc828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1fc82c: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x1fc82cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1fc830: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC830u;
    {
        const bool branch_taken_0x1fc830 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc830) {
            ctx->pc = 0x1FC834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC830u;
            // 0x1fc834: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC838u;
            goto label_1fc838;
        }
    }
    ctx->pc = 0x1FC838u;
label_1fc838:
    // 0x1fc838: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1fc83c: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x1fc83cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fc840: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x1fc840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1fc844: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x1fc844u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1fc848: 0x7012  mflo        $t6
    ctx->pc = 0x1fc848u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x1fc84c: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x1fc84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1fc850: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x1fc850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1fc854: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x1fc854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1fc858: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1fc85c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1fc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1fc860: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x1fc860u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1fc864: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1fc864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc868: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1fc86c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc870: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x1fc870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1fc874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc878: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1fc87c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc880: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1fc880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc888: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc88c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc894: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1fc894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1fc898: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC898u;
            // 0x1fc89c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC8A0u;
label_1fc8a0:
    // 0x1fc8a0: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x1fc8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fc8a4: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fc8a8: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x1fc8a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fc8ac: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x1fc8acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x1fc8b0: 0x10c001a  div         $zero, $t0, $t4
    ctx->pc = 0x1fc8b0u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fc8b4: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1fc8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fc8b8: 0x35294b54  ori         $t1, $t1, 0x4B54
    ctx->pc = 0x1fc8b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)19284);
    // 0x1fc8bc: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1fc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1fc8c0: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1fc8c4: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1fc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc8c8: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x1fc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1fc8cc: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x1fc8ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1fc8d0: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x1fc8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1fc8d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc8d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc8dc: 0x84a8001e  lh          $t0, 0x1E($a1)
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1fc8e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fc8e4: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC8E4u;
    {
        const bool branch_taken_0x1fc8e4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8e4) {
            ctx->pc = 0x1FC8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8E4u;
            // 0x1fc8e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8ECu;
            goto label_1fc8ec;
        }
    }
    ctx->pc = 0x1FC8ECu;
label_1fc8ec:
    // 0x1fc8ec: 0x6812  mflo        $t5
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1fc8f0: 0x1495018  mult        $t2, $t2, $t1
    ctx->pc = 0x1fc8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1fc8f4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1fc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1fc8f8: 0x8ca90014  lw          $t1, 0x14($a1)
    ctx->pc = 0x1fc8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fc8fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fc8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc900: 0x82940  sll         $a1, $t0, 5
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1fc904: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1fc908: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1fc90c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1fc90cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1fc910: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fc910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc914: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1fc914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1fc918: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1fc91c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1fc920: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fc920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc924: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1fc928: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc92c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc934: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc938: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fc938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fc93c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1fc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1fc940: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC940u;
            // 0x1fc944: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC948u;
    ctx->pc = 0x1fc948u;
}
