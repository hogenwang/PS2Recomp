#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB3B0
// Address: 0x1ab3b0 - 0x1ab6f0
void sub_001AB3B0_0x1ab3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB3B0_0x1ab3b0");
#endif

    switch (ctx->pc) {
        case 0x1ab3b0u: goto label_1ab3b0;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3b8u: goto label_1ab3b8;
        case 0x1ab3bcu: goto label_1ab3bc;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3c8u: goto label_1ab3c8;
        case 0x1ab3ccu: goto label_1ab3cc;
        case 0x1ab3d0u: goto label_1ab3d0;
        case 0x1ab3d4u: goto label_1ab3d4;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3dcu: goto label_1ab3dc;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3e4u: goto label_1ab3e4;
        case 0x1ab3e8u: goto label_1ab3e8;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab3f4u: goto label_1ab3f4;
        case 0x1ab3f8u: goto label_1ab3f8;
        case 0x1ab3fcu: goto label_1ab3fc;
        case 0x1ab400u: goto label_1ab400;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab408u: goto label_1ab408;
        case 0x1ab40cu: goto label_1ab40c;
        case 0x1ab410u: goto label_1ab410;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab418u: goto label_1ab418;
        case 0x1ab41cu: goto label_1ab41c;
        case 0x1ab420u: goto label_1ab420;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab42cu: goto label_1ab42c;
        case 0x1ab430u: goto label_1ab430;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab438u: goto label_1ab438;
        case 0x1ab43cu: goto label_1ab43c;
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab444u: goto label_1ab444;
        case 0x1ab448u: goto label_1ab448;
        case 0x1ab44cu: goto label_1ab44c;
        case 0x1ab450u: goto label_1ab450;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab458u: goto label_1ab458;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab468u: goto label_1ab468;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab470u: goto label_1ab470;
        case 0x1ab474u: goto label_1ab474;
        case 0x1ab478u: goto label_1ab478;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab480u: goto label_1ab480;
        case 0x1ab484u: goto label_1ab484;
        case 0x1ab488u: goto label_1ab488;
        case 0x1ab48cu: goto label_1ab48c;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab494u: goto label_1ab494;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab49cu: goto label_1ab49c;
        case 0x1ab4a0u: goto label_1ab4a0;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4a8u: goto label_1ab4a8;
        case 0x1ab4acu: goto label_1ab4ac;
        case 0x1ab4b0u: goto label_1ab4b0;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4bcu: goto label_1ab4bc;
        case 0x1ab4c0u: goto label_1ab4c0;
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4c8u: goto label_1ab4c8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4d0u: goto label_1ab4d0;
        case 0x1ab4d4u: goto label_1ab4d4;
        case 0x1ab4d8u: goto label_1ab4d8;
        case 0x1ab4dcu: goto label_1ab4dc;
        case 0x1ab4e0u: goto label_1ab4e0;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab4e8u: goto label_1ab4e8;
        case 0x1ab4ecu: goto label_1ab4ec;
        case 0x1ab4f0u: goto label_1ab4f0;
        case 0x1ab4f4u: goto label_1ab4f4;
        case 0x1ab4f8u: goto label_1ab4f8;
        case 0x1ab4fcu: goto label_1ab4fc;
        case 0x1ab500u: goto label_1ab500;
        case 0x1ab504u: goto label_1ab504;
        case 0x1ab508u: goto label_1ab508;
        case 0x1ab50cu: goto label_1ab50c;
        case 0x1ab510u: goto label_1ab510;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab518u: goto label_1ab518;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab520u: goto label_1ab520;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab528u: goto label_1ab528;
        case 0x1ab52cu: goto label_1ab52c;
        case 0x1ab530u: goto label_1ab530;
        case 0x1ab534u: goto label_1ab534;
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab540u: goto label_1ab540;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab54cu: goto label_1ab54c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab554u: goto label_1ab554;
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab55cu: goto label_1ab55c;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab568u: goto label_1ab568;
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab574u: goto label_1ab574;
        case 0x1ab578u: goto label_1ab578;
        case 0x1ab57cu: goto label_1ab57c;
        case 0x1ab580u: goto label_1ab580;
        case 0x1ab584u: goto label_1ab584;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab590u: goto label_1ab590;
        case 0x1ab594u: goto label_1ab594;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab59cu: goto label_1ab59c;
        case 0x1ab5a0u: goto label_1ab5a0;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5a8u: goto label_1ab5a8;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5b0u: goto label_1ab5b0;
        case 0x1ab5b4u: goto label_1ab5b4;
        case 0x1ab5b8u: goto label_1ab5b8;
        case 0x1ab5bcu: goto label_1ab5bc;
        case 0x1ab5c0u: goto label_1ab5c0;
        case 0x1ab5c4u: goto label_1ab5c4;
        case 0x1ab5c8u: goto label_1ab5c8;
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5d0u: goto label_1ab5d0;
        case 0x1ab5d4u: goto label_1ab5d4;
        case 0x1ab5d8u: goto label_1ab5d8;
        case 0x1ab5dcu: goto label_1ab5dc;
        case 0x1ab5e0u: goto label_1ab5e0;
        case 0x1ab5e4u: goto label_1ab5e4;
        case 0x1ab5e8u: goto label_1ab5e8;
        case 0x1ab5ecu: goto label_1ab5ec;
        case 0x1ab5f0u: goto label_1ab5f0;
        case 0x1ab5f4u: goto label_1ab5f4;
        case 0x1ab5f8u: goto label_1ab5f8;
        case 0x1ab5fcu: goto label_1ab5fc;
        case 0x1ab600u: goto label_1ab600;
        case 0x1ab604u: goto label_1ab604;
        case 0x1ab608u: goto label_1ab608;
        case 0x1ab60cu: goto label_1ab60c;
        case 0x1ab610u: goto label_1ab610;
        case 0x1ab614u: goto label_1ab614;
        case 0x1ab618u: goto label_1ab618;
        case 0x1ab61cu: goto label_1ab61c;
        case 0x1ab620u: goto label_1ab620;
        case 0x1ab624u: goto label_1ab624;
        case 0x1ab628u: goto label_1ab628;
        case 0x1ab62cu: goto label_1ab62c;
        case 0x1ab630u: goto label_1ab630;
        case 0x1ab634u: goto label_1ab634;
        case 0x1ab638u: goto label_1ab638;
        case 0x1ab63cu: goto label_1ab63c;
        case 0x1ab640u: goto label_1ab640;
        case 0x1ab644u: goto label_1ab644;
        case 0x1ab648u: goto label_1ab648;
        case 0x1ab64cu: goto label_1ab64c;
        case 0x1ab650u: goto label_1ab650;
        case 0x1ab654u: goto label_1ab654;
        case 0x1ab658u: goto label_1ab658;
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab660u: goto label_1ab660;
        case 0x1ab664u: goto label_1ab664;
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab66cu: goto label_1ab66c;
        case 0x1ab670u: goto label_1ab670;
        case 0x1ab674u: goto label_1ab674;
        case 0x1ab678u: goto label_1ab678;
        case 0x1ab67cu: goto label_1ab67c;
        case 0x1ab680u: goto label_1ab680;
        case 0x1ab684u: goto label_1ab684;
        case 0x1ab688u: goto label_1ab688;
        case 0x1ab68cu: goto label_1ab68c;
        case 0x1ab690u: goto label_1ab690;
        case 0x1ab694u: goto label_1ab694;
        case 0x1ab698u: goto label_1ab698;
        case 0x1ab69cu: goto label_1ab69c;
        case 0x1ab6a0u: goto label_1ab6a0;
        case 0x1ab6a4u: goto label_1ab6a4;
        case 0x1ab6a8u: goto label_1ab6a8;
        case 0x1ab6acu: goto label_1ab6ac;
        case 0x1ab6b0u: goto label_1ab6b0;
        case 0x1ab6b4u: goto label_1ab6b4;
        case 0x1ab6b8u: goto label_1ab6b8;
        case 0x1ab6bcu: goto label_1ab6bc;
        case 0x1ab6c0u: goto label_1ab6c0;
        case 0x1ab6c4u: goto label_1ab6c4;
        case 0x1ab6c8u: goto label_1ab6c8;
        case 0x1ab6ccu: goto label_1ab6cc;
        case 0x1ab6d0u: goto label_1ab6d0;
        case 0x1ab6d4u: goto label_1ab6d4;
        case 0x1ab6d8u: goto label_1ab6d8;
        case 0x1ab6dcu: goto label_1ab6dc;
        case 0x1ab6e0u: goto label_1ab6e0;
        case 0x1ab6e4u: goto label_1ab6e4;
        case 0x1ab6e8u: goto label_1ab6e8;
        case 0x1ab6ecu: goto label_1ab6ec;
        default: break;
    }

    ctx->pc = 0x1ab3b0u;

label_1ab3b0:
    // 0x1ab3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab3b4:
    // 0x1ab3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ab3b8:
    // 0x1ab3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3bc:
    // 0x1ab3bc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1ab3c0:
    if (ctx->pc == 0x1AB3C0u) {
        ctx->pc = 0x1AB3C0u;
            // 0x1ab3c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1AB3C4u;
        goto label_1ab3c4;
    }
    ctx->pc = 0x1AB3BCu;
    {
        const bool branch_taken_0x1ab3bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3BCu;
            // 0x1ab3c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3bc) {
            ctx->pc = 0x1AB3E4u;
            goto label_1ab3e4;
        }
    }
    ctx->pc = 0x1AB3C4u;
label_1ab3c4:
    // 0x1ab3c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ab3c8:
    // 0x1ab3c8: 0xc06f6f0  jal         func_1BDBC0
label_1ab3cc:
    if (ctx->pc == 0x1AB3CCu) {
        ctx->pc = 0x1AB3CCu;
            // 0x1ab3cc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB3D0u;
        goto label_1ab3d0;
    }
    ctx->pc = 0x1AB3C8u;
    SET_GPR_U32(ctx, 31, 0x1AB3D0u);
    ctx->pc = 0x1AB3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3C8u;
            // 0x1ab3cc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC0u;
    if (runtime->hasFunction(0x1BDBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BDBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D0u; }
        if (ctx->pc != 0x1AB3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDBC0_0x1bdbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D0u; }
        if (ctx->pc != 0x1AB3D0u) { return; }
    }
    ctx->pc = 0x1AB3D0u;
label_1ab3d0:
    // 0x1ab3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3d4:
    // 0x1ab3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3d8:
    // 0x1ab3d8: 0xc049cb6  jal         func_1272D8
label_1ab3dc:
    if (ctx->pc == 0x1AB3DCu) {
        ctx->pc = 0x1AB3DCu;
            // 0x1ab3dc: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x1AB3E0u;
        goto label_1ab3e0;
    }
    ctx->pc = 0x1AB3D8u;
    SET_GPR_U32(ctx, 31, 0x1AB3E0u);
    ctx->pc = 0x1AB3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3D8u;
            // 0x1ab3dc: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3E0u; }
        if (ctx->pc != 0x1AB3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3E0u; }
        if (ctx->pc != 0x1AB3E0u) { return; }
    }
    ctx->pc = 0x1AB3E0u;
label_1ab3e0:
    // 0x1ab3e0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1ab3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_1ab3e4:
    // 0x1ab3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab3e8:
    // 0x1ab3e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ab3ec:
    // 0x1ab3ec: 0x3e00008  jr          $ra
label_1ab3f0:
    if (ctx->pc == 0x1AB3F0u) {
        ctx->pc = 0x1AB3F0u;
            // 0x1ab3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1AB3F4u;
        goto label_1ab3f4;
    }
    ctx->pc = 0x1AB3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3ECu;
            // 0x1ab3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB3F4u;
label_1ab3f4:
    // 0x1ab3f4: 0x0  nop
    ctx->pc = 0x1ab3f4u;
    // NOP
label_1ab3f8:
    // 0x1ab3f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ab3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ab3fc:
    // 0x1ab3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab400:
    // 0x1ab400: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1ab400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1ab404:
    // 0x1ab404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab408:
    // 0x1ab408: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1ab408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1ab40c:
    // 0x1ab40c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ab40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab410:
    // 0x1ab410: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ab410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1ab414:
    // 0x1ab414: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ab414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ab418:
    // 0x1ab418: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1ab418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1ab41c:
    // 0x1ab41c: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1ab420:
    // 0x1ab420: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1ab420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1ab424:
    // 0x1ab424: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x1ab424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1ab428:
    // 0x1ab428: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1ab428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_1ab42c:
    // 0x1ab42c: 0x2615000d  addiu       $s5, $s0, 0xD
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1ab430:
    // 0x1ab430: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1ab430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1ab434:
    // 0x1ab434: 0x2616000e  addiu       $s6, $s0, 0xE
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_1ab438:
    // 0x1ab438: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1ab438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_1ab43c:
    // 0x1ab43c: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x1ab43cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ab440:
    // 0x1ab440: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1ab440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1ab444:
    // 0x1ab444: 0x261e000f  addiu       $fp, $s0, 0xF
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_1ab448:
    // 0x1ab448: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1ab448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_1ab44c:
    // 0x1ab44c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ab44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ab450:
    // 0x1ab450: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1ab450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1ab454:
    // 0x1ab454: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1ab458:
    // 0x1ab458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab45c:
    // 0x1ab45c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab460:
    // 0x1ab460: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ab460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ab464:
    // 0x1ab464: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ab464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab468:
    // 0x1ab468: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1ab468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ab46c:
    // 0x1ab46c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1ab46cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ab470:
    // 0x1ab470: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ab470u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab474:
    // 0x1ab474: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1ab474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1ab478:
    // 0x1ab478: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1ab478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1ab47c:
    // 0x1ab47c: 0xc06b540  jal         func_1AD500
label_1ab480:
    if (ctx->pc == 0x1AB480u) {
        ctx->pc = 0x1AB480u;
            // 0x1ab480: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->pc = 0x1AB484u;
        goto label_1ab484;
    }
    ctx->pc = 0x1AB47Cu;
    SET_GPR_U32(ctx, 31, 0x1AB484u);
    ctx->pc = 0x1AB480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB47Cu;
            // 0x1ab480: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD500u;
    if (runtime->hasFunction(0x1AD500u)) {
        auto targetFn = runtime->lookupFunction(0x1AD500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB484u; }
        if (ctx->pc != 0x1AB484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD500_0x1ad500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB484u; }
        if (ctx->pc != 0x1AB484u) { return; }
    }
    ctx->pc = 0x1AB484u;
label_1ab484:
    // 0x1ab484: 0x440008b  bltz        $v0, . + 4 + (0x8B << 2)
label_1ab488:
    if (ctx->pc == 0x1AB488u) {
        ctx->pc = 0x1AB488u;
            // 0x1ab488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB48Cu;
        goto label_1ab48c;
    }
    ctx->pc = 0x1AB484u;
    {
        const bool branch_taken_0x1ab484 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB484u;
            // 0x1ab488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab484) {
            ctx->pc = 0x1AB6B4u;
            goto label_1ab6b4;
        }
    }
    ctx->pc = 0x1AB48Cu;
label_1ab48c:
    // 0x1ab48c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1ab48cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1ab490:
    // 0x1ab490: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1ab490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ab494:
    // 0x1ab494: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1ab498:
    if (ctx->pc == 0x1AB498u) {
        ctx->pc = 0x1AB498u;
            // 0x1ab498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB49Cu;
        goto label_1ab49c;
    }
    ctx->pc = 0x1AB494u;
    {
        const bool branch_taken_0x1ab494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB494u;
            // 0x1ab498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab494) {
            ctx->pc = 0x1AB580u;
            goto label_1ab580;
        }
    }
    ctx->pc = 0x1AB49Cu;
label_1ab49c:
    // 0x1ab49c: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1ab49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1ab4a0:
    // 0x1ab4a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1ab4a4:
    if (ctx->pc == 0x1AB4A4u) {
        ctx->pc = 0x1AB4A4u;
            // 0x1ab4a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1AB4A8u;
        goto label_1ab4a8;
    }
    ctx->pc = 0x1AB4A0u;
    {
        const bool branch_taken_0x1ab4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4a0) {
            ctx->pc = 0x1AB4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4A0u;
            // 0x1ab4a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB4C8u;
            goto label_1ab4c8;
        }
    }
    ctx->pc = 0x1AB4A8u;
label_1ab4a8:
    // 0x1ab4a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1ab4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1ab4ac:
    // 0x1ab4ac: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_1ab4b0:
    // 0x1ab4b0: 0x24847290  addiu       $a0, $a0, 0x7290
    ctx->pc = 0x1ab4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29328));
label_1ab4b4:
    // 0x1ab4b4: 0xc06ba28  jal         func_1AE8A0
label_1ab4b8:
    if (ctx->pc == 0x1AB4B8u) {
        ctx->pc = 0x1AB4B8u;
            // 0x1ab4b8: 0x24a572b0  addiu       $a1, $a1, 0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29360));
        ctx->pc = 0x1AB4BCu;
        goto label_1ab4bc;
    }
    ctx->pc = 0x1AB4B4u;
    SET_GPR_U32(ctx, 31, 0x1AB4BCu);
    ctx->pc = 0x1AB4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4B4u;
            // 0x1ab4b8: 0x24a572b0  addiu       $a1, $a1, 0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (runtime->hasFunction(0x1AE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4BCu; }
        if (ctx->pc != 0x1AB4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE8A0_0x1ae8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4BCu; }
        if (ctx->pc != 0x1AB4BCu) { return; }
    }
    ctx->pc = 0x1AB4BCu;
label_1ab4bc:
    // 0x1ab4bc: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1ab4c0:
    if (ctx->pc == 0x1AB4C0u) {
        ctx->pc = 0x1AB4C0u;
            // 0x1ab4c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AB4C4u;
        goto label_1ab4c4;
    }
    ctx->pc = 0x1AB4BCu;
    {
        const bool branch_taken_0x1ab4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4BCu;
            // 0x1ab4c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4bc) {
            ctx->pc = 0x1AB6B4u;
            goto label_1ab6b4;
        }
    }
    ctx->pc = 0x1AB4C4u;
label_1ab4c4:
    // 0x1ab4c4: 0x0  nop
    ctx->pc = 0x1ab4c4u;
    // NOP
label_1ab4c8:
    // 0x1ab4c8: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1ab4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1ab4cc:
    // 0x1ab4cc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1ab4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ab4d0:
    // 0x1ab4d0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ab4d4:
    // 0x1ab4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4d8:
    // 0x1ab4d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4dc:
    // 0x1ab4dc: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1ab4e0:
    // 0x1ab4e0: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x1ab4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_1ab4e4:
    // 0x1ab4e4: 0x27a70043  addiu       $a3, $sp, 0x43
    ctx->pc = 0x1ab4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
label_1ab4e8:
    // 0x1ab4e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ab4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ab4ec:
    // 0x1ab4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ab4f0:
    // 0x1ab4f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1ab4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ab4f4:
    // 0x1ab4f4: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x1ab4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ab4f8:
    // 0x1ab4f8: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x1ab4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
label_1ab4fc:
    // 0x1ab4fc: 0xa6080098  sh          $t0, 0x98($s0)
    ctx->pc = 0x1ab4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 8));
label_1ab500:
    // 0x1ab500: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1ab500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_1ab504:
    // 0x1ab504: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1ab504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_1ab508:
    // 0x1ab508: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1ab508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_1ab50c:
    // 0x1ab50c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ab50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ab510:
    // 0x1ab510: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ab510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1ab514:
    // 0x1ab514: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ab514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1ab518:
    // 0x1ab518: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ab518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1ab51c:
    // 0x1ab51c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1ab51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1ab520:
    // 0x1ab520: 0xc06b5a0  jal         func_1AD680
label_1ab524:
    if (ctx->pc == 0x1AB524u) {
        ctx->pc = 0x1AB524u;
            // 0x1ab524: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB528u;
        goto label_1ab528;
    }
    ctx->pc = 0x1AB520u;
    SET_GPR_U32(ctx, 31, 0x1AB528u);
    ctx->pc = 0x1AB524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB520u;
            // 0x1ab524: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD680u;
    if (runtime->hasFunction(0x1AD680u)) {
        auto targetFn = runtime->lookupFunction(0x1AD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB528u; }
        if (ctx->pc != 0x1AB528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD680_0x1ad680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB528u; }
        if (ctx->pc != 0x1AB528u) { return; }
    }
    ctx->pc = 0x1AB528u;
label_1ab528:
    // 0x1ab528: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_1ab52c:
    if (ctx->pc == 0x1AB52Cu) {
        ctx->pc = 0x1AB52Cu;
            // 0x1ab52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB530u;
        goto label_1ab530;
    }
    ctx->pc = 0x1AB528u;
    {
        const bool branch_taken_0x1ab528 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB528u;
            // 0x1ab52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab528) {
            ctx->pc = 0x1AB604u;
            goto label_1ab604;
        }
    }
    ctx->pc = 0x1AB530u;
label_1ab530:
    // 0x1ab530: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1ab530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ab534:
    // 0x1ab534: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x1ab534u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_1ab538:
    // 0x1ab538: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1ab538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
label_1ab53c:
    // 0x1ab53c: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x1ab53cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_1ab540:
    // 0x1ab540: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x1ab540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1ab544:
    // 0x1ab544: 0x27aa0036  addiu       $t2, $sp, 0x36
    ctx->pc = 0x1ab544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
label_1ab548:
    // 0x1ab548: 0xc06aef8  jal         func_1ABBE0
label_1ab54c:
    if (ctx->pc == 0x1AB54Cu) {
        ctx->pc = 0x1AB54Cu;
            // 0x1ab54c: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1AB550u;
        goto label_1ab550;
    }
    ctx->pc = 0x1AB548u;
    SET_GPR_U32(ctx, 31, 0x1AB550u);
    ctx->pc = 0x1AB54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB548u;
            // 0x1ab54c: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBE0u;
    if (runtime->hasFunction(0x1ABBE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB550u; }
        if (ctx->pc != 0x1AB550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABBE0_0x1abbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB550u; }
        if (ctx->pc != 0x1AB550u) { return; }
    }
    ctx->pc = 0x1AB550u;
label_1ab550:
    // 0x1ab550: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
label_1ab554:
    if (ctx->pc == 0x1AB554u) {
        ctx->pc = 0x1AB554u;
            // 0x1ab554: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AB558u;
        goto label_1ab558;
    }
    ctx->pc = 0x1AB550u;
    {
        const bool branch_taken_0x1ab550 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB550u;
            // 0x1ab554: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab550) {
            ctx->pc = 0x1AB6B4u;
            goto label_1ab6b4;
        }
    }
    ctx->pc = 0x1AB558u;
label_1ab558:
    // 0x1ab558: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ab558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ab55c:
    // 0x1ab55c: 0x8c42e690  lw          $v0, -0x1970($v0)
    ctx->pc = 0x1ab55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960784)));
label_1ab560:
    // 0x1ab560: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_1ab564:
    if (ctx->pc == 0x1AB564u) {
        ctx->pc = 0x1AB564u;
            // 0x1ab564: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1AB568u;
        goto label_1ab568;
    }
    ctx->pc = 0x1AB560u;
    {
        const bool branch_taken_0x1ab560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab560) {
            ctx->pc = 0x1AB564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB560u;
            // 0x1ab564: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB680u;
            goto label_1ab680;
        }
    }
    ctx->pc = 0x1AB568u;
label_1ab568:
    // 0x1ab568: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x1ab568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1ab56c:
    // 0x1ab56c: 0x40f809  jalr        $v0
label_1ab570:
    if (ctx->pc == 0x1AB570u) {
        ctx->pc = 0x1AB570u;
            // 0x1ab570: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AB574u;
        goto label_1ab574;
    }
    ctx->pc = 0x1AB56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB574u);
        ctx->pc = 0x1AB570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB56Cu;
            // 0x1ab570: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB574u; }
            if (ctx->pc != 0x1AB574u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB574u;
label_1ab574:
    // 0x1ab574: 0x10000042  b           . + 4 + (0x42 << 2)
label_1ab578:
    if (ctx->pc == 0x1AB578u) {
        ctx->pc = 0x1AB578u;
            // 0x1ab578: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1AB57Cu;
        goto label_1ab57c;
    }
    ctx->pc = 0x1AB574u;
    {
        const bool branch_taken_0x1ab574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB574u;
            // 0x1ab578: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab574) {
            ctx->pc = 0x1AB680u;
            goto label_1ab680;
        }
    }
    ctx->pc = 0x1AB57Cu;
label_1ab57c:
    // 0x1ab57c: 0x0  nop
    ctx->pc = 0x1ab57cu;
    // NOP
label_1ab580:
    // 0x1ab580: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab584:
    // 0x1ab584: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x1ab584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_1ab588:
    // 0x1ab588: 0xc06b5a0  jal         func_1AD680
label_1ab58c:
    if (ctx->pc == 0x1AB58Cu) {
        ctx->pc = 0x1AB58Cu;
            // 0x1ab58c: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->pc = 0x1AB590u;
        goto label_1ab590;
    }
    ctx->pc = 0x1AB588u;
    SET_GPR_U32(ctx, 31, 0x1AB590u);
    ctx->pc = 0x1AB58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB588u;
            // 0x1ab58c: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD680u;
    if (runtime->hasFunction(0x1AD680u)) {
        auto targetFn = runtime->lookupFunction(0x1AD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB590u; }
        if (ctx->pc != 0x1AB590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD680_0x1ad680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB590u; }
        if (ctx->pc != 0x1AB590u) { return; }
    }
    ctx->pc = 0x1AB590u;
label_1ab590:
    // 0x1ab590: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
label_1ab594:
    if (ctx->pc == 0x1AB594u) {
        ctx->pc = 0x1AB594u;
            // 0x1ab594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB598u;
        goto label_1ab598;
    }
    ctx->pc = 0x1AB590u;
    {
        const bool branch_taken_0x1ab590 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB590u;
            // 0x1ab594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab590) {
            ctx->pc = 0x1AB604u;
            goto label_1ab604;
        }
    }
    ctx->pc = 0x1AB598u;
label_1ab598:
    // 0x1ab598: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1ab598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ab59c:
    // 0x1ab59c: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x1ab59cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_1ab5a0:
    // 0x1ab5a0: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1ab5a4:
    // 0x1ab5a4: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x1ab5a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_1ab5a8:
    // 0x1ab5a8: 0x27a90046  addiu       $t1, $sp, 0x46
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_1ab5ac:
    // 0x1ab5ac: 0xc06aef8  jal         func_1ABBE0
label_1ab5b0:
    if (ctx->pc == 0x1AB5B0u) {
        ctx->pc = 0x1AB5B0u;
            // 0x1ab5b0: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1AB5B4u;
        goto label_1ab5b4;
    }
    ctx->pc = 0x1AB5ACu;
    SET_GPR_U32(ctx, 31, 0x1AB5B4u);
    ctx->pc = 0x1AB5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5ACu;
            // 0x1ab5b0: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBE0u;
    if (runtime->hasFunction(0x1ABBE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5B4u; }
        if (ctx->pc != 0x1AB5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABBE0_0x1abbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5B4u; }
        if (ctx->pc != 0x1AB5B4u) { return; }
    }
    ctx->pc = 0x1AB5B4u;
label_1ab5b4:
    // 0x1ab5b4: 0x440ffc1  bltz        $v0, . + 4 + (-0x3F << 2)
label_1ab5b8:
    if (ctx->pc == 0x1AB5B8u) {
        ctx->pc = 0x1AB5B8u;
            // 0x1ab5b8: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x1AB5BCu;
        goto label_1ab5bc;
    }
    ctx->pc = 0x1AB5B4u;
    {
        const bool branch_taken_0x1ab5b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5B4u;
            // 0x1ab5b8: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5b4) {
            ctx->pc = 0x1AB4BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab4bc;
        }
    }
    ctx->pc = 0x1AB5BCu;
label_1ab5bc:
    // 0x1ab5bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ab5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ab5c0:
    // 0x1ab5c0: 0x87a50044  lh          $a1, 0x44($sp)
    ctx->pc = 0x1ab5c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_1ab5c4:
    // 0x1ab5c4: 0x87a60046  lh          $a2, 0x46($sp)
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_1ab5c8:
    // 0x1ab5c8: 0xc06f6e4  jal         func_1BDB90
label_1ab5cc:
    if (ctx->pc == 0x1AB5CCu) {
        ctx->pc = 0x1AB5CCu;
            // 0x1ab5cc: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x1AB5D0u;
        goto label_1ab5d0;
    }
    ctx->pc = 0x1AB5C8u;
    SET_GPR_U32(ctx, 31, 0x1AB5D0u);
    ctx->pc = 0x1AB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5C8u;
            // 0x1ab5cc: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB90u;
    if (runtime->hasFunction(0x1BDB90u)) {
        auto targetFn = runtime->lookupFunction(0x1BDB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5D0u; }
        if (ctx->pc != 0x1AB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDB90_0x1bdb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5D0u; }
        if (ctx->pc != 0x1AB5D0u) { return; }
    }
    ctx->pc = 0x1AB5D0u;
label_1ab5d0:
    // 0x1ab5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5d4:
    // 0x1ab5d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5d8:
    // 0x1ab5d8: 0xc06b580  jal         func_1AD600
label_1ab5dc:
    if (ctx->pc == 0x1AB5DCu) {
        ctx->pc = 0x1AB5DCu;
            // 0x1ab5dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5E0u;
        goto label_1ab5e0;
    }
    ctx->pc = 0x1AB5D8u;
    SET_GPR_U32(ctx, 31, 0x1AB5E0u);
    ctx->pc = 0x1AB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5D8u;
            // 0x1ab5dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD600u;
    if (runtime->hasFunction(0x1AD600u)) {
        auto targetFn = runtime->lookupFunction(0x1AD600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5E0u; }
        if (ctx->pc != 0x1AB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD600_0x1ad600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5E0u; }
        if (ctx->pc != 0x1AB5E0u) { return; }
    }
    ctx->pc = 0x1AB5E0u;
label_1ab5e0:
    // 0x1ab5e0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_1ab5e4:
    if (ctx->pc == 0x1AB5E4u) {
        ctx->pc = 0x1AB5E4u;
            // 0x1ab5e4: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1AB5E8u;
        goto label_1ab5e8;
    }
    ctx->pc = 0x1AB5E0u;
    {
        const bool branch_taken_0x1ab5e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5E0u;
            // 0x1ab5e4: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5e0) {
            ctx->pc = 0x1AB604u;
            goto label_1ab604;
        }
    }
    ctx->pc = 0x1AB5E8u;
label_1ab5e8:
    // 0x1ab5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5ec:
    // 0x1ab5ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5f0:
    // 0x1ab5f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ab5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ab5f4:
    // 0x1ab5f4: 0xc06b5be  jal         func_1AD6F8
label_1ab5f8:
    if (ctx->pc == 0x1AB5F8u) {
        ctx->pc = 0x1AB5F8u;
            // 0x1ab5f8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5FCu;
        goto label_1ab5fc;
    }
    ctx->pc = 0x1AB5F4u;
    SET_GPR_U32(ctx, 31, 0x1AB5FCu);
    ctx->pc = 0x1AB5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5F4u;
            // 0x1ab5f8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6F8u;
    if (runtime->hasFunction(0x1AD6F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AD6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5FCu; }
        if (ctx->pc != 0x1AB5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD6F8_0x1ad6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5FCu; }
        if (ctx->pc != 0x1AB5FCu) { return; }
    }
    ctx->pc = 0x1AB5FCu;
label_1ab5fc:
    // 0x1ab5fc: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1ab600:
    if (ctx->pc == 0x1AB600u) {
        ctx->pc = 0x1AB600u;
            // 0x1ab600: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1AB604u;
        goto label_1ab604;
    }
    ctx->pc = 0x1AB5FCu;
    {
        const bool branch_taken_0x1ab5fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab5fc) {
            ctx->pc = 0x1AB600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5FCu;
            // 0x1ab600: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB610u;
            goto label_1ab610;
        }
    }
    ctx->pc = 0x1AB604u;
label_1ab604:
    // 0x1ab604: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1ab608:
    if (ctx->pc == 0x1AB608u) {
        ctx->pc = 0x1AB608u;
            // 0x1ab608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB60Cu;
        goto label_1ab60c;
    }
    ctx->pc = 0x1AB604u;
    {
        const bool branch_taken_0x1ab604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB604u;
            // 0x1ab608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab604) {
            ctx->pc = 0x1AB6B4u;
            goto label_1ab6b4;
        }
    }
    ctx->pc = 0x1AB60Cu;
label_1ab60c:
    // 0x1ab60c: 0x0  nop
    ctx->pc = 0x1ab60cu;
    // NOP
label_1ab610:
    // 0x1ab610: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x1ab610u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1ab614:
    // 0x1ab614: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ab614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab618:
    // 0x1ab618: 0xc06f6c6  jal         func_1BDB18
label_1ab61c:
    if (ctx->pc == 0x1AB61Cu) {
        ctx->pc = 0x1AB61Cu;
            // 0x1ab61c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1AB620u;
        goto label_1ab620;
    }
    ctx->pc = 0x1AB618u;
    SET_GPR_U32(ctx, 31, 0x1AB620u);
    ctx->pc = 0x1AB61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB618u;
            // 0x1ab61c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB18u;
    if (runtime->hasFunction(0x1BDB18u)) {
        auto targetFn = runtime->lookupFunction(0x1BDB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB620u; }
        if (ctx->pc != 0x1AB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDB18_0x1bdb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB620u; }
        if (ctx->pc != 0x1AB620u) { return; }
    }
    ctx->pc = 0x1AB620u;
label_1ab620:
    // 0x1ab620: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ab620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ab624:
    // 0x1ab624: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1ab624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ab628:
    // 0x1ab628: 0xc06f6d0  jal         func_1BDB40
label_1ab62c:
    if (ctx->pc == 0x1AB62Cu) {
        ctx->pc = 0x1AB62Cu;
            // 0x1ab62c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB630u;
        goto label_1ab630;
    }
    ctx->pc = 0x1AB628u;
    SET_GPR_U32(ctx, 31, 0x1AB630u);
    ctx->pc = 0x1AB62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB628u;
            // 0x1ab62c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB40u;
    if (runtime->hasFunction(0x1BDB40u)) {
        auto targetFn = runtime->lookupFunction(0x1BDB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB630u; }
        if (ctx->pc != 0x1AB630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDB40_0x1bdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB630u; }
        if (ctx->pc != 0x1AB630u) { return; }
    }
    ctx->pc = 0x1AB630u;
label_1ab630:
    // 0x1ab630: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_1ab634:
    // 0x1ab634: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1ab634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ab638:
    // 0x1ab638: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x1ab638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_1ab63c:
    // 0x1ab63c: 0x26080026  addiu       $t0, $s0, 0x26
    ctx->pc = 0x1ab63cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
label_1ab640:
    // 0x1ab640: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x1ab640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1ab644:
    // 0x1ab644: 0x260a002c  addiu       $t2, $s0, 0x2C
    ctx->pc = 0x1ab644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1ab648:
    // 0x1ab648: 0x260b0030  addiu       $t3, $s0, 0x30
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ab64c:
    // 0x1ab64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab650:
    // 0x1ab650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab654:
    // 0x1ab654: 0xc06b63e  jal         func_1AD8F8
label_1ab658:
    if (ctx->pc == 0x1AB658u) {
        ctx->pc = 0x1AB658u;
            // 0x1ab658: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB65Cu;
        goto label_1ab65c;
    }
    ctx->pc = 0x1AB654u;
    SET_GPR_U32(ctx, 31, 0x1AB65Cu);
    ctx->pc = 0x1AB658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB654u;
            // 0x1ab658: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    if (runtime->hasFunction(0x1AD8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AD8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB65Cu; }
        if (ctx->pc != 0x1AB65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD8F8_0x1ad8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB65Cu; }
        if (ctx->pc != 0x1AB65Cu) { return; }
    }
    ctx->pc = 0x1AB65Cu;
label_1ab65c:
    // 0x1ab65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab660:
    // 0x1ab660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ab664:
    // 0x1ab664: 0x260600cc  addiu       $a2, $s0, 0xCC
    ctx->pc = 0x1ab664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
label_1ab668:
    // 0x1ab668: 0x260700d0  addiu       $a3, $s0, 0xD0
    ctx->pc = 0x1ab668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1ab66c:
    // 0x1ab66c: 0x260800e0  addiu       $t0, $s0, 0xE0
    ctx->pc = 0x1ab66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ab670:
    // 0x1ab670: 0xc06b6d6  jal         func_1ADB58
label_1ab674:
    if (ctx->pc == 0x1AB674u) {
        ctx->pc = 0x1AB674u;
            // 0x1ab674: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->pc = 0x1AB678u;
        goto label_1ab678;
    }
    ctx->pc = 0x1AB670u;
    SET_GPR_U32(ctx, 31, 0x1AB678u);
    ctx->pc = 0x1AB674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB670u;
            // 0x1ab674: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB58u;
    if (runtime->hasFunction(0x1ADB58u)) {
        auto targetFn = runtime->lookupFunction(0x1ADB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB678u; }
        if (ctx->pc != 0x1AB678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADB58_0x1adb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB678u; }
        if (ctx->pc != 0x1AB678u) { return; }
    }
    ctx->pc = 0x1AB678u;
label_1ab678:
    // 0x1ab678: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x1ab678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_1ab67c:
    // 0x1ab67c: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x1ab67cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ab680:
    // 0x1ab680: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x1ab680u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1ab684:
    // 0x1ab684: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ab684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ab688:
    // 0x1ab688: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1ab688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1ab68c:
    // 0x1ab68c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1ab690:
    // 0x1ab690: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ab694:
    // 0x1ab694: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1ab694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1ab698:
    // 0x1ab698: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1ab69c:
    // 0x1ab69c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x1ab69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_1ab6a0:
    // 0x1ab6a0: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1ab6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_1ab6a4:
    // 0x1ab6a4: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x1ab6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_1ab6a8:
    // 0x1ab6a8: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x1ab6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_1ab6ac:
    // 0x1ab6ac: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1ab6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1ab6b0:
    // 0x1ab6b0: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab6b4:
    // 0x1ab6b4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1ab6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab6b8:
    // 0x1ab6b8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1ab6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab6bc:
    // 0x1ab6bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1ab6bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab6c0:
    // 0x1ab6c0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1ab6c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1ab6c4:
    // 0x1ab6c4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1ab6c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ab6c8:
    // 0x1ab6c8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1ab6c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1ab6cc:
    // 0x1ab6cc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1ab6ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab6d0:
    // 0x1ab6d0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1ab6d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1ab6d4:
    // 0x1ab6d4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ab6d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ab6d8:
    // 0x1ab6d8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1ab6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1ab6dc:
    // 0x1ab6dc: 0x3e00008  jr          $ra
label_1ab6e0:
    if (ctx->pc == 0x1AB6E0u) {
        ctx->pc = 0x1AB6E0u;
            // 0x1ab6e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1AB6E4u;
        goto label_1ab6e4;
    }
    ctx->pc = 0x1AB6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6DCu;
            // 0x1ab6e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB6E4u;
label_1ab6e4:
    // 0x1ab6e4: 0x0  nop
    ctx->pc = 0x1ab6e4u;
    // NOP
label_1ab6e8:
    // 0x1ab6e8: 0x3e00008  jr          $ra
label_1ab6ec:
    if (ctx->pc == 0x1AB6ECu) {
        ctx->pc = 0x1AB6ECu;
            // 0x1ab6ec: 0xa480009a  sh          $zero, 0x9A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 154), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1AB6F0u;
        goto label_fallthrough_0x1ab6e8;
    }
    ctx->pc = 0x1AB6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6E8u;
            // 0x1ab6ec: 0xa480009a  sh          $zero, 0x9A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ab6e8:
    ctx->pc = 0x1AB6F0u;
    ctx->pc = 0x1ab6f0u;
}
