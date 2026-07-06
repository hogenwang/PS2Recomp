#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340680
// Address: 0x340680 - 0x340fb0
void sub_00340680_0x340680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340680_0x340680");
#endif

    switch (ctx->pc) {
        case 0x3406e4u: goto label_3406e4;
        case 0x340724u: goto label_340724;
        case 0x340738u: goto label_340738;
        case 0x340794u: goto label_340794;
        case 0x3407c4u: goto label_3407c4;
        case 0x3407ecu: goto label_3407ec;
        case 0x340800u: goto label_340800;
        case 0x340804u: goto label_340804;
        case 0x34084cu: goto label_34084c;
        case 0x340870u: goto label_340870;
        case 0x34089cu: goto label_34089c;
        case 0x3408b8u: goto label_3408b8;
        case 0x3408e0u: goto label_3408e0;
        case 0x3408fcu: goto label_3408fc;
        case 0x340924u: goto label_340924;
        case 0x340950u: goto label_340950;
        case 0x34096cu: goto label_34096c;
        case 0x3409b4u: goto label_3409b4;
        case 0x3409c8u: goto label_3409c8;
        case 0x3409ecu: goto label_3409ec;
        case 0x340a0cu: goto label_340a0c;
        case 0x340a44u: goto label_340a44;
        case 0x340a58u: goto label_340a58;
        case 0x340a60u: goto label_340a60;
        case 0x340a68u: goto label_340a68;
        case 0x340a78u: goto label_340a78;
        case 0x340a8cu: goto label_340a8c;
        case 0x340ab0u: goto label_340ab0;
        case 0x340ad0u: goto label_340ad0;
        case 0x340aecu: goto label_340aec;
        case 0x340b08u: goto label_340b08;
        case 0x340ba0u: goto label_340ba0;
        case 0x340bf8u: goto label_340bf8;
        case 0x340c0cu: goto label_340c0c;
        case 0x340c38u: goto label_340c38;
        case 0x340c6cu: goto label_340c6c;
        case 0x340d20u: goto label_340d20;
        case 0x340d34u: goto label_340d34;
        case 0x340d60u: goto label_340d60;
        case 0x340d94u: goto label_340d94;
        case 0x340dbcu: goto label_340dbc;
        case 0x340e10u: goto label_340e10;
        case 0x340e40u: goto label_340e40;
        case 0x340e48u: goto label_340e48;
        case 0x340e84u: goto label_340e84;
        case 0x340eccu: goto label_340ecc;
        case 0x340ef0u: goto label_340ef0;
        case 0x340f00u: goto label_340f00;
        case 0x340f30u: goto label_340f30;
        case 0x340f44u: goto label_340f44;
        case 0x340f58u: goto label_340f58;
        case 0x340f6cu: goto label_340f6c;
        case 0x340f88u: goto label_340f88;
        default: break;
    }

    ctx->pc = 0x340680u;

    // 0x340680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x340684: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x340688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34068c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x340690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340694: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x340694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34069c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34069cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3406a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3406a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3406a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406a8: 0x8c64ea78  lw          $a0, -0x1588($v1)
    ctx->pc = 0x3406a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x3406ac: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x3406acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x3406b0: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3406B0u;
    {
        const bool branch_taken_0x3406b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3406B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3406B0u;
            // 0x3406b4: 0x26103830  addiu       $s0, $s0, 0x3830 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406b0) {
            ctx->pc = 0x340740u;
            goto label_340740;
        }
    }
    ctx->pc = 0x3406B8u;
    // 0x3406b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3406b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3406bc: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x3406bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x3406c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3406c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3406c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3406c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3406c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3406c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3406cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3406ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3406d0: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x3406d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3406d4: 0x5020005e  beql        $at, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x3406D4u;
    {
        const bool branch_taken_0x3406d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3406d4) {
            ctx->pc = 0x3406D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3406D4u;
            // 0x3406d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340850u;
            goto label_340850;
        }
    }
    ctx->pc = 0x3406DCu;
    // 0x3406dc: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3406DCu;
    SET_GPR_U32(ctx, 31, 0x3406E4u);
    ctx->pc = 0x3406E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3406DCu;
            // 0x3406e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (runtime->hasFunction(0x341640u)) {
        auto targetFn = runtime->lookupFunction(0x341640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3406E4u; }
        if (ctx->pc != 0x3406E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341640_0x341640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3406E4u; }
        if (ctx->pc != 0x3406E4u) { return; }
    }
    ctx->pc = 0x3406E4u;
label_3406e4:
    // 0x3406e4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3406E4u;
    {
        const bool branch_taken_0x3406e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3406e4) {
            ctx->pc = 0x3406E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3406E4u;
            // 0x3406e8: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34072Cu;
            goto label_34072c;
        }
    }
    ctx->pc = 0x3406ECu;
    // 0x3406ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3406ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3406f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3406f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406f4: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x3406f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x3406f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3406f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3406fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x340700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340704: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x340704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x340708: 0x2442002e  addiu       $v0, $v0, 0x2E
    ctx->pc = 0x340708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
    // 0x34070c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x34070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x340710: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x340710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x340714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34071c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x34071Cu;
    SET_GPR_U32(ctx, 31, 0x340724u);
    ctx->pc = 0x340720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34071Cu;
            // 0x340720: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340724u; }
        if (ctx->pc != 0x340724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340724u; }
        if (ctx->pc != 0x340724u) { return; }
    }
    ctx->pc = 0x340724u;
label_340724:
    // 0x340724: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x340724u;
    {
        const bool branch_taken_0x340724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340724) {
            ctx->pc = 0x34084Cu;
            goto label_34084c;
        }
    }
    ctx->pc = 0x34072Cu;
label_34072c:
    // 0x34072c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340730: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340730u;
    SET_GPR_U32(ctx, 31, 0x340738u);
    ctx->pc = 0x340734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340730u;
            // 0x340734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340738u; }
        if (ctx->pc != 0x340738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340738u; }
        if (ctx->pc != 0x340738u) { return; }
    }
    ctx->pc = 0x340738u;
label_340738:
    // 0x340738: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x340738u;
    {
        const bool branch_taken_0x340738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340738) {
            ctx->pc = 0x34084Cu;
            goto label_34084c;
        }
    }
    ctx->pc = 0x340740u;
label_340740:
    // 0x340740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340744: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x340744u;
    {
        const bool branch_taken_0x340744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x340744) {
            ctx->pc = 0x34079Cu;
            goto label_34079c;
        }
    }
    ctx->pc = 0x34074Cu;
    // 0x34074c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340750: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x340750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x340754: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x340754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x340758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34075c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x34075cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x340760: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x340760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x340764: 0x28610024  slti        $at, $v1, 0x24
    ctx->pc = 0x340764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x340768: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x340768u;
    {
        const bool branch_taken_0x340768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340768) {
            ctx->pc = 0x34084Cu;
            goto label_34084c;
        }
    }
    ctx->pc = 0x340770u;
    // 0x340770: 0x2482002e  addiu       $v0, $a0, 0x2E
    ctx->pc = 0x340770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 46));
    // 0x340774: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x340774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340778: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x340778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34077c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34077cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340780: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x340780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x340784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34078c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x34078Cu;
    SET_GPR_U32(ctx, 31, 0x340794u);
    ctx->pc = 0x340790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34078Cu;
            // 0x340790: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340794u; }
        if (ctx->pc != 0x340794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340794u; }
        if (ctx->pc != 0x340794u) { return; }
    }
    ctx->pc = 0x340794u;
label_340794:
    // 0x340794: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x340794u;
    {
        const bool branch_taken_0x340794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340794) {
            ctx->pc = 0x34084Cu;
            goto label_34084c;
        }
    }
    ctx->pc = 0x34079Cu;
label_34079c:
    // 0x34079c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3407a0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x3407a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3407a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3407a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3407a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3407ac: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3407acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3407b0: 0x28610022  slti        $at, $v1, 0x22
    ctx->pc = 0x3407b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x3407b4: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x3407B4u;
    {
        const bool branch_taken_0x3407b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3407b4) {
            ctx->pc = 0x34084Cu;
            goto label_34084c;
        }
    }
    ctx->pc = 0x3407BCu;
    // 0x3407bc: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3407BCu;
    SET_GPR_U32(ctx, 31, 0x3407C4u);
    ctx->pc = 0x3407C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3407BCu;
            // 0x3407c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (runtime->hasFunction(0x341640u)) {
        auto targetFn = runtime->lookupFunction(0x341640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407C4u; }
        if (ctx->pc != 0x3407C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341640_0x341640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407C4u; }
        if (ctx->pc != 0x3407C4u) { return; }
    }
    ctx->pc = 0x3407C4u;
label_3407c4:
    // 0x3407c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3407C4u;
    {
        const bool branch_taken_0x3407c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3407c4) {
            ctx->pc = 0x3407C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3407C4u;
            // 0x3407c8: 0x26040444  addiu       $a0, $s0, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1092));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3407F4u;
            goto label_3407f4;
        }
    }
    ctx->pc = 0x3407CCu;
    // 0x3407cc: 0x2623005c  addiu       $v1, $s1, 0x5C
    ctx->pc = 0x3407ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x3407d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3407d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3407d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3407d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3407dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3407e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3407e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3407e4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3407E4u;
    SET_GPR_U32(ctx, 31, 0x3407ECu);
    ctx->pc = 0x3407E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3407E4u;
            // 0x3407e8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407ECu; }
        if (ctx->pc != 0x3407ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407ECu; }
        if (ctx->pc != 0x3407ECu) { return; }
    }
    ctx->pc = 0x3407ECu;
label_3407ec:
    // 0x3407ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3407ECu;
    {
        const bool branch_taken_0x3407ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3407ec) {
            ctx->pc = 0x340800u;
            goto label_340800;
        }
    }
    ctx->pc = 0x3407F4u;
label_3407f4:
    // 0x3407f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3407f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407f8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3407F8u;
    SET_GPR_U32(ctx, 31, 0x340800u);
    ctx->pc = 0x3407FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3407F8u;
            // 0x3407fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340800u; }
        if (ctx->pc != 0x340800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340800u; }
        if (ctx->pc != 0x340800u) { return; }
    }
    ctx->pc = 0x340800u;
label_340800:
    // 0x340800: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_340804:
    // 0x340804: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x340804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x340808: 0x8c44ea64  lw          $a0, -0x159C($v0)
    ctx->pc = 0x340808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x34080c: 0x24633834  addiu       $v1, $v1, 0x3834
    ctx->pc = 0x34080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14388));
    // 0x340810: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x340810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x340814: 0x26460038  addiu       $a2, $s2, 0x38
    ctx->pc = 0x340814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x340818: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x340818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34081c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x340820: 0x24420066  addiu       $v0, $v0, 0x66
    ctx->pc = 0x340820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 102));
    // 0x340824: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x340824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x340828: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x340828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x34082c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x340830: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x340830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x340834: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x340834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340838: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x340838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34083c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x34083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x340840: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x340840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x340844: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340844u;
    SET_GPR_U32(ctx, 31, 0x34084Cu);
    ctx->pc = 0x340848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340844u;
            // 0x340848: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34084Cu; }
        if (ctx->pc != 0x34084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34084Cu; }
        if (ctx->pc != 0x34084Cu) { return; }
    }
    ctx->pc = 0x34084Cu;
label_34084c:
    // 0x34084c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_340850:
    // 0x340850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34085c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34085cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340860: 0x3e00008  jr          $ra
    ctx->pc = 0x340860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340860u;
            // 0x340864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340868u;
    // 0x340868: 0x0  nop
    ctx->pc = 0x340868u;
    // NOP
    // 0x34086c: 0x0  nop
    ctx->pc = 0x34086cu;
    // NOP
label_340870:
    // 0x340870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x340874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x340878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34087c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34087cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x340880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34088c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34088cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340890: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x340890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340894: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x340894u;
    SET_GPR_U32(ctx, 31, 0x34089Cu);
    ctx->pc = 0x340898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340894u;
            // 0x340898: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34089Cu; }
        if (ctx->pc != 0x34089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34089Cu; }
        if (ctx->pc != 0x34089Cu) { return; }
    }
    ctx->pc = 0x34089Cu;
label_34089c:
    // 0x34089c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x34089cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3408a0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x3408a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3408a4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3408A4u;
    {
        const bool branch_taken_0x3408a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3408a4) {
            ctx->pc = 0x3408A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3408A4u;
            // 0x3408a8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3408E8u;
            goto label_3408e8;
        }
    }
    ctx->pc = 0x3408ACu;
    // 0x3408ac: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3408acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3408b0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3408B0u;
    SET_GPR_U32(ctx, 31, 0x3408B8u);
    ctx->pc = 0x3408B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408B0u;
            // 0x3408b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408B8u; }
        if (ctx->pc != 0x3408B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408B8u; }
        if (ctx->pc != 0x3408B8u) { return; }
    }
    ctx->pc = 0x3408B8u;
label_3408b8:
    // 0x3408b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3408b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3408bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3408c0: 0xac45ea6c  sw          $a1, -0x1594($v0)
    ctx->pc = 0x3408c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961772), GPR_U32(ctx, 5));
    // 0x3408c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3408c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3408c8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3408c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3408cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3408ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408d0: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x3408d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x3408d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3408d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3408d8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3408D8u;
    SET_GPR_U32(ctx, 31, 0x3408E0u);
    ctx->pc = 0x3408DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408D8u;
            // 0x3408dc: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408E0u; }
        if (ctx->pc != 0x3408E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408E0u; }
        if (ctx->pc != 0x3408E0u) { return; }
    }
    ctx->pc = 0x3408E0u;
label_3408e0:
    // 0x3408e0: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x3408E0u;
    {
        const bool branch_taken_0x3408e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3408E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3408E0u;
            // 0x3408e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408e0) {
            ctx->pc = 0x340DF0u;
            goto label_340df0;
        }
    }
    ctx->pc = 0x3408E8u;
label_3408e8:
    // 0x3408e8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3408E8u;
    {
        const bool branch_taken_0x3408e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3408e8) {
            ctx->pc = 0x3408ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3408E8u;
            // 0x3408ec: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34092Cu;
            goto label_34092c;
        }
    }
    ctx->pc = 0x3408F0u;
    // 0x3408f0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3408f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3408f4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3408F4u;
    SET_GPR_U32(ctx, 31, 0x3408FCu);
    ctx->pc = 0x3408F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408F4u;
            // 0x3408f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408FCu; }
        if (ctx->pc != 0x3408FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408FCu; }
        if (ctx->pc != 0x3408FCu) { return; }
    }
    ctx->pc = 0x3408FCu;
label_3408fc:
    // 0x3408fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3408fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340900: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340904: 0xac45ea6c  sw          $a1, -0x1594($v0)
    ctx->pc = 0x340904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961772), GPR_U32(ctx, 5));
    // 0x340908: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x340908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34090c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340914: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x340914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x340918: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34091c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x34091Cu;
    SET_GPR_U32(ctx, 31, 0x340924u);
    ctx->pc = 0x340920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34091Cu;
            // 0x340920: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340924u; }
        if (ctx->pc != 0x340924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340924u; }
        if (ctx->pc != 0x340924u) { return; }
    }
    ctx->pc = 0x340924u;
label_340924:
    // 0x340924: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x340924u;
    {
        const bool branch_taken_0x340924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340924) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x34092Cu;
label_34092c:
    // 0x34092c: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x34092Cu;
    {
        const bool branch_taken_0x34092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34092c) {
            ctx->pc = 0x340930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34092Cu;
            // 0x340930: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x340AD8u;
            goto label_340ad8;
        }
    }
    ctx->pc = 0x340934u;
    // 0x340934: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340938: 0x8c42ea7c  lw          $v0, -0x1584($v0)
    ctx->pc = 0x340938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961788)));
    // 0x34093c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34093Cu;
    {
        const bool branch_taken_0x34093c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34093c) {
            ctx->pc = 0x340974u;
            goto label_340974;
        }
    }
    ctx->pc = 0x340944u;
    // 0x340944: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x340948: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x340948u;
    SET_GPR_U32(ctx, 31, 0x340950u);
    ctx->pc = 0x34094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340948u;
            // 0x34094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340950u; }
        if (ctx->pc != 0x340950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340950u; }
        if (ctx->pc != 0x340950u) { return; }
    }
    ctx->pc = 0x340950u;
label_340950:
    // 0x340950: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340954: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x340954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x340958: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34095c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340960: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x340960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x340964: 0xc055728  jal         func_155CA0
    ctx->pc = 0x340964u;
    SET_GPR_U32(ctx, 31, 0x34096Cu);
    ctx->pc = 0x340968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340964u;
            // 0x340968: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34096Cu; }
        if (ctx->pc != 0x34096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34096Cu; }
        if (ctx->pc != 0x34096Cu) { return; }
    }
    ctx->pc = 0x34096Cu;
label_34096c:
    // 0x34096c: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x34096Cu;
    {
        const bool branch_taken_0x34096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34096c) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x340974u;
label_340974:
    // 0x340974: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340978: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x340978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34097c: 0x9044e820  lbu         $a0, -0x17E0($v0)
    ctx->pc = 0x34097cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x340980: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x340980u;
    {
        const bool branch_taken_0x340980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340980) {
            ctx->pc = 0x340A14u;
            goto label_340a14;
        }
    }
    ctx->pc = 0x340988u;
    // 0x340988: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x340988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34098c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34098Cu;
    {
        const bool branch_taken_0x34098c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34098c) {
            ctx->pc = 0x3409A8u;
            goto label_3409a8;
        }
    }
    ctx->pc = 0x340994u;
    // 0x340994: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x340994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x340998: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340998u;
    {
        const bool branch_taken_0x340998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x340998) {
            ctx->pc = 0x3409A8u;
            goto label_3409a8;
        }
    }
    ctx->pc = 0x3409A0u;
    // 0x3409a0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3409A0u;
    {
        const bool branch_taken_0x3409a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3409a0) {
            ctx->pc = 0x340B10u;
            goto label_340b10;
        }
    }
    ctx->pc = 0x3409A8u;
label_3409a8:
    // 0x3409a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3409a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3409ac: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3409ACu;
    SET_GPR_U32(ctx, 31, 0x3409B4u);
    ctx->pc = 0x3409B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3409ACu;
            // 0x3409b0: 0x8c44ea68  lw          $a0, -0x1598($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (runtime->hasFunction(0x341640u)) {
        auto targetFn = runtime->lookupFunction(0x341640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3409B4u; }
        if (ctx->pc != 0x3409B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341640_0x341640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3409B4u; }
        if (ctx->pc != 0x3409B4u) { return; }
    }
    ctx->pc = 0x3409B4u;
label_3409b4:
    // 0x3409b4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3409B4u;
    {
        const bool branch_taken_0x3409b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3409b4) {
            ctx->pc = 0x340B10u;
            goto label_340b10;
        }
    }
    ctx->pc = 0x3409BCu;
    // 0x3409bc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3409bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3409c0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3409C0u;
    SET_GPR_U32(ctx, 31, 0x3409C8u);
    ctx->pc = 0x3409C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3409C0u;
            // 0x3409c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3409C8u; }
        if (ctx->pc != 0x3409C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3409C8u; }
        if (ctx->pc != 0x3409C8u) { return; }
    }
    ctx->pc = 0x3409C8u;
label_3409c8:
    // 0x3409c8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3409c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3409cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3409ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3409d0: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x3409d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x3409d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3409d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3409d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3409d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3409dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3409dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409e0: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x3409e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x3409e4: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3409E4u;
    SET_GPR_U32(ctx, 31, 0x3409ECu);
    ctx->pc = 0x3409E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3409E4u;
            // 0x3409e8: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3409ECu; }
        if (ctx->pc != 0x3409ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3409ECu; }
        if (ctx->pc != 0x3409ECu) { return; }
    }
    ctx->pc = 0x3409ECu;
label_3409ec:
    // 0x3409ec: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3409ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3409f0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3409f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3409f4: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x3409f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x3409f8: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x3409f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x3409fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3409fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a04: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x340A04u;
    SET_GPR_U32(ctx, 31, 0x340A0Cu);
    ctx->pc = 0x340A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340A04u;
            // 0x340a08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A0Cu; }
        if (ctx->pc != 0x340A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A0Cu; }
        if (ctx->pc != 0x340A0Cu) { return; }
    }
    ctx->pc = 0x340A0Cu;
label_340a0c:
    // 0x340a0c: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x340A0Cu;
    {
        const bool branch_taken_0x340a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a0c) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x340A14u;
label_340a14:
    // 0x340a14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340a18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340a1c: 0x8c64ea68  lw          $a0, -0x1598($v1)
    ctx->pc = 0x340a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961768)));
    // 0x340a20: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x340a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x340a24: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x340a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x340a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340a2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x340a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x340a30: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x340a30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x340a34: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x340A34u;
    {
        const bool branch_taken_0x340a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a34) {
            ctx->pc = 0x340A70u;
            goto label_340a70;
        }
    }
    ctx->pc = 0x340A3Cu;
    // 0x340a3c: 0xc0d0590  jal         func_341640
    ctx->pc = 0x340A3Cu;
    SET_GPR_U32(ctx, 31, 0x340A44u);
    ctx->pc = 0x341640u;
    if (runtime->hasFunction(0x341640u)) {
        auto targetFn = runtime->lookupFunction(0x341640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A44u; }
        if (ctx->pc != 0x340A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341640_0x341640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A44u; }
        if (ctx->pc != 0x340A44u) { return; }
    }
    ctx->pc = 0x340A44u;
label_340a44:
    // 0x340a44: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x340A44u;
    {
        const bool branch_taken_0x340a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a44) {
            ctx->pc = 0x340B10u;
            goto label_340b10;
        }
    }
    ctx->pc = 0x340A4Cu;
    // 0x340a4c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x340a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x340a50: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x340A50u;
    SET_GPR_U32(ctx, 31, 0x340A58u);
    ctx->pc = 0x340A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340A50u;
            // 0x340a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A58u; }
        if (ctx->pc != 0x340A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A58u; }
        if (ctx->pc != 0x340A58u) { return; }
    }
    ctx->pc = 0x340A58u;
label_340a58:
    // 0x340a58: 0xc0d0930  jal         func_3424C0
    ctx->pc = 0x340A58u;
    SET_GPR_U32(ctx, 31, 0x340A60u);
    ctx->pc = 0x3424C0u;
    if (runtime->hasFunction(0x3424C0u)) {
        auto targetFn = runtime->lookupFunction(0x3424C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A60u; }
        if (ctx->pc != 0x340A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003424C0_0x3424c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A60u; }
        if (ctx->pc != 0x340A60u) { return; }
    }
    ctx->pc = 0x340A60u;
label_340a60:
    // 0x340a60: 0xc054e1c  jal         func_153870
    ctx->pc = 0x340A60u;
    SET_GPR_U32(ctx, 31, 0x340A68u);
    ctx->pc = 0x153870u;
    if (runtime->hasFunction(0x153870u)) {
        auto targetFn = runtime->lookupFunction(0x153870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A68u; }
        if (ctx->pc != 0x340A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153870_0x153870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A68u; }
        if (ctx->pc != 0x340A68u) { return; }
    }
    ctx->pc = 0x340A68u;
label_340a68:
    // 0x340a68: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x340A68u;
    {
        const bool branch_taken_0x340a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a68) {
            ctx->pc = 0x340B10u;
            goto label_340b10;
        }
    }
    ctx->pc = 0x340A70u;
label_340a70:
    // 0x340a70: 0xc0d0590  jal         func_341640
    ctx->pc = 0x340A70u;
    SET_GPR_U32(ctx, 31, 0x340A78u);
    ctx->pc = 0x341640u;
    if (runtime->hasFunction(0x341640u)) {
        auto targetFn = runtime->lookupFunction(0x341640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A78u; }
        if (ctx->pc != 0x340A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341640_0x341640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A78u; }
        if (ctx->pc != 0x340A78u) { return; }
    }
    ctx->pc = 0x340A78u;
label_340a78:
    // 0x340a78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x340A78u;
    {
        const bool branch_taken_0x340a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a78) {
            ctx->pc = 0x340B10u;
            goto label_340b10;
        }
    }
    ctx->pc = 0x340A80u;
    // 0x340a80: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x340a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x340a84: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x340A84u;
    SET_GPR_U32(ctx, 31, 0x340A8Cu);
    ctx->pc = 0x340A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340A84u;
            // 0x340a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A8Cu; }
        if (ctx->pc != 0x340A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340A8Cu; }
        if (ctx->pc != 0x340A8Cu) { return; }
    }
    ctx->pc = 0x340A8Cu;
label_340a8c:
    // 0x340a8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340a90: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x340a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x340a94: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x340a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x340a98: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340a9c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340aa4: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x340aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x340aa8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x340AA8u;
    SET_GPR_U32(ctx, 31, 0x340AB0u);
    ctx->pc = 0x340AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340AA8u;
            // 0x340aac: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340AB0u; }
        if (ctx->pc != 0x340AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340AB0u; }
        if (ctx->pc != 0x340AB0u) { return; }
    }
    ctx->pc = 0x340AB0u;
label_340ab0:
    // 0x340ab0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x340ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x340ab4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x340ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x340ab8: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x340ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x340abc: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x340abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x340ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ac8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x340AC8u;
    SET_GPR_U32(ctx, 31, 0x340AD0u);
    ctx->pc = 0x340ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340AC8u;
            // 0x340acc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340AD0u; }
        if (ctx->pc != 0x340AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340AD0u; }
        if (ctx->pc != 0x340AD0u) { return; }
    }
    ctx->pc = 0x340AD0u;
label_340ad0:
    // 0x340ad0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x340AD0u;
    {
        const bool branch_taken_0x340ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ad0) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x340AD8u;
label_340ad8:
    // 0x340ad8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x340AD8u;
    {
        const bool branch_taken_0x340ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ad8) {
            ctx->pc = 0x340B10u;
            goto label_340b10;
        }
    }
    ctx->pc = 0x340AE0u;
    // 0x340ae0: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x340ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x340ae4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x340AE4u;
    SET_GPR_U32(ctx, 31, 0x340AECu);
    ctx->pc = 0x340AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340AE4u;
            // 0x340ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340AECu; }
        if (ctx->pc != 0x340AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340AECu; }
        if (ctx->pc != 0x340AECu) { return; }
    }
    ctx->pc = 0x340AECu;
label_340aec:
    // 0x340aec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340af0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x340af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x340af4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340afc: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x340afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x340b00: 0xc055728  jal         func_155CA0
    ctx->pc = 0x340B00u;
    SET_GPR_U32(ctx, 31, 0x340B08u);
    ctx->pc = 0x340B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340B00u;
            // 0x340b04: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B08u; }
        if (ctx->pc != 0x340B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B08u; }
        if (ctx->pc != 0x340B08u) { return; }
    }
    ctx->pc = 0x340B08u;
label_340b08:
    // 0x340b08: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x340B08u;
    {
        const bool branch_taken_0x340b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b08) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x340B10u;
label_340b10:
    // 0x340b10: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340b14: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x340b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x340b18: 0x8c46ea78  lw          $a2, -0x1588($v0)
    ctx->pc = 0x340b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x340b1c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x340b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x340b20: 0x24843ee8  addiu       $a0, $a0, 0x3EE8
    ctx->pc = 0x340b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16104));
    // 0x340b24: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x340b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x340b28: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x340b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x340b2c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340b30: 0x8c42ea64  lw          $v0, -0x159C($v0)
    ctx->pc = 0x340b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x340b34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x340b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x340b38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x340b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340b3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340b40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x340b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x340b48: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x340b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340b4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x340b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x340b50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x340B50u;
    {
        const bool branch_taken_0x340b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340b50) {
            ctx->pc = 0x340B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340B50u;
            // 0x340b54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340B6Cu;
            goto label_340b6c;
        }
    }
    ctx->pc = 0x340B58u;
    // 0x340b58: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340B58u;
    {
        const bool branch_taken_0x340b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340B58u;
            // 0x340b5c: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b58) {
            ctx->pc = 0x340B64u;
            goto label_340b64;
        }
    }
    ctx->pc = 0x340B60u;
    // 0x340b60: 0x1cd  break       0, 7
    ctx->pc = 0x340b60u;
    runtime->handleBreak(rdram, ctx);
label_340b64:
    // 0x340b64: 0x2010  mfhi        $a0
    ctx->pc = 0x340b64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x340b68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x340b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_340b6c:
    // 0x340b6c: 0x14c2004b  bne         $a2, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x340B6Cu;
    {
        const bool branch_taken_0x340b6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x340b6c) {
            ctx->pc = 0x340C9Cu;
            goto label_340c9c;
        }
    }
    ctx->pc = 0x340B74u;
    // 0x340b74: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x340B74u;
    {
        const bool branch_taken_0x340b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x340b74) {
            ctx->pc = 0x340B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340B74u;
            // 0x340b78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340B88u;
            goto label_340b88;
        }
    }
    ctx->pc = 0x340B7Cu;
    // 0x340b7c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x340b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340b80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x340B80u;
    {
        const bool branch_taken_0x340b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340B80u;
            // 0x340b84: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b80) {
            ctx->pc = 0x340BACu;
            goto label_340bac;
        }
    }
    ctx->pc = 0x340B88u;
label_340b88:
    // 0x340b88: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x340b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x340b8c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x340b8cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340b90: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x340b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x340b94: 0x0  nop
    ctx->pc = 0x340b94u;
    // NOP
    // 0x340b98: 0x9810  mfhi        $s3
    ctx->pc = 0x340b98u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x340b9c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x340b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_340ba0:
    // 0x340ba0: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x340ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340ba4: 0x1010  mfhi        $v0
    ctx->pc = 0x340ba4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340ba8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x340ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_340bac:
    // 0x340bac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340bb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x340bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340bb4: 0x8c46ea68  lw          $a2, -0x1598($v0)
    ctx->pc = 0x340bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x340bb8: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x340bb8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340bbc: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x340bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x340bc0: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x340bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x340bc4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x340bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x340bc8: 0x2010  mfhi        $a0
    ctx->pc = 0x340bc8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x340bcc: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x340bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340bd0: 0x1010  mfhi        $v0
    ctx->pc = 0x340bd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340bd4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x340bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340bd8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x340bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x340bdc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x340BDCu;
    {
        const bool branch_taken_0x340bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340bdc) {
            ctx->pc = 0x340BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340BDCu;
            // 0x340be0: 0x4263c  dsll32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340C04u;
            goto label_340c04;
        }
    }
    ctx->pc = 0x340BE4u;
    // 0x340be4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x340be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x340be8: 0x132e3c  dsll32      $a1, $s3, 24
    ctx->pc = 0x340be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 24));
    // 0x340bec: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x340becu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x340bf0: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x340BF0u;
    SET_GPR_U32(ctx, 31, 0x340BF8u);
    ctx->pc = 0x340BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340BF0u;
            // 0x340bf4: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340BF8u; }
        if (ctx->pc != 0x340BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340BF8u; }
        if (ctx->pc != 0x340BF8u) { return; }
    }
    ctx->pc = 0x340BF8u;
label_340bf8:
    // 0x340bf8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x340bf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x340BFCu;
    {
        const bool branch_taken_0x340bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340BFCu;
            // 0x340c00: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340bfc) {
            ctx->pc = 0x340C14u;
            goto label_340c14;
        }
    }
    ctx->pc = 0x340C04u;
label_340c04:
    // 0x340c04: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x340C04u;
    SET_GPR_U32(ctx, 31, 0x340C0Cu);
    ctx->pc = 0x340C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340C04u;
            // 0x340c08: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C0Cu; }
        if (ctx->pc != 0x340C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C0Cu; }
        if (ctx->pc != 0x340C0Cu) { return; }
    }
    ctx->pc = 0x340C0Cu;
label_340c0c:
    // 0x340c0c: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x340c0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340c10: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x340c10u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_340c14:
    // 0x340c14: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x340c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x340c18: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x340C18u;
    {
        const bool branch_taken_0x340c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340c18) {
            ctx->pc = 0x340C54u;
            goto label_340c54;
        }
    }
    ctx->pc = 0x340C20u;
    // 0x340c20: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x340c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x340c24: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x340c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x340c28: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x340c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340c2c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x340c2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x340c30: 0xc0cd948  jal         func_336520
    ctx->pc = 0x340C30u;
    SET_GPR_U32(ctx, 31, 0x340C38u);
    ctx->pc = 0x340C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340C30u;
            // 0x340c34: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C38u; }
        if (ctx->pc != 0x340C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C38u; }
        if (ctx->pc != 0x340C38u) { return; }
    }
    ctx->pc = 0x340C38u;
label_340c38:
    // 0x340c38: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x340c38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340c3c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340c40: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x340c40u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x340c44: 0x2322026  xor         $a0, $s1, $s2
    ctx->pc = 0x340c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
    // 0x340c48: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x340c48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x340c4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x340C4Cu;
    {
        const bool branch_taken_0x340c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340C4Cu;
            // 0x340c50: 0xac64ea7c  sw          $a0, -0x1584($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c4c) {
            ctx->pc = 0x340C84u;
            goto label_340c84;
        }
    }
    ctx->pc = 0x340C54u;
label_340c54:
    // 0x340c54: 0x5a400008  blezl       $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x340C54u;
    {
        const bool branch_taken_0x340c54 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x340c54) {
            ctx->pc = 0x340C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340C54u;
            // 0x340c58: 0x3a240003  xori        $a0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x340C78u;
            goto label_340c78;
        }
    }
    ctx->pc = 0x340C5Cu;
    // 0x340c5c: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x340c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x340c60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x340c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340c64: 0xc0cd948  jal         func_336520
    ctx->pc = 0x340C64u;
    SET_GPR_U32(ctx, 31, 0x340C6Cu);
    ctx->pc = 0x340C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340C64u;
            // 0x340c68: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C6Cu; }
        if (ctx->pc != 0x340C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C6Cu; }
        if (ctx->pc != 0x340C6Cu) { return; }
    }
    ctx->pc = 0x340C6Cu;
label_340c6c:
    // 0x340c6c: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x340c6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340c70: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x340c70u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x340c74: 0x3a240003  xori        $a0, $s1, 0x3
    ctx->pc = 0x340c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
label_340c78:
    // 0x340c78: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340c7c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x340c7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x340c80: 0xac64ea7c  sw          $a0, -0x1584($v1)
    ctx->pc = 0x340c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), GPR_U32(ctx, 4));
label_340c84:
    // 0x340c84: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x340c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x340c88: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340c8c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x340c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x340c90: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x340c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x340c94: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x340C94u;
    {
        const bool branch_taken_0x340c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340C94u;
            // 0x340c98: 0xac64ea68  sw          $a0, -0x1598($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c94) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x340C9Cu;
label_340c9c:
    // 0x340c9c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x340C9Cu;
    {
        const bool branch_taken_0x340c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x340c9c) {
            ctx->pc = 0x340CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340C9Cu;
            // 0x340ca0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340CB0u;
            goto label_340cb0;
        }
    }
    ctx->pc = 0x340CA4u;
    // 0x340ca4: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x340ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340ca8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x340CA8u;
    {
        const bool branch_taken_0x340ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340CA8u;
            // 0x340cac: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ca8) {
            ctx->pc = 0x340CD4u;
            goto label_340cd4;
        }
    }
    ctx->pc = 0x340CB0u;
label_340cb0:
    // 0x340cb0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x340cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x340cb4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x340cb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340cb8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x340cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x340cbc: 0x0  nop
    ctx->pc = 0x340cbcu;
    // NOP
    // 0x340cc0: 0x9010  mfhi        $s2
    ctx->pc = 0x340cc0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x340cc4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x340cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x340cc8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x340cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340ccc: 0x1010  mfhi        $v0
    ctx->pc = 0x340cccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340cd0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x340cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_340cd4:
    // 0x340cd4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340cd8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x340cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340cdc: 0x8c46ea68  lw          $a2, -0x1598($v0)
    ctx->pc = 0x340cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x340ce0: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x340ce0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340ce4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x340ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x340ce8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x340ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x340cec: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x340cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x340cf0: 0x2010  mfhi        $a0
    ctx->pc = 0x340cf0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x340cf4: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x340cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340cf8: 0x1010  mfhi        $v0
    ctx->pc = 0x340cf8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340cfc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x340cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340d00: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x340d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x340d04: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x340D04u;
    {
        const bool branch_taken_0x340d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340d04) {
            ctx->pc = 0x340D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340D04u;
            // 0x340d08: 0x4263c  dsll32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340D2Cu;
            goto label_340d2c;
        }
    }
    ctx->pc = 0x340D0Cu;
    // 0x340d0c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x340d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x340d10: 0x122e3c  dsll32      $a1, $s2, 24
    ctx->pc = 0x340d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 24));
    // 0x340d14: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x340d14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x340d18: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x340D18u;
    SET_GPR_U32(ctx, 31, 0x340D20u);
    ctx->pc = 0x340D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340D18u;
            // 0x340d1c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D20u; }
        if (ctx->pc != 0x340D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D20u; }
        if (ctx->pc != 0x340D20u) { return; }
    }
    ctx->pc = 0x340D20u;
label_340d20:
    // 0x340d20: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x340d20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340d24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x340D24u;
    {
        const bool branch_taken_0x340d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340D24u;
            // 0x340d28: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d24) {
            ctx->pc = 0x340D3Cu;
            goto label_340d3c;
        }
    }
    ctx->pc = 0x340D2Cu;
label_340d2c:
    // 0x340d2c: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x340D2Cu;
    SET_GPR_U32(ctx, 31, 0x340D34u);
    ctx->pc = 0x340D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340D2Cu;
            // 0x340d30: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D34u; }
        if (ctx->pc != 0x340D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D34u; }
        if (ctx->pc != 0x340D34u) { return; }
    }
    ctx->pc = 0x340D34u;
label_340d34:
    // 0x340d34: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x340d34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340d38: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x340d38u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_340d3c:
    // 0x340d3c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x340d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x340d40: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x340D40u;
    {
        const bool branch_taken_0x340d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340d40) {
            ctx->pc = 0x340D7Cu;
            goto label_340d7c;
        }
    }
    ctx->pc = 0x340D48u;
    // 0x340d48: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x340d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x340d4c: 0x13263c  dsll32      $a0, $s3, 24
    ctx->pc = 0x340d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 24));
    // 0x340d50: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x340d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340d54: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x340d54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x340d58: 0xc0cd948  jal         func_336520
    ctx->pc = 0x340D58u;
    SET_GPR_U32(ctx, 31, 0x340D60u);
    ctx->pc = 0x340D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340D58u;
            // 0x340d5c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D60u; }
        if (ctx->pc != 0x340D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D60u; }
        if (ctx->pc != 0x340D60u) { return; }
    }
    ctx->pc = 0x340D60u;
label_340d60:
    // 0x340d60: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x340d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340d64: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340d68: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x340d68u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x340d6c: 0xb12026  xor         $a0, $a1, $s1
    ctx->pc = 0x340d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 17));
    // 0x340d70: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x340d70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x340d74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x340D74u;
    {
        const bool branch_taken_0x340d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340D74u;
            // 0x340d78: 0xac64ea7c  sw          $a0, -0x1584($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d74) {
            ctx->pc = 0x340DD4u;
            goto label_340dd4;
        }
    }
    ctx->pc = 0x340D7Cu;
label_340d7c:
    // 0x340d7c: 0x5a20000c  blezl       $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x340D7Cu;
    {
        const bool branch_taken_0x340d7c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x340d7c) {
            ctx->pc = 0x340D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340D7Cu;
            // 0x340d80: 0x13263c  dsll32      $a0, $s3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340DB0u;
            goto label_340db0;
        }
    }
    ctx->pc = 0x340D84u;
    // 0x340d84: 0x13263c  dsll32      $a0, $s3, 24
    ctx->pc = 0x340d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 24));
    // 0x340d88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x340d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340d8c: 0xc0cd948  jal         func_336520
    ctx->pc = 0x340D8Cu;
    SET_GPR_U32(ctx, 31, 0x340D94u);
    ctx->pc = 0x340D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340D8Cu;
            // 0x340d90: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D94u; }
        if (ctx->pc != 0x340D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D94u; }
        if (ctx->pc != 0x340D94u) { return; }
    }
    ctx->pc = 0x340D94u;
label_340d94:
    // 0x340d94: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x340d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340d98: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340d9c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x340d9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x340da0: 0x38a40003  xori        $a0, $a1, 0x3
    ctx->pc = 0x340da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x340da4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x340da4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x340da8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x340DA8u;
    {
        const bool branch_taken_0x340da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340DA8u;
            // 0x340dac: 0xac64ea7c  sw          $a0, -0x1584($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340da8) {
            ctx->pc = 0x340DD4u;
            goto label_340dd4;
        }
    }
    ctx->pc = 0x340DB0u;
label_340db0:
    // 0x340db0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x340db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340db4: 0xc0cd948  jal         func_336520
    ctx->pc = 0x340DB4u;
    SET_GPR_U32(ctx, 31, 0x340DBCu);
    ctx->pc = 0x340DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340DB4u;
            // 0x340db8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340DBCu; }
        if (ctx->pc != 0x340DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340DBCu; }
        if (ctx->pc != 0x340DBCu) { return; }
    }
    ctx->pc = 0x340DBCu;
label_340dbc:
    // 0x340dbc: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x340dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x340dc0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340dc4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x340dc4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x340dc8: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x340dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x340dcc: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x340dccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x340dd0: 0xac64ea7c  sw          $a0, -0x1584($v1)
    ctx->pc = 0x340dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), GPR_U32(ctx, 4));
label_340dd4:
    // 0x340dd4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x340dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x340dd8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340ddc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x340ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x340de0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x340de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340de4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x340de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x340de8: 0xac64ea68  sw          $a0, -0x1598($v1)
    ctx->pc = 0x340de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 4));
label_340dec:
    // 0x340dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x340decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_340df0:
    // 0x340df0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340e00: 0x3e00008  jr          $ra
    ctx->pc = 0x340E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340E00u;
            // 0x340e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340E08u;
    // 0x340e08: 0x0  nop
    ctx->pc = 0x340e08u;
    // NOP
    // 0x340e0c: 0x0  nop
    ctx->pc = 0x340e0cu;
    // NOP
label_340e10:
    // 0x340e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340e14: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x340e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x340e1c: 0x9043e818  lbu         $v1, -0x17E8($v0)
    ctx->pc = 0x340e1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x340e20: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x340E20u;
    {
        const bool branch_taken_0x340e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340e20) {
            ctx->pc = 0x340E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340E20u;
            // 0x340e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340E8Cu;
            goto label_340e8c;
        }
    }
    ctx->pc = 0x340E28u;
    // 0x340e28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340e2c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340e30: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x340e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x340e34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x340e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e38: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x340E38u;
    SET_GPR_U32(ctx, 31, 0x340E40u);
    ctx->pc = 0x340E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340E38u;
            // 0x340e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E40u; }
        if (ctx->pc != 0x340E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E40u; }
        if (ctx->pc != 0x340E40u) { return; }
    }
    ctx->pc = 0x340E40u;
label_340e40:
    // 0x340e40: 0xc0c0580  jal         func_301600
    ctx->pc = 0x340E40u;
    SET_GPR_U32(ctx, 31, 0x340E48u);
    ctx->pc = 0x340E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340E40u;
            // 0x340e44: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301600u;
    if (runtime->hasFunction(0x301600u)) {
        auto targetFn = runtime->lookupFunction(0x301600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E48u; }
        if (ctx->pc != 0x340E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301600_0x301600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E48u; }
        if (ctx->pc != 0x340E48u) { return; }
    }
    ctx->pc = 0x340E48u;
label_340e48:
    // 0x340e48: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x340e48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340e4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340e50: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x340e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x340e54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x340e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e58: 0x9042e7e8  lbu         $v0, -0x1818($v0)
    ctx->pc = 0x340e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x340e5c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x340e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x340e60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x340e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340e64: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x340e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x340e68: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x340e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x340e6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x340e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e70: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x340e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x340e74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x340e74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e78: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x340e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x340e7c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x340E7Cu;
    SET_GPR_U32(ctx, 31, 0x340E84u);
    ctx->pc = 0x340E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340E7Cu;
            // 0x340e80: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E84u; }
        if (ctx->pc != 0x340E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E84u; }
        if (ctx->pc != 0x340E84u) { return; }
    }
    ctx->pc = 0x340E84u;
label_340e84:
    // 0x340e84: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x340E84u;
    {
        const bool branch_taken_0x340e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340E84u;
            // 0x340e88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e84) {
            ctx->pc = 0x340FA0u;
            goto label_340fa0;
        }
    }
    ctx->pc = 0x340E8Cu;
label_340e8c:
    // 0x340e8c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x340E8Cu;
    {
        const bool branch_taken_0x340e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340e8c) {
            ctx->pc = 0x340EF8u;
            goto label_340ef8;
        }
    }
    ctx->pc = 0x340E94u;
    // 0x340e94: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340e98: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x340e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x340e9c: 0x8c45ea78  lw          $a1, -0x1588($v0)
    ctx->pc = 0x340e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x340ea0: 0x24633ee8  addiu       $v1, $v1, 0x3EE8
    ctx->pc = 0x340ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16104));
    // 0x340ea4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x340ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x340ea8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340eac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340eb0: 0x8c44ea64  lw          $a0, -0x159C($v0)
    ctx->pc = 0x340eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x340eb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340eb8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340ebc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x340ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340ec0: 0x8c42ea68  lw          $v0, -0x1598($v0)
    ctx->pc = 0x340ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x340ec4: 0xc0d05fc  jal         func_3417F0
    ctx->pc = 0x340EC4u;
    SET_GPR_U32(ctx, 31, 0x340ECCu);
    ctx->pc = 0x340EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340EC4u;
            // 0x340ec8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3417F0u;
    if (runtime->hasFunction(0x3417F0u)) {
        auto targetFn = runtime->lookupFunction(0x3417F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340ECCu; }
        if (ctx->pc != 0x340ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003417F0_0x3417f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340ECCu; }
        if (ctx->pc != 0x340ECCu) { return; }
    }
    ctx->pc = 0x340ECCu;
label_340ecc:
    // 0x340ecc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x340eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340ed0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340ed4: 0xac43e7e8  sw          $v1, -0x1818($v0)
    ctx->pc = 0x340ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
    // 0x340ed8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340edc: 0x9043e818  lbu         $v1, -0x17E8($v0)
    ctx->pc = 0x340edcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x340ee0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340ee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340ee8: 0xc0cbf50  jal         func_32FD40
    ctx->pc = 0x340EE8u;
    SET_GPR_U32(ctx, 31, 0x340EF0u);
    ctx->pc = 0x340EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340EE8u;
            // 0x340eec: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FD40u;
    if (runtime->hasFunction(0x32FD40u)) {
        auto targetFn = runtime->lookupFunction(0x32FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340EF0u; }
        if (ctx->pc != 0x340EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FD40_0x32fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340EF0u; }
        if (ctx->pc != 0x340EF0u) { return; }
    }
    ctx->pc = 0x340EF0u;
label_340ef0:
    // 0x340ef0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x340EF0u;
    {
        const bool branch_taken_0x340ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ef0) {
            ctx->pc = 0x340F9Cu;
            goto label_340f9c;
        }
    }
    ctx->pc = 0x340EF8u;
label_340ef8:
    // 0x340ef8: 0xc0d0730  jal         func_341CC0
    ctx->pc = 0x340EF8u;
    SET_GPR_U32(ctx, 31, 0x340F00u);
    ctx->pc = 0x341CC0u;
    if (runtime->hasFunction(0x341CC0u)) {
        auto targetFn = runtime->lookupFunction(0x341CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F00u; }
        if (ctx->pc != 0x340F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341CC0_0x341cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F00u; }
        if (ctx->pc != 0x340F00u) { return; }
    }
    ctx->pc = 0x340F00u;
label_340f00:
    // 0x340f00: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340f04: 0x8c63ea74  lw          $v1, -0x158C($v1)
    ctx->pc = 0x340f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961780)));
    // 0x340f08: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x340F08u;
    {
        const bool branch_taken_0x340f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340f08) {
            ctx->pc = 0x340F6Cu;
            goto label_340f6c;
        }
    }
    ctx->pc = 0x340F10u;
    // 0x340f10: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x340f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x340f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f18: 0x24843c5c  addiu       $a0, $a0, 0x3C5C
    ctx->pc = 0x340f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15452));
    // 0x340f1c: 0x2406017c  addiu       $a2, $zero, 0x17C
    ctx->pc = 0x340f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x340f20: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x340f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x340f24: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x340f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340f28: 0xc0c0b94  jal         func_302E50
    ctx->pc = 0x340F28u;
    SET_GPR_U32(ctx, 31, 0x340F30u);
    ctx->pc = 0x340F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340F28u;
            // 0x340f2c: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E50u;
    if (runtime->hasFunction(0x302E50u)) {
        auto targetFn = runtime->lookupFunction(0x302E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F30u; }
        if (ctx->pc != 0x340F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E50_0x302e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F30u; }
        if (ctx->pc != 0x340F30u) { return; }
    }
    ctx->pc = 0x340F30u;
label_340f30:
    // 0x340f30: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x340f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x340f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f38: 0x24843c38  addiu       $a0, $a0, 0x3C38
    ctx->pc = 0x340f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15416));
    // 0x340f3c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340F3Cu;
    SET_GPR_U32(ctx, 31, 0x340F44u);
    ctx->pc = 0x340F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340F3Cu;
            // 0x340f40: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F44u; }
        if (ctx->pc != 0x340F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F44u; }
        if (ctx->pc != 0x340F44u) { return; }
    }
    ctx->pc = 0x340F44u;
label_340f44:
    // 0x340f44: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x340f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x340f48: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x340f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x340f4c: 0x24843c44  addiu       $a0, $a0, 0x3C44
    ctx->pc = 0x340f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15428));
    // 0x340f50: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340F50u;
    SET_GPR_U32(ctx, 31, 0x340F58u);
    ctx->pc = 0x340F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340F50u;
            // 0x340f54: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F58u; }
        if (ctx->pc != 0x340F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F58u; }
        if (ctx->pc != 0x340F58u) { return; }
    }
    ctx->pc = 0x340F58u;
label_340f58:
    // 0x340f58: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x340f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x340f5c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x340f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x340f60: 0x24843c50  addiu       $a0, $a0, 0x3C50
    ctx->pc = 0x340f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
    // 0x340f64: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340F64u;
    SET_GPR_U32(ctx, 31, 0x340F6Cu);
    ctx->pc = 0x340F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340F64u;
            // 0x340f68: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F6Cu; }
        if (ctx->pc != 0x340F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F6Cu; }
        if (ctx->pc != 0x340F6Cu) { return; }
    }
    ctx->pc = 0x340F6Cu;
label_340f6c:
    // 0x340f6c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340f70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x340f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340f74: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x340f74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x340f78: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x340F78u;
    {
        const bool branch_taken_0x340f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x340f78) {
            ctx->pc = 0x340F9Cu;
            goto label_340f9c;
        }
    }
    ctx->pc = 0x340F80u;
    // 0x340f80: 0xc0cbf50  jal         func_32FD40
    ctx->pc = 0x340F80u;
    SET_GPR_U32(ctx, 31, 0x340F88u);
    ctx->pc = 0x32FD40u;
    if (runtime->hasFunction(0x32FD40u)) {
        auto targetFn = runtime->lookupFunction(0x32FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F88u; }
        if (ctx->pc != 0x340F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FD40_0x32fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340F88u; }
        if (ctx->pc != 0x340F88u) { return; }
    }
    ctx->pc = 0x340F88u;
label_340f88:
    // 0x340f88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340F88u;
    {
        const bool branch_taken_0x340f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340f88) {
            ctx->pc = 0x340F9Cu;
            goto label_340f9c;
        }
    }
    ctx->pc = 0x340F90u;
    // 0x340f90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x340f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340f94: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340f98: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x340f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_340f9c:
    // 0x340f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_340fa0:
    // 0x340fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x340FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340FA0u;
            // 0x340fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340FA8u;
    // 0x340fa8: 0x0  nop
    ctx->pc = 0x340fa8u;
    // NOP
    // 0x340fac: 0x0  nop
    ctx->pc = 0x340facu;
    // NOP
    ctx->pc = 0x340fb0u;
}
