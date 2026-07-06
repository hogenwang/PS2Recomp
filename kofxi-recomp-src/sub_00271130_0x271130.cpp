#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271130
// Address: 0x271130 - 0x271228
void sub_00271130_0x271130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271130_0x271130");
#endif

    switch (ctx->pc) {
        case 0x27115cu: goto label_27115c;
        case 0x271168u: goto label_271168;
        default: break;
    }

    ctx->pc = 0x271130u;

    // 0x271130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x271138: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x271138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27113c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x271140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x271140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271148: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x271148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27114c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271150: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x271150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271154: 0xc09c38e  jal         func_270E38
    ctx->pc = 0x271154u;
    SET_GPR_U32(ctx, 31, 0x27115Cu);
    ctx->pc = 0x271158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271154u;
            // 0x271158: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270E38u;
    if (runtime->hasFunction(0x270E38u)) {
        auto targetFn = runtime->lookupFunction(0x270E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27115Cu; }
        if (ctx->pc != 0x27115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270E38_0x270e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27115Cu; }
        if (ctx->pc != 0x27115Cu) { return; }
    }
    ctx->pc = 0x27115Cu;
label_27115c:
    // 0x27115c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27115cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271160: 0xc09c38e  jal         func_270E38
    ctx->pc = 0x271160u;
    SET_GPR_U32(ctx, 31, 0x271168u);
    ctx->pc = 0x271164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271160u;
            // 0x271164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270E38u;
    if (runtime->hasFunction(0x270E38u)) {
        auto targetFn = runtime->lookupFunction(0x270E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271168u; }
        if (ctx->pc != 0x271168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270E38_0x270e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271168u; }
        if (ctx->pc != 0x271168u) { return; }
    }
    ctx->pc = 0x271168u;
label_271168:
    // 0x271168: 0x2787a  dsrl        $t7, $v0, 1
    ctx->pc = 0x271168u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> 1);
    // 0x27116c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27116cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271170: 0x3c0e5555  lui         $t6, 0x5555
    ctx->pc = 0x271170u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)21845 << 16));
    // 0x271174: 0x1f07826  xor         $t7, $t7, $s0
    ctx->pc = 0x271174u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 16));
    // 0x271178: 0x35ce5555  ori         $t6, $t6, 0x5555
    ctx->pc = 0x271178u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)21845);
    // 0x27117c: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x27117cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x271180: 0xf7078  dsll        $t6, $t7, 1
    ctx->pc = 0x271180u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 1);
    // 0x271184: 0x20f3826  xor         $a3, $s0, $t7
    ctx->pc = 0x271184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 15));
    // 0x271188: 0x4e9826  xor         $s3, $v0, $t6
    ctx->pc = 0x271188u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x27118c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27118cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271190: 0x77a3a  dsrl        $t7, $a3, 8
    ctx->pc = 0x271190u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> 8);
    // 0x271194: 0x3c0e00ff  lui         $t6, 0xFF
    ctx->pc = 0x271194u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)255 << 16));
    // 0x271198: 0x1f37826  xor         $t7, $t7, $s3
    ctx->pc = 0x271198u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 19));
    // 0x27119c: 0x35ce00ff  ori         $t6, $t6, 0xFF
    ctx->pc = 0x27119cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)255);
    // 0x2711a0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2711a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2711a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2711a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2711a8: 0xf7238  dsll        $t6, $t7, 8
    ctx->pc = 0x2711a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 8);
    // 0x2711ac: 0x26f9826  xor         $s3, $s3, $t7
    ctx->pc = 0x2711acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 15));
    // 0x2711b0: 0xee3826  xor         $a3, $a3, $t6
    ctx->pc = 0x2711b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 14));
    // 0x2711b4: 0x1378ba  dsrl        $t7, $s3, 2
    ctx->pc = 0x2711b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) >> 2);
    // 0x2711b8: 0x3c0e3333  lui         $t6, 0x3333
    ctx->pc = 0x2711b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)13107 << 16));
    // 0x2711bc: 0x1e77826  xor         $t7, $t7, $a3
    ctx->pc = 0x2711bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 7));
    // 0x2711c0: 0x35ce3333  ori         $t6, $t6, 0x3333
    ctx->pc = 0x2711c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)13107);
    // 0x2711c4: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2711c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2711c8: 0xf68b8  dsll        $t5, $t7, 2
    ctx->pc = 0x2711c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << 2);
    // 0x2711cc: 0xef3826  xor         $a3, $a3, $t7
    ctx->pc = 0x2711ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 15));
    // 0x2711d0: 0x26d9826  xor         $s3, $s3, $t5
    ctx->pc = 0x2711d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 13));
    // 0x2711d4: 0x77c3a  dsrl        $t7, $a3, 16
    ctx->pc = 0x2711d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> 16);
    // 0x2711d8: 0x1f37826  xor         $t7, $t7, $s3
    ctx->pc = 0x2711d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 19));
    // 0x2711dc: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x2711dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x2711e0: 0xf7438  dsll        $t6, $t7, 16
    ctx->pc = 0x2711e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 16);
    // 0x2711e4: 0x26f9826  xor         $s3, $s3, $t7
    ctx->pc = 0x2711e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 15));
    // 0x2711e8: 0xee3826  xor         $a3, $a3, $t6
    ctx->pc = 0x2711e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 14));
    // 0x2711ec: 0x13793a  dsrl        $t7, $s3, 4
    ctx->pc = 0x2711ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) >> 4);
    // 0x2711f0: 0x3c0e0f0f  lui         $t6, 0xF0F
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3855 << 16));
    // 0x2711f4: 0x1e77826  xor         $t7, $t7, $a3
    ctx->pc = 0x2711f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 7));
    // 0x2711f8: 0x35ce0f0f  ori         $t6, $t6, 0xF0F
    ctx->pc = 0x2711f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)3855);
    // 0x2711fc: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2711fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x271200: 0xef3826  xor         $a3, $a3, $t7
    ctx->pc = 0x271200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 15));
    // 0x271204: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x271204u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x271208: 0xf7938  dsll        $t7, $t7, 4
    ctx->pc = 0x271208u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 4);
    // 0x27120c: 0x26f9826  xor         $s3, $s3, $t7
    ctx->pc = 0x27120cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 15));
    // 0x271210: 0xfe530000  sd          $s3, 0x0($s2)
    ctx->pc = 0x271210u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 19));
    // 0x271214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271218: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x271218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27121c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27121cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271220: 0x3e00008  jr          $ra
    ctx->pc = 0x271220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271220u;
            // 0x271224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271228u;
    ctx->pc = 0x271228u;
}
