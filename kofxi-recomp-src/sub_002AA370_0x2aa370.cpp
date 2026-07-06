#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA370
// Address: 0x2aa370 - 0x2aa678
void sub_002AA370_0x2aa370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA370_0x2aa370");
#endif

    switch (ctx->pc) {
        case 0x2aa370u: goto label_2aa370;
        case 0x2aa374u: goto label_2aa374;
        case 0x2aa378u: goto label_2aa378;
        case 0x2aa37cu: goto label_2aa37c;
        case 0x2aa380u: goto label_2aa380;
        case 0x2aa384u: goto label_2aa384;
        case 0x2aa388u: goto label_2aa388;
        case 0x2aa38cu: goto label_2aa38c;
        case 0x2aa390u: goto label_2aa390;
        case 0x2aa394u: goto label_2aa394;
        case 0x2aa398u: goto label_2aa398;
        case 0x2aa39cu: goto label_2aa39c;
        case 0x2aa3a0u: goto label_2aa3a0;
        case 0x2aa3a4u: goto label_2aa3a4;
        case 0x2aa3a8u: goto label_2aa3a8;
        case 0x2aa3acu: goto label_2aa3ac;
        case 0x2aa3b0u: goto label_2aa3b0;
        case 0x2aa3b4u: goto label_2aa3b4;
        case 0x2aa3b8u: goto label_2aa3b8;
        case 0x2aa3bcu: goto label_2aa3bc;
        case 0x2aa3c0u: goto label_2aa3c0;
        case 0x2aa3c4u: goto label_2aa3c4;
        case 0x2aa3c8u: goto label_2aa3c8;
        case 0x2aa3ccu: goto label_2aa3cc;
        case 0x2aa3d0u: goto label_2aa3d0;
        case 0x2aa3d4u: goto label_2aa3d4;
        case 0x2aa3d8u: goto label_2aa3d8;
        case 0x2aa3dcu: goto label_2aa3dc;
        case 0x2aa3e0u: goto label_2aa3e0;
        case 0x2aa3e4u: goto label_2aa3e4;
        case 0x2aa3e8u: goto label_2aa3e8;
        case 0x2aa3ecu: goto label_2aa3ec;
        case 0x2aa3f0u: goto label_2aa3f0;
        case 0x2aa3f4u: goto label_2aa3f4;
        case 0x2aa3f8u: goto label_2aa3f8;
        case 0x2aa3fcu: goto label_2aa3fc;
        case 0x2aa400u: goto label_2aa400;
        case 0x2aa404u: goto label_2aa404;
        case 0x2aa408u: goto label_2aa408;
        case 0x2aa40cu: goto label_2aa40c;
        case 0x2aa410u: goto label_2aa410;
        case 0x2aa414u: goto label_2aa414;
        case 0x2aa418u: goto label_2aa418;
        case 0x2aa41cu: goto label_2aa41c;
        case 0x2aa420u: goto label_2aa420;
        case 0x2aa424u: goto label_2aa424;
        case 0x2aa428u: goto label_2aa428;
        case 0x2aa42cu: goto label_2aa42c;
        case 0x2aa430u: goto label_2aa430;
        case 0x2aa434u: goto label_2aa434;
        case 0x2aa438u: goto label_2aa438;
        case 0x2aa43cu: goto label_2aa43c;
        case 0x2aa440u: goto label_2aa440;
        case 0x2aa444u: goto label_2aa444;
        case 0x2aa448u: goto label_2aa448;
        case 0x2aa44cu: goto label_2aa44c;
        case 0x2aa450u: goto label_2aa450;
        case 0x2aa454u: goto label_2aa454;
        case 0x2aa458u: goto label_2aa458;
        case 0x2aa45cu: goto label_2aa45c;
        case 0x2aa460u: goto label_2aa460;
        case 0x2aa464u: goto label_2aa464;
        case 0x2aa468u: goto label_2aa468;
        case 0x2aa46cu: goto label_2aa46c;
        case 0x2aa470u: goto label_2aa470;
        case 0x2aa474u: goto label_2aa474;
        case 0x2aa478u: goto label_2aa478;
        case 0x2aa47cu: goto label_2aa47c;
        case 0x2aa480u: goto label_2aa480;
        case 0x2aa484u: goto label_2aa484;
        case 0x2aa488u: goto label_2aa488;
        case 0x2aa48cu: goto label_2aa48c;
        case 0x2aa490u: goto label_2aa490;
        case 0x2aa494u: goto label_2aa494;
        case 0x2aa498u: goto label_2aa498;
        case 0x2aa49cu: goto label_2aa49c;
        case 0x2aa4a0u: goto label_2aa4a0;
        case 0x2aa4a4u: goto label_2aa4a4;
        case 0x2aa4a8u: goto label_2aa4a8;
        case 0x2aa4acu: goto label_2aa4ac;
        case 0x2aa4b0u: goto label_2aa4b0;
        case 0x2aa4b4u: goto label_2aa4b4;
        case 0x2aa4b8u: goto label_2aa4b8;
        case 0x2aa4bcu: goto label_2aa4bc;
        case 0x2aa4c0u: goto label_2aa4c0;
        case 0x2aa4c4u: goto label_2aa4c4;
        case 0x2aa4c8u: goto label_2aa4c8;
        case 0x2aa4ccu: goto label_2aa4cc;
        case 0x2aa4d0u: goto label_2aa4d0;
        case 0x2aa4d4u: goto label_2aa4d4;
        case 0x2aa4d8u: goto label_2aa4d8;
        case 0x2aa4dcu: goto label_2aa4dc;
        case 0x2aa4e0u: goto label_2aa4e0;
        case 0x2aa4e4u: goto label_2aa4e4;
        case 0x2aa4e8u: goto label_2aa4e8;
        case 0x2aa4ecu: goto label_2aa4ec;
        case 0x2aa4f0u: goto label_2aa4f0;
        case 0x2aa4f4u: goto label_2aa4f4;
        case 0x2aa4f8u: goto label_2aa4f8;
        case 0x2aa4fcu: goto label_2aa4fc;
        case 0x2aa500u: goto label_2aa500;
        case 0x2aa504u: goto label_2aa504;
        case 0x2aa508u: goto label_2aa508;
        case 0x2aa50cu: goto label_2aa50c;
        case 0x2aa510u: goto label_2aa510;
        case 0x2aa514u: goto label_2aa514;
        case 0x2aa518u: goto label_2aa518;
        case 0x2aa51cu: goto label_2aa51c;
        case 0x2aa520u: goto label_2aa520;
        case 0x2aa524u: goto label_2aa524;
        case 0x2aa528u: goto label_2aa528;
        case 0x2aa52cu: goto label_2aa52c;
        case 0x2aa530u: goto label_2aa530;
        case 0x2aa534u: goto label_2aa534;
        case 0x2aa538u: goto label_2aa538;
        case 0x2aa53cu: goto label_2aa53c;
        case 0x2aa540u: goto label_2aa540;
        case 0x2aa544u: goto label_2aa544;
        case 0x2aa548u: goto label_2aa548;
        case 0x2aa54cu: goto label_2aa54c;
        case 0x2aa550u: goto label_2aa550;
        case 0x2aa554u: goto label_2aa554;
        case 0x2aa558u: goto label_2aa558;
        case 0x2aa55cu: goto label_2aa55c;
        case 0x2aa560u: goto label_2aa560;
        case 0x2aa564u: goto label_2aa564;
        case 0x2aa568u: goto label_2aa568;
        case 0x2aa56cu: goto label_2aa56c;
        case 0x2aa570u: goto label_2aa570;
        case 0x2aa574u: goto label_2aa574;
        case 0x2aa578u: goto label_2aa578;
        case 0x2aa57cu: goto label_2aa57c;
        case 0x2aa580u: goto label_2aa580;
        case 0x2aa584u: goto label_2aa584;
        case 0x2aa588u: goto label_2aa588;
        case 0x2aa58cu: goto label_2aa58c;
        case 0x2aa590u: goto label_2aa590;
        case 0x2aa594u: goto label_2aa594;
        case 0x2aa598u: goto label_2aa598;
        case 0x2aa59cu: goto label_2aa59c;
        case 0x2aa5a0u: goto label_2aa5a0;
        case 0x2aa5a4u: goto label_2aa5a4;
        case 0x2aa5a8u: goto label_2aa5a8;
        case 0x2aa5acu: goto label_2aa5ac;
        case 0x2aa5b0u: goto label_2aa5b0;
        case 0x2aa5b4u: goto label_2aa5b4;
        case 0x2aa5b8u: goto label_2aa5b8;
        case 0x2aa5bcu: goto label_2aa5bc;
        case 0x2aa5c0u: goto label_2aa5c0;
        case 0x2aa5c4u: goto label_2aa5c4;
        case 0x2aa5c8u: goto label_2aa5c8;
        case 0x2aa5ccu: goto label_2aa5cc;
        case 0x2aa5d0u: goto label_2aa5d0;
        case 0x2aa5d4u: goto label_2aa5d4;
        case 0x2aa5d8u: goto label_2aa5d8;
        case 0x2aa5dcu: goto label_2aa5dc;
        case 0x2aa5e0u: goto label_2aa5e0;
        case 0x2aa5e4u: goto label_2aa5e4;
        case 0x2aa5e8u: goto label_2aa5e8;
        case 0x2aa5ecu: goto label_2aa5ec;
        case 0x2aa5f0u: goto label_2aa5f0;
        case 0x2aa5f4u: goto label_2aa5f4;
        case 0x2aa5f8u: goto label_2aa5f8;
        case 0x2aa5fcu: goto label_2aa5fc;
        case 0x2aa600u: goto label_2aa600;
        case 0x2aa604u: goto label_2aa604;
        case 0x2aa608u: goto label_2aa608;
        case 0x2aa60cu: goto label_2aa60c;
        case 0x2aa610u: goto label_2aa610;
        case 0x2aa614u: goto label_2aa614;
        case 0x2aa618u: goto label_2aa618;
        case 0x2aa61cu: goto label_2aa61c;
        case 0x2aa620u: goto label_2aa620;
        case 0x2aa624u: goto label_2aa624;
        case 0x2aa628u: goto label_2aa628;
        case 0x2aa62cu: goto label_2aa62c;
        case 0x2aa630u: goto label_2aa630;
        case 0x2aa634u: goto label_2aa634;
        case 0x2aa638u: goto label_2aa638;
        case 0x2aa63cu: goto label_2aa63c;
        case 0x2aa640u: goto label_2aa640;
        case 0x2aa644u: goto label_2aa644;
        case 0x2aa648u: goto label_2aa648;
        case 0x2aa64cu: goto label_2aa64c;
        case 0x2aa650u: goto label_2aa650;
        case 0x2aa654u: goto label_2aa654;
        case 0x2aa658u: goto label_2aa658;
        case 0x2aa65cu: goto label_2aa65c;
        case 0x2aa660u: goto label_2aa660;
        case 0x2aa664u: goto label_2aa664;
        case 0x2aa668u: goto label_2aa668;
        case 0x2aa66cu: goto label_2aa66c;
        case 0x2aa670u: goto label_2aa670;
        case 0x2aa674u: goto label_2aa674;
        default: break;
    }

    ctx->pc = 0x2aa370u;

label_2aa370:
    // 0x2aa370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2aa374:
    // 0x2aa374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2aa378:
    // 0x2aa378: 0xc0aa8ca  jal         func_2AA328
label_2aa37c:
    if (ctx->pc == 0x2AA37Cu) {
        ctx->pc = 0x2AA380u;
        goto label_2aa380;
    }
    ctx->pc = 0x2AA378u;
    SET_GPR_U32(ctx, 31, 0x2AA380u);
    ctx->pc = 0x2AA328u;
    if (runtime->hasFunction(0x2AA328u)) {
        auto targetFn = runtime->lookupFunction(0x2AA328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA380u; }
        if (ctx->pc != 0x2AA380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA328_0x2aa328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA380u; }
        if (ctx->pc != 0x2AA380u) { return; }
    }
    ctx->pc = 0x2AA380u;
label_2aa380:
    // 0x2aa380: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2aa380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2aa384:
    // 0x2aa384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa388:
    // 0x2aa388: 0x24426d38  addiu       $v0, $v0, 0x6D38
    ctx->pc = 0x2aa388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27960));
label_2aa38c:
    // 0x2aa38c: 0x3e00008  jr          $ra
label_2aa390:
    if (ctx->pc == 0x2AA390u) {
        ctx->pc = 0x2AA390u;
            // 0x2aa390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2AA394u;
        goto label_2aa394;
    }
    ctx->pc = 0x2AA38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA38Cu;
            // 0x2aa390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA394u;
label_2aa394:
    // 0x2aa394: 0x0  nop
    ctx->pc = 0x2aa394u;
    // NOP
label_2aa398:
    // 0x2aa398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2aa39c:
    // 0x2aa39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aa39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2aa3a0:
    // 0x2aa3a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2aa3a4:
    // 0x2aa3a4: 0xc0ab9ba  jal         func_2AE6E8
label_2aa3a8:
    if (ctx->pc == 0x2AA3A8u) {
        ctx->pc = 0x2AA3ACu;
        goto label_2aa3ac;
    }
    ctx->pc = 0x2AA3A4u;
    SET_GPR_U32(ctx, 31, 0x2AA3ACu);
    ctx->pc = 0x2AE6E8u;
    if (runtime->hasFunction(0x2AE6E8u)) {
        auto targetFn = runtime->lookupFunction(0x2AE6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3ACu; }
        if (ctx->pc != 0x2AA3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE6E8_0x2ae6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3ACu; }
        if (ctx->pc != 0x2AA3ACu) { return; }
    }
    ctx->pc = 0x2AA3ACu;
label_2aa3ac:
    // 0x2aa3ac: 0xc0ab18a  jal         func_2AC628
label_2aa3b0:
    if (ctx->pc == 0x2AA3B0u) {
        ctx->pc = 0x2AA3B0u;
            // 0x2aa3b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3B4u;
        goto label_2aa3b4;
    }
    ctx->pc = 0x2AA3ACu;
    SET_GPR_U32(ctx, 31, 0x2AA3B4u);
    ctx->pc = 0x2AA3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3ACu;
            // 0x2aa3b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC628u;
    if (runtime->hasFunction(0x2AC628u)) {
        auto targetFn = runtime->lookupFunction(0x2AC628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3B4u; }
        if (ctx->pc != 0x2AA3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC628_0x2ac628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3B4u; }
        if (ctx->pc != 0x2AA3B4u) { return; }
    }
    ctx->pc = 0x2AA3B4u;
label_2aa3b4:
    // 0x2aa3b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2aa3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2aa3b8:
    // 0x2aa3b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa3bc:
    // 0x2aa3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa3c0:
    // 0x2aa3c0: 0x3e00008  jr          $ra
label_2aa3c4:
    if (ctx->pc == 0x2AA3C4u) {
        ctx->pc = 0x2AA3C4u;
            // 0x2aa3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2AA3C8u;
        goto label_2aa3c8;
    }
    ctx->pc = 0x2AA3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3C0u;
            // 0x2aa3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA3C8u;
label_2aa3c8:
    // 0x2aa3c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2aa3cc:
    // 0x2aa3cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aa3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2aa3d0:
    // 0x2aa3d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2aa3d4:
    // 0x2aa3d4: 0xc0ab9ba  jal         func_2AE6E8
label_2aa3d8:
    if (ctx->pc == 0x2AA3D8u) {
        ctx->pc = 0x2AA3D8u;
            // 0x2aa3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3DCu;
        goto label_2aa3dc;
    }
    ctx->pc = 0x2AA3D4u;
    SET_GPR_U32(ctx, 31, 0x2AA3DCu);
    ctx->pc = 0x2AA3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3D4u;
            // 0x2aa3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE6E8u;
    if (runtime->hasFunction(0x2AE6E8u)) {
        auto targetFn = runtime->lookupFunction(0x2AE6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3DCu; }
        if (ctx->pc != 0x2AA3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE6E8_0x2ae6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3DCu; }
        if (ctx->pc != 0x2AA3DCu) { return; }
    }
    ctx->pc = 0x2AA3DCu;
label_2aa3dc:
    // 0x2aa3dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aa3dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa3e0:
    // 0x2aa3e0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2aa3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2aa3e4:
    // 0x2aa3e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2aa3e8:
    if (ctx->pc == 0x2AA3E8u) {
        ctx->pc = 0x2AA3ECu;
        goto label_2aa3ec;
    }
    ctx->pc = 0x2AA3E4u;
    {
        const bool branch_taken_0x2aa3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3e4) {
            ctx->pc = 0x2AA3FCu;
            goto label_2aa3fc;
        }
    }
    ctx->pc = 0x2AA3ECu;
label_2aa3ec:
    // 0x2aa3ec: 0xc0ab9bc  jal         func_2AE6F0
label_2aa3f0:
    if (ctx->pc == 0x2AA3F0u) {
        ctx->pc = 0x2AA3F0u;
            // 0x2aa3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3F4u;
        goto label_2aa3f4;
    }
    ctx->pc = 0x2AA3ECu;
    SET_GPR_U32(ctx, 31, 0x2AA3F4u);
    ctx->pc = 0x2AA3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3ECu;
            // 0x2aa3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE6F0u;
    if (runtime->hasFunction(0x2AE6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2AE6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3F4u; }
        if (ctx->pc != 0x2AA3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE6F0_0x2ae6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3F4u; }
        if (ctx->pc != 0x2AA3F4u) { return; }
    }
    ctx->pc = 0x2AA3F4u;
label_2aa3f4:
    // 0x2aa3f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2aa3f8:
    if (ctx->pc == 0x2AA3F8u) {
        ctx->pc = 0x2AA3F8u;
            // 0x2aa3f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2AA3FCu;
        goto label_2aa3fc;
    }
    ctx->pc = 0x2AA3F4u;
    {
        const bool branch_taken_0x2aa3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3F4u;
            // 0x2aa3f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3f4) {
            ctx->pc = 0x2AA408u;
            goto label_2aa408;
        }
    }
    ctx->pc = 0x2AA3FCu;
label_2aa3fc:
    // 0x2aa3fc: 0xc0ab18c  jal         func_2AC630
label_2aa400:
    if (ctx->pc == 0x2AA400u) {
        ctx->pc = 0x2AA400u;
            // 0x2aa400: 0x2032023  subu        $a0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x2AA404u;
        goto label_2aa404;
    }
    ctx->pc = 0x2AA3FCu;
    SET_GPR_U32(ctx, 31, 0x2AA404u);
    ctx->pc = 0x2AA400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3FCu;
            // 0x2aa400: 0x2032023  subu        $a0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC630u;
    if (runtime->hasFunction(0x2AC630u)) {
        auto targetFn = runtime->lookupFunction(0x2AC630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA404u; }
        if (ctx->pc != 0x2AA404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC630_0x2ac630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA404u; }
        if (ctx->pc != 0x2AA404u) { return; }
    }
    ctx->pc = 0x2AA404u;
label_2aa404:
    // 0x2aa404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa408:
    // 0x2aa408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa40c:
    // 0x2aa40c: 0x3e00008  jr          $ra
label_2aa410:
    if (ctx->pc == 0x2AA410u) {
        ctx->pc = 0x2AA410u;
            // 0x2aa410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2AA414u;
        goto label_2aa414;
    }
    ctx->pc = 0x2AA40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA40Cu;
            // 0x2aa410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA414u;
label_2aa414:
    // 0x2aa414: 0x0  nop
    ctx->pc = 0x2aa414u;
    // NOP
label_2aa418:
    // 0x2aa418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aa418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2aa41c:
    // 0x2aa41c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2aa41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2aa420:
    // 0x2aa420: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2aa420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2aa424:
    // 0x2aa424: 0xc0ab9ba  jal         func_2AE6E8
label_2aa428:
    if (ctx->pc == 0x2AA428u) {
        ctx->pc = 0x2AA428u;
            // 0x2aa428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA42Cu;
        goto label_2aa42c;
    }
    ctx->pc = 0x2AA424u;
    SET_GPR_U32(ctx, 31, 0x2AA42Cu);
    ctx->pc = 0x2AA428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA424u;
            // 0x2aa428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE6E8u;
    if (runtime->hasFunction(0x2AE6E8u)) {
        auto targetFn = runtime->lookupFunction(0x2AE6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA42Cu; }
        if (ctx->pc != 0x2AA42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE6E8_0x2ae6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA42Cu; }
        if (ctx->pc != 0x2AA42Cu) { return; }
    }
    ctx->pc = 0x2AA42Cu;
label_2aa42c:
    // 0x2aa42c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2aa42cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2aa430:
    // 0x2aa430: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x2aa430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_2aa434:
    // 0x2aa434: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2aa434u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2aa438:
    // 0x2aa438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa43c:
    // 0x2aa43c: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2aa43cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2aa440:
    // 0x2aa440: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2aa440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa444:
    // 0x2aa444: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2aa444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2aa448:
    // 0x2aa448: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2aa448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2aa44c:
    // 0x2aa44c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2aa44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2aa450:
    // 0x2aa450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2aa450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2aa454:
    // 0x2aa454: 0xc0abba4  jal         func_2AEE90
label_2aa458:
    if (ctx->pc == 0x2AA458u) {
        ctx->pc = 0x2AA458u;
            // 0x2aa458: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
        ctx->pc = 0x2AA45Cu;
        goto label_2aa45c;
    }
    ctx->pc = 0x2AA454u;
    SET_GPR_U32(ctx, 31, 0x2AA45Cu);
    ctx->pc = 0x2AA458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA454u;
            // 0x2aa458: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AEE90u;
    if (runtime->hasFunction(0x2AEE90u)) {
        auto targetFn = runtime->lookupFunction(0x2AEE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA45Cu; }
        if (ctx->pc != 0x2AA45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AEE90_0x2aee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA45Cu; }
        if (ctx->pc != 0x2AA45Cu) { return; }
    }
    ctx->pc = 0x2AA45Cu;
label_2aa45c:
    // 0x2aa45c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2aa460:
    if (ctx->pc == 0x2AA460u) {
        ctx->pc = 0x2AA460u;
            // 0x2aa460: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2AA464u;
        goto label_2aa464;
    }
    ctx->pc = 0x2AA45Cu;
    {
        const bool branch_taken_0x2aa45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA45Cu;
            // 0x2aa460: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa45c) {
            ctx->pc = 0x2AA470u;
            goto label_2aa470;
        }
    }
    ctx->pc = 0x2AA464u;
label_2aa464:
    // 0x2aa464: 0xc0ab1f8  jal         func_2AC7E0
label_2aa468:
    if (ctx->pc == 0x2AA468u) {
        ctx->pc = 0x2AA468u;
            // 0x2aa468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA46Cu;
        goto label_2aa46c;
    }
    ctx->pc = 0x2AA464u;
    SET_GPR_U32(ctx, 31, 0x2AA46Cu);
    ctx->pc = 0x2AA468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA464u;
            // 0x2aa468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC7E0u;
    if (runtime->hasFunction(0x2AC7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA46Cu; }
        if (ctx->pc != 0x2AA46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC7E0_0x2ac7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA46Cu; }
        if (ctx->pc != 0x2AA46Cu) { return; }
    }
    ctx->pc = 0x2AA46Cu;
label_2aa46c:
    // 0x2aa46c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2aa46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2aa470:
    // 0x2aa470: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2aa470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa474:
    // 0x2aa474: 0x3e00008  jr          $ra
label_2aa478:
    if (ctx->pc == 0x2AA478u) {
        ctx->pc = 0x2AA478u;
            // 0x2aa478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2AA47Cu;
        goto label_2aa47c;
    }
    ctx->pc = 0x2AA474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA474u;
            // 0x2aa478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA47Cu;
label_2aa47c:
    // 0x2aa47c: 0x0  nop
    ctx->pc = 0x2aa47cu;
    // NOP
label_2aa480:
    // 0x2aa480: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2aa484:
    if (ctx->pc == 0x2AA484u) {
        ctx->pc = 0x2AA488u;
        goto label_2aa488;
    }
    ctx->pc = 0x2AA480u;
    {
        const bool branch_taken_0x2aa480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa480) {
            ctx->pc = 0x2AA4ACu;
            goto label_2aa4ac;
        }
    }
    ctx->pc = 0x2AA488u;
label_2aa488:
    // 0x2aa488: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x2aa488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_2aa48c:
    // 0x2aa48c: 0x21c3b  dsra        $v1, $v0, 16
    ctx->pc = 0x2aa48cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 16);
label_2aa490:
    // 0x2aa490: 0x2223b  dsra        $a0, $v0, 8
    ctx->pc = 0x2aa490u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 2) >> 8);
label_2aa494:
    // 0x2aa494: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aa494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2aa498:
    // 0x2aa498: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2aa498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2aa49c:
    // 0x2aa49c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aa49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2aa4a0:
    // 0x2aa4a0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2aa4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2aa4a4:
    // 0x2aa4a4: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x2aa4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_2aa4a8:
    // 0x2aa4a8: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2aa4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_2aa4ac:
    // 0x2aa4ac: 0x3e00008  jr          $ra
label_2aa4b0:
    if (ctx->pc == 0x2AA4B0u) {
        ctx->pc = 0x2AA4B0u;
            // 0x2aa4b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2AA4B4u;
        goto label_2aa4b4;
    }
    ctx->pc = 0x2AA4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4ACu;
            // 0x2aa4b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA4B4u;
label_2aa4b4:
    // 0x2aa4b4: 0x0  nop
    ctx->pc = 0x2aa4b4u;
    // NOP
label_2aa4b8:
    // 0x2aa4b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2aa4bc:
    // 0x2aa4bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aa4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2aa4c0:
    // 0x2aa4c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aa4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2aa4c4:
    // 0x2aa4c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2aa4c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4c8:
    // 0x2aa4c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aa4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2aa4cc:
    // 0x2aa4cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aa4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4d0:
    // 0x2aa4d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aa4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2aa4d4:
    // 0x2aa4d4: 0xc0491f2  jal         func_1247C8
label_2aa4d8:
    if (ctx->pc == 0x2AA4D8u) {
        ctx->pc = 0x2AA4D8u;
            // 0x2aa4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4DCu;
        goto label_2aa4dc;
    }
    ctx->pc = 0x2AA4D4u;
    SET_GPR_U32(ctx, 31, 0x2AA4DCu);
    ctx->pc = 0x2AA4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4D4u;
            // 0x2aa4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4DCu; }
        if (ctx->pc != 0x2AA4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4DCu; }
        if (ctx->pc != 0x2AA4DCu) { return; }
    }
    ctx->pc = 0x2AA4DCu;
label_2aa4dc:
    // 0x2aa4dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aa4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2aa4e0:
    // 0x2aa4e0: 0xc0ac604  jal         func_2B1810
label_2aa4e4:
    if (ctx->pc == 0x2AA4E4u) {
        ctx->pc = 0x2AA4E4u;
            // 0x2aa4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4E8u;
        goto label_2aa4e8;
    }
    ctx->pc = 0x2AA4E0u;
    SET_GPR_U32(ctx, 31, 0x2AA4E8u);
    ctx->pc = 0x2AA4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4E0u;
            // 0x2aa4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4E8u; }
        if (ctx->pc != 0x2AA4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4E8u; }
        if (ctx->pc != 0x2AA4E8u) { return; }
    }
    ctx->pc = 0x2AA4E8u;
label_2aa4e8:
    // 0x2aa4e8: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2aa4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2aa4ec:
    // 0x2aa4ec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2aa4f0:
    if (ctx->pc == 0x2AA4F0u) {
        ctx->pc = 0x2AA4F4u;
        goto label_2aa4f4;
    }
    ctx->pc = 0x2AA4ECu;
    {
        const bool branch_taken_0x2aa4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4ec) {
            ctx->pc = 0x2AA574u;
            goto label_2aa574;
        }
    }
    ctx->pc = 0x2AA4F4u;
label_2aa4f4:
    // 0x2aa4f4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2aa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2aa4f8:
    // 0x2aa4f8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2aa4fc:
    if (ctx->pc == 0x2AA4FCu) {
        ctx->pc = 0x2AA500u;
        goto label_2aa500;
    }
    ctx->pc = 0x2AA4F8u;
    {
        const bool branch_taken_0x2aa4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4f8) {
            ctx->pc = 0x2AA574u;
            goto label_2aa574;
        }
    }
    ctx->pc = 0x2AA500u;
label_2aa500:
    // 0x2aa500: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2aa500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2aa504:
    // 0x2aa504: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2aa508:
    if (ctx->pc == 0x2AA508u) {
        ctx->pc = 0x2AA508u;
            // 0x2aa508: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AA50Cu;
        goto label_2aa50c;
    }
    ctx->pc = 0x2AA504u;
    {
        const bool branch_taken_0x2aa504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA504u;
            // 0x2aa508: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa504) {
            ctx->pc = 0x2AA528u;
            goto label_2aa528;
        }
    }
    ctx->pc = 0x2AA50Cu;
label_2aa50c:
    // 0x2aa50c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2aa50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2aa510:
    // 0x2aa510: 0x2406044d  addiu       $a2, $zero, 0x44D
    ctx->pc = 0x2aa510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
label_2aa514:
    // 0x2aa514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa518:
    // 0x2aa518: 0xc0a5648  jal         func_295920
label_2aa51c:
    if (ctx->pc == 0x2AA51Cu) {
        ctx->pc = 0x2AA51Cu;
            // 0x2aa51c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA520u;
        goto label_2aa520;
    }
    ctx->pc = 0x2AA518u;
    SET_GPR_U32(ctx, 31, 0x2AA520u);
    ctx->pc = 0x2AA51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA518u;
            // 0x2aa51c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA520u; }
        if (ctx->pc != 0x2AA520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA520u; }
        if (ctx->pc != 0x2AA520u) { return; }
    }
    ctx->pc = 0x2AA520u;
label_2aa520:
    // 0x2aa520: 0x10000017  b           . + 4 + (0x17 << 2)
label_2aa524:
    if (ctx->pc == 0x2AA524u) {
        ctx->pc = 0x2AA524u;
            // 0x2aa524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA528u;
        goto label_2aa528;
    }
    ctx->pc = 0x2AA520u;
    {
        const bool branch_taken_0x2aa520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA520u;
            // 0x2aa524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa520) {
            ctx->pc = 0x2AA580u;
            goto label_2aa580;
        }
    }
    ctx->pc = 0x2AA528u;
label_2aa528:
    // 0x2aa528: 0x40f809  jalr        $v0
label_2aa52c:
    if (ctx->pc == 0x2AA52Cu) {
        ctx->pc = 0x2AA52Cu;
            // 0x2aa52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA530u;
        goto label_2aa530;
    }
    ctx->pc = 0x2AA528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA530u);
        ctx->pc = 0x2AA52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA528u;
            // 0x2aa52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA530u; }
            if (ctx->pc != 0x2AA530u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA530u;
label_2aa530:
    // 0x2aa530: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_2aa534:
    if (ctx->pc == 0x2AA534u) {
        ctx->pc = 0x2AA534u;
            // 0x2aa534: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2AA538u;
        goto label_2aa538;
    }
    ctx->pc = 0x2AA530u;
    {
        const bool branch_taken_0x2aa530 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA530u;
            // 0x2aa534: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa530) {
            ctx->pc = 0x2AA584u;
            goto label_2aa584;
        }
    }
    ctx->pc = 0x2AA538u;
label_2aa538:
    // 0x2aa538: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2aa53c:
    if (ctx->pc == 0x2AA53Cu) {
        ctx->pc = 0x2AA53Cu;
            // 0x2aa53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA540u;
        goto label_2aa540;
    }
    ctx->pc = 0x2AA538u;
    {
        const bool branch_taken_0x2aa538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA538u;
            // 0x2aa53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa538) {
            ctx->pc = 0x2AA560u;
            goto label_2aa560;
        }
    }
    ctx->pc = 0x2AA540u;
label_2aa540:
    // 0x2aa540: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aa540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aa544:
    // 0x2aa544: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2aa544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2aa548:
    // 0x2aa548: 0x240600e5  addiu       $a2, $zero, 0xE5
    ctx->pc = 0x2aa548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_2aa54c:
    // 0x2aa54c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa550:
    // 0x2aa550: 0xc0a5648  jal         func_295920
label_2aa554:
    if (ctx->pc == 0x2AA554u) {
        ctx->pc = 0x2AA554u;
            // 0x2aa554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA558u;
        goto label_2aa558;
    }
    ctx->pc = 0x2AA550u;
    SET_GPR_U32(ctx, 31, 0x2AA558u);
    ctx->pc = 0x2AA554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA550u;
            // 0x2aa554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA558u; }
        if (ctx->pc != 0x2AA558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA558u; }
        if (ctx->pc != 0x2AA558u) { return; }
    }
    ctx->pc = 0x2AA558u;
label_2aa558:
    // 0x2aa558: 0x10000009  b           . + 4 + (0x9 << 2)
label_2aa55c:
    if (ctx->pc == 0x2AA55Cu) {
        ctx->pc = 0x2AA55Cu;
            // 0x2aa55c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA560u;
        goto label_2aa560;
    }
    ctx->pc = 0x2AA558u;
    {
        const bool branch_taken_0x2aa558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA558u;
            // 0x2aa55c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa558) {
            ctx->pc = 0x2AA580u;
            goto label_2aa580;
        }
    }
    ctx->pc = 0x2AA560u;
label_2aa560:
    // 0x2aa560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa564:
    // 0x2aa564: 0xc0ac0a8  jal         func_2B02A0
label_2aa568:
    if (ctx->pc == 0x2AA568u) {
        ctx->pc = 0x2AA568u;
            // 0x2aa568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA56Cu;
        goto label_2aa56c;
    }
    ctx->pc = 0x2AA564u;
    SET_GPR_U32(ctx, 31, 0x2AA56Cu);
    ctx->pc = 0x2AA568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA564u;
            // 0x2aa568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02A0u;
    if (runtime->hasFunction(0x2B02A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA56Cu; }
        if (ctx->pc != 0x2AA56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B02A0_0x2b02a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA56Cu; }
        if (ctx->pc != 0x2AA56Cu) { return; }
    }
    ctx->pc = 0x2AA56Cu;
label_2aa56c:
    // 0x2aa56c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2aa570:
    if (ctx->pc == 0x2AA570u) {
        ctx->pc = 0x2AA570u;
            // 0x2aa570: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2AA574u;
        goto label_2aa574;
    }
    ctx->pc = 0x2AA56Cu;
    {
        const bool branch_taken_0x2aa56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA56Cu;
            // 0x2aa570: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa56c) {
            ctx->pc = 0x2AA584u;
            goto label_2aa584;
        }
    }
    ctx->pc = 0x2AA574u;
label_2aa574:
    // 0x2aa574: 0xc0ac536  jal         func_2B14D8
label_2aa578:
    if (ctx->pc == 0x2AA578u) {
        ctx->pc = 0x2AA578u;
            // 0x2aa578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA57Cu;
        goto label_2aa57c;
    }
    ctx->pc = 0x2AA574u;
    SET_GPR_U32(ctx, 31, 0x2AA57Cu);
    ctx->pc = 0x2AA578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA574u;
            // 0x2aa578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B14D8u;
    if (runtime->hasFunction(0x2B14D8u)) {
        auto targetFn = runtime->lookupFunction(0x2B14D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA57Cu; }
        if (ctx->pc != 0x2AA57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B14D8_0x2b14d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA57Cu; }
        if (ctx->pc != 0x2AA57Cu) { return; }
    }
    ctx->pc = 0x2AA57Cu;
label_2aa57c:
    // 0x2aa57c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aa57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aa580:
    // 0x2aa580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aa580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa584:
    // 0x2aa584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aa584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa588:
    // 0x2aa588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aa588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa58c:
    // 0x2aa58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa590:
    // 0x2aa590: 0x3e00008  jr          $ra
label_2aa594:
    if (ctx->pc == 0x2AA594u) {
        ctx->pc = 0x2AA594u;
            // 0x2aa594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2AA598u;
        goto label_2aa598;
    }
    ctx->pc = 0x2AA590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA590u;
            // 0x2aa594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA598u;
label_2aa598:
    // 0x2aa598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2aa59c:
    // 0x2aa59c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aa59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2aa5a0:
    // 0x2aa5a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aa5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2aa5a4:
    // 0x2aa5a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2aa5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2aa5a8:
    // 0x2aa5a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aa5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2aa5ac:
    // 0x2aa5ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aa5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2aa5b0:
    // 0x2aa5b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aa5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2aa5b4:
    // 0x2aa5b4: 0xc0491f2  jal         func_1247C8
label_2aa5b8:
    if (ctx->pc == 0x2AA5B8u) {
        ctx->pc = 0x2AA5B8u;
            // 0x2aa5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5BCu;
        goto label_2aa5bc;
    }
    ctx->pc = 0x2AA5B4u;
    SET_GPR_U32(ctx, 31, 0x2AA5BCu);
    ctx->pc = 0x2AA5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5B4u;
            // 0x2aa5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5BCu; }
        if (ctx->pc != 0x2AA5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5BCu; }
        if (ctx->pc != 0x2AA5BCu) { return; }
    }
    ctx->pc = 0x2AA5BCu;
label_2aa5bc:
    // 0x2aa5bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aa5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2aa5c0:
    // 0x2aa5c0: 0xc0ac604  jal         func_2B1810
label_2aa5c4:
    if (ctx->pc == 0x2AA5C4u) {
        ctx->pc = 0x2AA5C4u;
            // 0x2aa5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5C8u;
        goto label_2aa5c8;
    }
    ctx->pc = 0x2AA5C0u;
    SET_GPR_U32(ctx, 31, 0x2AA5C8u);
    ctx->pc = 0x2AA5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5C0u;
            // 0x2aa5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5C8u; }
        if (ctx->pc != 0x2AA5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5C8u; }
        if (ctx->pc != 0x2AA5C8u) { return; }
    }
    ctx->pc = 0x2AA5C8u;
label_2aa5c8:
    // 0x2aa5c8: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2aa5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2aa5cc:
    // 0x2aa5cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2aa5d0:
    if (ctx->pc == 0x2AA5D0u) {
        ctx->pc = 0x2AA5D4u;
        goto label_2aa5d4;
    }
    ctx->pc = 0x2AA5CCu;
    {
        const bool branch_taken_0x2aa5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5cc) {
            ctx->pc = 0x2AA654u;
            goto label_2aa654;
        }
    }
    ctx->pc = 0x2AA5D4u;
label_2aa5d4:
    // 0x2aa5d4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2aa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2aa5d8:
    // 0x2aa5d8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2aa5dc:
    if (ctx->pc == 0x2AA5DCu) {
        ctx->pc = 0x2AA5E0u;
        goto label_2aa5e0;
    }
    ctx->pc = 0x2AA5D8u;
    {
        const bool branch_taken_0x2aa5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5d8) {
            ctx->pc = 0x2AA654u;
            goto label_2aa654;
        }
    }
    ctx->pc = 0x2AA5E0u;
label_2aa5e0:
    // 0x2aa5e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2aa5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2aa5e4:
    // 0x2aa5e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2aa5e8:
    if (ctx->pc == 0x2AA5E8u) {
        ctx->pc = 0x2AA5E8u;
            // 0x2aa5e8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AA5ECu;
        goto label_2aa5ec;
    }
    ctx->pc = 0x2AA5E4u;
    {
        const bool branch_taken_0x2aa5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5E4u;
            // 0x2aa5e8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5e4) {
            ctx->pc = 0x2AA608u;
            goto label_2aa608;
        }
    }
    ctx->pc = 0x2AA5ECu;
label_2aa5ec:
    // 0x2aa5ec: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2aa5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_2aa5f0:
    // 0x2aa5f0: 0x2406044d  addiu       $a2, $zero, 0x44D
    ctx->pc = 0x2aa5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
label_2aa5f4:
    // 0x2aa5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa5f8:
    // 0x2aa5f8: 0xc0a5648  jal         func_295920
label_2aa5fc:
    if (ctx->pc == 0x2AA5FCu) {
        ctx->pc = 0x2AA5FCu;
            // 0x2aa5fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA600u;
        goto label_2aa600;
    }
    ctx->pc = 0x2AA5F8u;
    SET_GPR_U32(ctx, 31, 0x2AA600u);
    ctx->pc = 0x2AA5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5F8u;
            // 0x2aa5fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA600u; }
        if (ctx->pc != 0x2AA600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA600u; }
        if (ctx->pc != 0x2AA600u) { return; }
    }
    ctx->pc = 0x2AA600u;
label_2aa600:
    // 0x2aa600: 0x10000017  b           . + 4 + (0x17 << 2)
label_2aa604:
    if (ctx->pc == 0x2AA604u) {
        ctx->pc = 0x2AA604u;
            // 0x2aa604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA608u;
        goto label_2aa608;
    }
    ctx->pc = 0x2AA600u;
    {
        const bool branch_taken_0x2aa600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA600u;
            // 0x2aa604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa600) {
            ctx->pc = 0x2AA660u;
            goto label_2aa660;
        }
    }
    ctx->pc = 0x2AA608u;
label_2aa608:
    // 0x2aa608: 0x40f809  jalr        $v0
label_2aa60c:
    if (ctx->pc == 0x2AA60Cu) {
        ctx->pc = 0x2AA60Cu;
            // 0x2aa60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA610u;
        goto label_2aa610;
    }
    ctx->pc = 0x2AA608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA610u);
        ctx->pc = 0x2AA60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA608u;
            // 0x2aa60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA610u; }
            if (ctx->pc != 0x2AA610u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA610u;
label_2aa610:
    // 0x2aa610: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_2aa614:
    if (ctx->pc == 0x2AA614u) {
        ctx->pc = 0x2AA614u;
            // 0x2aa614: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2AA618u;
        goto label_2aa618;
    }
    ctx->pc = 0x2AA610u;
    {
        const bool branch_taken_0x2aa610 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA610u;
            // 0x2aa614: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa610) {
            ctx->pc = 0x2AA664u;
            goto label_2aa664;
        }
    }
    ctx->pc = 0x2AA618u;
label_2aa618:
    // 0x2aa618: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2aa61c:
    if (ctx->pc == 0x2AA61Cu) {
        ctx->pc = 0x2AA61Cu;
            // 0x2aa61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA620u;
        goto label_2aa620;
    }
    ctx->pc = 0x2AA618u;
    {
        const bool branch_taken_0x2aa618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA618u;
            // 0x2aa61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa618) {
            ctx->pc = 0x2AA640u;
            goto label_2aa640;
        }
    }
    ctx->pc = 0x2AA620u;
label_2aa620:
    // 0x2aa620: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aa620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aa624:
    // 0x2aa624: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2aa624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_2aa628:
    // 0x2aa628: 0x240600e5  addiu       $a2, $zero, 0xE5
    ctx->pc = 0x2aa628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_2aa62c:
    // 0x2aa62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa630:
    // 0x2aa630: 0xc0a5648  jal         func_295920
label_2aa634:
    if (ctx->pc == 0x2AA634u) {
        ctx->pc = 0x2AA634u;
            // 0x2aa634: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA638u;
        goto label_2aa638;
    }
    ctx->pc = 0x2AA630u;
    SET_GPR_U32(ctx, 31, 0x2AA638u);
    ctx->pc = 0x2AA634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA630u;
            // 0x2aa634: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA638u; }
        if (ctx->pc != 0x2AA638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA638u; }
        if (ctx->pc != 0x2AA638u) { return; }
    }
    ctx->pc = 0x2AA638u;
label_2aa638:
    // 0x2aa638: 0x10000009  b           . + 4 + (0x9 << 2)
label_2aa63c:
    if (ctx->pc == 0x2AA63Cu) {
        ctx->pc = 0x2AA63Cu;
            // 0x2aa63c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA640u;
        goto label_2aa640;
    }
    ctx->pc = 0x2AA638u;
    {
        const bool branch_taken_0x2aa638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA638u;
            // 0x2aa63c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa638) {
            ctx->pc = 0x2AA660u;
            goto label_2aa660;
        }
    }
    ctx->pc = 0x2AA640u;
label_2aa640:
    // 0x2aa640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa644:
    // 0x2aa644: 0xc0ac0b8  jal         func_2B02E0
label_2aa648:
    if (ctx->pc == 0x2AA648u) {
        ctx->pc = 0x2AA648u;
            // 0x2aa648: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA64Cu;
        goto label_2aa64c;
    }
    ctx->pc = 0x2AA644u;
    SET_GPR_U32(ctx, 31, 0x2AA64Cu);
    ctx->pc = 0x2AA648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA644u;
            // 0x2aa648: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA64Cu; }
        if (ctx->pc != 0x2AA64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B02E0_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA64Cu; }
        if (ctx->pc != 0x2AA64Cu) { return; }
    }
    ctx->pc = 0x2AA64Cu;
label_2aa64c:
    // 0x2aa64c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2aa650:
    if (ctx->pc == 0x2AA650u) {
        ctx->pc = 0x2AA650u;
            // 0x2aa650: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2AA654u;
        goto label_2aa654;
    }
    ctx->pc = 0x2AA64Cu;
    {
        const bool branch_taken_0x2aa64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA64Cu;
            // 0x2aa650: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa64c) {
            ctx->pc = 0x2AA664u;
            goto label_2aa664;
        }
    }
    ctx->pc = 0x2AA654u;
label_2aa654:
    // 0x2aa654: 0xc0ac536  jal         func_2B14D8
label_2aa658:
    if (ctx->pc == 0x2AA658u) {
        ctx->pc = 0x2AA658u;
            // 0x2aa658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA65Cu;
        goto label_2aa65c;
    }
    ctx->pc = 0x2AA654u;
    SET_GPR_U32(ctx, 31, 0x2AA65Cu);
    ctx->pc = 0x2AA658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA654u;
            // 0x2aa658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B14D8u;
    if (runtime->hasFunction(0x2B14D8u)) {
        auto targetFn = runtime->lookupFunction(0x2B14D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA65Cu; }
        if (ctx->pc != 0x2AA65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B14D8_0x2b14d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA65Cu; }
        if (ctx->pc != 0x2AA65Cu) { return; }
    }
    ctx->pc = 0x2AA65Cu;
label_2aa65c:
    // 0x2aa65c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aa65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aa660:
    // 0x2aa660: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aa660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa664:
    // 0x2aa664: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aa664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa668:
    // 0x2aa668: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aa668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa66c:
    // 0x2aa66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa670:
    // 0x2aa670: 0x3e00008  jr          $ra
label_2aa674:
    if (ctx->pc == 0x2AA674u) {
        ctx->pc = 0x2AA674u;
            // 0x2aa674: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2AA678u;
        goto label_fallthrough_0x2aa670;
    }
    ctx->pc = 0x2AA670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA670u;
            // 0x2aa674: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2aa670:
    ctx->pc = 0x2AA678u;
    ctx->pc = 0x2aa678u;
}
