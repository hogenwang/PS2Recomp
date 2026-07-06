#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A6F0
// Address: 0x20a6f0 - 0x20aa20
void sub_0020A6F0_0x20a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A6F0_0x20a6f0");
#endif

    switch (ctx->pc) {
        case 0x20a738u: goto label_20a738;
        default: break;
    }

    ctx->pc = 0x20a6f0u;

    // 0x20a6f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20a6f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20a6f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20a6fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20a700: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20a700u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a704: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20a708: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20a708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a70c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20a70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20a710: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20a710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20a718: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20a718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a71c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a720: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x20a720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a728: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x20a728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a72c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x20a72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a730: 0xc0829a0  jal         func_20A680
    ctx->pc = 0x20A730u;
    SET_GPR_U32(ctx, 31, 0x20A738u);
    ctx->pc = 0x20A734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A730u;
            // 0x20a734: 0x312400ff  andi        $a0, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A680u;
    if (runtime->hasFunction(0x20A680u)) {
        auto targetFn = runtime->lookupFunction(0x20A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A738u; }
        if (ctx->pc != 0x20A738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A680_0x20a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A738u; }
        if (ctx->pc != 0x20A738u) { return; }
    }
    ctx->pc = 0x20A738u;
label_20a738:
    // 0x20a738: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a73c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A73Cu;
    {
        const bool branch_taken_0x20a73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a73c) {
            ctx->pc = 0x20A750u;
            goto label_20a750;
        }
    }
    ctx->pc = 0x20A744u;
    // 0x20a744: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A748u;
    {
        const bool branch_taken_0x20a748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A748u;
            // 0x20a74c: 0x8c67a470  lw          $a3, -0x5B90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a748) {
            ctx->pc = 0x20A758u;
            goto label_20a758;
        }
    }
    ctx->pc = 0x20A750u;
label_20a750:
    // 0x20a750: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a754: 0x8c67a460  lw          $a3, -0x5BA0($v1)
    ctx->pc = 0x20a754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943840)));
label_20a758:
    // 0x20a758: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a75c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a760: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x20a760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a764: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x20a764u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a768: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x20a768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x20a76c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20a770: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x20a770u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x20a774: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20a778: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x20a778u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x20a77c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x20a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20a780: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20a780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20a784: 0xfce00010  sd          $zero, 0x10($a3)
    ctx->pc = 0x20a784u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 0));
    // 0x20a788: 0x2463a850  addiu       $v1, $v1, -0x57B0
    ctx->pc = 0x20a788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944848));
    // 0x20a78c: 0xfce40018  sd          $a0, 0x18($a3)
    ctx->pc = 0x20a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 4));
    // 0x20a790: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x20a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20a794: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x20a794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20a798: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x20a798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a79c: 0x3c046131  lui         $a0, 0x6131
    ctx->pc = 0x20a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24881 << 16));
    // 0x20a7a0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x20a7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x20a7a4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20a7a8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20a7ac: 0x1045025  or          $t2, $t0, $a0
    ctx->pc = 0x20a7acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x20a7b0: 0x2463a860  addiu       $v1, $v1, -0x57A0
    ctx->pc = 0x20a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944864));
    // 0x20a7b4: 0x3c08009d  lui         $t0, 0x9D
    ctx->pc = 0x20a7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)157 << 16));
    // 0x20a7b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x20a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20a7bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a7c0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20a7c4: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x20a7c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a7c8: 0x4197c  dsll32      $v1, $a0, 5
    ctx->pc = 0x20a7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 5));
    // 0x20a7cc: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x20a7ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x20a7d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a7d4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x20a7d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x20a7d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a7dc: 0x3c0960ab  lui         $t1, 0x60AB
    ctx->pc = 0x20a7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24747 << 16));
    // 0x20a7e0: 0xfcea0020  sd          $t2, 0x20($a3)
    ctx->pc = 0x20a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 10));
    // 0x20a7e4: 0xfce60028  sd          $a2, 0x28($a3)
    ctx->pc = 0x20a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 6));
    // 0x20a7e8: 0x35294000  ori         $t1, $t1, 0x4000
    ctx->pc = 0x20a7e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x20a7ec: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x20a7ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x20a7f0: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x20a7f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20a7f4: 0xc96025  or          $t4, $a2, $t1
    ctx->pc = 0x20a7f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x20a7f8: 0x9108b280  lbu         $t0, -0x4D80($t0)
    ctx->pc = 0x20a7f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294947456)));
    // 0x20a7fc: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x20a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x20a800: 0x34cb3413  ori         $t3, $a2, 0x3413
    ctx->pc = 0x20a800u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13331);
    // 0x20a804: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x20a804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x20a808: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x20a808u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20a80c: 0x24ca0008  addiu       $t2, $a2, 0x8
    ctx->pc = 0x20a80cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x20a810: 0x86978  dsll        $t5, $t0, 5
    ctx->pc = 0x20a810u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << 5);
    // 0x20a814: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20a818: 0x24c90008  addiu       $t1, $a2, 0x8
    ctx->pc = 0x20a818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x20a81c: 0x831b8  dsll        $a2, $t0, 6
    ctx->pc = 0x20a81cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 6);
    // 0x20a820: 0x1a66825  or          $t5, $t5, $a2
    ctx->pc = 0x20a820u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x20a824: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20a828: 0xfced0030  sd          $t5, 0x30($a3)
    ctx->pc = 0x20a828u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 13));
    // 0x20a82c: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x20a830: 0xfce50038  sd          $a1, 0x38($a3)
    ctx->pc = 0x20a830u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 5));
    // 0x20a834: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x20a838: 0xfce40040  sd          $a0, 0x40($a3)
    ctx->pc = 0x20a838u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 64), GPR_U64(ctx, 4));
    // 0x20a83c: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x20a840: 0xfce30048  sd          $v1, 0x48($a3)
    ctx->pc = 0x20a840u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 72), GPR_U64(ctx, 3));
    // 0x20a844: 0xfcec0050  sd          $t4, 0x50($a3)
    ctx->pc = 0x20a844u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 12));
    // 0x20a848: 0xfceb0058  sd          $t3, 0x58($a3)
    ctx->pc = 0x20a848u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 88), GPR_U64(ctx, 11));
    // 0x20a84c: 0xacea0060  sw          $t2, 0x60($a3)
    ctx->pc = 0x20a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 10));
    // 0x20a850: 0xace90064  sw          $t1, 0x64($a3)
    ctx->pc = 0x20a850u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 9));
    // 0x20a854: 0xace00068  sw          $zero, 0x68($a3)
    ctx->pc = 0x20a854u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 0));
    // 0x20a858: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x20a858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x20a85c: 0xace80070  sw          $t0, 0x70($a3)
    ctx->pc = 0x20a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 8));
    // 0x20a860: 0xace80074  sw          $t0, 0x74($a3)
    ctx->pc = 0x20a860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 8));
    // 0x20a864: 0xace80078  sw          $t0, 0x78($a3)
    ctx->pc = 0x20a864u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 8));
    // 0x20a868: 0xacf2007c  sw          $s2, 0x7C($a3)
    ctx->pc = 0x20a868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 18));
    // 0x20a86c: 0xace60080  sw          $a2, 0x80($a3)
    ctx->pc = 0x20a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 6));
    // 0x20a870: 0x90a3b280  lbu         $v1, -0x4D80($a1)
    ctx->pc = 0x20a870u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x20a874: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20A874u;
    {
        const bool branch_taken_0x20a874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a874) {
            ctx->pc = 0x20A878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A874u;
            // 0x20a878: 0x141900  sll         $v1, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A8CCu;
            goto label_20a8cc;
        }
    }
    ctx->pc = 0x20A87Cu;
    // 0x20a87c: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x20a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x20a880: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20a884: 0x24857100  addiu       $a1, $a0, 0x7100
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x20a888: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20a88c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20a88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20a890: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20a890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20a894: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20a898: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20a89c: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20a8a0: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20a8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20a8a4: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20a8a8: 0x0  nop
    ctx->pc = 0x20a8a8u;
    // NOP
    // 0x20a8ac: 0x2010  mfhi        $a0
    ctx->pc = 0x20a8acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20a8b0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20a8b4: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20a8b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20a8b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20a8bc: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20a8c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20a8c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A8C4u;
    {
        const bool branch_taken_0x20a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8C4u;
            // 0x20a8c8: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8c4) {
            ctx->pc = 0x20A8D0u;
            goto label_20a8d0;
        }
    }
    ctx->pc = 0x20A8CCu;
label_20a8cc:
    // 0x20a8cc: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x20a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20a8d0:
    // 0x20a8d0: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x20a8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20a8d4: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x20a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x20a8d8: 0xace40084  sw          $a0, 0x84($a3)
    ctx->pc = 0x20a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 4));
    // 0x20a8dc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20a8e0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x20a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20a8e4: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x20a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20a8e8: 0xace40088  sw          $a0, 0x88($a3)
    ctx->pc = 0x20a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 4));
    // 0x20a8ec: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x20a8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x20a8f0: 0xace0008c  sw          $zero, 0x8C($a3)
    ctx->pc = 0x20a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 0));
    // 0x20a8f4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x20a8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x20a8f8: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x20a8fc: 0xace80090  sw          $t0, 0x90($a3)
    ctx->pc = 0x20a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 8));
    // 0x20a900: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20a900u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20a904: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20a908: 0xace60094  sw          $a2, 0x94($a3)
    ctx->pc = 0x20a908u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 6));
    // 0x20a90c: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x20a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20a910: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x20a910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x20a914: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x20a914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x20a918: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x20a918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
    // 0x20a91c: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x20a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
    // 0x20a920: 0xace500a4  sw          $a1, 0xA4($a3)
    ctx->pc = 0x20a920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 5));
    // 0x20a924: 0xace500a8  sw          $a1, 0xA8($a3)
    ctx->pc = 0x20a924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 5));
    // 0x20a928: 0xacf200ac  sw          $s2, 0xAC($a3)
    ctx->pc = 0x20a928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 18));
    // 0x20a92c: 0xace400b0  sw          $a0, 0xB0($a3)
    ctx->pc = 0x20a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 4));
    // 0x20a930: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x20a930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x20a934: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20A934u;
    {
        const bool branch_taken_0x20a934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a934) {
            ctx->pc = 0x20A938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A934u;
            // 0x20a938: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A990u;
            goto label_20a990;
        }
    }
    ctx->pc = 0x20A93Cu;
    // 0x20a93c: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x20a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x20a940: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20a940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20a944: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20a944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a948: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x20a94c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20a94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20a950: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20a950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20a954: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20a958: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20a95c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20a960: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20a964: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20a964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20a968: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20a96c: 0x0  nop
    ctx->pc = 0x20a96cu;
    // NOP
    // 0x20a970: 0x2010  mfhi        $a0
    ctx->pc = 0x20a970u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20a974: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20a978: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20a97c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20a980: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20a984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20a988: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A988u;
    {
        const bool branch_taken_0x20a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A988u;
            // 0x20a98c: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a988) {
            ctx->pc = 0x20A998u;
            goto label_20a998;
        }
    }
    ctx->pc = 0x20A990u;
label_20a990:
    // 0x20a990: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20a994: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x20a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20a998:
    // 0x20a998: 0xace300b4  sw          $v1, 0xB4($a3)
    ctx->pc = 0x20a998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 3));
    // 0x20a99c: 0x2403a833  addiu       $v1, $zero, -0x57CD
    ctx->pc = 0x20a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20a9a0: 0xace300b8  sw          $v1, 0xB8($a3)
    ctx->pc = 0x20a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 3));
    // 0x20a9a4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x20a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a9a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20A9A8u;
    {
        const bool branch_taken_0x20a9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9A8u;
            // 0x20a9ac: 0xace000bc  sw          $zero, 0xBC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9a8) {
            ctx->pc = 0x20A9D4u;
            goto label_20a9d4;
        }
    }
    ctx->pc = 0x20A9B0u;
    // 0x20a9b0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a9b4: 0x24e500c0  addiu       $a1, $a3, 0xC0
    ctx->pc = 0x20a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x20a9b8: 0x8c66a070  lw          $a2, -0x5F90($v1)
    ctx->pc = 0x20a9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942832)));
    // 0x20a9bc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a9c0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a9c4: 0xac65a470  sw          $a1, -0x5B90($v1)
    ctx->pc = 0x20a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943856), GPR_U32(ctx, 5));
    // 0x20a9c8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20a9cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20A9CCu;
    {
        const bool branch_taken_0x20a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9CCu;
            // 0x20a9d0: 0xac83a070  sw          $v1, -0x5F90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294942832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9cc) {
            ctx->pc = 0x20A9F4u;
            goto label_20a9f4;
        }
    }
    ctx->pc = 0x20A9D4u;
label_20a9d4:
    // 0x20a9d4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a9d8: 0x24e500c0  addiu       $a1, $a3, 0xC0
    ctx->pc = 0x20a9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x20a9dc: 0x8c66a078  lw          $a2, -0x5F88($v1)
    ctx->pc = 0x20a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942840)));
    // 0x20a9e0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a9e4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a9e8: 0xac65a460  sw          $a1, -0x5BA0($v1)
    ctx->pc = 0x20a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943840), GPR_U32(ctx, 5));
    // 0x20a9ec: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20a9f0: 0xac83a078  sw          $v1, -0x5F88($a0)
    ctx->pc = 0x20a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942840), GPR_U32(ctx, 3));
label_20a9f4:
    // 0x20a9f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20a9f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20a9f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a9fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20a9fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20aa00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20aa00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20aa04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20aa04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aa08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20aa08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aa0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20aa0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aa10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20aa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA14u;
            // 0x20aa18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AA1Cu;
    // 0x20aa1c: 0x0  nop
    ctx->pc = 0x20aa1cu;
    // NOP
    ctx->pc = 0x20aa20u;
}
