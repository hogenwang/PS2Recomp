#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001020A0
// Address: 0x1020a0 - 0x102280
void sub_001020A0_0x1020a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001020A0_0x1020a0");
#endif

    switch (ctx->pc) {
        case 0x10212cu: goto label_10212c;
        case 0x102160u: goto label_102160;
        default: break;
    }

    ctx->pc = 0x1020a0u;

    // 0x1020a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1020a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1020a4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1020a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1020a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1020a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1020ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1020acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1020b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1020b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1020b4: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1020b4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1020b8: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1020bc: 0x63583  sra         $a2, $a2, 22
    ctx->pc = 0x1020bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x1020c0: 0x3282000f  andi        $v0, $s4, 0xF
    ctx->pc = 0x1020c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x1020c4: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x1020c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1020c8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1020c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1020cc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1020ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1020d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1020d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1020d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1020d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1020d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1020d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1020dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1020dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1020e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1020e4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1020e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1020e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1020e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1020ec: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1020ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1020f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1020f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1020f4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1020f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1020f8: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x1020f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1020fc: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1020fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x102100: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x102104: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x102104u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x102108: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x102108u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x10210c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x10210cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x102110: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x102110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x102114: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x102114u;
    {
        const bool branch_taken_0x102114 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x102118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102114u;
            // 0x102118: 0xfe030018  sd          $v1, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102114) {
            ctx->pc = 0x102150u;
            goto label_102150;
        }
    }
    ctx->pc = 0x10211Cu;
    // 0x10211c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102120: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102124: 0xc040248  jal         func_100920
    ctx->pc = 0x102124u;
    SET_GPR_U32(ctx, 31, 0x10212Cu);
    ctx->pc = 0x102128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102124u;
            // 0x102128: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10212Cu; }
        if (ctx->pc != 0x10212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100920_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10212Cu; }
        if (ctx->pc != 0x10212Cu) { return; }
    }
    ctx->pc = 0x10212Cu;
label_10212c:
    // 0x10212c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10212cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102130: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x102130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x102134: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x102138: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x102138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x10213c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x102140: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x102140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x102144: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x102144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x102148: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x102148u;
    {
        const bool branch_taken_0x102148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102148u;
            // 0x10214c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102148) {
            ctx->pc = 0x102174u;
            goto label_102174;
        }
    }
    ctx->pc = 0x102150u;
label_102150:
    // 0x102150: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x102150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102158: 0xc040248  jal         func_100920
    ctx->pc = 0x102158u;
    SET_GPR_U32(ctx, 31, 0x102160u);
    ctx->pc = 0x10215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102158u;
            // 0x10215c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102160u; }
        if (ctx->pc != 0x102160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100920_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102160u; }
        if (ctx->pc != 0x102160u) { return; }
    }
    ctx->pc = 0x102160u;
label_102160:
    // 0x102160: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102164: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x102164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x102168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10216c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x10216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x102170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x102170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_102174:
    // 0x102174: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x102174u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x102178: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x102178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x10217c: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x10217cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x102180: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102184: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x102184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x102188: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x102188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x10218c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10218cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x102190: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x102190u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x102194: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x102194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x102198: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x102198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x10219c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x10219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1021a0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1021a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1021a4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1021a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1021a8: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x1021a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x1021ac: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x1021acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1021b0: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x1021b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1021b4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1021b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1021b8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1021b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1021bc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1021bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1021c0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1021c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1021c4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1021c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1021c8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1021cc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x1021ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x1021d0: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x1021d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x1021d4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1021d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1021d8: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x1021d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1021dc: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x1021dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1021e0: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x1021e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1021e4: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1021e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1021e8: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x1021e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x1021ec: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x1021ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x1021f0: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x1021f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x1021f4: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x1021f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x1021f8: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x1021f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x1021fc: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x1021fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x102200: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x102200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x102204: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x102204u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x102208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102208u;
    {
        const bool branch_taken_0x102208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102208u;
            // 0x10220c: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102208) {
            ctx->pc = 0x10221Cu;
            goto label_10221c;
        }
    }
    ctx->pc = 0x102210u;
    // 0x102210: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x102210u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x102214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102214u;
    {
        const bool branch_taken_0x102214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102214u;
            // 0x102218: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102214) {
            ctx->pc = 0x102228u;
            goto label_102228;
        }
    }
    ctx->pc = 0x10221Cu;
label_10221c:
    // 0x10221c: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x10221cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x102220: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x102220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x102224: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102228:
    // 0x102228: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x102228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x10222c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x10222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102230: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x102230u;
    {
        const bool branch_taken_0x102230 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x102234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102230u;
            // 0x102234: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102230) {
            ctx->pc = 0x10224Cu;
            goto label_10224c;
        }
    }
    ctx->pc = 0x102238u;
    // 0x102238: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x102238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x10223c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x102240: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x102240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x102244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x102244u;
    {
        const bool branch_taken_0x102244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102244u;
            // 0x102248: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102244) {
            ctx->pc = 0x102250u;
            goto label_102250;
        }
    }
    ctx->pc = 0x10224Cu;
label_10224c:
    // 0x10224c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x10224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_102250:
    // 0x102250: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x102250u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x102254: 0xf  sync
    ctx->pc = 0x102254u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x102258: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x102258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10225c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x102260: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x102260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102264: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x102264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102268: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x102268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10226c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10226cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102270: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102278: 0x3e00008  jr          $ra
    ctx->pc = 0x102278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102278u;
            // 0x10227c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102280u;
    ctx->pc = 0x102280u;
}
