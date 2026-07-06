#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001924D0
// Address: 0x1924d0 - 0x192d60
void sub_001924D0_0x1924d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001924D0_0x1924d0");
#endif

    switch (ctx->pc) {
        case 0x1924e4u: goto label_1924e4;
        case 0x1924f8u: goto label_1924f8;
        case 0x192510u: goto label_192510;
        case 0x192520u: goto label_192520;
        case 0x192530u: goto label_192530;
        case 0x192540u: goto label_192540;
        case 0x192550u: goto label_192550;
        case 0x192560u: goto label_192560;
        case 0x192570u: goto label_192570;
        case 0x192580u: goto label_192580;
        case 0x192590u: goto label_192590;
        case 0x1925a0u: goto label_1925a0;
        case 0x1925b0u: goto label_1925b0;
        case 0x1925c0u: goto label_1925c0;
        case 0x1925d0u: goto label_1925d0;
        case 0x1925e0u: goto label_1925e0;
        case 0x1925f0u: goto label_1925f0;
        case 0x192600u: goto label_192600;
        case 0x192614u: goto label_192614;
        case 0x192624u: goto label_192624;
        case 0x192634u: goto label_192634;
        case 0x192644u: goto label_192644;
        case 0x192654u: goto label_192654;
        case 0x192664u: goto label_192664;
        case 0x192674u: goto label_192674;
        case 0x192684u: goto label_192684;
        case 0x192694u: goto label_192694;
        case 0x1926a4u: goto label_1926a4;
        case 0x1926b4u: goto label_1926b4;
        case 0x1926c4u: goto label_1926c4;
        case 0x1926d4u: goto label_1926d4;
        case 0x1926e4u: goto label_1926e4;
        case 0x1926f4u: goto label_1926f4;
        case 0x192704u: goto label_192704;
        case 0x192710u: goto label_192710;
        case 0x192748u: goto label_192748;
        case 0x192960u: goto label_192960;
        case 0x1929e0u: goto label_1929e0;
        case 0x1929ecu: goto label_1929ec;
        case 0x192a88u: goto label_192a88;
        case 0x192a9cu: goto label_192a9c;
        case 0x192ab8u: goto label_192ab8;
        case 0x192ac4u: goto label_192ac4;
        case 0x192af0u: goto label_192af0;
        case 0x192b00u: goto label_192b00;
        case 0x192b1cu: goto label_192b1c;
        case 0x192b34u: goto label_192b34;
        case 0x192b44u: goto label_192b44;
        case 0x192b60u: goto label_192b60;
        case 0x192b7cu: goto label_192b7c;
        case 0x192b88u: goto label_192b88;
        case 0x192ba4u: goto label_192ba4;
        case 0x192bc4u: goto label_192bc4;
        case 0x192bdcu: goto label_192bdc;
        case 0x192bf8u: goto label_192bf8;
        case 0x192c04u: goto label_192c04;
        case 0x192c4cu: goto label_192c4c;
        case 0x192c64u: goto label_192c64;
        case 0x192c90u: goto label_192c90;
        case 0x192ca8u: goto label_192ca8;
        case 0x192cd4u: goto label_192cd4;
        case 0x192cecu: goto label_192cec;
        case 0x192d08u: goto label_192d08;
        case 0x192d14u: goto label_192d14;
        default: break;
    }

    ctx->pc = 0x1924d0u;

label_1924d0:
    // 0x1924d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1924d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1924d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1924d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1924d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1924d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1924dc: 0xc0c8edc  jal         func_323B70
    ctx->pc = 0x1924DCu;
    SET_GPR_U32(ctx, 31, 0x1924E4u);
    ctx->pc = 0x1924E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1924DCu;
            // 0x1924e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (runtime->hasFunction(0x323B70u)) {
        auto targetFn = runtime->lookupFunction(0x323B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924E4u; }
        if (ctx->pc != 0x1924E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B70_0x323b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924E4u; }
        if (ctx->pc != 0x1924E4u) { return; }
    }
    ctx->pc = 0x1924E4u;
label_1924e4:
    // 0x1924e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1924E4u;
    {
        const bool branch_taken_0x1924e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1924e4) {
            ctx->pc = 0x1924E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1924E4u;
            // 0x1924e8: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192504u;
            goto label_192504;
        }
    }
    ctx->pc = 0x1924ECu;
    // 0x1924ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1924ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1924f0: 0xc0c8edc  jal         func_323B70
    ctx->pc = 0x1924F0u;
    SET_GPR_U32(ctx, 31, 0x1924F8u);
    ctx->pc = 0x1924F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1924F0u;
            // 0x1924f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (runtime->hasFunction(0x323B70u)) {
        auto targetFn = runtime->lookupFunction(0x323B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924F8u; }
        if (ctx->pc != 0x1924F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B70_0x323b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924F8u; }
        if (ctx->pc != 0x1924F8u) { return; }
    }
    ctx->pc = 0x1924F8u;
label_1924f8:
    // 0x1924f8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1924F8u;
    {
        const bool branch_taken_0x1924f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924f8) {
            ctx->pc = 0x1924FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1924F8u;
            // 0x1924fc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192608u;
            goto label_192608;
        }
    }
    ctx->pc = 0x192500u;
    // 0x192500: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_192504:
    // 0x192504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192508: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192508u;
    SET_GPR_U32(ctx, 31, 0x192510u);
    ctx->pc = 0x19250Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192508u;
            // 0x19250c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192510u; }
        if (ctx->pc != 0x192510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192510u; }
        if (ctx->pc != 0x192510u) { return; }
    }
    ctx->pc = 0x192510u;
label_192510:
    // 0x192510: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x192510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x192514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192518: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192518u;
    SET_GPR_U32(ctx, 31, 0x192520u);
    ctx->pc = 0x19251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192518u;
            // 0x19251c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192520u; }
        if (ctx->pc != 0x192520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192520u; }
        if (ctx->pc != 0x192520u) { return; }
    }
    ctx->pc = 0x192520u;
label_192520:
    // 0x192520: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x192524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192528: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192528u;
    SET_GPR_U32(ctx, 31, 0x192530u);
    ctx->pc = 0x19252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192528u;
            // 0x19252c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192530u; }
        if (ctx->pc != 0x192530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192530u; }
        if (ctx->pc != 0x192530u) { return; }
    }
    ctx->pc = 0x192530u;
label_192530:
    // 0x192530: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x192530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x192534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192538: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192538u;
    SET_GPR_U32(ctx, 31, 0x192540u);
    ctx->pc = 0x19253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192538u;
            // 0x19253c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192540u; }
        if (ctx->pc != 0x192540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192540u; }
        if (ctx->pc != 0x192540u) { return; }
    }
    ctx->pc = 0x192540u;
label_192540:
    // 0x192540: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x192540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x192544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192548: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192548u;
    SET_GPR_U32(ctx, 31, 0x192550u);
    ctx->pc = 0x19254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192548u;
            // 0x19254c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192550u; }
        if (ctx->pc != 0x192550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192550u; }
        if (ctx->pc != 0x192550u) { return; }
    }
    ctx->pc = 0x192550u;
label_192550:
    // 0x192550: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x192554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192558: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192558u;
    SET_GPR_U32(ctx, 31, 0x192560u);
    ctx->pc = 0x19255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192558u;
            // 0x19255c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192560u; }
        if (ctx->pc != 0x192560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192560u; }
        if (ctx->pc != 0x192560u) { return; }
    }
    ctx->pc = 0x192560u;
label_192560:
    // 0x192560: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x192560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x192564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192568: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192568u;
    SET_GPR_U32(ctx, 31, 0x192570u);
    ctx->pc = 0x19256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192568u;
            // 0x19256c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192570u; }
        if (ctx->pc != 0x192570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192570u; }
        if (ctx->pc != 0x192570u) { return; }
    }
    ctx->pc = 0x192570u;
label_192570:
    // 0x192570: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x192570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x192574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192578: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192578u;
    SET_GPR_U32(ctx, 31, 0x192580u);
    ctx->pc = 0x19257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192578u;
            // 0x19257c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192580u; }
        if (ctx->pc != 0x192580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192580u; }
        if (ctx->pc != 0x192580u) { return; }
    }
    ctx->pc = 0x192580u;
label_192580:
    // 0x192580: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x192580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x192584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192588: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192588u;
    SET_GPR_U32(ctx, 31, 0x192590u);
    ctx->pc = 0x19258Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192588u;
            // 0x19258c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192590u; }
        if (ctx->pc != 0x192590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192590u; }
        if (ctx->pc != 0x192590u) { return; }
    }
    ctx->pc = 0x192590u;
label_192590:
    // 0x192590: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x192590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x192594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192598: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x192598u;
    SET_GPR_U32(ctx, 31, 0x1925A0u);
    ctx->pc = 0x19259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192598u;
            // 0x19259c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925A0u; }
        if (ctx->pc != 0x1925A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925A0u; }
        if (ctx->pc != 0x1925A0u) { return; }
    }
    ctx->pc = 0x1925A0u;
label_1925a0:
    // 0x1925a0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1925a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1925a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925a8: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1925A8u;
    SET_GPR_U32(ctx, 31, 0x1925B0u);
    ctx->pc = 0x1925ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925A8u;
            // 0x1925ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925B0u; }
        if (ctx->pc != 0x1925B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925B0u; }
        if (ctx->pc != 0x1925B0u) { return; }
    }
    ctx->pc = 0x1925B0u;
label_1925b0:
    // 0x1925b0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1925b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1925b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1925b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925b8: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1925B8u;
    SET_GPR_U32(ctx, 31, 0x1925C0u);
    ctx->pc = 0x1925BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925B8u;
            // 0x1925bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925C0u; }
        if (ctx->pc != 0x1925C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925C0u; }
        if (ctx->pc != 0x1925C0u) { return; }
    }
    ctx->pc = 0x1925C0u;
label_1925c0:
    // 0x1925c0: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1925c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1925c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925c8: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1925C8u;
    SET_GPR_U32(ctx, 31, 0x1925D0u);
    ctx->pc = 0x1925CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925C8u;
            // 0x1925cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925D0u; }
        if (ctx->pc != 0x1925D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925D0u; }
        if (ctx->pc != 0x1925D0u) { return; }
    }
    ctx->pc = 0x1925D0u;
label_1925d0:
    // 0x1925d0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1925d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1925d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925d8: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1925D8u;
    SET_GPR_U32(ctx, 31, 0x1925E0u);
    ctx->pc = 0x1925DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925D8u;
            // 0x1925dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925E0u; }
        if (ctx->pc != 0x1925E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925E0u; }
        if (ctx->pc != 0x1925E0u) { return; }
    }
    ctx->pc = 0x1925E0u;
label_1925e0:
    // 0x1925e0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1925e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1925e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925e8: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1925E8u;
    SET_GPR_U32(ctx, 31, 0x1925F0u);
    ctx->pc = 0x1925ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925E8u;
            // 0x1925ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925F0u; }
        if (ctx->pc != 0x1925F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925F0u; }
        if (ctx->pc != 0x1925F0u) { return; }
    }
    ctx->pc = 0x1925F0u;
label_1925f0:
    // 0x1925f0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1925f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1925f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925f8: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1925F8u;
    SET_GPR_U32(ctx, 31, 0x192600u);
    ctx->pc = 0x1925FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925F8u;
            // 0x1925fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192600u; }
        if (ctx->pc != 0x192600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192600u; }
        if (ctx->pc != 0x192600u) { return; }
    }
    ctx->pc = 0x192600u;
label_192600:
    // 0x192600: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x192600u;
    {
        const bool branch_taken_0x192600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192600u;
            // 0x192604: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192600) {
            ctx->pc = 0x192708u;
            goto label_192708;
        }
    }
    ctx->pc = 0x192608u;
label_192608:
    // 0x192608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19260c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19260Cu;
    SET_GPR_U32(ctx, 31, 0x192614u);
    ctx->pc = 0x192610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19260Cu;
            // 0x192610: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192614u; }
        if (ctx->pc != 0x192614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192614u; }
        if (ctx->pc != 0x192614u) { return; }
    }
    ctx->pc = 0x192614u;
label_192614:
    // 0x192614: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x192618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19261c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19261Cu;
    SET_GPR_U32(ctx, 31, 0x192624u);
    ctx->pc = 0x192620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19261Cu;
            // 0x192620: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192624u; }
        if (ctx->pc != 0x192624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192624u; }
        if (ctx->pc != 0x192624u) { return; }
    }
    ctx->pc = 0x192624u;
label_192624:
    // 0x192624: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x192628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19262c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19262Cu;
    SET_GPR_U32(ctx, 31, 0x192634u);
    ctx->pc = 0x192630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19262Cu;
            // 0x192630: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192634u; }
        if (ctx->pc != 0x192634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192634u; }
        if (ctx->pc != 0x192634u) { return; }
    }
    ctx->pc = 0x192634u;
label_192634:
    // 0x192634: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x192634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x192638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19263c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19263Cu;
    SET_GPR_U32(ctx, 31, 0x192644u);
    ctx->pc = 0x192640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19263Cu;
            // 0x192640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192644u; }
        if (ctx->pc != 0x192644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192644u; }
        if (ctx->pc != 0x192644u) { return; }
    }
    ctx->pc = 0x192644u;
label_192644:
    // 0x192644: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x192644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x192648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19264c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19264Cu;
    SET_GPR_U32(ctx, 31, 0x192654u);
    ctx->pc = 0x192650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19264Cu;
            // 0x192650: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192654u; }
        if (ctx->pc != 0x192654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192654u; }
        if (ctx->pc != 0x192654u) { return; }
    }
    ctx->pc = 0x192654u;
label_192654:
    // 0x192654: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x192654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x192658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19265c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19265Cu;
    SET_GPR_U32(ctx, 31, 0x192664u);
    ctx->pc = 0x192660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19265Cu;
            // 0x192660: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192664u; }
        if (ctx->pc != 0x192664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192664u; }
        if (ctx->pc != 0x192664u) { return; }
    }
    ctx->pc = 0x192664u;
label_192664:
    // 0x192664: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x192664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x192668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19266c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19266Cu;
    SET_GPR_U32(ctx, 31, 0x192674u);
    ctx->pc = 0x192670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19266Cu;
            // 0x192670: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        if (ctx->pc != 0x192674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        if (ctx->pc != 0x192674u) { return; }
    }
    ctx->pc = 0x192674u;
label_192674:
    // 0x192674: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x192674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x192678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19267c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19267Cu;
    SET_GPR_U32(ctx, 31, 0x192684u);
    ctx->pc = 0x192680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19267Cu;
            // 0x192680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192684u; }
        if (ctx->pc != 0x192684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192684u; }
        if (ctx->pc != 0x192684u) { return; }
    }
    ctx->pc = 0x192684u;
label_192684:
    // 0x192684: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x192684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x192688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19268c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19268Cu;
    SET_GPR_U32(ctx, 31, 0x192694u);
    ctx->pc = 0x192690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19268Cu;
            // 0x192690: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192694u; }
        if (ctx->pc != 0x192694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192694u; }
        if (ctx->pc != 0x192694u) { return; }
    }
    ctx->pc = 0x192694u;
label_192694:
    // 0x192694: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x192694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x192698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19269c: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x19269Cu;
    SET_GPR_U32(ctx, 31, 0x1926A4u);
    ctx->pc = 0x1926A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19269Cu;
            // 0x1926a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926A4u; }
        if (ctx->pc != 0x1926A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926A4u; }
        if (ctx->pc != 0x1926A4u) { return; }
    }
    ctx->pc = 0x1926A4u;
label_1926a4:
    // 0x1926a4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1926a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1926a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1926a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926ac: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1926ACu;
    SET_GPR_U32(ctx, 31, 0x1926B4u);
    ctx->pc = 0x1926B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926ACu;
            // 0x1926b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926B4u; }
        if (ctx->pc != 0x1926B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926B4u; }
        if (ctx->pc != 0x1926B4u) { return; }
    }
    ctx->pc = 0x1926B4u;
label_1926b4:
    // 0x1926b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1926b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1926b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1926b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926bc: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1926BCu;
    SET_GPR_U32(ctx, 31, 0x1926C4u);
    ctx->pc = 0x1926C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926BCu;
            // 0x1926c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926C4u; }
        if (ctx->pc != 0x1926C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926C4u; }
        if (ctx->pc != 0x1926C4u) { return; }
    }
    ctx->pc = 0x1926C4u;
label_1926c4:
    // 0x1926c4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1926c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1926c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1926c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926cc: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1926CCu;
    SET_GPR_U32(ctx, 31, 0x1926D4u);
    ctx->pc = 0x1926D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926CCu;
            // 0x1926d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926D4u; }
        if (ctx->pc != 0x1926D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926D4u; }
        if (ctx->pc != 0x1926D4u) { return; }
    }
    ctx->pc = 0x1926D4u;
label_1926d4:
    // 0x1926d4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1926d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1926d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1926d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926dc: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1926DCu;
    SET_GPR_U32(ctx, 31, 0x1926E4u);
    ctx->pc = 0x1926E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926DCu;
            // 0x1926e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926E4u; }
        if (ctx->pc != 0x1926E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926E4u; }
        if (ctx->pc != 0x1926E4u) { return; }
    }
    ctx->pc = 0x1926E4u;
label_1926e4:
    // 0x1926e4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1926e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1926e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1926e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926ec: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1926ECu;
    SET_GPR_U32(ctx, 31, 0x1926F4u);
    ctx->pc = 0x1926F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926ECu;
            // 0x1926f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926F4u; }
        if (ctx->pc != 0x1926F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926F4u; }
        if (ctx->pc != 0x1926F4u) { return; }
    }
    ctx->pc = 0x1926F4u;
label_1926f4:
    // 0x1926f4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1926f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1926f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926fc: 0xc0c8d44  jal         func_323510
    ctx->pc = 0x1926FCu;
    SET_GPR_U32(ctx, 31, 0x192704u);
    ctx->pc = 0x192700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926FCu;
            // 0x192700: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323510u;
    if (runtime->hasFunction(0x323510u)) {
        auto targetFn = runtime->lookupFunction(0x323510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192704u; }
        if (ctx->pc != 0x192704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323510_0x323510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192704u; }
        if (ctx->pc != 0x192704u) { return; }
    }
    ctx->pc = 0x192704u;
label_192704:
    // 0x192704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192708:
    // 0x192708: 0x3e00008  jr          $ra
    ctx->pc = 0x192708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192708u;
            // 0x19270c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192710u;
label_192710:
    // 0x192710: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x192710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x192714: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x192718: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x192718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19271c: 0x24e74db0  addiu       $a3, $a3, 0x4DB0
    ctx->pc = 0x19271cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19888));
    // 0x192720: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x192720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x192724: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x192724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192728: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x192728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19272c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x19272cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x192730: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x192730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x192734: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x192738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19273c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19273cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192748:
    // 0x192748: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x192748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19274c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19274cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x192750: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x192750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x192754: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x192754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x192758: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x192758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19275c: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19275Cu;
    {
        const bool branch_taken_0x19275c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x19275c) {
            ctx->pc = 0x192748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192748;
        }
    }
    ctx->pc = 0x192764u;
    // 0x192764: 0x8c950010  lw          $s5, 0x10($a0)
    ctx->pc = 0x192764u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x192768: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x192768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19276c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x19276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x192770: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x192770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192774: 0x92b40000  lbu         $s4, 0x0($s5)
    ctx->pc = 0x192774u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192778: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x192778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19277c: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x19277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x192780: 0x1430c0  sll         $a2, $s4, 3
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x192784: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x192784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x192788: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19278c: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x19278cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x192790: 0x680c0  sll         $s0, $a2, 3
    ctx->pc = 0x192790u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x192794: 0x908821  addu        $s1, $a0, $s0
    ctx->pc = 0x192794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x192798: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x192798u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19279c: 0x14c30014  bne         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19279Cu;
    {
        const bool branch_taken_0x19279c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1927A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19279Cu;
            // 0x1927a0: 0xb0b021  addu        $s6, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19279c) {
            ctx->pc = 0x1927F0u;
            goto label_1927f0;
        }
    }
    ctx->pc = 0x1927A4u;
    // 0x1927a4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1927a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1927a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1927a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1927ac: 0x2484db58  addiu       $a0, $a0, -0x24A8
    ctx->pc = 0x1927acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957912));
    // 0x1927b0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1927b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1927b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1927b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1927b8: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1927B8u;
    {
        const bool branch_taken_0x1927b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1927b8) {
            ctx->pc = 0x1927BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1927B8u;
            // 0x1927bc: 0x28c30003  slti        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1927F4u;
            goto label_1927f4;
        }
    }
    ctx->pc = 0x1927C0u;
    // 0x1927c0: 0x28c10064  slti        $at, $a2, 0x64
    ctx->pc = 0x1927c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1927c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1927C4u;
    {
        const bool branch_taken_0x1927c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927c4) {
            ctx->pc = 0x1927D4u;
            goto label_1927d4;
        }
    }
    ctx->pc = 0x1927CCu;
    // 0x1927cc: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1927ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1927d0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1927d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1927d4:
    // 0x1927d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1927d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1927d8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1927d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1927dc: 0x2463db59  addiu       $v1, $v1, -0x24A7
    ctx->pc = 0x1927dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957913));
    // 0x1927e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1927e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1927e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1927e8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1927E8u;
    {
        const bool branch_taken_0x1927e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1927E8u;
            // 0x1927ec: 0xa2a00001  sb          $zero, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927e8) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x1927F0u;
label_1927f0:
    // 0x1927f0: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1927f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1927f4:
    // 0x1927f4: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1927F4u;
    {
        const bool branch_taken_0x1927f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927f4) {
            ctx->pc = 0x1928BCu;
            goto label_1928bc;
        }
    }
    ctx->pc = 0x1927FCu;
    // 0x1927fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x192800: 0x2463db58  addiu       $v1, $v1, -0x24A8
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957912));
    // 0x192804: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x192804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x192808: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x192808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19280c: 0x10c3002b  beq         $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x19280Cu;
    {
        const bool branch_taken_0x19280c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19280c) {
            ctx->pc = 0x1928BCu;
            goto label_1928bc;
        }
    }
    ctx->pc = 0x192814u;
    // 0x192814: 0x28c10064  slti        $at, $a2, 0x64
    ctx->pc = 0x192814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x192818: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x192818u;
    {
        const bool branch_taken_0x192818 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x192818) {
            ctx->pc = 0x192828u;
            goto label_192828;
        }
    }
    ctx->pc = 0x192820u;
    // 0x192820: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x192820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x192824: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x192824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_192828:
    // 0x192828: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x192828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19282c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x19282cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192830: 0x2463db59  addiu       $v1, $v1, -0x24A7
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957913));
    // 0x192834: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x192838: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x192838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19283c: 0x92a40001  lbu         $a0, 0x1($s5)
    ctx->pc = 0x19283cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x192840: 0x5080003b  beql        $a0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x192840u;
    {
        const bool branch_taken_0x192840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x192840) {
            ctx->pc = 0x192844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192840u;
            // 0x192844: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192930u;
            goto label_192930;
        }
    }
    ctx->pc = 0x192848u;
    // 0x192848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19284c: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x19284Cu;
    {
        const bool branch_taken_0x19284c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19284c) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x192854u;
    // 0x192854: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x192854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x192858: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19285c: 0xa2a40001  sb          $a0, 0x1($s5)
    ctx->pc = 0x19285cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x192860: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x192860u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192864: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x192864u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192868: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x192868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x19286c: 0x34a86667  ori         $t0, $a1, 0x6667
    ctx->pc = 0x19286cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x192870: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x192870u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x192874: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x192874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x192878: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x192878u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19287c: 0x0  nop
    ctx->pc = 0x19287cu;
    // NOP
    // 0x192880: 0x3010  mfhi        $a2
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x192884: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x192888: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19288c: 0xc9001a  div         $zero, $a2, $t1
    ctx->pc = 0x19288cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x192890: 0x3010  mfhi        $a2
    ctx->pc = 0x192890u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x192894: 0x1040018  mult        $zero, $t0, $a0
    ctx->pc = 0x192894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x192898: 0x2010  mfhi        $a0
    ctx->pc = 0x192898u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x19289c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1928a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1928a4: 0x89001a  div         $zero, $a0, $t1
    ctx->pc = 0x1928a4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1928a8: 0x2010  mfhi        $a0
    ctx->pc = 0x1928a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1928ac: 0x10c4001f  beq         $a2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1928ACu;
    {
        const bool branch_taken_0x1928ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1928B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928ACu;
            // 0x1928b0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928ac) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x1928B4u;
    // 0x1928b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1928B4u;
    {
        const bool branch_taken_0x1928b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928B4u;
            // 0x1928b8: 0x34730002  ori         $s3, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928b4) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x1928BCu;
label_1928bc:
    // 0x1928bc: 0x14c00013  bnez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1928BCu;
    {
        const bool branch_taken_0x1928bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1928bc) {
            ctx->pc = 0x19290Cu;
            goto label_19290c;
        }
    }
    ctx->pc = 0x1928C4u;
    // 0x1928c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1928c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1928c8: 0x2463db58  addiu       $v1, $v1, -0x24A8
    ctx->pc = 0x1928c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957912));
    // 0x1928cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1928ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1928d0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1928d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1928d4: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1928d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1928d8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1928D8u;
    {
        const bool branch_taken_0x1928d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1928d8) {
            ctx->pc = 0x19290Cu;
            goto label_19290c;
        }
    }
    ctx->pc = 0x1928E0u;
    // 0x1928e0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1928e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1928e4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1928e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1928e8: 0x2484db59  addiu       $a0, $a0, -0x24A7
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957913));
    // 0x1928ec: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1928ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1928f0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1928f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1928f4: 0x92a40001  lbu         $a0, 0x1($s5)
    ctx->pc = 0x1928f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x1928f8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1928F8u;
    {
        const bool branch_taken_0x1928f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1928f8) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x192900u;
    // 0x192900: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x192904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192904u;
    {
        const bool branch_taken_0x192904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192904u;
            // 0x192908: 0xa2a30001  sb          $v1, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192904) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x19290Cu;
label_19290c:
    // 0x19290c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19290Cu;
    {
        const bool branch_taken_0x19290c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19290c) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x192914u;
    // 0x192914: 0x92a40001  lbu         $a0, 0x1($s5)
    ctx->pc = 0x192914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x192918: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x192918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19291c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19291Cu;
    {
        const bool branch_taken_0x19291c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19291c) {
            ctx->pc = 0x19292Cu;
            goto label_19292c;
        }
    }
    ctx->pc = 0x192924u;
    // 0x192924: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x192924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x192928: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x192928u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
label_19292c:
    // 0x19292c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x19292cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_192930:
    // 0x192930: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x192930u;
    {
        const bool branch_taken_0x192930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192930) {
            ctx->pc = 0x192934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192930u;
            // 0x192934: 0x92a60001  lbu         $a2, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1929F0u;
            goto label_1929f0;
        }
    }
    ctx->pc = 0x192938u;
    // 0x192938: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19293c: 0x2463db58  addiu       $v1, $v1, -0x24A8
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957912));
    // 0x192940: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x192944: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192948: 0x4600028  bltz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x192948u;
    {
        const bool branch_taken_0x192948 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x192948) {
            ctx->pc = 0x1929ECu;
            goto label_1929ec;
        }
    }
    ctx->pc = 0x192950u;
    // 0x192950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x192950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192958: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x192958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19295c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x19295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192960:
    // 0x192960: 0x848601ac  lh          $a2, 0x1AC($a0)
    ctx->pc = 0x192960u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x192964: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x192964u;
    {
        const bool branch_taken_0x192964 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x192964) {
            ctx->pc = 0x1929B8u;
            goto label_1929b8;
        }
    }
    ctx->pc = 0x19296Cu;
    // 0x19296c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x19296cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x192970: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x192970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192974: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x192974u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x192978: 0x28c60002  slti        $a2, $a2, 0x2
    ctx->pc = 0x192978u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19297c: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19297Cu;
    {
        const bool branch_taken_0x19297c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x192980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19297Cu;
            // 0x192980: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19297c) {
            ctx->pc = 0x1929B8u;
            goto label_1929b8;
        }
    }
    ctx->pc = 0x192984u;
    // 0x192984: 0x848601b0  lh          $a2, 0x1B0($a0)
    ctx->pc = 0x192984u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x192988: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x192988u;
    {
        const bool branch_taken_0x192988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x192988) {
            ctx->pc = 0x19298Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192988u;
            // 0x19298c: 0x848601ae  lh          $a2, 0x1AE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 430)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1929A4u;
            goto label_1929a4;
        }
    }
    ctx->pc = 0x192990u;
    // 0x192990: 0x848701ae  lh          $a3, 0x1AE($a0)
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 430)));
    // 0x192994: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x192994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x192998: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x192998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19299c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19299Cu;
    {
        const bool branch_taken_0x19299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19299Cu;
            // 0x1929a0: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19299c) {
            ctx->pc = 0x1929A8u;
            goto label_1929a8;
        }
    }
    ctx->pc = 0x1929A4u;
label_1929a4:
    // 0x1929a4: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x1929a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1929a8:
    // 0x1929a8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1929a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1929ac: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1929acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1929b0: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x1929b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1929b4: 0x0  nop
    ctx->pc = 0x1929b4u;
    // NOP
label_1929b8:
    // 0x1929b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1929b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1929bc: 0x28a6000b  slti        $a2, $a1, 0xB
    ctx->pc = 0x1929bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1929c0: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x1929c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1929c4: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1929C4u;
    {
        const bool branch_taken_0x1929c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1929C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929C4u;
            // 0x1929c8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929c4) {
            ctx->pc = 0x192960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192960;
        }
    }
    ctx->pc = 0x1929CCu;
    // 0x1929cc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1929CCu;
    {
        const bool branch_taken_0x1929cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1929cc) {
            ctx->pc = 0x1929ECu;
            goto label_1929ec;
        }
    }
    ctx->pc = 0x1929D4u;
    // 0x1929d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1929d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929d8: 0xc0634f8  jal         func_18D3E0
    ctx->pc = 0x1929D8u;
    SET_GPR_U32(ctx, 31, 0x1929E0u);
    ctx->pc = 0x1929DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929D8u;
            // 0x1929dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D3E0u;
    if (runtime->hasFunction(0x18D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929E0u; }
        if (ctx->pc != 0x1929E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D3E0_0x18d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929E0u; }
        if (ctx->pc != 0x1929E0u) { return; }
    }
    ctx->pc = 0x1929E0u;
label_1929e0:
    // 0x1929e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1929e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929e4: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x1929E4u;
    SET_GPR_U32(ctx, 31, 0x1929ECu);
    ctx->pc = 0x1929E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929E4u;
            // 0x1929e8: 0xaed20048  sw          $s2, 0x48($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (runtime->hasFunction(0x19FE60u)) {
        auto targetFn = runtime->lookupFunction(0x19FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929ECu; }
        if (ctx->pc != 0x1929ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FE60_0x19fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929ECu; }
        if (ctx->pc != 0x1929ECu) { return; }
    }
    ctx->pc = 0x1929ECu;
label_1929ec:
    // 0x1929ec: 0x92a60001  lbu         $a2, 0x1($s5)
    ctx->pc = 0x1929ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_1929f0:
    // 0x1929f0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1929f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1929f4: 0x10c300cb  beq         $a2, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x1929F4u;
    {
        const bool branch_taken_0x1929f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1929f4) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x1929FCu;
    // 0x1929fc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1929fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x192a00: 0x10c300c8  beq         $a2, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x192A00u;
    {
        const bool branch_taken_0x192a00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a00) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192A08u;
    // 0x192a08: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x192a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x192a0c: 0x50c300bc  beql        $a2, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x192A0Cu;
    {
        const bool branch_taken_0x192a0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a0c) {
            ctx->pc = 0x192A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A0Cu;
            // 0x192a10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192D00u;
            goto label_192d00;
        }
    }
    ctx->pc = 0x192A14u;
    // 0x192a14: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x192a18: 0x10c3007f  beq         $a2, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x192A18u;
    {
        const bool branch_taken_0x192a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a18) {
            ctx->pc = 0x192C18u;
            goto label_192c18;
        }
    }
    ctx->pc = 0x192A20u;
    // 0x192a20: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x192a24: 0x50c30072  beql        $a2, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x192A24u;
    {
        const bool branch_taken_0x192a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a24) {
            ctx->pc = 0x192A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A24u;
            // 0x192a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192BF0u;
            goto label_192bf0;
        }
    }
    ctx->pc = 0x192A2Cu;
    // 0x192a2c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x192a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x192a30: 0x10c4005e  beq         $a2, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x192A30u;
    {
        const bool branch_taken_0x192a30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x192a30) {
            ctx->pc = 0x192BACu;
            goto label_192bac;
        }
    }
    ctx->pc = 0x192A38u;
    // 0x192a38: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x192a3c: 0x50c30057  beql        $a2, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x192A3Cu;
    {
        const bool branch_taken_0x192a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a3c) {
            ctx->pc = 0x192A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A3Cu;
            // 0x192a40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192B9Cu;
            goto label_192b9c;
        }
    }
    ctx->pc = 0x192A44u;
    // 0x192a44: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x192a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x192a48: 0x50c3004a  beql        $a2, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x192A48u;
    {
        const bool branch_taken_0x192a48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a48) {
            ctx->pc = 0x192A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A48u;
            // 0x192a4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192B74u;
            goto label_192b74;
        }
    }
    ctx->pc = 0x192A50u;
    // 0x192a50: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x192a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x192a54: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x192A54u;
    {
        const bool branch_taken_0x192a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a54) {
            ctx->pc = 0x192AD8u;
            goto label_192ad8;
        }
    }
    ctx->pc = 0x192A5Cu;
    // 0x192a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192a60: 0x50c50013  beql        $a2, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x192A60u;
    {
        const bool branch_taken_0x192a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x192a60) {
            ctx->pc = 0x192A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A60u;
            // 0x192a64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192AB0u;
            goto label_192ab0;
        }
    }
    ctx->pc = 0x192A68u;
    // 0x192a68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x192A68u;
    {
        const bool branch_taken_0x192a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a68) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A70u;
    // 0x192a70: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x192A70u;
    {
        const bool branch_taken_0x192a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a70) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192A78u;
label_192a78:
    // 0x192a78: 0x52800006  beql        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x192A78u;
    {
        const bool branch_taken_0x192a78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a78) {
            ctx->pc = 0x192A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A78u;
            // 0x192a7c: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192A94u;
            goto label_192a94;
        }
    }
    ctx->pc = 0x192A80u;
    // 0x192a80: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192A80u;
    SET_GPR_U32(ctx, 31, 0x192A88u);
    ctx->pc = 0x192A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A80u;
            // 0x192a84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A88u; }
        if (ctx->pc != 0x192A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A88u; }
        if (ctx->pc != 0x192A88u) { return; }
    }
    ctx->pc = 0x192A88u;
label_192a88:
    // 0x192a88: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x192a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x192a8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x192A8Cu;
    {
        const bool branch_taken_0x192a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A8Cu;
            // 0x192a90: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a8c) {
            ctx->pc = 0x192AA4u;
            goto label_192aa4;
        }
    }
    ctx->pc = 0x192A94u;
label_192a94:
    // 0x192a94: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192A94u;
    SET_GPR_U32(ctx, 31, 0x192A9Cu);
    ctx->pc = 0x192A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A94u;
            // 0x192a98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A9Cu; }
        if (ctx->pc != 0x192A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A9Cu; }
        if (ctx->pc != 0x192A9Cu) { return; }
    }
    ctx->pc = 0x192A9Cu;
label_192a9c:
    // 0x192a9c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x192a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x192aa0: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x192aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_192aa4:
    // 0x192aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192aa8: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x192aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x192aac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x192aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_192ab0:
    // 0x192ab0: 0xc064934  jal         func_1924D0
    ctx->pc = 0x192AB0u;
    SET_GPR_U32(ctx, 31, 0x192AB8u);
    ctx->pc = 0x1924D0u;
    goto label_1924d0;
    ctx->pc = 0x192AB8u;
label_192ab8:
    // 0x192ab8: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x192ab8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x192abc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x192ABCu;
    SET_GPR_U32(ctx, 31, 0x192AC4u);
    ctx->pc = 0x192AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192ABCu;
            // 0x192ac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AC4u; }
        if (ctx->pc != 0x192AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AC4u; }
        if (ctx->pc != 0x192AC4u) { return; }
    }
    ctx->pc = 0x192AC4u;
label_192ac4:
    // 0x192ac4: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x192AC4u;
    {
        const bool branch_taken_0x192ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ac4) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192ACCu;
    // 0x192acc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x192accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x192ad0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x192AD0u;
    {
        const bool branch_taken_0x192ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AD0u;
            // 0x192ad4: 0xa2a30001  sb          $v1, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ad0) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192AD8u;
label_192ad8:
    // 0x192ad8: 0x52800013  beql        $s4, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x192AD8u;
    {
        const bool branch_taken_0x192ad8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ad8) {
            ctx->pc = 0x192ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192AD8u;
            // 0x192adc: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192B28u;
            goto label_192b28;
        }
    }
    ctx->pc = 0x192AE0u;
    // 0x192ae0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x192ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ae8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192AE8u;
    SET_GPR_U32(ctx, 31, 0x192AF0u);
    ctx->pc = 0x192AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192AE8u;
            // 0x192aec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AF0u; }
        if (ctx->pc != 0x192AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AF0u; }
        if (ctx->pc != 0x192AF0u) { return; }
    }
    ctx->pc = 0x192AF0u;
label_192af0:
    // 0x192af0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x192af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192af8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192AF8u;
    SET_GPR_U32(ctx, 31, 0x192B00u);
    ctx->pc = 0x192AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192AF8u;
            // 0x192afc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B00u; }
        if (ctx->pc != 0x192B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B00u; }
        if (ctx->pc != 0x192B00u) { return; }
    }
    ctx->pc = 0x192B00u;
label_192b00:
    // 0x192b00: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x192b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x192b04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x192B04u;
    {
        const bool branch_taken_0x192b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b04) {
            ctx->pc = 0x192B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192B04u;
            // 0x192b08: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192B20u;
            goto label_192b20;
        }
    }
    ctx->pc = 0x192B0Cu;
    // 0x192b0c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x192b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x192b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b14: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192B14u;
    SET_GPR_U32(ctx, 31, 0x192B1Cu);
    ctx->pc = 0x192B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B14u;
            // 0x192b18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B1Cu; }
        if (ctx->pc != 0x192B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B1Cu; }
        if (ctx->pc != 0x192B1Cu) { return; }
    }
    ctx->pc = 0x192B1Cu;
label_192b1c:
    // 0x192b1c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x192b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_192b20:
    // 0x192b20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x192B20u;
    {
        const bool branch_taken_0x192b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B20u;
            // 0x192b24: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b20) {
            ctx->pc = 0x192B68u;
            goto label_192b68;
        }
    }
    ctx->pc = 0x192B28u;
label_192b28:
    // 0x192b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b2c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192B2Cu;
    SET_GPR_U32(ctx, 31, 0x192B34u);
    ctx->pc = 0x192B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B2Cu;
            // 0x192b30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B34u; }
        if (ctx->pc != 0x192B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B34u; }
        if (ctx->pc != 0x192B34u) { return; }
    }
    ctx->pc = 0x192B34u;
label_192b34:
    // 0x192b34: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x192b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x192b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b3c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192B3Cu;
    SET_GPR_U32(ctx, 31, 0x192B44u);
    ctx->pc = 0x192B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B3Cu;
            // 0x192b40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B44u; }
        if (ctx->pc != 0x192B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B44u; }
        if (ctx->pc != 0x192B44u) { return; }
    }
    ctx->pc = 0x192B44u;
label_192b44:
    // 0x192b44: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x192b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x192b48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x192B48u;
    {
        const bool branch_taken_0x192b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b48) {
            ctx->pc = 0x192B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192B48u;
            // 0x192b4c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192B64u;
            goto label_192b64;
        }
    }
    ctx->pc = 0x192B50u;
    // 0x192b50: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x192b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x192b54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b58: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192B58u;
    SET_GPR_U32(ctx, 31, 0x192B60u);
    ctx->pc = 0x192B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B58u;
            // 0x192b5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B60u; }
        if (ctx->pc != 0x192B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B60u; }
        if (ctx->pc != 0x192B60u) { return; }
    }
    ctx->pc = 0x192B60u;
label_192b60:
    // 0x192b60: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x192b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_192b64:
    // 0x192b64: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x192b64u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_192b68:
    // 0x192b68: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x192b6c: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x192b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x192b70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x192b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_192b74:
    // 0x192b74: 0xc064934  jal         func_1924D0
    ctx->pc = 0x192B74u;
    SET_GPR_U32(ctx, 31, 0x192B7Cu);
    ctx->pc = 0x1924D0u;
    goto label_1924d0;
    ctx->pc = 0x192B7Cu;
label_192b7c:
    // 0x192b7c: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x192b7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x192b80: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x192B80u;
    SET_GPR_U32(ctx, 31, 0x192B88u);
    ctx->pc = 0x192B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B80u;
            // 0x192b84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B88u; }
        if (ctx->pc != 0x192B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B88u; }
        if (ctx->pc != 0x192B88u) { return; }
    }
    ctx->pc = 0x192B88u;
label_192b88:
    // 0x192b88: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x192B88u;
    {
        const bool branch_taken_0x192b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b88) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192B90u;
    // 0x192b90: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x192b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x192b94: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x192B94u;
    {
        const bool branch_taken_0x192b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B94u;
            // 0x192b98: 0xa2a30001  sb          $v1, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b94) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192B9Cu;
label_192b9c:
    // 0x192b9c: 0xc064934  jal         func_1924D0
    ctx->pc = 0x192B9Cu;
    SET_GPR_U32(ctx, 31, 0x192BA4u);
    ctx->pc = 0x1924D0u;
    goto label_1924d0;
    ctx->pc = 0x192BA4u;
label_192ba4:
    // 0x192ba4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x192BA4u;
    {
        const bool branch_taken_0x192ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ba4) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192BACu;
label_192bac:
    // 0x192bac: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x192BACu;
    {
        const bool branch_taken_0x192bac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x192bac) {
            ctx->pc = 0x192BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192BACu;
            // 0x192bb0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192BD0u;
            goto label_192bd0;
        }
    }
    ctx->pc = 0x192BB4u;
    // 0x192bb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x192bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192bbc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192BBCu;
    SET_GPR_U32(ctx, 31, 0x192BC4u);
    ctx->pc = 0x192BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BBCu;
            // 0x192bc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC4u; }
        if (ctx->pc != 0x192BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC4u; }
        if (ctx->pc != 0x192BC4u) { return; }
    }
    ctx->pc = 0x192BC4u;
label_192bc4:
    // 0x192bc4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x192bc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192BC8u;
    {
        const bool branch_taken_0x192bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192BC8u;
            // 0x192bcc: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bc8) {
            ctx->pc = 0x192BE4u;
            goto label_192be4;
        }
    }
    ctx->pc = 0x192BD0u;
label_192bd0:
    // 0x192bd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192bd4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192BD4u;
    SET_GPR_U32(ctx, 31, 0x192BDCu);
    ctx->pc = 0x192BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BD4u;
            // 0x192bd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BDCu; }
        if (ctx->pc != 0x192BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BDCu; }
        if (ctx->pc != 0x192BDCu) { return; }
    }
    ctx->pc = 0x192BDCu;
label_192bdc:
    // 0x192bdc: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x192be0: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x192be0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_192be4:
    // 0x192be4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x192be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x192be8: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x192be8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x192bec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x192becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_192bf0:
    // 0x192bf0: 0xc064934  jal         func_1924D0
    ctx->pc = 0x192BF0u;
    SET_GPR_U32(ctx, 31, 0x192BF8u);
    ctx->pc = 0x1924D0u;
    goto label_1924d0;
    ctx->pc = 0x192BF8u;
label_192bf8:
    // 0x192bf8: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x192bf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x192bfc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x192BFCu;
    SET_GPR_U32(ctx, 31, 0x192C04u);
    ctx->pc = 0x192C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BFCu;
            // 0x192c00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C04u; }
        if (ctx->pc != 0x192C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C04u; }
        if (ctx->pc != 0x192C04u) { return; }
    }
    ctx->pc = 0x192C04u;
label_192c04:
    // 0x192c04: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x192C04u;
    {
        const bool branch_taken_0x192c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192c04) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192C0Cu;
    // 0x192c0c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x192c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x192c10: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x192C10u;
    {
        const bool branch_taken_0x192c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C10u;
            // 0x192c14: 0xa2a30001  sb          $v1, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c10) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192C18u;
label_192c18:
    // 0x192c18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x192c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x192c1c: 0x2442db59  addiu       $v0, $v0, -0x24A7
    ctx->pc = 0x192c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957913));
    // 0x192c20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192c24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x192c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192c28: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x192c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x192c2c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x192C2Cu;
    {
        const bool branch_taken_0x192c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192c2c) {
            ctx->pc = 0x192C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192C2Cu;
            // 0x192c30: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x192C70u;
            goto label_192c70;
        }
    }
    ctx->pc = 0x192C34u;
    // 0x192c34: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x192C34u;
    {
        const bool branch_taken_0x192c34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x192c34) {
            ctx->pc = 0x192C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192C34u;
            // 0x192c38: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192C58u;
            goto label_192c58;
        }
    }
    ctx->pc = 0x192C3Cu;
    // 0x192c3c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x192c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x192c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c44: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192C44u;
    SET_GPR_U32(ctx, 31, 0x192C4Cu);
    ctx->pc = 0x192C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C44u;
            // 0x192c48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C4Cu; }
        if (ctx->pc != 0x192C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C4Cu; }
        if (ctx->pc != 0x192C4Cu) { return; }
    }
    ctx->pc = 0x192C4Cu;
label_192c4c:
    // 0x192c4c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x192c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x192c50: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x192C50u;
    {
        const bool branch_taken_0x192c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C50u;
            // 0x192c54: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c50) {
            ctx->pc = 0x192CF4u;
            goto label_192cf4;
        }
    }
    ctx->pc = 0x192C58u;
label_192c58:
    // 0x192c58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c5c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192C5Cu;
    SET_GPR_U32(ctx, 31, 0x192C64u);
    ctx->pc = 0x192C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C5Cu;
            // 0x192c60: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C64u; }
        if (ctx->pc != 0x192C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C64u; }
        if (ctx->pc != 0x192C64u) { return; }
    }
    ctx->pc = 0x192C64u;
label_192c64:
    // 0x192c64: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x192c68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x192C68u;
    {
        const bool branch_taken_0x192c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C68u;
            // 0x192c6c: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c68) {
            ctx->pc = 0x192CF4u;
            goto label_192cf4;
        }
    }
    ctx->pc = 0x192C70u;
label_192c70:
    // 0x192c70: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x192C70u;
    {
        const bool branch_taken_0x192c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192c70) {
            ctx->pc = 0x192C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192C70u;
            // 0x192c74: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x192CB4u;
            goto label_192cb4;
        }
    }
    ctx->pc = 0x192C78u;
    // 0x192c78: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x192C78u;
    {
        const bool branch_taken_0x192c78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x192c78) {
            ctx->pc = 0x192C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192C78u;
            // 0x192c7c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192C9Cu;
            goto label_192c9c;
        }
    }
    ctx->pc = 0x192C80u;
    // 0x192c80: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x192c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c88: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192C88u;
    SET_GPR_U32(ctx, 31, 0x192C90u);
    ctx->pc = 0x192C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C88u;
            // 0x192c8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C90u; }
        if (ctx->pc != 0x192C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C90u; }
        if (ctx->pc != 0x192C90u) { return; }
    }
    ctx->pc = 0x192C90u;
label_192c90:
    // 0x192c90: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x192c94: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x192C94u;
    {
        const bool branch_taken_0x192c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C94u;
            // 0x192c98: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c94) {
            ctx->pc = 0x192CF4u;
            goto label_192cf4;
        }
    }
    ctx->pc = 0x192C9Cu;
label_192c9c:
    // 0x192c9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ca0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192CA0u;
    SET_GPR_U32(ctx, 31, 0x192CA8u);
    ctx->pc = 0x192CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CA0u;
            // 0x192ca4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CA8u; }
        if (ctx->pc != 0x192CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CA8u; }
        if (ctx->pc != 0x192CA8u) { return; }
    }
    ctx->pc = 0x192CA8u;
label_192ca8:
    // 0x192ca8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x192ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x192cac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x192CACu;
    {
        const bool branch_taken_0x192cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CACu;
            // 0x192cb0: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cac) {
            ctx->pc = 0x192CF4u;
            goto label_192cf4;
        }
    }
    ctx->pc = 0x192CB4u;
label_192cb4:
    // 0x192cb4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x192CB4u;
    {
        const bool branch_taken_0x192cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192cb4) {
            ctx->pc = 0x192CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192CB4u;
            // 0x192cb8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192CF8u;
            goto label_192cf8;
        }
    }
    ctx->pc = 0x192CBCu;
    // 0x192cbc: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x192CBCu;
    {
        const bool branch_taken_0x192cbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x192cbc) {
            ctx->pc = 0x192CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192CBCu;
            // 0x192cc0: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192CE0u;
            goto label_192ce0;
        }
    }
    ctx->pc = 0x192CC4u;
    // 0x192cc4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x192cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x192cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ccc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192CCCu;
    SET_GPR_U32(ctx, 31, 0x192CD4u);
    ctx->pc = 0x192CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CCCu;
            // 0x192cd0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CD4u; }
        if (ctx->pc != 0x192CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CD4u; }
        if (ctx->pc != 0x192CD4u) { return; }
    }
    ctx->pc = 0x192CD4u;
label_192cd4:
    // 0x192cd4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x192cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x192cd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192CD8u;
    {
        const bool branch_taken_0x192cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CD8u;
            // 0x192cdc: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cd8) {
            ctx->pc = 0x192CF4u;
            goto label_192cf4;
        }
    }
    ctx->pc = 0x192CE0u;
label_192ce0:
    // 0x192ce0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ce4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192CE4u;
    SET_GPR_U32(ctx, 31, 0x192CECu);
    ctx->pc = 0x192CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CE4u;
            // 0x192ce8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CECu; }
        if (ctx->pc != 0x192CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CECu; }
        if (ctx->pc != 0x192CECu) { return; }
    }
    ctx->pc = 0x192CECu;
label_192cec:
    // 0x192cec: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x192cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x192cf0: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x192cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_192cf4:
    // 0x192cf4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x192cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_192cf8:
    // 0x192cf8: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x192cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x192cfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x192cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_192d00:
    // 0x192d00: 0xc064934  jal         func_1924D0
    ctx->pc = 0x192D00u;
    SET_GPR_U32(ctx, 31, 0x192D08u);
    ctx->pc = 0x1924D0u;
    goto label_1924d0;
    ctx->pc = 0x192D08u;
label_192d08:
    // 0x192d08: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x192d08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x192d0c: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x192D0Cu;
    SET_GPR_U32(ctx, 31, 0x192D14u);
    ctx->pc = 0x192D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D0Cu;
            // 0x192d10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D14u; }
        if (ctx->pc != 0x192D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D14u; }
        if (ctx->pc != 0x192D14u) { return; }
    }
    ctx->pc = 0x192D14u;
label_192d14:
    // 0x192d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D14u;
    {
        const bool branch_taken_0x192d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d14) {
            ctx->pc = 0x192D24u;
            goto label_192d24;
        }
    }
    ctx->pc = 0x192D1Cu;
    // 0x192d1c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x192d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x192d20: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x192d20u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
label_192d24:
    // 0x192d24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x192d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x192d28: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x192d28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192d2c: 0x2463db58  addiu       $v1, $v1, -0x24A8
    ctx->pc = 0x192d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957912));
    // 0x192d30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x192d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x192d34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x192d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x192d38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x192d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192d3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x192d3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192d40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x192d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192d44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x192d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x192d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d58: 0x3e00008  jr          $ra
    ctx->pc = 0x192D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D58u;
            // 0x192d5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192D60u;
    ctx->pc = 0x192d60u;
}
