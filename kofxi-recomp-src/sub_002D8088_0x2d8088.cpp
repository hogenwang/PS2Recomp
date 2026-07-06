#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8088
// Address: 0x2d8088 - 0x2d8238
void sub_002D8088_0x2d8088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8088_0x2d8088");
#endif

    switch (ctx->pc) {
        case 0x2d8088u: goto label_2d8088;
        case 0x2d808cu: goto label_2d808c;
        case 0x2d8090u: goto label_2d8090;
        case 0x2d8094u: goto label_2d8094;
        case 0x2d8098u: goto label_2d8098;
        case 0x2d809cu: goto label_2d809c;
        case 0x2d80a0u: goto label_2d80a0;
        case 0x2d80a4u: goto label_2d80a4;
        case 0x2d80a8u: goto label_2d80a8;
        case 0x2d80acu: goto label_2d80ac;
        case 0x2d80b0u: goto label_2d80b0;
        case 0x2d80b4u: goto label_2d80b4;
        case 0x2d80b8u: goto label_2d80b8;
        case 0x2d80bcu: goto label_2d80bc;
        case 0x2d80c0u: goto label_2d80c0;
        case 0x2d80c4u: goto label_2d80c4;
        case 0x2d80c8u: goto label_2d80c8;
        case 0x2d80ccu: goto label_2d80cc;
        case 0x2d80d0u: goto label_2d80d0;
        case 0x2d80d4u: goto label_2d80d4;
        case 0x2d80d8u: goto label_2d80d8;
        case 0x2d80dcu: goto label_2d80dc;
        case 0x2d80e0u: goto label_2d80e0;
        case 0x2d80e4u: goto label_2d80e4;
        case 0x2d80e8u: goto label_2d80e8;
        case 0x2d80ecu: goto label_2d80ec;
        case 0x2d80f0u: goto label_2d80f0;
        case 0x2d80f4u: goto label_2d80f4;
        case 0x2d80f8u: goto label_2d80f8;
        case 0x2d80fcu: goto label_2d80fc;
        case 0x2d8100u: goto label_2d8100;
        case 0x2d8104u: goto label_2d8104;
        case 0x2d8108u: goto label_2d8108;
        case 0x2d810cu: goto label_2d810c;
        case 0x2d8110u: goto label_2d8110;
        case 0x2d8114u: goto label_2d8114;
        case 0x2d8118u: goto label_2d8118;
        case 0x2d811cu: goto label_2d811c;
        case 0x2d8120u: goto label_2d8120;
        case 0x2d8124u: goto label_2d8124;
        case 0x2d8128u: goto label_2d8128;
        case 0x2d812cu: goto label_2d812c;
        case 0x2d8130u: goto label_2d8130;
        case 0x2d8134u: goto label_2d8134;
        case 0x2d8138u: goto label_2d8138;
        case 0x2d813cu: goto label_2d813c;
        case 0x2d8140u: goto label_2d8140;
        case 0x2d8144u: goto label_2d8144;
        case 0x2d8148u: goto label_2d8148;
        case 0x2d814cu: goto label_2d814c;
        case 0x2d8150u: goto label_2d8150;
        case 0x2d8154u: goto label_2d8154;
        case 0x2d8158u: goto label_2d8158;
        case 0x2d815cu: goto label_2d815c;
        case 0x2d8160u: goto label_2d8160;
        case 0x2d8164u: goto label_2d8164;
        case 0x2d8168u: goto label_2d8168;
        case 0x2d816cu: goto label_2d816c;
        case 0x2d8170u: goto label_2d8170;
        case 0x2d8174u: goto label_2d8174;
        case 0x2d8178u: goto label_2d8178;
        case 0x2d817cu: goto label_2d817c;
        case 0x2d8180u: goto label_2d8180;
        case 0x2d8184u: goto label_2d8184;
        case 0x2d8188u: goto label_2d8188;
        case 0x2d818cu: goto label_2d818c;
        case 0x2d8190u: goto label_2d8190;
        case 0x2d8194u: goto label_2d8194;
        case 0x2d8198u: goto label_2d8198;
        case 0x2d819cu: goto label_2d819c;
        case 0x2d81a0u: goto label_2d81a0;
        case 0x2d81a4u: goto label_2d81a4;
        case 0x2d81a8u: goto label_2d81a8;
        case 0x2d81acu: goto label_2d81ac;
        case 0x2d81b0u: goto label_2d81b0;
        case 0x2d81b4u: goto label_2d81b4;
        case 0x2d81b8u: goto label_2d81b8;
        case 0x2d81bcu: goto label_2d81bc;
        case 0x2d81c0u: goto label_2d81c0;
        case 0x2d81c4u: goto label_2d81c4;
        case 0x2d81c8u: goto label_2d81c8;
        case 0x2d81ccu: goto label_2d81cc;
        case 0x2d81d0u: goto label_2d81d0;
        case 0x2d81d4u: goto label_2d81d4;
        case 0x2d81d8u: goto label_2d81d8;
        case 0x2d81dcu: goto label_2d81dc;
        case 0x2d81e0u: goto label_2d81e0;
        case 0x2d81e4u: goto label_2d81e4;
        case 0x2d81e8u: goto label_2d81e8;
        case 0x2d81ecu: goto label_2d81ec;
        case 0x2d81f0u: goto label_2d81f0;
        case 0x2d81f4u: goto label_2d81f4;
        case 0x2d81f8u: goto label_2d81f8;
        case 0x2d81fcu: goto label_2d81fc;
        case 0x2d8200u: goto label_2d8200;
        case 0x2d8204u: goto label_2d8204;
        case 0x2d8208u: goto label_2d8208;
        case 0x2d820cu: goto label_2d820c;
        case 0x2d8210u: goto label_2d8210;
        case 0x2d8214u: goto label_2d8214;
        case 0x2d8218u: goto label_2d8218;
        case 0x2d821cu: goto label_2d821c;
        case 0x2d8220u: goto label_2d8220;
        case 0x2d8224u: goto label_2d8224;
        case 0x2d8228u: goto label_2d8228;
        case 0x2d822cu: goto label_2d822c;
        case 0x2d8230u: goto label_2d8230;
        case 0x2d8234u: goto label_2d8234;
        default: break;
    }

    ctx->pc = 0x2d8088u;

label_2d8088:
    // 0x2d8088: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d808c:
    // 0x2d808c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2d8090:
    // 0x2d8090: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2d8090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d8094:
    // 0x2d8094: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2d8098:
    // 0x2d8098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d8098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d809c:
    // 0x2d809c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d80a0:
    // 0x2d80a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d80a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2d80a4:
    // 0x2d80a4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d80a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2d80a8:
    // 0x2d80a8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2d80a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d80ac:
    // 0x2d80ac: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d80acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_2d80b0:
    // 0x2d80b0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d80b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d80b4:
    // 0x2d80b4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2d80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_2d80b8:
    // 0x2d80b8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2d80b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d80bc:
    // 0x2d80bc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2d80bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_2d80c0:
    // 0x2d80c0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2d80c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d80c4:
    // 0x2d80c4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d80c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2d80c8:
    // 0x2d80c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d80c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2d80cc:
    // 0x2d80cc: 0xc0b4614  jal         func_2D1850
label_2d80d0:
    if (ctx->pc == 0x2D80D0u) {
        ctx->pc = 0x2D80D0u;
            // 0x2d80d0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D80D4u;
        goto label_2d80d4;
    }
    ctx->pc = 0x2D80CCu;
    SET_GPR_U32(ctx, 31, 0x2D80D4u);
    ctx->pc = 0x2D80D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D80CCu;
            // 0x2d80d0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80D4u; }
        if (ctx->pc != 0x2D80D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80D4u; }
        if (ctx->pc != 0x2D80D4u) { return; }
    }
    ctx->pc = 0x2D80D4u;
label_2d80d4:
    // 0x2d80d4: 0xc0b4614  jal         func_2D1850
label_2d80d8:
    if (ctx->pc == 0x2D80D8u) {
        ctx->pc = 0x2D80D8u;
            // 0x2d80d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D80DCu;
        goto label_2d80dc;
    }
    ctx->pc = 0x2D80D4u;
    SET_GPR_U32(ctx, 31, 0x2D80DCu);
    ctx->pc = 0x2D80D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D80D4u;
            // 0x2d80d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80DCu; }
        if (ctx->pc != 0x2D80DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80DCu; }
        if (ctx->pc != 0x2D80DCu) { return; }
    }
    ctx->pc = 0x2D80DCu;
label_2d80dc:
    // 0x2d80dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2d80e0:
    if (ctx->pc == 0x2D80E0u) {
        ctx->pc = 0x2D80E0u;
            // 0x2d80e0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2D80E4u;
        goto label_2d80e4;
    }
    ctx->pc = 0x2D80DCu;
    {
        const bool branch_taken_0x2d80dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D80DCu;
            // 0x2d80e0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80dc) {
            ctx->pc = 0x2D8120u;
            goto label_2d8120;
        }
    }
    ctx->pc = 0x2D80E4u;
label_2d80e4:
    // 0x2d80e4: 0x0  nop
    ctx->pc = 0x2d80e4u;
    // NOP
label_2d80e8:
    // 0x2d80e8: 0xc0b4092  jal         func_2D0248
label_2d80ec:
    if (ctx->pc == 0x2D80ECu) {
        ctx->pc = 0x2D80F0u;
        goto label_2d80f0;
    }
    ctx->pc = 0x2D80E8u;
    SET_GPR_U32(ctx, 31, 0x2D80F0u);
    ctx->pc = 0x2D0248u;
    if (runtime->hasFunction(0x2D0248u)) {
        auto targetFn = runtime->lookupFunction(0x2D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80F0u; }
        if (ctx->pc != 0x2D80F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0248_0x2d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80F0u; }
        if (ctx->pc != 0x2D80F0u) { return; }
    }
    ctx->pc = 0x2D80F0u;
label_2d80f0:
    // 0x2d80f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d80f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d80f4:
    // 0x2d80f4: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x2d80f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2d80f8:
    // 0x2d80f8: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2d80fc:
    // 0x2d80fc: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x2d80fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_2d8100:
    // 0x2d8100: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2d8100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d8104:
    // 0x2d8104: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2d8104u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2d8108:
    // 0x2d8108: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2d8108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d810c:
    // 0x2d810c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x2d810cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_2d8110:
    // 0x2d8110: 0xc0b4186  jal         func_2D0618
label_2d8114:
    if (ctx->pc == 0x2D8114u) {
        ctx->pc = 0x2D8114u;
            // 0x2d8114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8118u;
        goto label_2d8118;
    }
    ctx->pc = 0x2D8110u;
    SET_GPR_U32(ctx, 31, 0x2D8118u);
    ctx->pc = 0x2D8114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8110u;
            // 0x2d8114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0618u;
    if (runtime->hasFunction(0x2D0618u)) {
        auto targetFn = runtime->lookupFunction(0x2D0618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8118u; }
        if (ctx->pc != 0x2D8118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0618_0x2d0618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8118u; }
        if (ctx->pc != 0x2D8118u) { return; }
    }
    ctx->pc = 0x2D8118u;
label_2d8118:
    // 0x2d8118: 0x10000015  b           . + 4 + (0x15 << 2)
label_2d811c:
    if (ctx->pc == 0x2D811Cu) {
        ctx->pc = 0x2D811Cu;
            // 0x2d811c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8120u;
        goto label_2d8120;
    }
    ctx->pc = 0x2D8118u;
    {
        const bool branch_taken_0x2d8118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8118u;
            // 0x2d811c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8118) {
            ctx->pc = 0x2D8170u;
            goto label_2d8170;
        }
    }
    ctx->pc = 0x2D8120u;
label_2d8120:
    // 0x2d8120: 0x2a2182b  sltu        $v1, $s5, $v0
    ctx->pc = 0x2d8120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d8124:
    // 0x2d8124: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_2d8128:
    if (ctx->pc == 0x2D8128u) {
        ctx->pc = 0x2D8128u;
            // 0x2d8128: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D812Cu;
        goto label_2d812c;
    }
    ctx->pc = 0x2D8124u;
    {
        const bool branch_taken_0x2d8124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8124u;
            // 0x2d8128: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8124) {
            ctx->pc = 0x2D8198u;
            goto label_2d8198;
        }
    }
    ctx->pc = 0x2D812Cu;
label_2d812c:
    // 0x2d812c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d812cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d8130:
    // 0x2d8130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8134:
    // 0x2d8134: 0xc0b4120  jal         func_2D0480
label_2d8138:
    if (ctx->pc == 0x2D8138u) {
        ctx->pc = 0x2D8138u;
            // 0x2d8138: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D813Cu;
        goto label_2d813c;
    }
    ctx->pc = 0x2D8134u;
    SET_GPR_U32(ctx, 31, 0x2D813Cu);
    ctx->pc = 0x2D8138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8134u;
            // 0x2d8138: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0480u;
    if (runtime->hasFunction(0x2D0480u)) {
        auto targetFn = runtime->lookupFunction(0x2D0480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D813Cu; }
        if (ctx->pc != 0x2D813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0480_0x2d0480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D813Cu; }
        if (ctx->pc != 0x2D813Cu) { return; }
    }
    ctx->pc = 0x2D813Cu;
label_2d813c:
    // 0x2d813c: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x2d813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2d8140:
    // 0x2d8140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8144:
    // 0x2d8144: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2d8144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8148:
    // 0x2d8148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d8148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d814c:
    // 0x2d814c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_2d8150:
    if (ctx->pc == 0x2D8150u) {
        ctx->pc = 0x2D8150u;
            // 0x2d8150: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8154u;
        goto label_2d8154;
    }
    ctx->pc = 0x2D814Cu;
    {
        const bool branch_taken_0x2d814c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D814Cu;
            // 0x2d8150: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d814c) {
            ctx->pc = 0x2D8170u;
            goto label_2d8170;
        }
    }
    ctx->pc = 0x2D8154u;
label_2d8154:
    // 0x2d8154: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x2d8154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2d8158:
    // 0x2d8158: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2d8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2d815c:
    // 0x2d815c: 0x40f809  jalr        $v0
label_2d8160:
    if (ctx->pc == 0x2D8160u) {
        ctx->pc = 0x2D8160u;
            // 0x2d8160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8164u;
        goto label_2d8164;
    }
    ctx->pc = 0x2D815Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8164u);
        ctx->pc = 0x2D8160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D815Cu;
            // 0x2d8160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8164u; }
            if (ctx->pc != 0x2D8164u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8164u;
label_2d8164:
    // 0x2d8164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8168:
    // 0x2d8168: 0x1220ffdf  beqz        $s1, . + 4 + (-0x21 << 2)
label_2d816c:
    if (ctx->pc == 0x2D816Cu) {
        ctx->pc = 0x2D816Cu;
            // 0x2d816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8170u;
        goto label_2d8170;
    }
    ctx->pc = 0x2D8168u;
    {
        const bool branch_taken_0x2d8168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8168u;
            // 0x2d816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8168) {
            ctx->pc = 0x2D80E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d80e8;
        }
    }
    ctx->pc = 0x2D8170u;
label_2d8170:
    // 0x2d8170: 0xc0b4618  jal         func_2D1860
label_2d8174:
    if (ctx->pc == 0x2D8174u) {
        ctx->pc = 0x2D8174u;
            // 0x2d8174: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8178u;
        goto label_2d8178;
    }
    ctx->pc = 0x2D8170u;
    SET_GPR_U32(ctx, 31, 0x2D8178u);
    ctx->pc = 0x2D8174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8170u;
            // 0x2d8174: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8178u; }
        if (ctx->pc != 0x2D8178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8178u; }
        if (ctx->pc != 0x2D8178u) { return; }
    }
    ctx->pc = 0x2D8178u;
label_2d8178:
    // 0x2d8178: 0xc0b4618  jal         func_2D1860
label_2d817c:
    if (ctx->pc == 0x2D817Cu) {
        ctx->pc = 0x2D817Cu;
            // 0x2d817c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8180u;
        goto label_2d8180;
    }
    ctx->pc = 0x2D8178u;
    SET_GPR_U32(ctx, 31, 0x2D8180u);
    ctx->pc = 0x2D817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8178u;
            // 0x2d817c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8180u; }
        if (ctx->pc != 0x2D8180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8180u; }
        if (ctx->pc != 0x2D8180u) { return; }
    }
    ctx->pc = 0x2D8180u;
label_2d8180:
    // 0x2d8180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8184:
    // 0x2d8184: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_2d8188:
    if (ctx->pc == 0x2D8188u) {
        ctx->pc = 0x2D8188u;
            // 0x2d8188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D818Cu;
        goto label_2d818c;
    }
    ctx->pc = 0x2D8184u;
    {
        const bool branch_taken_0x2d8184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8184u;
            // 0x2d8188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8184) {
            ctx->pc = 0x2D81A0u;
            goto label_2d81a0;
        }
    }
    ctx->pc = 0x2D818Cu;
label_2d818c:
    // 0x2d818c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2d8190:
    if (ctx->pc == 0x2D8190u) {
        ctx->pc = 0x2D8190u;
            // 0x2d8190: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2D8194u;
        goto label_2d8194;
    }
    ctx->pc = 0x2D818Cu;
    {
        const bool branch_taken_0x2d818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D818Cu;
            // 0x2d8190: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d818c) {
            ctx->pc = 0x2D81ACu;
            goto label_2d81ac;
        }
    }
    ctx->pc = 0x2D8194u;
label_2d8194:
    // 0x2d8194: 0x0  nop
    ctx->pc = 0x2d8194u;
    // NOP
label_2d8198:
    // 0x2d8198: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_2d819c:
    if (ctx->pc == 0x2D819Cu) {
        ctx->pc = 0x2D819Cu;
            // 0x2d819c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2D81A0u;
        goto label_2d81a0;
    }
    ctx->pc = 0x2D8198u;
    {
        const bool branch_taken_0x2d8198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8198u;
            // 0x2d819c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8198) {
            ctx->pc = 0x2D8170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8170;
        }
    }
    ctx->pc = 0x2D81A0u;
label_2d81a0:
    // 0x2d81a0: 0xc0b220a  jal         func_2C8828
label_2d81a4:
    if (ctx->pc == 0x2D81A4u) {
        ctx->pc = 0x2D81A8u;
        goto label_2d81a8;
    }
    ctx->pc = 0x2D81A0u;
    SET_GPR_U32(ctx, 31, 0x2D81A8u);
    ctx->pc = 0x2C8828u;
    if (runtime->hasFunction(0x2C8828u)) {
        auto targetFn = runtime->lookupFunction(0x2C8828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81A8u; }
        if (ctx->pc != 0x2D81A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8828_0x2c8828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81A8u; }
        if (ctx->pc != 0x2D81A8u) { return; }
    }
    ctx->pc = 0x2D81A8u;
label_2d81a8:
    // 0x2d81a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d81a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d81ac:
    // 0x2d81ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d81acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d81b0:
    // 0x2d81b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d81b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d81b4:
    // 0x2d81b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d81b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d81b8:
    // 0x2d81b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d81b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d81bc:
    // 0x2d81bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d81bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d81c0:
    // 0x2d81c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2d81c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d81c4:
    // 0x2d81c4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2d81c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2d81c8:
    // 0x2d81c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d81c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d81cc:
    // 0x2d81cc: 0x3e00008  jr          $ra
label_2d81d0:
    if (ctx->pc == 0x2D81D0u) {
        ctx->pc = 0x2D81D0u;
            // 0x2d81d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2D81D4u;
        goto label_2d81d4;
    }
    ctx->pc = 0x2D81CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D81D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81CCu;
            // 0x2d81d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D81D4u;
label_2d81d4:
    // 0x2d81d4: 0x0  nop
    ctx->pc = 0x2d81d4u;
    // NOP
label_2d81d8:
    // 0x2d81d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d81d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d81dc:
    // 0x2d81dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d81dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d81e0:
    // 0x2d81e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d81e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d81e4:
    // 0x2d81e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d81e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2d81e8:
    // 0x2d81e8: 0xc0b4618  jal         func_2D1860
label_2d81ec:
    if (ctx->pc == 0x2D81ECu) {
        ctx->pc = 0x2D81ECu;
            // 0x2d81ec: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2D81F0u;
        goto label_2d81f0;
    }
    ctx->pc = 0x2D81E8u;
    SET_GPR_U32(ctx, 31, 0x2D81F0u);
    ctx->pc = 0x2D81ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81E8u;
            // 0x2d81ec: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81F0u; }
        if (ctx->pc != 0x2D81F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81F0u; }
        if (ctx->pc != 0x2D81F0u) { return; }
    }
    ctx->pc = 0x2D81F0u;
label_2d81f0:
    // 0x2d81f0: 0xc0b4618  jal         func_2D1860
label_2d81f4:
    if (ctx->pc == 0x2D81F4u) {
        ctx->pc = 0x2D81F4u;
            // 0x2d81f4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x2D81F8u;
        goto label_2d81f8;
    }
    ctx->pc = 0x2D81F0u;
    SET_GPR_U32(ctx, 31, 0x2D81F8u);
    ctx->pc = 0x2D81F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81F0u;
            // 0x2d81f4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81F8u; }
        if (ctx->pc != 0x2D81F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81F8u; }
        if (ctx->pc != 0x2D81F8u) { return; }
    }
    ctx->pc = 0x2D81F8u;
label_2d81f8:
    // 0x2d81f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d81f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81fc:
    // 0x2d81fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8200:
    // 0x2d8200: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d8204:
    if (ctx->pc == 0x2D8204u) {
        ctx->pc = 0x2D8204u;
            // 0x2d8204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8208u;
        goto label_2d8208;
    }
    ctx->pc = 0x2D8200u;
    {
        const bool branch_taken_0x2d8200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8200u;
            // 0x2d8204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8200) {
            ctx->pc = 0x2D8228u;
            goto label_2d8228;
        }
    }
    ctx->pc = 0x2D8208u;
label_2d8208:
    // 0x2d8208: 0xc0b608e  jal         func_2D8238
label_2d820c:
    if (ctx->pc == 0x2D820Cu) {
        ctx->pc = 0x2D820Cu;
            // 0x2d820c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D8210u;
        goto label_2d8210;
    }
    ctx->pc = 0x2D8208u;
    SET_GPR_U32(ctx, 31, 0x2D8210u);
    ctx->pc = 0x2D820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8208u;
            // 0x2d820c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8210u; }
        if (ctx->pc != 0x2D8210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8210u; }
        if (ctx->pc != 0x2D8210u) { return; }
    }
    ctx->pc = 0x2D8210u;
label_2d8210:
    // 0x2d8210: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d8210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8214:
    // 0x2d8214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d8214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d8218:
    // 0x2d8218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d8218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d821c:
    // 0x2d821c: 0x80b60dc  j           func_2D8370
label_2d8220:
    if (ctx->pc == 0x2D8220u) {
        ctx->pc = 0x2D8220u;
            // 0x2d8220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D8224u;
        goto label_2d8224;
    }
    ctx->pc = 0x2D821Cu;
    ctx->pc = 0x2D8220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D821Cu;
            // 0x2d8220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D8370_0x2d8370(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D8224u;
label_2d8224:
    // 0x2d8224: 0x0  nop
    ctx->pc = 0x2d8224u;
    // NOP
label_2d8228:
    // 0x2d8228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d8228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d822c:
    // 0x2d822c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d822cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d8230:
    // 0x2d8230: 0x3e00008  jr          $ra
label_2d8234:
    if (ctx->pc == 0x2D8234u) {
        ctx->pc = 0x2D8234u;
            // 0x2d8234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D8238u;
        goto label_fallthrough_0x2d8230;
    }
    ctx->pc = 0x2D8230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8230u;
            // 0x2d8234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d8230:
    ctx->pc = 0x2D8238u;
    ctx->pc = 0x2d8238u;
}
