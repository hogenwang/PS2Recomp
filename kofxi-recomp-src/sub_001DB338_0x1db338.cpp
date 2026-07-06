#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DB338
// Address: 0x1db338 - 0x1db3f8
void sub_001DB338_0x1db338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB338_0x1db338");
#endif

    switch (ctx->pc) {
        case 0x1db338u: goto label_1db338;
        case 0x1db33cu: goto label_1db33c;
        case 0x1db340u: goto label_1db340;
        case 0x1db344u: goto label_1db344;
        case 0x1db348u: goto label_1db348;
        case 0x1db34cu: goto label_1db34c;
        case 0x1db350u: goto label_1db350;
        case 0x1db354u: goto label_1db354;
        case 0x1db358u: goto label_1db358;
        case 0x1db35cu: goto label_1db35c;
        case 0x1db360u: goto label_1db360;
        case 0x1db364u: goto label_1db364;
        case 0x1db368u: goto label_1db368;
        case 0x1db36cu: goto label_1db36c;
        case 0x1db370u: goto label_1db370;
        case 0x1db374u: goto label_1db374;
        case 0x1db378u: goto label_1db378;
        case 0x1db37cu: goto label_1db37c;
        case 0x1db380u: goto label_1db380;
        case 0x1db384u: goto label_1db384;
        case 0x1db388u: goto label_1db388;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db390u: goto label_1db390;
        case 0x1db394u: goto label_1db394;
        case 0x1db398u: goto label_1db398;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3a0u: goto label_1db3a0;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3a8u: goto label_1db3a8;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3b0u: goto label_1db3b0;
        case 0x1db3b4u: goto label_1db3b4;
        case 0x1db3b8u: goto label_1db3b8;
        case 0x1db3bcu: goto label_1db3bc;
        case 0x1db3c0u: goto label_1db3c0;
        case 0x1db3c4u: goto label_1db3c4;
        case 0x1db3c8u: goto label_1db3c8;
        case 0x1db3ccu: goto label_1db3cc;
        case 0x1db3d0u: goto label_1db3d0;
        case 0x1db3d4u: goto label_1db3d4;
        case 0x1db3d8u: goto label_1db3d8;
        case 0x1db3dcu: goto label_1db3dc;
        case 0x1db3e0u: goto label_1db3e0;
        case 0x1db3e4u: goto label_1db3e4;
        case 0x1db3e8u: goto label_1db3e8;
        case 0x1db3ecu: goto label_1db3ec;
        case 0x1db3f0u: goto label_1db3f0;
        case 0x1db3f4u: goto label_1db3f4;
        default: break;
    }

    ctx->pc = 0x1db338u;

label_1db338:
    // 0x1db338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1db33c:
    // 0x1db33c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1db33cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1db340:
    // 0x1db340: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1db340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1db344:
    // 0x1db344: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1db344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db348:
    // 0x1db348: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1db348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1db34c:
    // 0x1db34c: 0x249103a8  addiu       $s1, $a0, 0x3A8
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 936));
label_1db350:
    // 0x1db350: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1db354:
    // 0x1db354: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1db354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db358:
    // 0x1db358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db35c:
    // 0x1db35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db360:
    // 0x1db360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db364:
    // 0x1db364: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1db368:
    // 0x1db368: 0x40f809  jalr        $v0
label_1db36c:
    if (ctx->pc == 0x1DB36Cu) {
        ctx->pc = 0x1DB36Cu;
            // 0x1db36c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1DB370u;
        goto label_1db370;
    }
    ctx->pc = 0x1DB368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB370u);
        ctx->pc = 0x1DB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB368u;
            // 0x1db36c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB370u; }
            if (ctx->pc != 0x1DB370u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB370u;
label_1db370:
    // 0x1db370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db374:
    // 0x1db374: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1db374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1db378:
    // 0x1db378: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1db378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db37c:
    // 0x1db37c: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1db37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1db380:
    // 0x1db380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db384:
    // 0x1db384: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1db384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1db388:
    // 0x1db388: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1db388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db38c:
    // 0x1db38c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1db390:
    // 0x1db390: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1db394:
    // 0x1db394: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1db394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1db398:
    // 0x1db398: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1db39c:
    // 0x1db39c: 0xc07337e  jal         func_1CCDF8
label_1db3a0:
    if (ctx->pc == 0x1DB3A0u) {
        ctx->pc = 0x1DB3A0u;
            // 0x1db3a0: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x1DB3A4u;
        goto label_1db3a4;
    }
    ctx->pc = 0x1DB39Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3A4u);
    ctx->pc = 0x1DB3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB39Cu;
            // 0x1db3a0: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3A4u; }
        if (ctx->pc != 0x1DB3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3A4u; }
        if (ctx->pc != 0x1DB3A4u) { return; }
    }
    ctx->pc = 0x1DB3A4u;
label_1db3a4:
    // 0x1db3a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db3a8:
    // 0x1db3a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1db3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db3ac:
    // 0x1db3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db3b0:
    // 0x1db3b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db3b4:
    // 0x1db3b4: 0x40f809  jalr        $v0
label_1db3b8:
    if (ctx->pc == 0x1DB3B8u) {
        ctx->pc = 0x1DB3B8u;
            // 0x1db3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3BCu;
        goto label_1db3bc;
    }
    ctx->pc = 0x1DB3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB3BCu);
        ctx->pc = 0x1DB3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3B4u;
            // 0x1db3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB3BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3BCu; }
            if (ctx->pc != 0x1DB3BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DB3BCu;
label_1db3bc:
    // 0x1db3bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db3c0:
    // 0x1db3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db3c4:
    // 0x1db3c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1db3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db3c8:
    // 0x1db3c8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1db3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1db3cc:
    // 0x1db3cc: 0x40f809  jalr        $v0
label_1db3d0:
    if (ctx->pc == 0x1DB3D0u) {
        ctx->pc = 0x1DB3D0u;
            // 0x1db3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3D4u;
        goto label_1db3d4;
    }
    ctx->pc = 0x1DB3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB3D4u);
        ctx->pc = 0x1DB3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3CCu;
            // 0x1db3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB3D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3D4u; }
            if (ctx->pc != 0x1DB3D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB3D4u;
label_1db3d4:
    // 0x1db3d4: 0xc076e1e  jal         func_1DB878
label_1db3d8:
    if (ctx->pc == 0x1DB3D8u) {
        ctx->pc = 0x1DB3D8u;
            // 0x1db3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3DCu;
        goto label_1db3dc;
    }
    ctx->pc = 0x1DB3D4u;
    SET_GPR_U32(ctx, 31, 0x1DB3DCu);
    ctx->pc = 0x1DB3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3D4u;
            // 0x1db3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (runtime->hasFunction(0x1DB878u)) {
        auto targetFn = runtime->lookupFunction(0x1DB878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3DCu; }
        if (ctx->pc != 0x1DB3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB878_0x1db878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3DCu; }
        if (ctx->pc != 0x1DB3DCu) { return; }
    }
    ctx->pc = 0x1DB3DCu;
label_1db3dc:
    // 0x1db3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db3e0:
    // 0x1db3e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1db3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db3e4:
    // 0x1db3e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1db3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db3e8:
    // 0x1db3e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1db3ec:
    // 0x1db3ec: 0x3e00008  jr          $ra
label_1db3f0:
    if (ctx->pc == 0x1DB3F0u) {
        ctx->pc = 0x1DB3F0u;
            // 0x1db3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1DB3F4u;
        goto label_1db3f4;
    }
    ctx->pc = 0x1DB3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3ECu;
            // 0x1db3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB3F4u;
label_1db3f4:
    // 0x1db3f4: 0x0  nop
    ctx->pc = 0x1db3f4u;
    // NOP
    ctx->pc = 0x1db3f8u;
}
