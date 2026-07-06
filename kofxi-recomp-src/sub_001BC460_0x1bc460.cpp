#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC460
// Address: 0x1bc460 - 0x1bc7f8
void sub_001BC460_0x1bc460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC460_0x1bc460");
#endif

    switch (ctx->pc) {
        case 0x1bc460u: goto label_1bc460;
        case 0x1bc464u: goto label_1bc464;
        case 0x1bc468u: goto label_1bc468;
        case 0x1bc46cu: goto label_1bc46c;
        case 0x1bc470u: goto label_1bc470;
        case 0x1bc474u: goto label_1bc474;
        case 0x1bc478u: goto label_1bc478;
        case 0x1bc47cu: goto label_1bc47c;
        case 0x1bc480u: goto label_1bc480;
        case 0x1bc484u: goto label_1bc484;
        case 0x1bc488u: goto label_1bc488;
        case 0x1bc48cu: goto label_1bc48c;
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc494u: goto label_1bc494;
        case 0x1bc498u: goto label_1bc498;
        case 0x1bc49cu: goto label_1bc49c;
        case 0x1bc4a0u: goto label_1bc4a0;
        case 0x1bc4a4u: goto label_1bc4a4;
        case 0x1bc4a8u: goto label_1bc4a8;
        case 0x1bc4acu: goto label_1bc4ac;
        case 0x1bc4b0u: goto label_1bc4b0;
        case 0x1bc4b4u: goto label_1bc4b4;
        case 0x1bc4b8u: goto label_1bc4b8;
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4c0u: goto label_1bc4c0;
        case 0x1bc4c4u: goto label_1bc4c4;
        case 0x1bc4c8u: goto label_1bc4c8;
        case 0x1bc4ccu: goto label_1bc4cc;
        case 0x1bc4d0u: goto label_1bc4d0;
        case 0x1bc4d4u: goto label_1bc4d4;
        case 0x1bc4d8u: goto label_1bc4d8;
        case 0x1bc4dcu: goto label_1bc4dc;
        case 0x1bc4e0u: goto label_1bc4e0;
        case 0x1bc4e4u: goto label_1bc4e4;
        case 0x1bc4e8u: goto label_1bc4e8;
        case 0x1bc4ecu: goto label_1bc4ec;
        case 0x1bc4f0u: goto label_1bc4f0;
        case 0x1bc4f4u: goto label_1bc4f4;
        case 0x1bc4f8u: goto label_1bc4f8;
        case 0x1bc4fcu: goto label_1bc4fc;
        case 0x1bc500u: goto label_1bc500;
        case 0x1bc504u: goto label_1bc504;
        case 0x1bc508u: goto label_1bc508;
        case 0x1bc50cu: goto label_1bc50c;
        case 0x1bc510u: goto label_1bc510;
        case 0x1bc514u: goto label_1bc514;
        case 0x1bc518u: goto label_1bc518;
        case 0x1bc51cu: goto label_1bc51c;
        case 0x1bc520u: goto label_1bc520;
        case 0x1bc524u: goto label_1bc524;
        case 0x1bc528u: goto label_1bc528;
        case 0x1bc52cu: goto label_1bc52c;
        case 0x1bc530u: goto label_1bc530;
        case 0x1bc534u: goto label_1bc534;
        case 0x1bc538u: goto label_1bc538;
        case 0x1bc53cu: goto label_1bc53c;
        case 0x1bc540u: goto label_1bc540;
        case 0x1bc544u: goto label_1bc544;
        case 0x1bc548u: goto label_1bc548;
        case 0x1bc54cu: goto label_1bc54c;
        case 0x1bc550u: goto label_1bc550;
        case 0x1bc554u: goto label_1bc554;
        case 0x1bc558u: goto label_1bc558;
        case 0x1bc55cu: goto label_1bc55c;
        case 0x1bc560u: goto label_1bc560;
        case 0x1bc564u: goto label_1bc564;
        case 0x1bc568u: goto label_1bc568;
        case 0x1bc56cu: goto label_1bc56c;
        case 0x1bc570u: goto label_1bc570;
        case 0x1bc574u: goto label_1bc574;
        case 0x1bc578u: goto label_1bc578;
        case 0x1bc57cu: goto label_1bc57c;
        case 0x1bc580u: goto label_1bc580;
        case 0x1bc584u: goto label_1bc584;
        case 0x1bc588u: goto label_1bc588;
        case 0x1bc58cu: goto label_1bc58c;
        case 0x1bc590u: goto label_1bc590;
        case 0x1bc594u: goto label_1bc594;
        case 0x1bc598u: goto label_1bc598;
        case 0x1bc59cu: goto label_1bc59c;
        case 0x1bc5a0u: goto label_1bc5a0;
        case 0x1bc5a4u: goto label_1bc5a4;
        case 0x1bc5a8u: goto label_1bc5a8;
        case 0x1bc5acu: goto label_1bc5ac;
        case 0x1bc5b0u: goto label_1bc5b0;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5b8u: goto label_1bc5b8;
        case 0x1bc5bcu: goto label_1bc5bc;
        case 0x1bc5c0u: goto label_1bc5c0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5c8u: goto label_1bc5c8;
        case 0x1bc5ccu: goto label_1bc5cc;
        case 0x1bc5d0u: goto label_1bc5d0;
        case 0x1bc5d4u: goto label_1bc5d4;
        case 0x1bc5d8u: goto label_1bc5d8;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc5e0u: goto label_1bc5e0;
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5e8u: goto label_1bc5e8;
        case 0x1bc5ecu: goto label_1bc5ec;
        case 0x1bc5f0u: goto label_1bc5f0;
        case 0x1bc5f4u: goto label_1bc5f4;
        case 0x1bc5f8u: goto label_1bc5f8;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc608u: goto label_1bc608;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc610u: goto label_1bc610;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc618u: goto label_1bc618;
        case 0x1bc61cu: goto label_1bc61c;
        case 0x1bc620u: goto label_1bc620;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc628u: goto label_1bc628;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc630u: goto label_1bc630;
        case 0x1bc634u: goto label_1bc634;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc63cu: goto label_1bc63c;
        case 0x1bc640u: goto label_1bc640;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc648u: goto label_1bc648;
        case 0x1bc64cu: goto label_1bc64c;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc65cu: goto label_1bc65c;
        case 0x1bc660u: goto label_1bc660;
        case 0x1bc664u: goto label_1bc664;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc66cu: goto label_1bc66c;
        case 0x1bc670u: goto label_1bc670;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc684u: goto label_1bc684;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc68cu: goto label_1bc68c;
        case 0x1bc690u: goto label_1bc690;
        case 0x1bc694u: goto label_1bc694;
        case 0x1bc698u: goto label_1bc698;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6a0u: goto label_1bc6a0;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b0u: goto label_1bc6b0;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6b8u: goto label_1bc6b8;
        case 0x1bc6bcu: goto label_1bc6bc;
        case 0x1bc6c0u: goto label_1bc6c0;
        case 0x1bc6c4u: goto label_1bc6c4;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6d8u: goto label_1bc6d8;
        case 0x1bc6dcu: goto label_1bc6dc;
        case 0x1bc6e0u: goto label_1bc6e0;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6e8u: goto label_1bc6e8;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc6f4u: goto label_1bc6f4;
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc6fcu: goto label_1bc6fc;
        case 0x1bc700u: goto label_1bc700;
        case 0x1bc704u: goto label_1bc704;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc710u: goto label_1bc710;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc718u: goto label_1bc718;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc720u: goto label_1bc720;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc730u: goto label_1bc730;
        case 0x1bc734u: goto label_1bc734;
        case 0x1bc738u: goto label_1bc738;
        case 0x1bc73cu: goto label_1bc73c;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc744u: goto label_1bc744;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc75cu: goto label_1bc75c;
        case 0x1bc760u: goto label_1bc760;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc76cu: goto label_1bc76c;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc774u: goto label_1bc774;
        case 0x1bc778u: goto label_1bc778;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc780u: goto label_1bc780;
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc78cu: goto label_1bc78c;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc79cu: goto label_1bc79c;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7a8u: goto label_1bc7a8;
        case 0x1bc7acu: goto label_1bc7ac;
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7b8u: goto label_1bc7b8;
        case 0x1bc7bcu: goto label_1bc7bc;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7c4u: goto label_1bc7c4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7ccu: goto label_1bc7cc;
        case 0x1bc7d0u: goto label_1bc7d0;
        case 0x1bc7d4u: goto label_1bc7d4;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7e0u: goto label_1bc7e0;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc7e8u: goto label_1bc7e8;
        case 0x1bc7ecu: goto label_1bc7ec;
        case 0x1bc7f0u: goto label_1bc7f0;
        case 0x1bc7f4u: goto label_1bc7f4;
        default: break;
    }

    ctx->pc = 0x1bc460u;

label_1bc460:
    // 0x1bc460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bc464:
    // 0x1bc464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bc468:
    // 0x1bc468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc46c:
    // 0x1bc46c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bc470:
    // 0x1bc470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bc470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1bc474:
    // 0x1bc474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bc478:
    // 0x1bc478: 0xc06f038  jal         func_1BC0E0
label_1bc47c:
    if (ctx->pc == 0x1BC47Cu) {
        ctx->pc = 0x1BC47Cu;
            // 0x1bc47c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC480u;
        goto label_1bc480;
    }
    ctx->pc = 0x1BC478u;
    SET_GPR_U32(ctx, 31, 0x1BC480u);
    ctx->pc = 0x1BC47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC478u;
            // 0x1bc47c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0E0u;
    if (runtime->hasFunction(0x1BC0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC480u; }
        if (ctx->pc != 0x1BC480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC0E0_0x1bc0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC480u; }
        if (ctx->pc != 0x1BC480u) { return; }
    }
    ctx->pc = 0x1BC480u;
label_1bc480:
    // 0x1bc480: 0xc06ef38  jal         func_1BBCE0
label_1bc484:
    if (ctx->pc == 0x1BC484u) {
        ctx->pc = 0x1BC484u;
            // 0x1bc484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC488u;
        goto label_1bc488;
    }
    ctx->pc = 0x1BC480u;
    SET_GPR_U32(ctx, 31, 0x1BC488u);
    ctx->pc = 0x1BC484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC480u;
            // 0x1bc484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCE0u;
    if (runtime->hasFunction(0x1BBCE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC488u; }
        if (ctx->pc != 0x1BC488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCE0_0x1bbce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC488u; }
        if (ctx->pc != 0x1BC488u) { return; }
    }
    ctx->pc = 0x1BC488u;
label_1bc488:
    // 0x1bc488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc48c:
    // 0x1bc48c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1bc490:
    if (ctx->pc == 0x1BC490u) {
        ctx->pc = 0x1BC490u;
            // 0x1bc490: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BC494u;
        goto label_1bc494;
    }
    ctx->pc = 0x1BC48Cu;
    {
        const bool branch_taken_0x1bc48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC48Cu;
            // 0x1bc490: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc48c) {
            ctx->pc = 0x1BC4C0u;
            goto label_1bc4c0;
        }
    }
    ctx->pc = 0x1BC494u;
label_1bc494:
    // 0x1bc494: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1bc494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bc498:
    // 0x1bc498: 0xc06d304  jal         func_1B4C10
label_1bc49c:
    if (ctx->pc == 0x1BC49Cu) {
        ctx->pc = 0x1BC49Cu;
            // 0x1bc49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4A0u;
        goto label_1bc4a0;
    }
    ctx->pc = 0x1BC498u;
    SET_GPR_U32(ctx, 31, 0x1BC4A0u);
    ctx->pc = 0x1BC49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC498u;
            // 0x1bc49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C10u;
    if (runtime->hasFunction(0x1B4C10u)) {
        auto targetFn = runtime->lookupFunction(0x1B4C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4A0u; }
        if (ctx->pc != 0x1BC4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4C10_0x1b4c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4A0u; }
        if (ctx->pc != 0x1BC4A0u) { return; }
    }
    ctx->pc = 0x1BC4A0u;
label_1bc4a0:
    // 0x1bc4a0: 0x50530008  beql        $v0, $s3, . + 4 + (0x8 << 2)
label_1bc4a4:
    if (ctx->pc == 0x1BC4A4u) {
        ctx->pc = 0x1BC4A4u;
            // 0x1bc4a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BC4A8u;
        goto label_1bc4a8;
    }
    ctx->pc = 0x1BC4A0u;
    {
        const bool branch_taken_0x1bc4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1bc4a0) {
            ctx->pc = 0x1BC4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4A0u;
            // 0x1bc4a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4C4u;
            goto label_1bc4c4;
        }
    }
    ctx->pc = 0x1BC4A8u;
label_1bc4a8:
    // 0x1bc4a8: 0xc06eab2  jal         func_1BAAC8
label_1bc4ac:
    if (ctx->pc == 0x1BC4ACu) {
        ctx->pc = 0x1BC4B0u;
        goto label_1bc4b0;
    }
    ctx->pc = 0x1BC4A8u;
    SET_GPR_U32(ctx, 31, 0x1BC4B0u);
    ctx->pc = 0x1BAAC8u;
    if (runtime->hasFunction(0x1BAAC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BAAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4B0u; }
        if (ctx->pc != 0x1BC4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAC8_0x1baac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4B0u; }
        if (ctx->pc != 0x1BC4B0u) { return; }
    }
    ctx->pc = 0x1BC4B0u;
label_1bc4b0:
    // 0x1bc4b0: 0xc06e4dc  jal         func_1B9370
label_1bc4b4:
    if (ctx->pc == 0x1BC4B4u) {
        ctx->pc = 0x1BC4B4u;
            // 0x1bc4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4B8u;
        goto label_1bc4b8;
    }
    ctx->pc = 0x1BC4B0u;
    SET_GPR_U32(ctx, 31, 0x1BC4B8u);
    ctx->pc = 0x1BC4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4B0u;
            // 0x1bc4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (runtime->hasFunction(0x1B9370u)) {
        auto targetFn = runtime->lookupFunction(0x1B9370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4B8u; }
        if (ctx->pc != 0x1BC4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9370_0x1b9370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4B8u; }
        if (ctx->pc != 0x1BC4B8u) { return; }
    }
    ctx->pc = 0x1BC4B8u;
label_1bc4b8:
    // 0x1bc4b8: 0x1452fff7  bne         $v0, $s2, . + 4 + (-0x9 << 2)
label_1bc4bc:
    if (ctx->pc == 0x1BC4BCu) {
        ctx->pc = 0x1BC4C0u;
        goto label_1bc4c0;
    }
    ctx->pc = 0x1BC4B8u;
    {
        const bool branch_taken_0x1bc4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1bc4b8) {
            ctx->pc = 0x1BC498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bc498;
        }
    }
    ctx->pc = 0x1BC4C0u;
label_1bc4c0:
    // 0x1bc4c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc4c4:
    // 0x1bc4c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc4c8:
    // 0x1bc4c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc4cc:
    // 0x1bc4cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bc4d0:
    // 0x1bc4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc4d4:
    // 0x1bc4d4: 0x3e00008  jr          $ra
label_1bc4d8:
    if (ctx->pc == 0x1BC4D8u) {
        ctx->pc = 0x1BC4D8u;
            // 0x1bc4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BC4DCu;
        goto label_1bc4dc;
    }
    ctx->pc = 0x1BC4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4D4u;
            // 0x1bc4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC4DCu;
label_1bc4dc:
    // 0x1bc4dc: 0x0  nop
    ctx->pc = 0x1bc4dcu;
    // NOP
label_1bc4e0:
    // 0x1bc4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bc4e4:
    // 0x1bc4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc4e8:
    // 0x1bc4e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bc4ec:
    // 0x1bc4ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bc4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4f0:
    // 0x1bc4f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bc4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1bc4f4:
    // 0x1bc4f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1bc4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1bc4f8:
    // 0x1bc4f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1bc4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1bc4fc:
    // 0x1bc4fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bc500:
    // 0x1bc500: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1bc500u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bc504:
    // 0x1bc504: 0xc06d8cc  jal         func_1B6330
label_1bc508:
    if (ctx->pc == 0x1BC508u) {
        ctx->pc = 0x1BC508u;
            // 0x1bc508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC50Cu;
        goto label_1bc50c;
    }
    ctx->pc = 0x1BC504u;
    SET_GPR_U32(ctx, 31, 0x1BC50Cu);
    ctx->pc = 0x1BC508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC504u;
            // 0x1bc508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6330u;
    if (runtime->hasFunction(0x1B6330u)) {
        auto targetFn = runtime->lookupFunction(0x1B6330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC50Cu; }
        if (ctx->pc != 0x1BC50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6330_0x1b6330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC50Cu; }
        if (ctx->pc != 0x1BC50Cu) { return; }
    }
    ctx->pc = 0x1BC50Cu;
label_1bc50c:
    // 0x1bc50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc510:
    // 0x1bc510: 0xc06d8d2  jal         func_1B6348
label_1bc514:
    if (ctx->pc == 0x1BC514u) {
        ctx->pc = 0x1BC514u;
            // 0x1bc514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC518u;
        goto label_1bc518;
    }
    ctx->pc = 0x1BC510u;
    SET_GPR_U32(ctx, 31, 0x1BC518u);
    ctx->pc = 0x1BC514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC510u;
            // 0x1bc514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6348u;
    if (runtime->hasFunction(0x1B6348u)) {
        auto targetFn = runtime->lookupFunction(0x1B6348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC518u; }
        if (ctx->pc != 0x1BC518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6348_0x1b6348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC518u; }
        if (ctx->pc != 0x1BC518u) { return; }
    }
    ctx->pc = 0x1BC518u;
label_1bc518:
    // 0x1bc518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc51c:
    // 0x1bc51c: 0xc06d8de  jal         func_1B6378
label_1bc520:
    if (ctx->pc == 0x1BC520u) {
        ctx->pc = 0x1BC520u;
            // 0x1bc520: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC524u;
        goto label_1bc524;
    }
    ctx->pc = 0x1BC51Cu;
    SET_GPR_U32(ctx, 31, 0x1BC524u);
    ctx->pc = 0x1BC520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC51Cu;
            // 0x1bc520: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6378u;
    if (runtime->hasFunction(0x1B6378u)) {
        auto targetFn = runtime->lookupFunction(0x1B6378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC524u; }
        if (ctx->pc != 0x1BC524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6378_0x1b6378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC524u; }
        if (ctx->pc != 0x1BC524u) { return; }
    }
    ctx->pc = 0x1BC524u;
label_1bc524:
    // 0x1bc524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc528:
    // 0x1bc528: 0xc06d940  jal         func_1B6500
label_1bc52c:
    if (ctx->pc == 0x1BC52Cu) {
        ctx->pc = 0x1BC52Cu;
            // 0x1bc52c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC530u;
        goto label_1bc530;
    }
    ctx->pc = 0x1BC528u;
    SET_GPR_U32(ctx, 31, 0x1BC530u);
    ctx->pc = 0x1BC52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC528u;
            // 0x1bc52c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6500u;
    if (runtime->hasFunction(0x1B6500u)) {
        auto targetFn = runtime->lookupFunction(0x1B6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC530u; }
        if (ctx->pc != 0x1BC530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6500_0x1b6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC530u; }
        if (ctx->pc != 0x1BC530u) { return; }
    }
    ctx->pc = 0x1BC530u;
label_1bc530:
    // 0x1bc530: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1bc534:
    // 0x1bc534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc538:
    // 0x1bc538: 0xc06d888  jal         func_1B6220
label_1bc53c:
    if (ctx->pc == 0x1BC53Cu) {
        ctx->pc = 0x1BC53Cu;
            // 0x1bc53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC540u;
        goto label_1bc540;
    }
    ctx->pc = 0x1BC538u;
    SET_GPR_U32(ctx, 31, 0x1BC540u);
    ctx->pc = 0x1BC53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC538u;
            // 0x1bc53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6220u;
    if (runtime->hasFunction(0x1B6220u)) {
        auto targetFn = runtime->lookupFunction(0x1B6220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC540u; }
        if (ctx->pc != 0x1BC540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6220_0x1b6220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC540u; }
        if (ctx->pc != 0x1BC540u) { return; }
    }
    ctx->pc = 0x1BC540u;
label_1bc540:
    // 0x1bc540: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x1bc540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
label_1bc544:
    // 0x1bc544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc548:
    // 0x1bc548: 0xc06d884  jal         func_1B6210
label_1bc54c:
    if (ctx->pc == 0x1BC54Cu) {
        ctx->pc = 0x1BC54Cu;
            // 0x1bc54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC550u;
        goto label_1bc550;
    }
    ctx->pc = 0x1BC548u;
    SET_GPR_U32(ctx, 31, 0x1BC550u);
    ctx->pc = 0x1BC54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC548u;
            // 0x1bc54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (runtime->hasFunction(0x1B6210u)) {
        auto targetFn = runtime->lookupFunction(0x1B6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC550u; }
        if (ctx->pc != 0x1BC550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6210_0x1b6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC550u; }
        if (ctx->pc != 0x1BC550u) { return; }
    }
    ctx->pc = 0x1BC550u;
label_1bc550:
    // 0x1bc550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc554:
    // 0x1bc554: 0xc06d88c  jal         func_1B6230
label_1bc558:
    if (ctx->pc == 0x1BC558u) {
        ctx->pc = 0x1BC558u;
            // 0x1bc558: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC55Cu;
        goto label_1bc55c;
    }
    ctx->pc = 0x1BC554u;
    SET_GPR_U32(ctx, 31, 0x1BC55Cu);
    ctx->pc = 0x1BC558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC554u;
            // 0x1bc558: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6230u;
    if (runtime->hasFunction(0x1B6230u)) {
        auto targetFn = runtime->lookupFunction(0x1B6230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC55Cu; }
        if (ctx->pc != 0x1BC55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6230_0x1b6230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC55Cu; }
        if (ctx->pc != 0x1BC55Cu) { return; }
    }
    ctx->pc = 0x1BC55Cu;
label_1bc55c:
    // 0x1bc55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc560:
    // 0x1bc560: 0xc06d838  jal         func_1B60E0
label_1bc564:
    if (ctx->pc == 0x1BC564u) {
        ctx->pc = 0x1BC564u;
            // 0x1bc564: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC568u;
        goto label_1bc568;
    }
    ctx->pc = 0x1BC560u;
    SET_GPR_U32(ctx, 31, 0x1BC568u);
    ctx->pc = 0x1BC564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC560u;
            // 0x1bc564: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60E0u;
    if (runtime->hasFunction(0x1B60E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC568u; }
        if (ctx->pc != 0x1BC568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60E0_0x1b60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC568u; }
        if (ctx->pc != 0x1BC568u) { return; }
    }
    ctx->pc = 0x1BC568u;
label_1bc568:
    // 0x1bc568: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1bc568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_1bc56c:
    // 0x1bc56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc570:
    // 0x1bc570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc574:
    // 0x1bc574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bc574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc578:
    // 0x1bc578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc57c:
    // 0x1bc57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc580:
    // 0x1bc580: 0x24a5c598  addiu       $a1, $a1, -0x3A68
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952344));
label_1bc584:
    // 0x1bc584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bc588:
    // 0x1bc588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bc588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc58c:
    // 0x1bc58c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bc58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bc590:
    // 0x1bc590: 0x806d880  j           func_1B6200
label_1bc594:
    if (ctx->pc == 0x1BC594u) {
        ctx->pc = 0x1BC594u;
            // 0x1bc594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BC598u;
        goto label_1bc598;
    }
    ctx->pc = 0x1BC590u;
    ctx->pc = 0x1BC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC590u;
            // 0x1bc594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6200u;
    if (runtime->hasFunction(0x1B6200u)) {
        auto targetFn = runtime->lookupFunction(0x1B6200u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6200_0x1b6200(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC598u;
label_1bc598:
    // 0x1bc598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bc598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bc59c:
    // 0x1bc59c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bc59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1bc5a0:
    // 0x1bc5a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5a4:
    // 0x1bc5a4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1bc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1bc5a8:
    // 0x1bc5a8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1bc5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1bc5ac:
    // 0x1bc5ac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1bc5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1bc5b0:
    // 0x1bc5b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bc5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1bc5b4:
    // 0x1bc5b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bc5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1bc5b8:
    // 0x1bc5b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bc5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bc5bc:
    // 0x1bc5bc: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1bc5bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bc5c0:
    // 0x1bc5c0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1bc5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1bc5c4:
    // 0x1bc5c4: 0xc06d8cc  jal         func_1B6330
label_1bc5c8:
    if (ctx->pc == 0x1BC5C8u) {
        ctx->pc = 0x1BC5C8u;
            // 0x1bc5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5CCu;
        goto label_1bc5cc;
    }
    ctx->pc = 0x1BC5C4u;
    SET_GPR_U32(ctx, 31, 0x1BC5CCu);
    ctx->pc = 0x1BC5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5C4u;
            // 0x1bc5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6330u;
    if (runtime->hasFunction(0x1B6330u)) {
        auto targetFn = runtime->lookupFunction(0x1B6330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5CCu; }
        if (ctx->pc != 0x1BC5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6330_0x1b6330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5CCu; }
        if (ctx->pc != 0x1BC5CCu) { return; }
    }
    ctx->pc = 0x1BC5CCu;
label_1bc5cc:
    // 0x1bc5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5d0:
    // 0x1bc5d0: 0xc06d8d2  jal         func_1B6348
label_1bc5d4:
    if (ctx->pc == 0x1BC5D4u) {
        ctx->pc = 0x1BC5D4u;
            // 0x1bc5d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5D8u;
        goto label_1bc5d8;
    }
    ctx->pc = 0x1BC5D0u;
    SET_GPR_U32(ctx, 31, 0x1BC5D8u);
    ctx->pc = 0x1BC5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5D0u;
            // 0x1bc5d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6348u;
    if (runtime->hasFunction(0x1B6348u)) {
        auto targetFn = runtime->lookupFunction(0x1B6348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5D8u; }
        if (ctx->pc != 0x1BC5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6348_0x1b6348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5D8u; }
        if (ctx->pc != 0x1BC5D8u) { return; }
    }
    ctx->pc = 0x1BC5D8u;
label_1bc5d8:
    // 0x1bc5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5dc:
    // 0x1bc5dc: 0xc06d8de  jal         func_1B6378
label_1bc5e0:
    if (ctx->pc == 0x1BC5E0u) {
        ctx->pc = 0x1BC5E0u;
            // 0x1bc5e0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5E4u;
        goto label_1bc5e4;
    }
    ctx->pc = 0x1BC5DCu;
    SET_GPR_U32(ctx, 31, 0x1BC5E4u);
    ctx->pc = 0x1BC5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5DCu;
            // 0x1bc5e0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6378u;
    if (runtime->hasFunction(0x1B6378u)) {
        auto targetFn = runtime->lookupFunction(0x1B6378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5E4u; }
        if (ctx->pc != 0x1BC5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6378_0x1b6378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5E4u; }
        if (ctx->pc != 0x1BC5E4u) { return; }
    }
    ctx->pc = 0x1BC5E4u;
label_1bc5e4:
    // 0x1bc5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5e8:
    // 0x1bc5e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bc5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5ec:
    // 0x1bc5ec: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1bc5ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1bc5f0:
    // 0x1bc5f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc5f4:
    // 0x1bc5f4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1bc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1bc5f8:
    // 0x1bc5f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bc5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bc5fc:
    // 0x1bc5fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bc600:
    if (ctx->pc == 0x1BC600u) {
        ctx->pc = 0x1BC600u;
            // 0x1bc600: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC604u;
        goto label_1bc604;
    }
    ctx->pc = 0x1BC5FCu;
    {
        const bool branch_taken_0x1bc5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5FCu;
            // 0x1bc600: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5fc) {
            ctx->pc = 0x1BC628u;
            goto label_1bc628;
        }
    }
    ctx->pc = 0x1BC604u;
label_1bc604:
    // 0x1bc604: 0x8222006c  lb          $v0, 0x6C($s1)
    ctx->pc = 0x1bc604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_1bc608:
    // 0x1bc608: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1bc60c:
    if (ctx->pc == 0x1BC60Cu) {
        ctx->pc = 0x1BC60Cu;
            // 0x1bc60c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BC610u;
        goto label_1bc610;
    }
    ctx->pc = 0x1BC608u;
    {
        const bool branch_taken_0x1bc608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc608) {
            ctx->pc = 0x1BC60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC608u;
            // 0x1bc60c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC62Cu;
            goto label_1bc62c;
        }
    }
    ctx->pc = 0x1BC610u;
label_1bc610:
    // 0x1bc610: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bc610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bc614:
    // 0x1bc614: 0xc06d884  jal         func_1B6210
label_1bc618:
    if (ctx->pc == 0x1BC618u) {
        ctx->pc = 0x1BC618u;
            // 0x1bc618: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BC61Cu;
        goto label_1bc61c;
    }
    ctx->pc = 0x1BC614u;
    SET_GPR_U32(ctx, 31, 0x1BC61Cu);
    ctx->pc = 0x1BC618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC614u;
            // 0x1bc618: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (runtime->hasFunction(0x1B6210u)) {
        auto targetFn = runtime->lookupFunction(0x1B6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC61Cu; }
        if (ctx->pc != 0x1BC61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6210_0x1b6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC61Cu; }
        if (ctx->pc != 0x1BC61Cu) { return; }
    }
    ctx->pc = 0x1BC61Cu;
label_1bc61c:
    // 0x1bc61c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1bc620:
    if (ctx->pc == 0x1BC620u) {
        ctx->pc = 0x1BC620u;
            // 0x1bc620: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1BC624u;
        goto label_1bc624;
    }
    ctx->pc = 0x1BC61Cu;
    {
        const bool branch_taken_0x1bc61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC61Cu;
            // 0x1bc620: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc61c) {
            ctx->pc = 0x1BC710u;
            goto label_1bc710;
        }
    }
    ctx->pc = 0x1BC624u;
label_1bc624:
    // 0x1bc624: 0x0  nop
    ctx->pc = 0x1bc624u;
    // NOP
label_1bc628:
    // 0x1bc628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc62c:
    // 0x1bc62c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bc630:
    // 0x1bc630: 0x40f809  jalr        $v0
label_1bc634:
    if (ctx->pc == 0x1BC634u) {
        ctx->pc = 0x1BC634u;
            // 0x1bc634: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x1BC638u;
        goto label_1bc638;
    }
    ctx->pc = 0x1BC630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC638u);
        ctx->pc = 0x1BC634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC630u;
            // 0x1bc634: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC638u; }
            if (ctx->pc != 0x1BC638u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC638u;
label_1bc638:
    // 0x1bc638: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bc63c:
    // 0x1bc63c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1bc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bc640:
    // 0x1bc640: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1bc640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1bc644:
    // 0x1bc644: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bc644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bc648:
    // 0x1bc648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bc64c:
    if (ctx->pc == 0x1BC64Cu) {
        ctx->pc = 0x1BC64Cu;
            // 0x1bc64c: 0x24848900  addiu       $a0, $a0, -0x7700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
        ctx->pc = 0x1BC650u;
        goto label_1bc650;
    }
    ctx->pc = 0x1BC648u;
    {
        const bool branch_taken_0x1bc648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC648u;
            // 0x1bc64c: 0x24848900  addiu       $a0, $a0, -0x7700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc648) {
            ctx->pc = 0x1BC658u;
            goto label_1bc658;
        }
    }
    ctx->pc = 0x1BC650u;
label_1bc650:
    // 0x1bc650: 0xc06ba0a  jal         func_1AE828
label_1bc654:
    if (ctx->pc == 0x1BC654u) {
        ctx->pc = 0x1BC658u;
        goto label_1bc658;
    }
    ctx->pc = 0x1BC650u;
    SET_GPR_U32(ctx, 31, 0x1BC658u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC658u; }
        if (ctx->pc != 0x1BC658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC658u; }
        if (ctx->pc != 0x1BC658u) { return; }
    }
    ctx->pc = 0x1BC658u;
label_1bc658:
    // 0x1bc658: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc65c:
    // 0x1bc65c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bc65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bc660:
    // 0x1bc660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc664:
    // 0x1bc664: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bc664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bc668:
    // 0x1bc668: 0x40f809  jalr        $v0
label_1bc66c:
    if (ctx->pc == 0x1BC66Cu) {
        ctx->pc = 0x1BC66Cu;
            // 0x1bc66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC670u;
        goto label_1bc670;
    }
    ctx->pc = 0x1BC668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC670u);
        ctx->pc = 0x1BC66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC668u;
            // 0x1bc66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC670u; }
            if (ctx->pc != 0x1BC670u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC670u;
label_1bc670:
    // 0x1bc670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc674:
    // 0x1bc674: 0xc06d888  jal         func_1B6220
label_1bc678:
    if (ctx->pc == 0x1BC678u) {
        ctx->pc = 0x1BC678u;
            // 0x1bc678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC67Cu;
        goto label_1bc67c;
    }
    ctx->pc = 0x1BC674u;
    SET_GPR_U32(ctx, 31, 0x1BC67Cu);
    ctx->pc = 0x1BC678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC674u;
            // 0x1bc678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6220u;
    if (runtime->hasFunction(0x1B6220u)) {
        auto targetFn = runtime->lookupFunction(0x1B6220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC67Cu; }
        if (ctx->pc != 0x1BC67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6220_0x1b6220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC67Cu; }
        if (ctx->pc != 0x1BC67Cu) { return; }
    }
    ctx->pc = 0x1BC67Cu;
label_1bc67c:
    // 0x1bc67c: 0x2932823  subu        $a1, $s4, $s3
    ctx->pc = 0x1bc67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1bc680:
    // 0x1bc680: 0xae250090  sw          $a1, 0x90($s1)
    ctx->pc = 0x1bc680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 5));
label_1bc684:
    // 0x1bc684: 0xc06d884  jal         func_1B6210
label_1bc688:
    if (ctx->pc == 0x1BC688u) {
        ctx->pc = 0x1BC688u;
            // 0x1bc688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC68Cu;
        goto label_1bc68c;
    }
    ctx->pc = 0x1BC684u;
    SET_GPR_U32(ctx, 31, 0x1BC68Cu);
    ctx->pc = 0x1BC688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC684u;
            // 0x1bc688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (runtime->hasFunction(0x1B6210u)) {
        auto targetFn = runtime->lookupFunction(0x1B6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC68Cu; }
        if (ctx->pc != 0x1BC68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6210_0x1b6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC68Cu; }
        if (ctx->pc != 0x1BC68Cu) { return; }
    }
    ctx->pc = 0x1BC68Cu;
label_1bc68c:
    // 0x1bc68c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc690:
    // 0x1bc690: 0xc06d88c  jal         func_1B6230
label_1bc694:
    if (ctx->pc == 0x1BC694u) {
        ctx->pc = 0x1BC694u;
            // 0x1bc694: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC698u;
        goto label_1bc698;
    }
    ctx->pc = 0x1BC690u;
    SET_GPR_U32(ctx, 31, 0x1BC698u);
    ctx->pc = 0x1BC694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC690u;
            // 0x1bc694: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6230u;
    if (runtime->hasFunction(0x1B6230u)) {
        auto targetFn = runtime->lookupFunction(0x1B6230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC698u; }
        if (ctx->pc != 0x1BC698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6230_0x1b6230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC698u; }
        if (ctx->pc != 0x1BC698u) { return; }
    }
    ctx->pc = 0x1BC698u;
label_1bc698:
    // 0x1bc698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc69c:
    // 0x1bc69c: 0xc06d838  jal         func_1B60E0
label_1bc6a0:
    if (ctx->pc == 0x1BC6A0u) {
        ctx->pc = 0x1BC6A0u;
            // 0x1bc6a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6A4u;
        goto label_1bc6a4;
    }
    ctx->pc = 0x1BC69Cu;
    SET_GPR_U32(ctx, 31, 0x1BC6A4u);
    ctx->pc = 0x1BC6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC69Cu;
            // 0x1bc6a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60E0u;
    if (runtime->hasFunction(0x1B60E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6A4u; }
        if (ctx->pc != 0x1BC6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60E0_0x1b60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6A4u; }
        if (ctx->pc != 0x1BC6A4u) { return; }
    }
    ctx->pc = 0x1BC6A4u;
label_1bc6a4:
    // 0x1bc6a4: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x1bc6a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1bc6a8:
    // 0x1bc6a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc6ac:
    // 0x1bc6ac: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1bc6b0:
    if (ctx->pc == 0x1BC6B0u) {
        ctx->pc = 0x1BC6B0u;
            // 0x1bc6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6B4u;
        goto label_1bc6b4;
    }
    ctx->pc = 0x1BC6ACu;
    {
        const bool branch_taken_0x1bc6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6ACu;
            // 0x1bc6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6ac) {
            ctx->pc = 0x1BC6F8u;
            goto label_1bc6f8;
        }
    }
    ctx->pc = 0x1BC6B4u;
label_1bc6b4:
    // 0x1bc6b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc6b8:
    // 0x1bc6b8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1bc6bc:
    // 0x1bc6bc: 0x60f809  jalr        $v1
label_1bc6c0:
    if (ctx->pc == 0x1BC6C0u) {
        ctx->pc = 0x1BC6C4u;
        goto label_1bc6c4;
    }
    ctx->pc = 0x1BC6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC6C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6C4u; }
            if (ctx->pc != 0x1BC6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC6C4u;
label_1bc6c4:
    // 0x1bc6c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc6c8:
    // 0x1bc6c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bc6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6cc:
    // 0x1bc6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6d0:
    // 0x1bc6d0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1bc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1bc6d4:
    // 0x1bc6d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc6d8:
    // 0x1bc6d8: 0x60f809  jalr        $v1
label_1bc6dc:
    if (ctx->pc == 0x1BC6DCu) {
        ctx->pc = 0x1BC6DCu;
            // 0x1bc6dc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6E0u;
        goto label_1bc6e0;
    }
    ctx->pc = 0x1BC6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC6E0u);
        ctx->pc = 0x1BC6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6D8u;
            // 0x1bc6dc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6E0u; }
            if (ctx->pc != 0x1BC6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC6E0u;
label_1bc6e0:
    // 0x1bc6e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1bc6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc6e4:
    // 0x1bc6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6e8:
    // 0x1bc6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6ec:
    // 0x1bc6ec: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1bc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_1bc6f0:
    // 0x1bc6f0: 0x40f809  jalr        $v0
label_1bc6f4:
    if (ctx->pc == 0x1BC6F4u) {
        ctx->pc = 0x1BC6F4u;
            // 0x1bc6f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6F8u;
        goto label_1bc6f8;
    }
    ctx->pc = 0x1BC6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC6F8u);
        ctx->pc = 0x1BC6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6F0u;
            // 0x1bc6f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC6F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6F8u; }
            if (ctx->pc != 0x1BC6F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC6F8u;
label_1bc6f8:
    // 0x1bc6f8: 0xc06d946  jal         func_1B6518
label_1bc6fc:
    if (ctx->pc == 0x1BC6FCu) {
        ctx->pc = 0x1BC6FCu;
            // 0x1bc6fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC700u;
        goto label_1bc700;
    }
    ctx->pc = 0x1BC6F8u;
    SET_GPR_U32(ctx, 31, 0x1BC700u);
    ctx->pc = 0x1BC6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6F8u;
            // 0x1bc6fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6518u;
    if (runtime->hasFunction(0x1B6518u)) {
        auto targetFn = runtime->lookupFunction(0x1B6518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC700u; }
        if (ctx->pc != 0x1BC700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6518_0x1b6518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC700u; }
        if (ctx->pc != 0x1BC700u) { return; }
    }
    ctx->pc = 0x1BC700u;
label_1bc700:
    // 0x1bc700: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1bc700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1bc704:
    // 0x1bc704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bc708:
    // 0x1bc708: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1bc708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1bc70c:
    // 0x1bc70c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bc70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc710:
    // 0x1bc710: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bc710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bc714:
    // 0x1bc714: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bc714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc718:
    // 0x1bc718: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1bc718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bc71c:
    // 0x1bc71c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1bc71cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc720:
    // 0x1bc720: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1bc720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bc724:
    // 0x1bc724: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bc724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc728:
    // 0x1bc728: 0x3e00008  jr          $ra
label_1bc72c:
    if (ctx->pc == 0x1BC72Cu) {
        ctx->pc = 0x1BC72Cu;
            // 0x1bc72c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1BC730u;
        goto label_1bc730;
    }
    ctx->pc = 0x1BC728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC728u;
            // 0x1bc72c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC730u;
label_1bc730:
    // 0x1bc730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bc734:
    // 0x1bc734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc738:
    // 0x1bc738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc73c:
    // 0x1bc73c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bc740:
    // 0x1bc740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bc744:
    // 0x1bc744: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bc748:
    // 0x1bc748: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_1bc74c:
    if (ctx->pc == 0x1BC74Cu) {
        ctx->pc = 0x1BC74Cu;
            // 0x1bc74c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BC750u;
        goto label_1bc750;
    }
    ctx->pc = 0x1BC748u;
    {
        const bool branch_taken_0x1bc748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC748u;
            // 0x1bc74c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc748) {
            ctx->pc = 0x1BC7E4u;
            goto label_1bc7e4;
        }
    }
    ctx->pc = 0x1BC750u;
label_1bc750:
    // 0x1bc750: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
label_1bc754:
    if (ctx->pc == 0x1BC754u) {
        ctx->pc = 0x1BC754u;
            // 0x1bc754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BC758u;
        goto label_1bc758;
    }
    ctx->pc = 0x1BC750u;
    {
        const bool branch_taken_0x1bc750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc750) {
            ctx->pc = 0x1BC754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC750u;
            // 0x1bc754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC7E8u;
            goto label_1bc7e8;
        }
    }
    ctx->pc = 0x1BC758u;
label_1bc758:
    // 0x1bc758: 0xc06d8d2  jal         func_1B6348
label_1bc75c:
    if (ctx->pc == 0x1BC75Cu) {
        ctx->pc = 0x1BC760u;
        goto label_1bc760;
    }
    ctx->pc = 0x1BC758u;
    SET_GPR_U32(ctx, 31, 0x1BC760u);
    ctx->pc = 0x1B6348u;
    if (runtime->hasFunction(0x1B6348u)) {
        auto targetFn = runtime->lookupFunction(0x1B6348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC760u; }
        if (ctx->pc != 0x1BC760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6348_0x1b6348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC760u; }
        if (ctx->pc != 0x1BC760u) { return; }
    }
    ctx->pc = 0x1BC760u;
label_1bc760:
    // 0x1bc760: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1bc760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1bc764:
    // 0x1bc764: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1bc764u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1bc768:
    // 0x1bc768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bc768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc76c:
    // 0x1bc76c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bc770:
    // 0x1bc770: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1bc774:
    if (ctx->pc == 0x1BC774u) {
        ctx->pc = 0x1BC774u;
            // 0x1bc774: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1BC778u;
        goto label_1bc778;
    }
    ctx->pc = 0x1BC770u;
    {
        const bool branch_taken_0x1bc770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC770u;
            // 0x1bc774: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc770) {
            ctx->pc = 0x1BC788u;
            goto label_1bc788;
        }
    }
    ctx->pc = 0x1BC778u;
label_1bc778:
    // 0x1bc778: 0xc06dc04  jal         func_1B7010
label_1bc77c:
    if (ctx->pc == 0x1BC77Cu) {
        ctx->pc = 0x1BC77Cu;
            // 0x1bc77c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1BC780u;
        goto label_1bc780;
    }
    ctx->pc = 0x1BC778u;
    SET_GPR_U32(ctx, 31, 0x1BC780u);
    ctx->pc = 0x1BC77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC778u;
            // 0x1bc77c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (runtime->hasFunction(0x1B7010u)) {
        auto targetFn = runtime->lookupFunction(0x1B7010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC780u; }
        if (ctx->pc != 0x1BC780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7010_0x1b7010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC780u; }
        if (ctx->pc != 0x1BC780u) { return; }
    }
    ctx->pc = 0x1BC780u;
label_1bc780:
    // 0x1bc780: 0x10000019  b           . + 4 + (0x19 << 2)
label_1bc784:
    if (ctx->pc == 0x1BC784u) {
        ctx->pc = 0x1BC784u;
            // 0x1bc784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BC788u;
        goto label_1bc788;
    }
    ctx->pc = 0x1BC780u;
    {
        const bool branch_taken_0x1bc780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC780u;
            // 0x1bc784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc780) {
            ctx->pc = 0x1BC7E8u;
            goto label_1bc7e8;
        }
    }
    ctx->pc = 0x1BC788u;
label_1bc788:
    // 0x1bc788: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x1bc788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_1bc78c:
    // 0x1bc78c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1bc790:
    if (ctx->pc == 0x1BC790u) {
        ctx->pc = 0x1BC790u;
            // 0x1bc790: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->pc = 0x1BC794u;
        goto label_1bc794;
    }
    ctx->pc = 0x1BC78Cu;
    {
        const bool branch_taken_0x1bc78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC78Cu;
            // 0x1bc790: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc78c) {
            ctx->pc = 0x1BC7D0u;
            goto label_1bc7d0;
        }
    }
    ctx->pc = 0x1BC794u;
label_1bc794:
    // 0x1bc794: 0xc06d82e  jal         func_1B60B8
label_1bc798:
    if (ctx->pc == 0x1BC798u) {
        ctx->pc = 0x1BC798u;
            // 0x1bc798: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BC79Cu;
        goto label_1bc79c;
    }
    ctx->pc = 0x1BC794u;
    SET_GPR_U32(ctx, 31, 0x1BC79Cu);
    ctx->pc = 0x1BC798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC794u;
            // 0x1bc798: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60B8u;
    if (runtime->hasFunction(0x1B60B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B60B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC79Cu; }
        if (ctx->pc != 0x1BC79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60B8_0x1b60b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC79Cu; }
        if (ctx->pc != 0x1BC79Cu) { return; }
    }
    ctx->pc = 0x1BC79Cu;
label_1bc79c:
    // 0x1bc79c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1bc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1bc7a0:
    // 0x1bc7a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bc7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bc7a4:
    // 0x1bc7a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1bc7a8:
    if (ctx->pc == 0x1BC7A8u) {
        ctx->pc = 0x1BC7A8u;
            // 0x1bc7a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BC7ACu;
        goto label_1bc7ac;
    }
    ctx->pc = 0x1BC7A4u;
    {
        const bool branch_taken_0x1bc7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7A4u;
            // 0x1bc7a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7a4) {
            ctx->pc = 0x1BC7B4u;
            goto label_1bc7b4;
        }
    }
    ctx->pc = 0x1BC7ACu;
label_1bc7ac:
    // 0x1bc7ac: 0xc06d884  jal         func_1B6210
label_1bc7b0:
    if (ctx->pc == 0x1BC7B0u) {
        ctx->pc = 0x1BC7B0u;
            // 0x1bc7b0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BC7B4u;
        goto label_1bc7b4;
    }
    ctx->pc = 0x1BC7ACu;
    SET_GPR_U32(ctx, 31, 0x1BC7B4u);
    ctx->pc = 0x1BC7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7ACu;
            // 0x1bc7b0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (runtime->hasFunction(0x1B6210u)) {
        auto targetFn = runtime->lookupFunction(0x1B6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7B4u; }
        if (ctx->pc != 0x1BC7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6210_0x1b6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7B4u; }
        if (ctx->pc != 0x1BC7B4u) { return; }
    }
    ctx->pc = 0x1BC7B4u;
label_1bc7b4:
    // 0x1bc7b4: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1bc7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1bc7b8:
    // 0x1bc7b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bc7bc:
    // 0x1bc7bc: 0xc06dc04  jal         func_1B7010
label_1bc7c0:
    if (ctx->pc == 0x1BC7C0u) {
        ctx->pc = 0x1BC7C0u;
            // 0x1bc7c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1BC7C4u;
        goto label_1bc7c4;
    }
    ctx->pc = 0x1BC7BCu;
    SET_GPR_U32(ctx, 31, 0x1BC7C4u);
    ctx->pc = 0x1BC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7BCu;
            // 0x1bc7c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (runtime->hasFunction(0x1B7010u)) {
        auto targetFn = runtime->lookupFunction(0x1B7010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7C4u; }
        if (ctx->pc != 0x1BC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7010_0x1b7010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7C4u; }
        if (ctx->pc != 0x1BC7C4u) { return; }
    }
    ctx->pc = 0x1BC7C4u;
label_1bc7c4:
    // 0x1bc7c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bc7c8:
    if (ctx->pc == 0x1BC7C8u) {
        ctx->pc = 0x1BC7C8u;
            // 0x1bc7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BC7CCu;
        goto label_1bc7cc;
    }
    ctx->pc = 0x1BC7C4u;
    {
        const bool branch_taken_0x1bc7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7C4u;
            // 0x1bc7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7c4) {
            ctx->pc = 0x1BC7E8u;
            goto label_1bc7e8;
        }
    }
    ctx->pc = 0x1BC7CCu;
label_1bc7cc:
    // 0x1bc7cc: 0x0  nop
    ctx->pc = 0x1bc7ccu;
    // NOP
label_1bc7d0:
    // 0x1bc7d0: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x1bc7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
label_1bc7d4:
    // 0x1bc7d4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1bc7d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1bc7d8:
    // 0x1bc7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc7dc:
    // 0x1bc7dc: 0xc06db28  jal         func_1B6CA0
label_1bc7e0:
    if (ctx->pc == 0x1BC7E0u) {
        ctx->pc = 0x1BC7E0u;
            // 0x1bc7e0: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
        ctx->pc = 0x1BC7E4u;
        goto label_1bc7e4;
    }
    ctx->pc = 0x1BC7DCu;
    SET_GPR_U32(ctx, 31, 0x1BC7E4u);
    ctx->pc = 0x1BC7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7DCu;
            // 0x1bc7e0: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (runtime->hasFunction(0x1B6CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7E4u; }
        if (ctx->pc != 0x1BC7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6CA0_0x1b6ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7E4u; }
        if (ctx->pc != 0x1BC7E4u) { return; }
    }
    ctx->pc = 0x1BC7E4u;
label_1bc7e4:
    // 0x1bc7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc7e8:
    // 0x1bc7e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc7ec:
    // 0x1bc7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc7f0:
    // 0x1bc7f0: 0x3e00008  jr          $ra
label_1bc7f4:
    if (ctx->pc == 0x1BC7F4u) {
        ctx->pc = 0x1BC7F4u;
            // 0x1bc7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BC7F8u;
        goto label_fallthrough_0x1bc7f0;
    }
    ctx->pc = 0x1BC7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7F0u;
            // 0x1bc7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bc7f0:
    ctx->pc = 0x1BC7F8u;
    ctx->pc = 0x1bc7f8u;
}
