#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223150
// Address: 0x223150 - 0x223ca8
void sub_00223150_0x223150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223150_0x223150");
#endif

    switch (ctx->pc) {
        case 0x223174u: goto label_223174;
        case 0x223184u: goto label_223184;
        case 0x223194u: goto label_223194;
        case 0x2231b4u: goto label_2231b4;
        case 0x2231bcu: goto label_2231bc;
        case 0x2231ccu: goto label_2231cc;
        case 0x2231e4u: goto label_2231e4;
        case 0x2231f0u: goto label_2231f0;
        case 0x2231f4u: goto label_2231f4;
        case 0x223208u: goto label_223208;
        case 0x223218u: goto label_223218;
        case 0x223224u: goto label_223224;
        case 0x22322cu: goto label_22322c;
        case 0x223264u: goto label_223264;
        case 0x223280u: goto label_223280;
        case 0x223288u: goto label_223288;
        case 0x223298u: goto label_223298;
        case 0x2232a8u: goto label_2232a8;
        case 0x2232b0u: goto label_2232b0;
        case 0x2232d8u: goto label_2232d8;
        case 0x2232f0u: goto label_2232f0;
        case 0x2232fcu: goto label_2232fc;
        case 0x223328u: goto label_223328;
        case 0x223330u: goto label_223330;
        case 0x223340u: goto label_223340;
        case 0x223350u: goto label_223350;
        case 0x223394u: goto label_223394;
        case 0x2233a4u: goto label_2233a4;
        case 0x2233b4u: goto label_2233b4;
        case 0x2233c4u: goto label_2233c4;
        case 0x2233ccu: goto label_2233cc;
        case 0x2233e8u: goto label_2233e8;
        case 0x2233f4u: goto label_2233f4;
        case 0x2233f8u: goto label_2233f8;
        case 0x223418u: goto label_223418;
        case 0x223420u: goto label_223420;
        case 0x223430u: goto label_223430;
        case 0x223440u: goto label_223440;
        case 0x223464u: goto label_223464;
        case 0x223480u: goto label_223480;
        case 0x223498u: goto label_223498;
        case 0x2234a8u: goto label_2234a8;
        case 0x2234c0u: goto label_2234c0;
        case 0x2234d4u: goto label_2234d4;
        case 0x2234e4u: goto label_2234e4;
        case 0x2234f4u: goto label_2234f4;
        case 0x2234fcu: goto label_2234fc;
        case 0x223528u: goto label_223528;
        case 0x223538u: goto label_223538;
        case 0x223548u: goto label_223548;
        case 0x223550u: goto label_223550;
        case 0x223578u: goto label_223578;
        case 0x22358cu: goto label_22358c;
        case 0x223594u: goto label_223594;
        case 0x2235bcu: goto label_2235bc;
        case 0x2235ecu: goto label_2235ec;
        case 0x2235fcu: goto label_2235fc;
        case 0x223604u: goto label_223604;
        case 0x22361cu: goto label_22361c;
        case 0x223620u: goto label_223620;
        case 0x223628u: goto label_223628;
        case 0x22363cu: goto label_22363c;
        case 0x22364cu: goto label_22364c;
        case 0x22365cu: goto label_22365c;
        case 0x223680u: goto label_223680;
        case 0x223684u: goto label_223684;
        case 0x22369cu: goto label_22369c;
        case 0x2236a4u: goto label_2236a4;
        case 0x2236b4u: goto label_2236b4;
        case 0x2236c4u: goto label_2236c4;
        case 0x2236e4u: goto label_2236e4;
        case 0x2236f4u: goto label_2236f4;
        case 0x22370cu: goto label_22370c;
        case 0x223718u: goto label_223718;
        case 0x223720u: goto label_223720;
        case 0x223748u: goto label_223748;
        case 0x223774u: goto label_223774;
        case 0x223784u: goto label_223784;
        case 0x22378cu: goto label_22378c;
        case 0x22379cu: goto label_22379c;
        case 0x2237a4u: goto label_2237a4;
        case 0x2237acu: goto label_2237ac;
        case 0x2237d8u: goto label_2237d8;
        case 0x2237f8u: goto label_2237f8;
        case 0x223850u: goto label_223850;
        case 0x223858u: goto label_223858;
        case 0x223864u: goto label_223864;
        case 0x223890u: goto label_223890;
        case 0x223898u: goto label_223898;
        case 0x2238c8u: goto label_2238c8;
        case 0x2238e0u: goto label_2238e0;
        case 0x2238e8u: goto label_2238e8;
        case 0x223900u: goto label_223900;
        case 0x22390cu: goto label_22390c;
        case 0x223914u: goto label_223914;
        case 0x223930u: goto label_223930;
        case 0x223938u: goto label_223938;
        case 0x223950u: goto label_223950;
        case 0x223958u: goto label_223958;
        case 0x223980u: goto label_223980;
        case 0x223988u: goto label_223988;
        case 0x22399cu: goto label_22399c;
        case 0x2239b4u: goto label_2239b4;
        case 0x2239bcu: goto label_2239bc;
        case 0x223a38u: goto label_223a38;
        case 0x223a3cu: goto label_223a3c;
        case 0x223a50u: goto label_223a50;
        case 0x223a78u: goto label_223a78;
        case 0x223a8cu: goto label_223a8c;
        case 0x223aa0u: goto label_223aa0;
        case 0x223b10u: goto label_223b10;
        case 0x223b14u: goto label_223b14;
        case 0x223b30u: goto label_223b30;
        case 0x223b3cu: goto label_223b3c;
        case 0x223b80u: goto label_223b80;
        case 0x223b98u: goto label_223b98;
        case 0x223be4u: goto label_223be4;
        case 0x223be8u: goto label_223be8;
        case 0x223c14u: goto label_223c14;
        case 0x223c38u: goto label_223c38;
        case 0x223c3cu: goto label_223c3c;
        case 0x223c4cu: goto label_223c4c;
        case 0x223c5cu: goto label_223c5c;
        case 0x223c6cu: goto label_223c6c;
        case 0x223c7cu: goto label_223c7c;
        case 0x223c8cu: goto label_223c8c;
        case 0x223ca0u: goto label_223ca0;
        default: break;
    }

    ctx->pc = 0x223150u;

label_223150:
    // 0x223150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223154: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x223154u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223158: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x223158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22315c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x223160: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x223160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x223164: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x223164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x223168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x223168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22316c: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x22316Cu;
    SET_GPR_U32(ctx, 31, 0x223174u);
    ctx->pc = 0x223170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22316Cu;
            // 0x223170: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223174u; }
        if (ctx->pc != 0x223174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223174u; }
        if (ctx->pc != 0x223174u) { return; }
    }
    ctx->pc = 0x223174u;
label_223174:
    // 0x223174: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x223174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223178: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x223178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22317c: 0xc097442  jal         func_25D108
    ctx->pc = 0x22317Cu;
    SET_GPR_U32(ctx, 31, 0x223184u);
    ctx->pc = 0x223180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22317Cu;
            // 0x223180: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D108u;
    if (runtime->hasFunction(0x25D108u)) {
        auto targetFn = runtime->lookupFunction(0x25D108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223184u; }
        if (ctx->pc != 0x223184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D108_0x25d108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223184u; }
        if (ctx->pc != 0x223184u) { return; }
    }
    ctx->pc = 0x223184u;
label_223184:
    // 0x223184: 0x441003a  bgez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x223184u;
    {
        const bool branch_taken_0x223184 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x223188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223184u;
            // 0x223188: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223184) {
            ctx->pc = 0x223270u;
            goto label_223270;
        }
    }
    ctx->pc = 0x22318Cu;
    // 0x22318c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x22318Cu;
    SET_GPR_U32(ctx, 31, 0x223194u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223194u; }
        if (ctx->pc != 0x223194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223194u; }
        if (ctx->pc != 0x223194u) { return; }
    }
    ctx->pc = 0x223194u;
label_223194:
    // 0x223194: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x223194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223198: 0x240f0016  addiu       $t7, $zero, 0x16
    ctx->pc = 0x223198u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22319c: 0x120f002d  beq         $s0, $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x22319Cu;
    {
        const bool branch_taken_0x22319c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2231A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22319Cu;
            // 0x2231a0: 0x2a0f0017  slti        $t7, $s0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22319c) {
            ctx->pc = 0x223254u;
            goto label_223254;
        }
    }
    ctx->pc = 0x2231A4u;
    // 0x2231a4: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x2231A4u;
    {
        const bool branch_taken_0x2231a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2231A4u;
            // 0x2231a8: 0x240f000b  addiu       $t7, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a4) {
            ctx->pc = 0x223248u;
            goto label_223248;
        }
    }
    ctx->pc = 0x2231ACu;
    // 0x2231ac: 0x520f0016  beql        $s0, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2231ACu;
    {
        const bool branch_taken_0x2231ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x2231ac) {
            ctx->pc = 0x2231B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2231ACu;
            // 0x2231b0: 0x8e2f104c  lw          $t7, 0x104C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223208u;
            goto label_223208;
        }
    }
    ctx->pc = 0x2231B4u;
label_2231b4:
    // 0x2231b4: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2231B4u;
    SET_GPR_U32(ctx, 31, 0x2231BCu);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231BCu; }
        if (ctx->pc != 0x2231BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231BCu; }
        if (ctx->pc != 0x2231BCu) { return; }
    }
    ctx->pc = 0x2231BCu;
label_2231bc:
    // 0x2231bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2231bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2231c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2231c4: 0xc089144  jal         func_224510
    ctx->pc = 0x2231C4u;
    SET_GPR_U32(ctx, 31, 0x2231CCu);
    ctx->pc = 0x2231C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231C4u;
            // 0x2231c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231CCu; }
        if (ctx->pc != 0x2231CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231CCu; }
        if (ctx->pc != 0x2231CCu) { return; }
    }
    ctx->pc = 0x2231CCu;
label_2231cc:
    // 0x2231cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2231ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2231d0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2231d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2231d4: 0x248430f8  addiu       $a0, $a0, 0x30F8
    ctx->pc = 0x2231d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12536));
    // 0x2231d8: 0x25083108  addiu       $t0, $t0, 0x3108
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12552));
    // 0x2231dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2231dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231e0: 0x240501a5  addiu       $a1, $zero, 0x1A5
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
label_2231e4:
    // 0x2231e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2231e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2231e8: 0xc089794  jal         func_225E50
    ctx->pc = 0x2231E8u;
    SET_GPR_U32(ctx, 31, 0x2231F0u);
    ctx->pc = 0x2231ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231E8u;
            // 0x2231ec: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231F0u; }
        if (ctx->pc != 0x2231F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231F0u; }
        if (ctx->pc != 0x2231F0u) { return; }
    }
    ctx->pc = 0x2231F0u;
label_2231f0:
    // 0x2231f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2231f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2231f4:
    // 0x2231f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2231f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2231f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2231f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2231fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2231fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x223200: 0x3e00008  jr          $ra
    ctx->pc = 0x223200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223200u;
            // 0x223204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223208u;
label_223208:
    // 0x223208: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x223208u;
    {
        const bool branch_taken_0x223208 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x223208) {
            ctx->pc = 0x22320Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223208u;
            // 0x22320c: 0x8e2f1048  lw          $t7, 0x1048($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223234u;
            goto label_223234;
        }
    }
    ctx->pc = 0x223210u;
    // 0x223210: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x223210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x223214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223218:
    // 0x223218: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22321c: 0xc089144  jal         func_224510
    ctx->pc = 0x22321Cu;
    SET_GPR_U32(ctx, 31, 0x223224u);
    ctx->pc = 0x223220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22321Cu;
            // 0x223220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223224u; }
        if (ctx->pc != 0x223224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223224u; }
        if (ctx->pc != 0x223224u) { return; }
    }
    ctx->pc = 0x223224u;
label_223224:
    // 0x223224: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223224u;
    SET_GPR_U32(ctx, 31, 0x22322Cu);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22322Cu; }
        if (ctx->pc != 0x22322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22322Cu; }
        if (ctx->pc != 0x22322Cu) { return; }
    }
    ctx->pc = 0x22322Cu;
label_22322c:
    // 0x22322c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x22322Cu;
    {
        const bool branch_taken_0x22322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22322Cu;
            // 0x223230: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22322c) {
            ctx->pc = 0x2231F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2231f4;
        }
    }
    ctx->pc = 0x223234u;
label_223234:
    // 0x223234: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223234u;
    {
        const bool branch_taken_0x223234 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x223238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223234u;
            // 0x223238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223234) {
            ctx->pc = 0x223218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223218;
        }
    }
    ctx->pc = 0x22323Cu;
    // 0x22323c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x22323cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223240: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x223240u;
    {
        const bool branch_taken_0x223240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223240u;
            // 0x223244: 0xae2f1048  sw          $t7, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223240) {
            ctx->pc = 0x223218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223218;
        }
    }
    ctx->pc = 0x223248u;
label_223248:
    // 0x223248: 0x240f007f  addiu       $t7, $zero, 0x7F
    ctx->pc = 0x223248u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22324c: 0x160fffd9  bne         $s0, $t7, . + 4 + (-0x27 << 2)
    ctx->pc = 0x22324Cu;
    {
        const bool branch_taken_0x22324c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x22324c) {
            ctx->pc = 0x2231B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2231b4;
        }
    }
    ctx->pc = 0x223254u;
label_223254:
    // 0x223254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223258: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22325c: 0xc089144  jal         func_224510
    ctx->pc = 0x22325Cu;
    SET_GPR_U32(ctx, 31, 0x223264u);
    ctx->pc = 0x223260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22325Cu;
            // 0x223260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223264u; }
        if (ctx->pc != 0x223264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223264u; }
        if (ctx->pc != 0x223264u) { return; }
    }
    ctx->pc = 0x223264u;
label_223264:
    // 0x223264: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x223264u;
    {
        const bool branch_taken_0x223264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223264u;
            // 0x223268: 0xae201048  sw          $zero, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223264) {
            ctx->pc = 0x223224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223224;
        }
    }
    ctx->pc = 0x22326Cu;
    // 0x22326c: 0x0  nop
    ctx->pc = 0x22326cu;
    // NOP
label_223270:
    // 0x223270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223274: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x223274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223278: 0xc089144  jal         func_224510
    ctx->pc = 0x223278u;
    SET_GPR_U32(ctx, 31, 0x223280u);
    ctx->pc = 0x22327Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223278u;
            // 0x22327c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223280u; }
        if (ctx->pc != 0x223280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223280u; }
        if (ctx->pc != 0x223280u) { return; }
    }
    ctx->pc = 0x223280u;
label_223280:
    // 0x223280: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x223280u;
    SET_GPR_U32(ctx, 31, 0x223288u);
    ctx->pc = 0x223284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223280u;
            // 0x223284: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223288u; }
        if (ctx->pc != 0x223288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223288u; }
        if (ctx->pc != 0x223288u) { return; }
    }
    ctx->pc = 0x223288u;
label_223288:
    // 0x223288: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x223288u;
    {
        const bool branch_taken_0x223288 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223288u;
            // 0x22328c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223288) {
            ctx->pc = 0x2232E0u;
            goto label_2232e0;
        }
    }
    ctx->pc = 0x223290u;
    // 0x223290: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223290u;
    SET_GPR_U32(ctx, 31, 0x223298u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223298u; }
        if (ctx->pc != 0x223298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223298u; }
        if (ctx->pc != 0x223298u) { return; }
    }
    ctx->pc = 0x223298u;
label_223298:
    // 0x223298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22329c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2232a0: 0xc089144  jal         func_224510
    ctx->pc = 0x2232A0u;
    SET_GPR_U32(ctx, 31, 0x2232A8u);
    ctx->pc = 0x2232A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232A0u;
            // 0x2232a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232A8u; }
        if (ctx->pc != 0x2232A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232A8u; }
        if (ctx->pc != 0x2232A8u) { return; }
    }
    ctx->pc = 0x2232A8u;
label_2232a8:
    // 0x2232a8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2232A8u;
    SET_GPR_U32(ctx, 31, 0x2232B0u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B0u; }
        if (ctx->pc != 0x2232B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B0u; }
        if (ctx->pc != 0x2232B0u) { return; }
    }
    ctx->pc = 0x2232B0u;
label_2232b0:
    // 0x2232b0: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2232b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2232b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2232b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2232b8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2232b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2232bc: 0x248430f8  addiu       $a0, $a0, 0x30F8
    ctx->pc = 0x2232bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12536));
    // 0x2232c0: 0x25083120  addiu       $t0, $t0, 0x3120
    ctx->pc = 0x2232c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12576));
    // 0x2232c4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2232c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232c8: 0x240501b5  addiu       $a1, $zero, 0x1B5
    ctx->pc = 0x2232c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x2232cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2232ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2232d0: 0xc089794  jal         func_225E50
    ctx->pc = 0x2232D0u;
    SET_GPR_U32(ctx, 31, 0x2232D8u);
    ctx->pc = 0x2232D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232D0u;
            // 0x2232d4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232D8u; }
        if (ctx->pc != 0x2232D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232D8u; }
        if (ctx->pc != 0x2232D8u) { return; }
    }
    ctx->pc = 0x2232D8u;
label_2232d8:
    // 0x2232d8: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x2232D8u;
    {
        const bool branch_taken_0x2232d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2232D8u;
            // 0x2232dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232d8) {
            ctx->pc = 0x2231F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2231f4;
        }
    }
    ctx->pc = 0x2232E0u;
label_2232e0:
    // 0x2232e0: 0x9e240018  lwu         $a0, 0x18($s1)
    ctx->pc = 0x2232e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2232e4: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x2232e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x2232e8: 0xc0990d8  jal         func_264360
    ctx->pc = 0x2232E8u;
    SET_GPR_U32(ctx, 31, 0x2232F0u);
    ctx->pc = 0x2232ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232E8u;
            // 0x2232ec: 0xae201048  sw          $zero, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232F0u; }
        if (ctx->pc != 0x2232F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232F0u; }
        if (ctx->pc != 0x2232F0u) { return; }
    }
    ctx->pc = 0x2232F0u;
label_2232f0:
    // 0x2232f0: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x2232f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2232f4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2232F4u;
    SET_GPR_U32(ctx, 31, 0x2232FCu);
    ctx->pc = 0x2232F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232F4u;
            // 0x2232f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232FCu; }
        if (ctx->pc != 0x2232FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232FCu; }
        if (ctx->pc != 0x2232FCu) { return; }
    }
    ctx->pc = 0x2232FCu;
label_2232fc:
    // 0x2232fc: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2232fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x223300: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x223300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223304: 0x25f230f8  addiu       $s2, $t7, 0x30F8
    ctx->pc = 0x223304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 12536));
    // 0x223308: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22330c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x22330cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223310: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x223310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223314: 0x24e730d0  addiu       $a3, $a3, 0x30D0
    ctx->pc = 0x223314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12496));
    // 0x223318: 0x240501bd  addiu       $a1, $zero, 0x1BD
    ctx->pc = 0x223318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
    // 0x22331c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x22331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x223320: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223320u;
    SET_GPR_U32(ctx, 31, 0x223328u);
    ctx->pc = 0x223324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223320u;
            // 0x223324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223328u; }
        if (ctx->pc != 0x223328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223328u; }
        if (ctx->pc != 0x223328u) { return; }
    }
    ctx->pc = 0x223328u;
label_223328:
    // 0x223328: 0xc088a5c  jal         func_222970
    ctx->pc = 0x223328u;
    SET_GPR_U32(ctx, 31, 0x223330u);
    ctx->pc = 0x22332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223328u;
            // 0x22332c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222970u;
    if (runtime->hasFunction(0x222970u)) {
        auto targetFn = runtime->lookupFunction(0x222970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223330u; }
        if (ctx->pc != 0x223330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222970_0x222970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223330u; }
        if (ctx->pc != 0x223330u) { return; }
    }
    ctx->pc = 0x223330u;
label_223330:
    // 0x223330: 0x441ffbc  bgez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x223330u;
    {
        const bool branch_taken_0x223330 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x223334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223330u;
            // 0x223334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223330) {
            ctx->pc = 0x223224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223224;
        }
    }
    ctx->pc = 0x223338u;
    // 0x223338: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223338u;
    SET_GPR_U32(ctx, 31, 0x223340u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223340u; }
        if (ctx->pc != 0x223340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223340u; }
        if (ctx->pc != 0x223340u) { return; }
    }
    ctx->pc = 0x223340u;
label_223340:
    // 0x223340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223344: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223348: 0xc089144  jal         func_224510
    ctx->pc = 0x223348u;
    SET_GPR_U32(ctx, 31, 0x223350u);
    ctx->pc = 0x22334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223348u;
            // 0x22334c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223350u; }
        if (ctx->pc != 0x223350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223350u; }
        if (ctx->pc != 0x223350u) { return; }
    }
    ctx->pc = 0x223350u;
label_223350:
    // 0x223350: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223350u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223358: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22335c: 0x25083138  addiu       $t0, $t0, 0x3138
    ctx->pc = 0x22335cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12600));
    // 0x223360: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
    ctx->pc = 0x223360u;
    {
        const bool branch_taken_0x223360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223360u;
            // 0x223364: 0x240501c5  addiu       $a1, $zero, 0x1C5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223360) {
            ctx->pc = 0x2231E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2231e4;
        }
    }
    ctx->pc = 0x223368u;
    // 0x223368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22336c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x223370: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x223370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223374: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x223374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x223378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22337c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x22337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x223380: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x223380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223384: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x223384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x223388: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x223388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22338c: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x22338Cu;
    SET_GPR_U32(ctx, 31, 0x223394u);
    ctx->pc = 0x223390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22338Cu;
            // 0x223390: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223394u; }
        if (ctx->pc != 0x223394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223394u; }
        if (ctx->pc != 0x223394u) { return; }
    }
    ctx->pc = 0x223394u;
label_223394:
    // 0x223394: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x223394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22339c: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x22339Cu;
    SET_GPR_U32(ctx, 31, 0x2233A4u);
    ctx->pc = 0x2233A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22339Cu;
            // 0x2233a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233A4u; }
        if (ctx->pc != 0x2233A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233A4u; }
        if (ctx->pc != 0x2233A4u) { return; }
    }
    ctx->pc = 0x2233A4u;
label_2233a4:
    // 0x2233a4: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2233A4u;
    {
        const bool branch_taken_0x2233a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2233A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2233A4u;
            // 0x2233a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233a4) {
            ctx->pc = 0x223418u;
            goto label_223418;
        }
    }
    ctx->pc = 0x2233ACu;
    // 0x2233ac: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2233ACu;
    SET_GPR_U32(ctx, 31, 0x2233B4u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233B4u; }
        if (ctx->pc != 0x2233B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233B4u; }
        if (ctx->pc != 0x2233B4u) { return; }
    }
    ctx->pc = 0x2233B4u;
label_2233b4:
    // 0x2233b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2233b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2233b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2233bc: 0xc089144  jal         func_224510
    ctx->pc = 0x2233BCu;
    SET_GPR_U32(ctx, 31, 0x2233C4u);
    ctx->pc = 0x2233C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2233BCu;
            // 0x2233c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233C4u; }
        if (ctx->pc != 0x2233C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233C4u; }
        if (ctx->pc != 0x2233C4u) { return; }
    }
    ctx->pc = 0x2233C4u;
label_2233c4:
    // 0x2233c4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2233C4u;
    SET_GPR_U32(ctx, 31, 0x2233CCu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233CCu; }
        if (ctx->pc != 0x2233CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233CCu; }
        if (ctx->pc != 0x2233CCu) { return; }
    }
    ctx->pc = 0x2233CCu;
label_2233cc:
    // 0x2233cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2233ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2233d0: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x2233d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2233d4: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2233d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2233d8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2233d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2233dc: 0x24843148  addiu       $a0, $a0, 0x3148
    ctx->pc = 0x2233dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12616));
    // 0x2233e0: 0x25083158  addiu       $t0, $t0, 0x3158
    ctx->pc = 0x2233e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12632));
    // 0x2233e4: 0x240501e4  addiu       $a1, $zero, 0x1E4
    ctx->pc = 0x2233e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
label_2233e8:
    // 0x2233e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2233ec: 0xc089794  jal         func_225E50
    ctx->pc = 0x2233ECu;
    SET_GPR_U32(ctx, 31, 0x2233F4u);
    ctx->pc = 0x2233F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2233ECu;
            // 0x2233f0: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233F4u; }
        if (ctx->pc != 0x2233F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233F4u; }
        if (ctx->pc != 0x2233F4u) { return; }
    }
    ctx->pc = 0x2233F4u;
label_2233f4:
    // 0x2233f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2233f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2233f8:
    // 0x2233f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2233f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2233fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2233fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x223400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223404: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x223404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x223408: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x223408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22340c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x22340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x223410: 0x3e00008  jr          $ra
    ctx->pc = 0x223410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223410u;
            // 0x223414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223418u;
label_223418:
    // 0x223418: 0xc088a5c  jal         func_222970
    ctx->pc = 0x223418u;
    SET_GPR_U32(ctx, 31, 0x223420u);
    ctx->pc = 0x22341Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223418u;
            // 0x22341c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222970u;
    if (runtime->hasFunction(0x222970u)) {
        auto targetFn = runtime->lookupFunction(0x222970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223420u; }
        if (ctx->pc != 0x223420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222970_0x222970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223420u; }
        if (ctx->pc != 0x223420u) { return; }
    }
    ctx->pc = 0x223420u;
label_223420:
    // 0x223420: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x223420u;
    {
        const bool branch_taken_0x223420 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x223424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223420u;
            // 0x223424: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223420) {
            ctx->pc = 0x22346Cu;
            goto label_22346c;
        }
    }
    ctx->pc = 0x223428u;
    // 0x223428: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223428u;
    SET_GPR_U32(ctx, 31, 0x223430u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223430u; }
        if (ctx->pc != 0x223430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223430u; }
        if (ctx->pc != 0x223430u) { return; }
    }
    ctx->pc = 0x223430u;
label_223430:
    // 0x223430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223434: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223438: 0xc089144  jal         func_224510
    ctx->pc = 0x223438u;
    SET_GPR_U32(ctx, 31, 0x223440u);
    ctx->pc = 0x22343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223438u;
            // 0x22343c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223440u; }
        if (ctx->pc != 0x223440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223440u; }
        if (ctx->pc != 0x223440u) { return; }
    }
    ctx->pc = 0x223440u;
label_223440:
    // 0x223440: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223444: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223448: 0x24843148  addiu       $a0, $a0, 0x3148
    ctx->pc = 0x223448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12616));
    // 0x22344c: 0x25083138  addiu       $t0, $t0, 0x3138
    ctx->pc = 0x22344cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12600));
    // 0x223450: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223454: 0x240501ee  addiu       $a1, $zero, 0x1EE
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x223458: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22345c: 0xc089794  jal         func_225E50
    ctx->pc = 0x22345Cu;
    SET_GPR_U32(ctx, 31, 0x223464u);
    ctx->pc = 0x223460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22345Cu;
            // 0x223460: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223464u; }
        if (ctx->pc != 0x223464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223464u; }
        if (ctx->pc != 0x223464u) { return; }
    }
    ctx->pc = 0x223464u;
label_223464:
    // 0x223464: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x223464u;
    {
        const bool branch_taken_0x223464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223464u;
            // 0x223468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223464) {
            ctx->pc = 0x2233F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2233f8;
        }
    }
    ctx->pc = 0x22346Cu;
label_22346c:
    // 0x22346c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x22346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x223470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223474: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x223474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223478: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x223478u;
    SET_GPR_U32(ctx, 31, 0x223480u);
    ctx->pc = 0x22347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223478u;
            // 0x22347c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223480u; }
        if (ctx->pc != 0x223480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223480u; }
        if (ctx->pc != 0x223480u) { return; }
    }
    ctx->pc = 0x223480u;
label_223480:
    // 0x223480: 0xa2330015  sb          $s3, 0x15($s1)
    ctx->pc = 0x223480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 19));
    // 0x223484: 0x824f0000  lb          $t7, 0x0($s2)
    ctx->pc = 0x223484u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x223488: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x223488u;
    {
        const bool branch_taken_0x223488 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x223488) {
            ctx->pc = 0x22348Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223488u;
            // 0x22348c: 0x3290ffff  andi        $s0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2234A0u;
            goto label_2234a0;
        }
    }
    ctx->pc = 0x223490u;
    // 0x223490: 0xc09921a  jal         func_264868
    ctx->pc = 0x223490u;
    SET_GPR_U32(ctx, 31, 0x223498u);
    ctx->pc = 0x223494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223490u;
            // 0x223494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (runtime->hasFunction(0x264868u)) {
        auto targetFn = runtime->lookupFunction(0x264868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223498u; }
        if (ctx->pc != 0x223498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264868_0x264868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223498u; }
        if (ctx->pc != 0x223498u) { return; }
    }
    ctx->pc = 0x223498u;
label_223498:
    // 0x223498: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x223498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x22349c: 0x3290ffff  andi        $s0, $s4, 0xFFFF
    ctx->pc = 0x22349cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_2234a0:
    // 0x2234a0: 0xc08a262  jal         func_228988
    ctx->pc = 0x2234A0u;
    SET_GPR_U32(ctx, 31, 0x2234A8u);
    ctx->pc = 0x2234A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234A0u;
            // 0x2234a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234A8u; }
        if (ctx->pc != 0x2234A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234A8u; }
        if (ctx->pc != 0x2234A8u) { return; }
    }
    ctx->pc = 0x2234A8u;
label_2234a8:
    // 0x2234a8: 0x70007ca9  por         $t7, $zero, $zero
    ctx->pc = 0x2234a8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2234ac: 0x7faf0000  sq          $t7, 0x0($sp)
    ctx->pc = 0x2234acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 15));
    // 0x2234b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2234b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234b4: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x2234b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2234b8: 0xc08a262  jal         func_228988
    ctx->pc = 0x2234B8u;
    SET_GPR_U32(ctx, 31, 0x2234C0u);
    ctx->pc = 0x2234BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234B8u;
            // 0x2234bc: 0xa3b30001  sb          $s3, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234C0u; }
        if (ctx->pc != 0x2234C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234C0u; }
        if (ctx->pc != 0x2234C0u) { return; }
    }
    ctx->pc = 0x2234C0u;
label_2234c0:
    // 0x2234c0: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2234c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2234c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2234c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2234c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2234cc: 0xc0973ee  jal         func_25CFB8
    ctx->pc = 0x2234CCu;
    SET_GPR_U32(ctx, 31, 0x2234D4u);
    ctx->pc = 0x2234D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234CCu;
            // 0x2234d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB8u;
    if (runtime->hasFunction(0x25CFB8u)) {
        auto targetFn = runtime->lookupFunction(0x25CFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234D4u; }
        if (ctx->pc != 0x2234D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CFB8_0x25cfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234D4u; }
        if (ctx->pc != 0x2234D4u) { return; }
    }
    ctx->pc = 0x2234D4u;
label_2234d4:
    // 0x2234d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2234D4u;
    {
        const bool branch_taken_0x2234d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2234D4u;
            // 0x2234d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234d4) {
            ctx->pc = 0x22351Cu;
            goto label_22351c;
        }
    }
    ctx->pc = 0x2234DCu;
    // 0x2234dc: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2234DCu;
    SET_GPR_U32(ctx, 31, 0x2234E4u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234E4u; }
        if (ctx->pc != 0x2234E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234E4u; }
        if (ctx->pc != 0x2234E4u) { return; }
    }
    ctx->pc = 0x2234E4u;
label_2234e4:
    // 0x2234e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2234e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2234e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2234ec: 0xc089144  jal         func_224510
    ctx->pc = 0x2234ECu;
    SET_GPR_U32(ctx, 31, 0x2234F4u);
    ctx->pc = 0x2234F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234ECu;
            // 0x2234f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234F4u; }
        if (ctx->pc != 0x2234F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234F4u; }
        if (ctx->pc != 0x2234F4u) { return; }
    }
    ctx->pc = 0x2234F4u;
label_2234f4:
    // 0x2234f4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2234F4u;
    SET_GPR_U32(ctx, 31, 0x2234FCu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234FCu; }
        if (ctx->pc != 0x2234FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234FCu; }
        if (ctx->pc != 0x2234FCu) { return; }
    }
    ctx->pc = 0x2234FCu;
label_2234fc:
    // 0x2234fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2234fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223500: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x223500u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223504: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223508: 0x24843148  addiu       $a0, $a0, 0x3148
    ctx->pc = 0x223508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12616));
    // 0x22350c: 0x25083170  addiu       $t0, $t0, 0x3170
    ctx->pc = 0x22350cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12656));
    // 0x223510: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223514: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x223514u;
    {
        const bool branch_taken_0x223514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223514u;
            // 0x223518: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223514) {
            ctx->pc = 0x2233E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2233e8;
        }
    }
    ctx->pc = 0x22351Cu;
label_22351c:
    // 0x22351c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223520: 0xc09741e  jal         func_25D078
    ctx->pc = 0x223520u;
    SET_GPR_U32(ctx, 31, 0x223528u);
    ctx->pc = 0x223524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223520u;
            // 0x223524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D078u;
    if (runtime->hasFunction(0x25D078u)) {
        auto targetFn = runtime->lookupFunction(0x25D078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223528u; }
        if (ctx->pc != 0x223528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D078_0x25d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223528u; }
        if (ctx->pc != 0x223528u) { return; }
    }
    ctx->pc = 0x223528u;
label_223528:
    // 0x223528: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x223528u;
    {
        const bool branch_taken_0x223528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223528u;
            // 0x22352c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223528) {
            ctx->pc = 0x223570u;
            goto label_223570;
        }
    }
    ctx->pc = 0x223530u;
    // 0x223530: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223530u;
    SET_GPR_U32(ctx, 31, 0x223538u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223538u; }
        if (ctx->pc != 0x223538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223538u; }
        if (ctx->pc != 0x223538u) { return; }
    }
    ctx->pc = 0x223538u;
label_223538:
    // 0x223538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22353c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223540: 0xc089144  jal         func_224510
    ctx->pc = 0x223540u;
    SET_GPR_U32(ctx, 31, 0x223548u);
    ctx->pc = 0x223544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223540u;
            // 0x223544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223548u; }
        if (ctx->pc != 0x223548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223548u; }
        if (ctx->pc != 0x223548u) { return; }
    }
    ctx->pc = 0x223548u;
label_223548:
    // 0x223548: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x223548u;
    SET_GPR_U32(ctx, 31, 0x223550u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223550u; }
        if (ctx->pc != 0x223550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223550u; }
        if (ctx->pc != 0x223550u) { return; }
    }
    ctx->pc = 0x223550u;
label_223550:
    // 0x223550: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223554: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x223554u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223558: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22355c: 0x24843148  addiu       $a0, $a0, 0x3148
    ctx->pc = 0x22355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12616));
    // 0x223560: 0x25083188  addiu       $t0, $t0, 0x3188
    ctx->pc = 0x223560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12680));
    // 0x223564: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223568: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x223568u;
    {
        const bool branch_taken_0x223568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223568u;
            // 0x22356c: 0x2405020d  addiu       $a1, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223568) {
            ctx->pc = 0x2233E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2233e8;
        }
    }
    ctx->pc = 0x223570u;
label_223570:
    // 0x223570: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223570u;
    SET_GPR_U32(ctx, 31, 0x223578u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223578u; }
        if (ctx->pc != 0x223578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223578u; }
        if (ctx->pc != 0x223578u) { return; }
    }
    ctx->pc = 0x223578u;
label_223578:
    // 0x223578: 0xae200838  sw          $zero, 0x838($s1)
    ctx->pc = 0x223578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 0));
    // 0x22357c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223584: 0xc089144  jal         func_224510
    ctx->pc = 0x223584u;
    SET_GPR_U32(ctx, 31, 0x22358Cu);
    ctx->pc = 0x223588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223584u;
            // 0x223588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22358Cu; }
        if (ctx->pc != 0x22358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22358Cu; }
        if (ctx->pc != 0x22358Cu) { return; }
    }
    ctx->pc = 0x22358Cu;
label_22358c:
    // 0x22358c: 0xc0990d8  jal         func_264360
    ctx->pc = 0x22358Cu;
    SET_GPR_U32(ctx, 31, 0x223594u);
    ctx->pc = 0x223590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22358Cu;
            // 0x223590: 0x9e240018  lwu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223594u; }
        if (ctx->pc != 0x223594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223594u; }
        if (ctx->pc != 0x223594u) { return; }
    }
    ctx->pc = 0x223594u;
label_223594:
    // 0x223594: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x223594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223598: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22359c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22359cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2235a0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2235a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235a4: 0x24843148  addiu       $a0, $a0, 0x3148
    ctx->pc = 0x2235a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12616));
    // 0x2235a8: 0x24e731a0  addiu       $a3, $a3, 0x31A0
    ctx->pc = 0x2235a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12704));
    // 0x2235ac: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2235acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235b0: 0x24050216  addiu       $a1, $zero, 0x216
    ctx->pc = 0x2235b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x2235b4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2235B4u;
    SET_GPR_U32(ctx, 31, 0x2235BCu);
    ctx->pc = 0x2235B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235B4u;
            // 0x2235b8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235BCu; }
        if (ctx->pc != 0x2235BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235BCu; }
        if (ctx->pc != 0x2235BCu) { return; }
    }
    ctx->pc = 0x2235BCu;
label_2235bc:
    // 0x2235bc: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x2235BCu;
    {
        const bool branch_taken_0x2235bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235BCu;
            // 0x2235c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235bc) {
            ctx->pc = 0x2233F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2233f8;
        }
    }
    ctx->pc = 0x2235C4u;
    // 0x2235c4: 0x0  nop
    ctx->pc = 0x2235c4u;
    // NOP
    // 0x2235c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2235cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2235ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2235d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2235d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2235d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2235d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2235d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2235d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2235dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2235e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2235e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235e4: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x2235E4u;
    SET_GPR_U32(ctx, 31, 0x2235ECu);
    ctx->pc = 0x2235E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235E4u;
            // 0x2235e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235ECu; }
        if (ctx->pc != 0x2235ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235ECu; }
        if (ctx->pc != 0x2235ECu) { return; }
    }
    ctx->pc = 0x2235ECu;
label_2235ec:
    // 0x2235ec: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2235ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2235f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2235f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2235F4u;
    SET_GPR_U32(ctx, 31, 0x2235FCu);
    ctx->pc = 0x2235F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235F4u;
            // 0x2235f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235FCu; }
        if (ctx->pc != 0x2235FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235FCu; }
        if (ctx->pc != 0x2235FCu) { return; }
    }
    ctx->pc = 0x2235FCu;
label_2235fc:
    // 0x2235fc: 0xc09921a  jal         func_264868
    ctx->pc = 0x2235FCu;
    SET_GPR_U32(ctx, 31, 0x223604u);
    ctx->pc = 0x223600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235FCu;
            // 0x223600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (runtime->hasFunction(0x264868u)) {
        auto targetFn = runtime->lookupFunction(0x264868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223604u; }
        if (ctx->pc != 0x223604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264868_0x264868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223604u; }
        if (ctx->pc != 0x223604u) { return; }
    }
    ctx->pc = 0x223604u;
label_223604:
    // 0x223604: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x223604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223608: 0x104f0056  beq         $v0, $t7, . + 4 + (0x56 << 2)
    ctx->pc = 0x223608u;
    {
        const bool branch_taken_0x223608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x22360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223608u;
            // 0x22360c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223608) {
            ctx->pc = 0x223764u;
            goto label_223764;
        }
    }
    ctx->pc = 0x223610u;
    // 0x223610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223614: 0xc09921a  jal         func_264868
    ctx->pc = 0x223614u;
    SET_GPR_U32(ctx, 31, 0x22361Cu);
    ctx->pc = 0x223618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223614u;
            // 0x223618: 0xa20f0015  sb          $t7, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (runtime->hasFunction(0x264868u)) {
        auto targetFn = runtime->lookupFunction(0x264868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22361Cu; }
        if (ctx->pc != 0x22361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264868_0x264868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22361Cu; }
        if (ctx->pc != 0x22361Cu) { return; }
    }
    ctx->pc = 0x22361Cu;
label_22361c:
    // 0x22361c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x22361cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_223620:
    // 0x223620: 0xc08a262  jal         func_228988
    ctx->pc = 0x223620u;
    SET_GPR_U32(ctx, 31, 0x223628u);
    ctx->pc = 0x223624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223620u;
            // 0x223624: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223628u; }
        if (ctx->pc != 0x223628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223628u; }
        if (ctx->pc != 0x223628u) { return; }
    }
    ctx->pc = 0x223628u;
label_223628:
    // 0x223628: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x223628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x22362c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223634: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x223634u;
    SET_GPR_U32(ctx, 31, 0x22363Cu);
    ctx->pc = 0x223638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223634u;
            // 0x223638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22363Cu; }
        if (ctx->pc != 0x22363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22363Cu; }
        if (ctx->pc != 0x22363Cu) { return; }
    }
    ctx->pc = 0x22363Cu;
label_22363c:
    // 0x22363c: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x22363Cu;
    {
        const bool branch_taken_0x22363c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x223640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22363Cu;
            // 0x223640: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22363c) {
            ctx->pc = 0x22369Cu;
            goto label_22369c;
        }
    }
    ctx->pc = 0x223644u;
    // 0x223644: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x223644u;
    SET_GPR_U32(ctx, 31, 0x22364Cu);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22364Cu; }
        if (ctx->pc != 0x22364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22364Cu; }
        if (ctx->pc != 0x22364Cu) { return; }
    }
    ctx->pc = 0x22364Cu;
label_22364c:
    // 0x22364c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223650: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223654: 0xc089144  jal         func_224510
    ctx->pc = 0x223654u;
    SET_GPR_U32(ctx, 31, 0x22365Cu);
    ctx->pc = 0x223658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223654u;
            // 0x223658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22365Cu; }
        if (ctx->pc != 0x22365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22365Cu; }
        if (ctx->pc != 0x22365Cu) { return; }
    }
    ctx->pc = 0x22365Cu;
label_22365c:
    // 0x22365c: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x22365cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x223660: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223664: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223664u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223668: 0x248431d0  addiu       $a0, $a0, 0x31D0
    ctx->pc = 0x223668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12752));
    // 0x22366c: 0x250830a0  addiu       $t0, $t0, 0x30A0
    ctx->pc = 0x22366cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12448));
    // 0x223670: 0x24050248  addiu       $a1, $zero, 0x248
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x223674: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223678: 0xc089794  jal         func_225E50
    ctx->pc = 0x223678u;
    SET_GPR_U32(ctx, 31, 0x223680u);
    ctx->pc = 0x22367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223678u;
            // 0x22367c: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223680u; }
        if (ctx->pc != 0x223680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223680u; }
        if (ctx->pc != 0x223680u) { return; }
    }
    ctx->pc = 0x223680u;
label_223680:
    // 0x223680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223684:
    // 0x223684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22368c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22368cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223690: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x223690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223694: 0x3e00008  jr          $ra
    ctx->pc = 0x223694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223694u;
            // 0x223698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22369Cu;
label_22369c:
    // 0x22369c: 0xc088a5c  jal         func_222970
    ctx->pc = 0x22369Cu;
    SET_GPR_U32(ctx, 31, 0x2236A4u);
    ctx->pc = 0x2236A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22369Cu;
            // 0x2236a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222970u;
    if (runtime->hasFunction(0x222970u)) {
        auto targetFn = runtime->lookupFunction(0x222970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236A4u; }
        if (ctx->pc != 0x2236A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222970_0x222970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236A4u; }
        if (ctx->pc != 0x2236A4u) { return; }
    }
    ctx->pc = 0x2236A4u;
label_2236a4:
    // 0x2236a4: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2236A4u;
    {
        const bool branch_taken_0x2236a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2236A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2236A4u;
            // 0x2236a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236a4) {
            ctx->pc = 0x2236ECu;
            goto label_2236ec;
        }
    }
    ctx->pc = 0x2236ACu;
    // 0x2236ac: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2236ACu;
    SET_GPR_U32(ctx, 31, 0x2236B4u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236B4u; }
        if (ctx->pc != 0x2236B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236B4u; }
        if (ctx->pc != 0x2236B4u) { return; }
    }
    ctx->pc = 0x2236B4u;
label_2236b4:
    // 0x2236b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2236b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2236b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2236bc: 0xc089144  jal         func_224510
    ctx->pc = 0x2236BCu;
    SET_GPR_U32(ctx, 31, 0x2236C4u);
    ctx->pc = 0x2236C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236BCu;
            // 0x2236c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236C4u; }
        if (ctx->pc != 0x2236C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236C4u; }
        if (ctx->pc != 0x2236C4u) { return; }
    }
    ctx->pc = 0x2236C4u;
label_2236c4:
    // 0x2236c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2236c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2236c8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2236c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2236cc: 0x248431d0  addiu       $a0, $a0, 0x31D0
    ctx->pc = 0x2236ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12752));
    // 0x2236d0: 0x24e730b8  addiu       $a3, $a3, 0x30B8
    ctx->pc = 0x2236d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12472));
    // 0x2236d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2236d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236d8: 0x24050252  addiu       $a1, $zero, 0x252
    ctx->pc = 0x2236d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x2236dc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2236DCu;
    SET_GPR_U32(ctx, 31, 0x2236E4u);
    ctx->pc = 0x2236E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236DCu;
            // 0x2236e0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236E4u; }
        if (ctx->pc != 0x2236E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236E4u; }
        if (ctx->pc != 0x2236E4u) { return; }
    }
    ctx->pc = 0x2236E4u;
label_2236e4:
    // 0x2236e4: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2236E4u;
    {
        const bool branch_taken_0x2236e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2236E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2236E4u;
            // 0x2236e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236e4) {
            ctx->pc = 0x223684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223684;
        }
    }
    ctx->pc = 0x2236ECu;
label_2236ec:
    // 0x2236ec: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2236ECu;
    SET_GPR_U32(ctx, 31, 0x2236F4u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236F4u; }
        if (ctx->pc != 0x2236F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236F4u; }
        if (ctx->pc != 0x2236F4u) { return; }
    }
    ctx->pc = 0x2236F4u;
label_2236f4:
    // 0x2236f4: 0xae000838  sw          $zero, 0x838($s0)
    ctx->pc = 0x2236f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 0));
    // 0x2236f8: 0x8e0f104c  lw          $t7, 0x104C($s0)
    ctx->pc = 0x2236f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4172)));
    // 0x2236fc: 0x55e00014  bnel        $t7, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2236FCu;
    {
        const bool branch_taken_0x2236fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2236fc) {
            ctx->pc = 0x223700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2236FCu;
            // 0x223700: 0x8e0f1048  lw          $t7, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223750u;
            goto label_223750;
        }
    }
    ctx->pc = 0x223704u;
    // 0x223704: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x223704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
    // 0x223708: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x223708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22370c:
    // 0x22370c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223710: 0xc089144  jal         func_224510
    ctx->pc = 0x223710u;
    SET_GPR_U32(ctx, 31, 0x223718u);
    ctx->pc = 0x223714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223710u;
            // 0x223714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223718u; }
        if (ctx->pc != 0x223718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223718u; }
        if (ctx->pc != 0x223718u) { return; }
    }
    ctx->pc = 0x223718u;
label_223718:
    // 0x223718: 0xc0990d8  jal         func_264360
    ctx->pc = 0x223718u;
    SET_GPR_U32(ctx, 31, 0x223720u);
    ctx->pc = 0x22371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223718u;
            // 0x22371c: 0x9e040018  lwu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223720u; }
        if (ctx->pc != 0x223720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223720u; }
        if (ctx->pc != 0x223720u) { return; }
    }
    ctx->pc = 0x223720u;
label_223720:
    // 0x223720: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x223720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x223724: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223728: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22372c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x22372cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223730: 0x248431d0  addiu       $a0, $a0, 0x31D0
    ctx->pc = 0x223730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12752));
    // 0x223734: 0x24e731e0  addiu       $a3, $a3, 0x31E0
    ctx->pc = 0x223734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12768));
    // 0x223738: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x223738u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22373c: 0x2405025d  addiu       $a1, $zero, 0x25D
    ctx->pc = 0x22373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 605));
    // 0x223740: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223740u;
    SET_GPR_U32(ctx, 31, 0x223748u);
    ctx->pc = 0x223744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223740u;
            // 0x223744: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223748u; }
        if (ctx->pc != 0x223748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223748u; }
        if (ctx->pc != 0x223748u) { return; }
    }
    ctx->pc = 0x223748u;
label_223748:
    // 0x223748: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x223748u;
    {
        const bool branch_taken_0x223748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223748u;
            // 0x22374c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223748) {
            ctx->pc = 0x223684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223684;
        }
    }
    ctx->pc = 0x223750u;
label_223750:
    // 0x223750: 0x15e0ffee  bnez        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x223750u;
    {
        const bool branch_taken_0x223750 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x223754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223750u;
            // 0x223754: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223750) {
            ctx->pc = 0x22370Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22370c;
        }
    }
    ctx->pc = 0x223758u;
    // 0x223758: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x223758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22375c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x22375Cu;
    {
        const bool branch_taken_0x22375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22375Cu;
            // 0x223760: 0xae0f1048  sw          $t7, 0x1048($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22375c) {
            ctx->pc = 0x22370Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22370c;
        }
    }
    ctx->pc = 0x223764u;
label_223764:
    // 0x223764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22376c: 0xc098daa  jal         func_2636A8
    ctx->pc = 0x22376Cu;
    SET_GPR_U32(ctx, 31, 0x223774u);
    ctx->pc = 0x223770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22376Cu;
            // 0x223770: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2636A8u;
    if (runtime->hasFunction(0x2636A8u)) {
        auto targetFn = runtime->lookupFunction(0x2636A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223774u; }
        if (ctx->pc != 0x223774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002636A8_0x2636a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223774u; }
        if (ctx->pc != 0x223774u) { return; }
    }
    ctx->pc = 0x223774u;
label_223774:
    // 0x223774: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x223774u;
    {
        const bool branch_taken_0x223774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223774) {
            ctx->pc = 0x223778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223774u;
            // 0x223778: 0x904e0008  lbu         $t6, 0x8($v0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2237E0u;
            goto label_2237e0;
        }
    }
    ctx->pc = 0x22377Cu;
    // 0x22377c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x22377Cu;
    SET_GPR_U32(ctx, 31, 0x223784u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223784u; }
        if (ctx->pc != 0x223784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223784u; }
        if (ctx->pc != 0x223784u) { return; }
    }
    ctx->pc = 0x223784u;
label_223784:
    // 0x223784: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x223784u;
    SET_GPR_U32(ctx, 31, 0x22378Cu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22378Cu; }
        if (ctx->pc != 0x22378Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22378Cu; }
        if (ctx->pc != 0x22378Cu) { return; }
    }
    ctx->pc = 0x22378Cu;
label_22378c:
    // 0x22378c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22378cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223794: 0xc089144  jal         func_224510
    ctx->pc = 0x223794u;
    SET_GPR_U32(ctx, 31, 0x22379Cu);
    ctx->pc = 0x223798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223794u;
            // 0x223798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22379Cu; }
        if (ctx->pc != 0x22379Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22379Cu; }
        if (ctx->pc != 0x22379Cu) { return; }
    }
    ctx->pc = 0x22379Cu;
label_22379c:
    // 0x22379c: 0xc097308  jal         func_25CC20
    ctx->pc = 0x22379Cu;
    SET_GPR_U32(ctx, 31, 0x2237A4u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237A4u; }
        if (ctx->pc != 0x2237A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237A4u; }
        if (ctx->pc != 0x2237A4u) { return; }
    }
    ctx->pc = 0x2237A4u;
label_2237a4:
    // 0x2237a4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2237A4u;
    SET_GPR_U32(ctx, 31, 0x2237ACu);
    ctx->pc = 0x2237A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2237A4u;
            // 0x2237a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237ACu; }
        if (ctx->pc != 0x2237ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237ACu; }
        if (ctx->pc != 0x2237ACu) { return; }
    }
    ctx->pc = 0x2237ACu;
label_2237ac:
    // 0x2237ac: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2237b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2237b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2237b4: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x2237b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2237b8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2237b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2237bc: 0x248431d0  addiu       $a0, $a0, 0x31D0
    ctx->pc = 0x2237bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12752));
    // 0x2237c0: 0x25083210  addiu       $t0, $t0, 0x3210
    ctx->pc = 0x2237c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12816));
    // 0x2237c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2237c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237c8: 0x2405023a  addiu       $a1, $zero, 0x23A
    ctx->pc = 0x2237c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x2237cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2237ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2237d0: 0xc089794  jal         func_225E50
    ctx->pc = 0x2237D0u;
    SET_GPR_U32(ctx, 31, 0x2237D8u);
    ctx->pc = 0x2237D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2237D0u;
            // 0x2237d4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237D8u; }
        if (ctx->pc != 0x2237D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237D8u; }
        if (ctx->pc != 0x2237D8u) { return; }
    }
    ctx->pc = 0x2237D8u;
label_2237d8:
    // 0x2237d8: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x2237D8u;
    {
        const bool branch_taken_0x2237d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2237D8u;
            // 0x2237dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237d8) {
            ctx->pc = 0x223684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223684;
        }
    }
    ctx->pc = 0x2237E0u;
label_2237e0:
    // 0x2237e0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2237e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2237e4: 0xa20e0015  sb          $t6, 0x15($s0)
    ctx->pc = 0x2237e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 14));
    // 0x2237e8: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x2237e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2237ec: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2237ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2237f0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2237F0u;
    SET_GPR_U32(ctx, 31, 0x2237F8u);
    ctx->pc = 0x2237F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2237F0u;
            // 0x2237f4: 0x8de50000  lw          $a1, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237F8u; }
        if (ctx->pc != 0x2237F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237F8u; }
        if (ctx->pc != 0x2237F8u) { return; }
    }
    ctx->pc = 0x2237F8u;
label_2237f8:
    // 0x2237f8: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x2237F8u;
    {
        const bool branch_taken_0x2237f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2237f8) {
            ctx->pc = 0x223620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223620;
        }
    }
    ctx->pc = 0x223800u;
    // 0x223800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22380c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x223810: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x223810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x223814: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x223814u;
    {
        const bool branch_taken_0x223814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x223818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223814u;
            // 0x223818: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223814) {
            ctx->pc = 0x223850u;
            goto label_223850;
        }
    }
    ctx->pc = 0x22381Cu;
    // 0x22381c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22381cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223824: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223824u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22382c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22382cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223830: 0x24843238  addiu       $a0, $a0, 0x3238
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12856));
    // 0x223834: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x223834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223838: 0x25083248  addiu       $t0, $t0, 0x3248
    ctx->pc = 0x223838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12872));
    // 0x22383c: 0x2405026d  addiu       $a1, $zero, 0x26D
    ctx->pc = 0x22383cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x223840: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223844: 0x2407d8e9  addiu       $a3, $zero, -0x2717
    ctx->pc = 0x223844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957289));
    // 0x223848: 0x8089794  j           func_225E50
    ctx->pc = 0x223848u;
    ctx->pc = 0x22384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223848u;
            // 0x22384c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223850u;
label_223850:
    // 0x223850: 0xc0990d8  jal         func_264360
    ctx->pc = 0x223850u;
    SET_GPR_U32(ctx, 31, 0x223858u);
    ctx->pc = 0x223854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223850u;
            // 0x223854: 0x9c840018  lwu         $a0, 0x18($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223858u; }
        if (ctx->pc != 0x223858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223858u; }
        if (ctx->pc != 0x223858u) { return; }
    }
    ctx->pc = 0x223858u;
label_223858:
    // 0x223858: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x223858u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x22385c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x22385Cu;
    SET_GPR_U32(ctx, 31, 0x223864u);
    ctx->pc = 0x223860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22385Cu;
            // 0x223860: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223864u; }
        if (ctx->pc != 0x223864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223864u; }
        if (ctx->pc != 0x223864u) { return; }
    }
    ctx->pc = 0x223864u;
label_223864:
    // 0x223864: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x223864u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x223868: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x223868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22386c: 0x25f23238  addiu       $s2, $t7, 0x3238
    ctx->pc = 0x22386cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 12856));
    // 0x223870: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223870u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x223874: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x223874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223878: 0x24e73258  addiu       $a3, $a3, 0x3258
    ctx->pc = 0x223878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12888));
    // 0x22387c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223884: 0x24050271  addiu       $a1, $zero, 0x271
    ctx->pc = 0x223884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    // 0x223888: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223888u;
    SET_GPR_U32(ctx, 31, 0x223890u);
    ctx->pc = 0x22388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223888u;
            // 0x22388c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223890u; }
        if (ctx->pc != 0x223890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223890u; }
        if (ctx->pc != 0x223890u) { return; }
    }
    ctx->pc = 0x223890u;
label_223890:
    // 0x223890: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x223890u;
    SET_GPR_U32(ctx, 31, 0x223898u);
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223898u; }
        if (ctx->pc != 0x223898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223898u; }
        if (ctx->pc != 0x223898u) { return; }
    }
    ctx->pc = 0x223898u;
label_223898:
    // 0x223898: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22389c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2238a0: 0x11cf003b  beq         $t6, $t7, . + 4 + (0x3B << 2)
    ctx->pc = 0x2238A0u;
    {
        const bool branch_taken_0x2238a0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2238A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2238A0u;
            // 0x2238a4: 0x29cfffff  slti        $t7, $t6, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238a0) {
            ctx->pc = 0x223990u;
            goto label_223990;
        }
    }
    ctx->pc = 0x2238A8u;
    // 0x2238a8: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x2238A8u;
    {
        const bool branch_taken_0x2238a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2238ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2238A8u;
            // 0x2238ac: 0x25cffffd  addiu       $t7, $t6, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238a8) {
            ctx->pc = 0x22390Cu;
            goto label_22390c;
        }
    }
    ctx->pc = 0x2238B0u;
    // 0x2238b0: 0x2def0003  sltiu       $t7, $t7, 0x3
    ctx->pc = 0x2238b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2238b4: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2238B4u;
    {
        const bool branch_taken_0x2238b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2238B4u;
            // 0x2238b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238b4) {
            ctx->pc = 0x22390Cu;
            goto label_22390c;
        }
    }
    ctx->pc = 0x2238BCu;
    // 0x2238bc: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x2238bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x2238c0: 0xc0977aa  jal         func_25DEA8
    ctx->pc = 0x2238C0u;
    SET_GPR_U32(ctx, 31, 0x2238C8u);
    ctx->pc = 0x2238C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2238C0u;
            // 0x2238c4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DEA8u;
    if (runtime->hasFunction(0x25DEA8u)) {
        auto targetFn = runtime->lookupFunction(0x25DEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238C8u; }
        if (ctx->pc != 0x2238C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025DEA8_0x25dea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238C8u; }
        if (ctx->pc != 0x2238C8u) { return; }
    }
    ctx->pc = 0x2238C8u;
label_2238c8:
    // 0x2238c8: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2238C8u;
    {
        const bool branch_taken_0x2238c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2238CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2238C8u;
            // 0x2238cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238c8) {
            ctx->pc = 0x223930u;
            goto label_223930;
        }
    }
    ctx->pc = 0x2238D0u;
    // 0x2238d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2238d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2238d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2238d8: 0xc089144  jal         func_224510
    ctx->pc = 0x2238D8u;
    SET_GPR_U32(ctx, 31, 0x2238E0u);
    ctx->pc = 0x2238DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2238D8u;
            // 0x2238dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E0u; }
        if (ctx->pc != 0x2238E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E0u; }
        if (ctx->pc != 0x2238E0u) { return; }
    }
    ctx->pc = 0x2238E0u;
label_2238e0:
    // 0x2238e0: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2238E0u;
    SET_GPR_U32(ctx, 31, 0x2238E8u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E8u; }
        if (ctx->pc != 0x2238E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E8u; }
        if (ctx->pc != 0x2238E8u) { return; }
    }
    ctx->pc = 0x2238E8u;
label_2238e8:
    // 0x2238e8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2238e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2238ec: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2238ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2238f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2238f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238f4: 0x25083280  addiu       $t0, $t0, 0x3280
    ctx->pc = 0x2238f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12928));
    // 0x2238f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2238f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238fc: 0x2405027f  addiu       $a1, $zero, 0x27F
    ctx->pc = 0x2238fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
label_223900:
    // 0x223900: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223904: 0xc089794  jal         func_225E50
    ctx->pc = 0x223904u;
    SET_GPR_U32(ctx, 31, 0x22390Cu);
    ctx->pc = 0x223908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223904u;
            // 0x223908: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22390Cu; }
        if (ctx->pc != 0x22390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22390Cu; }
        if (ctx->pc != 0x22390Cu) { return; }
    }
    ctx->pc = 0x22390Cu;
label_22390c:
    // 0x22390c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x22390Cu;
    SET_GPR_U32(ctx, 31, 0x223914u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223914u; }
        if (ctx->pc != 0x223914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223914u; }
        if (ctx->pc != 0x223914u) { return; }
    }
    ctx->pc = 0x223914u;
label_223914:
    // 0x223914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22391c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22391cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223924: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x223924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223928: 0x3e00008  jr          $ra
    ctx->pc = 0x223928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223928u;
            // 0x22392c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223930u;
label_223930:
    // 0x223930: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x223930u;
    SET_GPR_U32(ctx, 31, 0x223938u);
    ctx->pc = 0x223934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223930u;
            // 0x223934: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223938u; }
        if (ctx->pc != 0x223938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223938u; }
        if (ctx->pc != 0x223938u) { return; }
    }
    ctx->pc = 0x223938u;
label_223938:
    // 0x223938: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223938u;
    {
        const bool branch_taken_0x223938 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223938u;
            // 0x22393c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223938) {
            ctx->pc = 0x223974u;
            goto label_223974;
        }
    }
    ctx->pc = 0x223940u;
    // 0x223940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223948: 0xc089144  jal         func_224510
    ctx->pc = 0x223948u;
    SET_GPR_U32(ctx, 31, 0x223950u);
    ctx->pc = 0x22394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223948u;
            // 0x22394c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223950u; }
        if (ctx->pc != 0x223950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223950u; }
        if (ctx->pc != 0x223950u) { return; }
    }
    ctx->pc = 0x223950u;
label_223950:
    // 0x223950: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x223950u;
    SET_GPR_U32(ctx, 31, 0x223958u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223958u; }
        if (ctx->pc != 0x223958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223958u; }
        if (ctx->pc != 0x223958u) { return; }
    }
    ctx->pc = 0x223958u;
label_223958:
    // 0x223958: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223958u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22395c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x22395cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223964: 0x25083120  addiu       $t0, $t0, 0x3120
    ctx->pc = 0x223964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12576));
    // 0x223968: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223968u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22396c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x22396Cu;
    {
        const bool branch_taken_0x22396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22396Cu;
            // 0x223970: 0x24050284  addiu       $a1, $zero, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22396c) {
            ctx->pc = 0x223900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223900;
        }
    }
    ctx->pc = 0x223974u;
label_223974:
    // 0x223974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22397c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22397cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223980:
    // 0x223980: 0xc089144  jal         func_224510
    ctx->pc = 0x223980u;
    SET_GPR_U32(ctx, 31, 0x223988u);
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223988u; }
        if (ctx->pc != 0x223988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223988u; }
        if (ctx->pc != 0x223988u) { return; }
    }
    ctx->pc = 0x223988u;
label_223988:
    // 0x223988: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x223988u;
    {
        const bool branch_taken_0x223988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223988) {
            ctx->pc = 0x22390Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22390c;
        }
    }
    ctx->pc = 0x223990u;
label_223990:
    // 0x223990: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x223990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x223994: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x223994u;
    SET_GPR_U32(ctx, 31, 0x22399Cu);
    ctx->pc = 0x223998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223994u;
            // 0x223998: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22399Cu; }
        if (ctx->pc != 0x22399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22399Cu; }
        if (ctx->pc != 0x22399Cu) { return; }
    }
    ctx->pc = 0x22399Cu;
label_22399c:
    // 0x22399c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22399Cu;
    {
        const bool branch_taken_0x22399c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2239A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22399Cu;
            // 0x2239a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22399c) {
            ctx->pc = 0x2239D8u;
            goto label_2239d8;
        }
    }
    ctx->pc = 0x2239A4u;
    // 0x2239a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2239a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2239a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2239ac: 0xc089144  jal         func_224510
    ctx->pc = 0x2239ACu;
    SET_GPR_U32(ctx, 31, 0x2239B4u);
    ctx->pc = 0x2239B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239ACu;
            // 0x2239b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B4u; }
        if (ctx->pc != 0x2239B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B4u; }
        if (ctx->pc != 0x2239B4u) { return; }
    }
    ctx->pc = 0x2239B4u;
label_2239b4:
    // 0x2239b4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2239B4u;
    SET_GPR_U32(ctx, 31, 0x2239BCu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239BCu; }
        if (ctx->pc != 0x2239BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239BCu; }
        if (ctx->pc != 0x2239BCu) { return; }
    }
    ctx->pc = 0x2239BCu;
label_2239bc:
    // 0x2239bc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2239bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2239c0: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2239c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2239c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2239c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239c8: 0x25083120  addiu       $t0, $t0, 0x3120
    ctx->pc = 0x2239c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12576));
    // 0x2239cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2239ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239d0: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x2239D0u;
    {
        const bool branch_taken_0x2239d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2239D0u;
            // 0x2239d4: 0x24050291  addiu       $a1, $zero, 0x291 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239d0) {
            ctx->pc = 0x223900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223900;
        }
    }
    ctx->pc = 0x2239D8u;
label_2239d8:
    // 0x2239d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2239d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2239dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2239e0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2239E0u;
    {
        const bool branch_taken_0x2239e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2239E0u;
            // 0x2239e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239e0) {
            ctx->pc = 0x223980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223980;
        }
    }
    ctx->pc = 0x2239E8u;
    // 0x2239e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2239ec: 0x240f0800  addiu       $t7, $zero, 0x800
    ctx->pc = 0x2239ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2239f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2239f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2239f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2239f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2239f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2239f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2239fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2239fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223a08: 0x8c8d1044  lw          $t5, 0x1044($a0)
    ctx->pc = 0x223a08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x223a0c: 0x1ed7823  subu        $t7, $t7, $t5
    ctx->pc = 0x223a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x223a10: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x223a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a14: 0x20f702a  slt         $t6, $s0, $t7
    ctx->pc = 0x223a14u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x223a18: 0x1de0000d  bgtz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x223A18u;
    {
        const bool branch_taken_0x223a18 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x223A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A18u;
            // 0x223a1c: 0x1ee800a  movz        $s0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a18) {
            ctx->pc = 0x223A50u;
            goto label_223a50;
        }
    }
    ctx->pc = 0x223A20u;
    // 0x223a20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223a24: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x223a28: 0x248432a0  addiu       $a0, $a0, 0x32A0
    ctx->pc = 0x223a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12960));
    // 0x223a2c: 0x24e732b0  addiu       $a3, $a3, 0x32B0
    ctx->pc = 0x223a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12976));
    // 0x223a30: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223A30u;
    SET_GPR_U32(ctx, 31, 0x223A38u);
    ctx->pc = 0x223A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A30u;
            // 0x223a34: 0x240502b0  addiu       $a1, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A38u; }
        if (ctx->pc != 0x223A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A38u; }
        if (ctx->pc != 0x223A38u) { return; }
    }
    ctx->pc = 0x223A38u;
label_223a38:
    // 0x223a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223a3c:
    // 0x223a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223a48: 0x3e00008  jr          $ra
    ctx->pc = 0x223A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A48u;
            // 0x223a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223A50u;
label_223a50:
    // 0x223a50: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x223A50u;
    {
        const bool branch_taken_0x223a50 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x223A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A50u;
            // 0x223a54: 0x8d2021  addu        $a0, $a0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a50) {
            ctx->pc = 0x223A80u;
            goto label_223a80;
        }
    }
    ctx->pc = 0x223A58u;
    // 0x223a58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223a5c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x223a60: 0x248432a0  addiu       $a0, $a0, 0x32A0
    ctx->pc = 0x223a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12960));
    // 0x223a64: 0x24e732d0  addiu       $a3, $a3, 0x32D0
    ctx->pc = 0x223a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13008));
    // 0x223a68: 0x240502b4  addiu       $a1, $zero, 0x2B4
    ctx->pc = 0x223a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
    // 0x223a6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223a70: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223A70u;
    SET_GPR_U32(ctx, 31, 0x223A78u);
    ctx->pc = 0x223A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A70u;
            // 0x223a74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A78u; }
        if (ctx->pc != 0x223A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A78u; }
        if (ctx->pc != 0x223A78u) { return; }
    }
    ctx->pc = 0x223A78u;
label_223a78:
    // 0x223a78: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x223A78u;
    {
        const bool branch_taken_0x223a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A78u;
            // 0x223a7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a78) {
            ctx->pc = 0x223A3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223a3c;
        }
    }
    ctx->pc = 0x223A80u;
label_223a80:
    // 0x223a80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a84: 0xc049c48  jal         func_127120
    ctx->pc = 0x223A84u;
    SET_GPR_U32(ctx, 31, 0x223A8Cu);
    ctx->pc = 0x223A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A84u;
            // 0x223a88: 0x2484083c  addiu       $a0, $a0, 0x83C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A8Cu; }
        if (ctx->pc != 0x223A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A8Cu; }
        if (ctx->pc != 0x223A8Cu) { return; }
    }
    ctx->pc = 0x223A8Cu;
label_223a8c:
    // 0x223a8c: 0x8e2f1044  lw          $t7, 0x1044($s1)
    ctx->pc = 0x223a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4164)));
    // 0x223a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a94: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x223a94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x223a98: 0xc088b88  jal         func_222E20
    ctx->pc = 0x223A98u;
    SET_GPR_U32(ctx, 31, 0x223AA0u);
    ctx->pc = 0x223A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A98u;
            // 0x223a9c: 0xae2f1044  sw          $t7, 0x1044($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4164), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222E20u;
    if (runtime->hasFunction(0x222E20u)) {
        auto targetFn = runtime->lookupFunction(0x222E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AA0u; }
        if (ctx->pc != 0x223AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222E20_0x222e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AA0u; }
        if (ctx->pc != 0x223AA0u) { return; }
    }
    ctx->pc = 0x223AA0u;
label_223aa0:
    // 0x223aa0: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x223AA0u;
    {
        const bool branch_taken_0x223aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223AA0u;
            // 0x223aa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223aa0) {
            ctx->pc = 0x223A3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223a3c;
        }
    }
    ctx->pc = 0x223AA8u;
    // 0x223aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223ab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x223ab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223abc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x223abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x223ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x223ac8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x223ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223acc: 0x8c8a0838  lw          $t2, 0x838($a0)
    ctx->pc = 0x223accu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2104)));
    // 0x223ad0: 0x1940000f  blez        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x223AD0u;
    {
        const bool branch_taken_0x223ad0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x223AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223AD0u;
            // 0x223ad4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ad0) {
            ctx->pc = 0x223B10u;
            goto label_223b10;
        }
    }
    ctx->pc = 0x223AD8u;
    // 0x223ad8: 0xca782a  slt         $t7, $a2, $t2
    ctx->pc = 0x223ad8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x223adc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x223adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ae0: 0xcf800b  movn        $s0, $a2, $t7
    ctx->pc = 0x223ae0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x223ae4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ae8: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x223AE8u;
    {
        const bool branch_taken_0x223ae8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x223AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223AE8u;
            // 0x223aec: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ae8) {
            ctx->pc = 0x223B30u;
            goto label_223b30;
        }
    }
    ctx->pc = 0x223AF0u;
    // 0x223af0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223af4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x223af8: 0x248432e0  addiu       $a0, $a0, 0x32E0
    ctx->pc = 0x223af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13024));
    // 0x223afc: 0x24e732f0  addiu       $a3, $a3, 0x32F0
    ctx->pc = 0x223afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13040));
    // 0x223b00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x223b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b04: 0x240502cf  addiu       $a1, $zero, 0x2CF
    ctx->pc = 0x223b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 719));
    // 0x223b08: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223B08u;
    SET_GPR_U32(ctx, 31, 0x223B10u);
    ctx->pc = 0x223B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B08u;
            // 0x223b0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B10u; }
        if (ctx->pc != 0x223B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B10u; }
        if (ctx->pc != 0x223B10u) { return; }
    }
    ctx->pc = 0x223B10u;
label_223b10:
    // 0x223b10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223b14:
    // 0x223b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223b1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223b24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223b28: 0x3e00008  jr          $ra
    ctx->pc = 0x223B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B28u;
            // 0x223b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223B30u;
label_223b30:
    // 0x223b30: 0x26330034  addiu       $s3, $s1, 0x34
    ctx->pc = 0x223b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x223b34: 0xc049c48  jal         func_127120
    ctx->pc = 0x223B34u;
    SET_GPR_U32(ctx, 31, 0x223B3Cu);
    ctx->pc = 0x223B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B34u;
            // 0x223b38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B3Cu; }
        if (ctx->pc != 0x223B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B3Cu; }
        if (ctx->pc != 0x223B3Cu) { return; }
    }
    ctx->pc = 0x223B3Cu;
label_223b3c:
    // 0x223b3c: 0x8e2f0838  lw          $t7, 0x838($s1)
    ctx->pc = 0x223b3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x223b40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223b44: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x223b48: 0x248432e0  addiu       $a0, $a0, 0x32E0
    ctx->pc = 0x223b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13024));
    // 0x223b4c: 0x1f07023  subu        $t6, $t7, $s0
    ctx->pc = 0x223b4cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x223b50: 0x24e732f0  addiu       $a3, $a3, 0x32F0
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13040));
    // 0x223b54: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x223b54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x223b58: 0xae2e0838  sw          $t6, 0x838($s1)
    ctx->pc = 0x223b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 14));
    // 0x223b5c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x223b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b60: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b64: 0x240502d6  addiu       $a1, $zero, 0x2D6
    ctx->pc = 0x223b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 726));
    // 0x223b68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223b6c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x223b6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b70: 0x5c10005  bgez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x223B70u;
    {
        const bool branch_taken_0x223b70 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x223B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B70u;
            // 0x223b74: 0x25ef0034  addiu       $t7, $t7, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b70) {
            ctx->pc = 0x223B88u;
            goto label_223b88;
        }
    }
    ctx->pc = 0x223B78u;
    // 0x223b78: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223B78u;
    SET_GPR_U32(ctx, 31, 0x223B80u);
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B80u; }
        if (ctx->pc != 0x223B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B80u; }
        if (ctx->pc != 0x223B80u) { return; }
    }
    ctx->pc = 0x223B80u;
label_223b80:
    // 0x223b80: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x223B80u;
    {
        const bool branch_taken_0x223b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B80u;
            // 0x223b84: 0x8e220838  lw          $v0, 0x838($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b80) {
            ctx->pc = 0x223B14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223b14;
        }
    }
    ctx->pc = 0x223B88u;
label_223b88:
    // 0x223b88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b8c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x223b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b90: 0xc049c48  jal         func_127120
    ctx->pc = 0x223B90u;
    SET_GPR_U32(ctx, 31, 0x223B98u);
    ctx->pc = 0x223B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B90u;
            // 0x223b94: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B98u; }
        if (ctx->pc != 0x223B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B98u; }
        if (ctx->pc != 0x223B98u) { return; }
    }
    ctx->pc = 0x223B98u;
label_223b98:
    // 0x223b98: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x223B98u;
    {
        const bool branch_taken_0x223b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B98u;
            // 0x223b9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b98) {
            ctx->pc = 0x223B14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223b14;
        }
    }
    ctx->pc = 0x223BA0u;
    // 0x223ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223ba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x223ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x223bac: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x223bacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223bb0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x223bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x223bb4: 0x2dee0007  sltiu       $t6, $t7, 0x7
    ctx->pc = 0x223bb4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x223bb8: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x223BB8u;
    {
        const bool branch_taken_0x223bb8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223BB8u;
            // 0x223bbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bb8) {
            ctx->pc = 0x223BE4u;
            goto label_223be4;
        }
    }
    ctx->pc = 0x223BC0u;
    // 0x223bc0: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x223bc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x223bc4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x223bc8: 0x25ce3328  addiu       $t6, $t6, 0x3328
    ctx->pc = 0x223bc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13096));
    // 0x223bcc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x223bccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x223bd0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x223bd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x223bd4: 0x1a00008  jr          $t5
    ctx->pc = 0x223BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223BDCu: goto label_223bdc;
            case 0x223BE4u: goto label_223be4;
            case 0x223C54u: goto label_223c54;
            case 0x223C64u: goto label_223c64;
            case 0x223C74u: goto label_223c74;
            case 0x223C84u: goto label_223c84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223BDCu;
label_223bdc:
    // 0x223bdc: 0xc088bca  jal         func_222F28
    ctx->pc = 0x223BDCu;
    SET_GPR_U32(ctx, 31, 0x223BE4u);
    ctx->pc = 0x222F28u;
    if (runtime->hasFunction(0x222F28u)) {
        auto targetFn = runtime->lookupFunction(0x222F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BE4u; }
        if (ctx->pc != 0x223BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222F28_0x222f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BE4u; }
        if (ctx->pc != 0x223BE4u) { return; }
    }
    ctx->pc = 0x223BE4u;
label_223be4:
    // 0x223be4: 0x8e0e1048  lw          $t6, 0x1048($s0)
    ctx->pc = 0x223be4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
label_223be8:
    // 0x223be8: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x223BE8u;
    {
        const bool branch_taken_0x223be8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223BE8u;
            // 0x223bec: 0x25cf0001  addiu       $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223be8) {
            ctx->pc = 0x223BF8u;
            goto label_223bf8;
        }
    }
    ctx->pc = 0x223BF0u;
    // 0x223bf0: 0xae0f1048  sw          $t7, 0x1048($s0)
    ctx->pc = 0x223bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 15));
    // 0x223bf4: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x223bf4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_223bf8:
    // 0x223bf8: 0x8e0f104c  lw          $t7, 0x104C($s0)
    ctx->pc = 0x223bf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4172)));
    // 0x223bfc: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x223bfcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x223c00: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x223C00u;
    {
        const bool branch_taken_0x223c00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C00u;
            // 0x223c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c00) {
            ctx->pc = 0x223C4Cu;
            goto label_223c4c;
        }
    }
    ctx->pc = 0x223C08u;
    // 0x223c08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223c0c: 0xc089144  jal         func_224510
    ctx->pc = 0x223C0Cu;
    SET_GPR_U32(ctx, 31, 0x223C14u);
    ctx->pc = 0x223C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C0Cu;
            // 0x223c10: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C14u; }
        if (ctx->pc != 0x223C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C14u; }
        if (ctx->pc != 0x223C14u) { return; }
    }
    ctx->pc = 0x223C14u;
label_223c14:
    // 0x223c14: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x223c18: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x223c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
    // 0x223c1c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223c20: 0x24843310  addiu       $a0, $a0, 0x3310
    ctx->pc = 0x223c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    // 0x223c24: 0x25083320  addiu       $t0, $t0, 0x3320
    ctx->pc = 0x223c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13088));
    // 0x223c28: 0x24050301  addiu       $a1, $zero, 0x301
    ctx->pc = 0x223c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x223c2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223c30: 0xc089794  jal         func_225E50
    ctx->pc = 0x223C30u;
    SET_GPR_U32(ctx, 31, 0x223C38u);
    ctx->pc = 0x223C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C30u;
            // 0x223c34: 0x2407d8ec  addiu       $a3, $zero, -0x2714 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C38u; }
        if (ctx->pc != 0x223C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C38u; }
        if (ctx->pc != 0x223C38u) { return; }
    }
    ctx->pc = 0x223C38u;
label_223c38:
    // 0x223c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223c3c:
    // 0x223c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x223c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223c44: 0x3e00008  jr          $ra
    ctx->pc = 0x223C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C44u;
            // 0x223c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223C4Cu;
label_223c4c:
    // 0x223c4c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x223C4Cu;
    {
        const bool branch_taken_0x223c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C4Cu;
            // 0x223c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c4c) {
            ctx->pc = 0x223C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223c3c;
        }
    }
    ctx->pc = 0x223C54u;
label_223c54:
    // 0x223c54: 0xc088ae8  jal         func_222BA0
    ctx->pc = 0x223C54u;
    SET_GPR_U32(ctx, 31, 0x223C5Cu);
    ctx->pc = 0x222BA0u;
    if (runtime->hasFunction(0x222BA0u)) {
        auto targetFn = runtime->lookupFunction(0x222BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C5Cu; }
        if (ctx->pc != 0x223C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222BA0_0x222ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C5Cu; }
        if (ctx->pc != 0x223C5Cu) { return; }
    }
    ctx->pc = 0x223C5Cu;
label_223c5c:
    // 0x223c5c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x223C5Cu;
    {
        const bool branch_taken_0x223c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C5Cu;
            // 0x223c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c5c) {
            ctx->pc = 0x223C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223c3c;
        }
    }
    ctx->pc = 0x223C64u;
label_223c64:
    // 0x223c64: 0xc088ae8  jal         func_222BA0
    ctx->pc = 0x223C64u;
    SET_GPR_U32(ctx, 31, 0x223C6Cu);
    ctx->pc = 0x222BA0u;
    if (runtime->hasFunction(0x222BA0u)) {
        auto targetFn = runtime->lookupFunction(0x222BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C6Cu; }
        if (ctx->pc != 0x223C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222BA0_0x222ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C6Cu; }
        if (ctx->pc != 0x223C6Cu) { return; }
    }
    ctx->pc = 0x223C6Cu;
label_223c6c:
    // 0x223c6c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x223C6Cu;
    {
        const bool branch_taken_0x223c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C6Cu;
            // 0x223c70: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c6c) {
            ctx->pc = 0x223BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223be8;
        }
    }
    ctx->pc = 0x223C74u;
label_223c74:
    // 0x223c74: 0xc088c54  jal         func_223150
    ctx->pc = 0x223C74u;
    SET_GPR_U32(ctx, 31, 0x223C7Cu);
    ctx->pc = 0x223150u;
    goto label_223150;
    ctx->pc = 0x223C7Cu;
label_223c7c:
    // 0x223c7c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x223C7Cu;
    {
        const bool branch_taken_0x223c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C7Cu;
            // 0x223c80: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c7c) {
            ctx->pc = 0x223BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223be8;
        }
    }
    ctx->pc = 0x223C84u;
label_223c84:
    // 0x223c84: 0xc088b06  jal         func_222C18
    ctx->pc = 0x223C84u;
    SET_GPR_U32(ctx, 31, 0x223C8Cu);
    ctx->pc = 0x222C18u;
    if (runtime->hasFunction(0x222C18u)) {
        auto targetFn = runtime->lookupFunction(0x222C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C8Cu; }
        if (ctx->pc != 0x223C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C18_0x222c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C8Cu; }
        if (ctx->pc != 0x223C8Cu) { return; }
    }
    ctx->pc = 0x223C8Cu;
label_223c8c:
    // 0x223c8c: 0x8e0f1044  lw          $t7, 0x1044($s0)
    ctx->pc = 0x223c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4164)));
    // 0x223c90: 0x51e0ffd5  beql        $t7, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x223C90u;
    {
        const bool branch_taken_0x223c90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c90) {
            ctx->pc = 0x223C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223C90u;
            // 0x223c94: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223be8;
        }
    }
    ctx->pc = 0x223C98u;
    // 0x223c98: 0xc088b88  jal         func_222E20
    ctx->pc = 0x223C98u;
    SET_GPR_U32(ctx, 31, 0x223CA0u);
    ctx->pc = 0x223C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C98u;
            // 0x223c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222E20u;
    if (runtime->hasFunction(0x222E20u)) {
        auto targetFn = runtime->lookupFunction(0x222E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CA0u; }
        if (ctx->pc != 0x223CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222E20_0x222e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CA0u; }
        if (ctx->pc != 0x223CA0u) { return; }
    }
    ctx->pc = 0x223CA0u;
label_223ca0:
    // 0x223ca0: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x223CA0u;
    {
        const bool branch_taken_0x223ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223CA0u;
            // 0x223ca4: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ca0) {
            ctx->pc = 0x223BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223be8;
        }
    }
    ctx->pc = 0x223CA8u;
    ctx->pc = 0x223ca8u;
}
