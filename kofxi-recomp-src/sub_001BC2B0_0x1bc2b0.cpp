#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC2B0
// Address: 0x1bc2b0 - 0x1bc460
void sub_001BC2B0_0x1bc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC2B0_0x1bc2b0");
#endif

    switch (ctx->pc) {
        case 0x1bc310u: goto label_1bc310;
        case 0x1bc318u: goto label_1bc318;
        case 0x1bc35cu: goto label_1bc35c;
        case 0x1bc398u: goto label_1bc398;
        case 0x1bc3acu: goto label_1bc3ac;
        case 0x1bc3d0u: goto label_1bc3d0;
        case 0x1bc3dcu: goto label_1bc3dc;
        case 0x1bc3e8u: goto label_1bc3e8;
        case 0x1bc408u: goto label_1bc408;
        case 0x1bc420u: goto label_1bc420;
        case 0x1bc43cu: goto label_1bc43c;
        case 0x1bc448u: goto label_1bc448;
        default: break;
    }

    ctx->pc = 0x1bc2b0u;

    // 0x1bc2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc2b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bc2b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bc2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc2c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bc2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc2c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1bc2d0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC2D0u;
    {
        const bool branch_taken_0x1bc2d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2D0u;
            // 0x1bc2d4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2d0) {
            ctx->pc = 0x1BC2E8u;
            goto label_1bc2e8;
        }
    }
    ctx->pc = 0x1BC2D8u;
    // 0x1bc2d8: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC2D8u;
    {
        const bool branch_taken_0x1bc2d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2d8) {
            ctx->pc = 0x1BC2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2D8u;
            // 0x1bc2dc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC2E0u;
    // 0x1bc2e0: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC2E0u;
    {
        const bool branch_taken_0x1bc2e0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1bc2e0) {
            ctx->pc = 0x1BC310u;
            goto label_1bc310;
        }
    }
    ctx->pc = 0x1BC2E8u;
label_1bc2e8:
    // 0x1bc2e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bc2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bc2ec:
    // 0x1bc2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc2f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc2f4: 0x248488a0  addiu       $a0, $a0, -0x7760
    ctx->pc = 0x1bc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936736));
    // 0x1bc2f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc2f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc2fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc2fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc300: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc304: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BC304u;
    ctx->pc = 0x1BC308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC304u;
            // 0x1bc308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC30Cu;
    // 0x1bc30c: 0x0  nop
    ctx->pc = 0x1bc30cu;
    // NOP
label_1bc310:
    // 0x1bc310: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1BC310u;
    SET_GPR_U32(ctx, 31, 0x1BC318u);
    ctx->pc = 0x1BC314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC310u;
            // 0x1bc314: 0x3c1300ff  lui         $s3, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC318u; }
        if (ctx->pc != 0x1BC318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC318u; }
        if (ctx->pc != 0x1BC318u) { return; }
    }
    ctx->pc = 0x1BC318u;
label_1bc318:
    // 0x1bc318: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1bc318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bc31c: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x1bc31cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1bc320: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bc320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bc324: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x1bc324u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1bc328: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1bc328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1bc32c: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x1bc32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x1bc330: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1bc330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1bc334: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc338: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1bc338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1bc33c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bc33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1bc340: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1bc340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bc344: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BC344u;
    {
        const bool branch_taken_0x1bc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc344) {
            ctx->pc = 0x1BC348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC344u;
            // 0x1bc348: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC408u;
            goto label_1bc408;
        }
    }
    ctx->pc = 0x1BC34Cu;
    // 0x1bc34c: 0x602002e  bltzl       $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BC34Cu;
    {
        const bool branch_taken_0x1bc34c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1bc34c) {
            ctx->pc = 0x1BC350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC34Cu;
            // 0x1bc350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC408u;
            goto label_1bc408;
        }
    }
    ctx->pc = 0x1BC354u;
    // 0x1bc354: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1BC354u;
    SET_GPR_U32(ctx, 31, 0x1BC35Cu);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC35Cu; }
        if (ctx->pc != 0x1BC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC35Cu; }
        if (ctx->pc != 0x1BC35Cu) { return; }
    }
    ctx->pc = 0x1BC35Cu;
label_1bc35c:
    // 0x1bc35c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1bc35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1bc360: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1bc364: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bc364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc368: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bc368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bc36c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x1bc36cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1bc370: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1bc370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bc374: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1bc374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1bc378: 0x32602  srl         $a0, $v1, 24
    ctx->pc = 0x1bc378u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1bc37c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1bc380: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1bc380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1bc384: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bc384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bc388: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1bc388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1bc38c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1bc38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bc390: 0xc072a66  jal         func_1CA998
    ctx->pc = 0x1BC390u;
    SET_GPR_U32(ctx, 31, 0x1BC398u);
    ctx->pc = 0x1BC394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC390u;
            // 0x1bc394: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (runtime->hasFunction(0x1CA998u)) {
        auto targetFn = runtime->lookupFunction(0x1CA998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC398u; }
        if (ctx->pc != 0x1BC398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA998_0x1ca998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC398u; }
        if (ctx->pc != 0x1BC398u) { return; }
    }
    ctx->pc = 0x1BC398u;
label_1bc398:
    // 0x1bc398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc39c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC39Cu;
    {
        const bool branch_taken_0x1bc39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC39Cu;
            // 0x1bc3a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc39c) {
            ctx->pc = 0x1BC3D0u;
            goto label_1bc3d0;
        }
    }
    ctx->pc = 0x1BC3A4u;
    // 0x1bc3a4: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1BC3A4u;
    SET_GPR_U32(ctx, 31, 0x1BC3ACu);
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3ACu; }
        if (ctx->pc != 0x1BC3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3ACu; }
        if (ctx->pc != 0x1BC3ACu) { return; }
    }
    ctx->pc = 0x1BC3ACu;
label_1bc3ac:
    // 0x1bc3ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bc3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc3b4: 0x248488d0  addiu       $a0, $a0, -0x7730
    ctx->pc = 0x1bc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x1bc3b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc3bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc3c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc3c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc3c8: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BC3C8u;
    ctx->pc = 0x1BC3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3C8u;
            // 0x1bc3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC3D0u;
label_1bc3d0:
    // 0x1bc3d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc3d4: 0xc06e3c4  jal         func_1B8F10
    ctx->pc = 0x1BC3D4u;
    SET_GPR_U32(ctx, 31, 0x1BC3DCu);
    ctx->pc = 0x1BC3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3D4u;
            // 0x1bc3d8: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F10u;
    if (runtime->hasFunction(0x1B8F10u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3DCu; }
        if (ctx->pc != 0x1BC3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F10_0x1b8f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3DCu; }
        if (ctx->pc != 0x1BC3DCu) { return; }
    }
    ctx->pc = 0x1BC3DCu;
label_1bc3dc:
    // 0x1bc3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3e0: 0xc06ed86  jal         func_1BB618
    ctx->pc = 0x1BC3E0u;
    SET_GPR_U32(ctx, 31, 0x1BC3E8u);
    ctx->pc = 0x1BC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3E0u;
            // 0x1bc3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    if (runtime->hasFunction(0x1BB618u)) {
        auto targetFn = runtime->lookupFunction(0x1BB618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3E8u; }
        if (ctx->pc != 0x1BC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB618_0x1bb618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3E8u; }
        if (ctx->pc != 0x1BC3E8u) { return; }
    }
    ctx->pc = 0x1BC3E8u;
label_1bc3e8:
    // 0x1bc3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc3ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc3f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc3f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc3f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc3f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc3fc: 0x806b494  j           func_1AD250
    ctx->pc = 0x1BC3FCu;
    ctx->pc = 0x1BC400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3FCu;
            // 0x1bc400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC404u;
    // 0x1bc404: 0x0  nop
    ctx->pc = 0x1bc404u;
    // NOP
label_1bc408:
    // 0x1bc408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc40c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc418: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC418u;
            // 0x1bc41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC420u;
label_1bc420:
    // 0x1bc420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc434: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BC434u;
    SET_GPR_U32(ctx, 31, 0x1BC43Cu);
    ctx->pc = 0x1BC438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC434u;
            // 0x1bc438: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC43Cu; }
        if (ctx->pc != 0x1BC43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC43Cu; }
        if (ctx->pc != 0x1BC43Cu) { return; }
    }
    ctx->pc = 0x1BC43Cu;
label_1bc43c:
    // 0x1bc43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc440: 0xc06f118  jal         func_1BC460
    ctx->pc = 0x1BC440u;
    SET_GPR_U32(ctx, 31, 0x1BC448u);
    ctx->pc = 0x1BC444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC440u;
            // 0x1bc444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC460u;
    if (runtime->hasFunction(0x1BC460u)) {
        auto targetFn = runtime->lookupFunction(0x1BC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC448u; }
        if (ctx->pc != 0x1BC448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC460_0x1bc460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC448u; }
        if (ctx->pc != 0x1BC448u) { return; }
    }
    ctx->pc = 0x1BC448u;
label_1bc448:
    // 0x1bc448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc44c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc454: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BC454u;
    ctx->pc = 0x1BC458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC454u;
            // 0x1bc458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC45Cu;
    // 0x1bc45c: 0x0  nop
    ctx->pc = 0x1bc45cu;
    // NOP
    ctx->pc = 0x1bc460u;
}
