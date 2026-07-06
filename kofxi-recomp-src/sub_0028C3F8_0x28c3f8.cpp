#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C3F8
// Address: 0x28c3f8 - 0x28c700
void sub_0028C3F8_0x28c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C3F8_0x28c3f8");
#endif

    switch (ctx->pc) {
        case 0x28c444u: goto label_28c444;
        case 0x28c454u: goto label_28c454;
        case 0x28c468u: goto label_28c468;
        case 0x28c488u: goto label_28c488;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c520u: goto label_28c520;
        case 0x28c560u: goto label_28c560;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c630u: goto label_28c630;
        case 0x28c668u: goto label_28c668;
        case 0x28c688u: goto label_28c688;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6e8u: goto label_28c6e8;
        default: break;
    }

    ctx->pc = 0x28c3f8u;

label_28c3f8:
    // 0x28c3f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28c3fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28c400: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28c404: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x28c404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c408: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c40c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28c40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c410: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28c414: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28c414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c418: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c420: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c424: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C424u;
    {
        const bool branch_taken_0x28c424 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C424u;
            // 0x28c428: 0x8c910020  lw          $s1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c424) {
            ctx->pc = 0x28C44Cu;
            goto label_28c44c;
        }
    }
    ctx->pc = 0x28C42Cu;
    // 0x28c42c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x28c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28c430: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x28c430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x28c434: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x28c438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c43c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28C43Cu;
    SET_GPR_U32(ctx, 31, 0x28C444u);
    ctx->pc = 0x28C440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C43Cu;
            // 0x28c440: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C444u; }
        if (ctx->pc != 0x28C444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C444u; }
        if (ctx->pc != 0x28C444u) { return; }
    }
    ctx->pc = 0x28C444u;
label_28c444:
    // 0x28c444: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28C444u;
    {
        const bool branch_taken_0x28c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C444u;
            // 0x28c448: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c444) {
            ctx->pc = 0x28C48Cu;
            goto label_28c48c;
        }
    }
    ctx->pc = 0x28C44Cu;
label_28c44c:
    // 0x28c44c: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28C44Cu;
    SET_GPR_U32(ctx, 31, 0x28C454u);
    ctx->pc = 0x284EB0u;
    if (runtime->hasFunction(0x284EB0u)) {
        auto targetFn = runtime->lookupFunction(0x284EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C454u; }
        if (ctx->pc != 0x28C454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EB0_0x284eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C454u; }
        if (ctx->pc != 0x28C454u) { return; }
    }
    ctx->pc = 0x28C454u;
label_28c454:
    // 0x28c454: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x28c454u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c45c: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x28c45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x28c460: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x28C460u;
    SET_GPR_U32(ctx, 31, 0x28C468u);
    ctx->pc = 0x28C464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C460u;
            // 0x28c464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C468u; }
        if (ctx->pc != 0x28C468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C468u; }
        if (ctx->pc != 0x28C468u) { return; }
    }
    ctx->pc = 0x28C468u;
label_28c468:
    // 0x28c468: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C468u;
    {
        const bool branch_taken_0x28c468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C468u;
            // 0x28c46c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c468) {
            ctx->pc = 0x28C48Cu;
            goto label_28c48c;
        }
    }
    ctx->pc = 0x28C470u;
    // 0x28c470: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x28c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c474: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28c474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c478: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28c478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c47c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x28c47cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c480: 0xc049c48  jal         func_127120
    ctx->pc = 0x28C480u;
    SET_GPR_U32(ctx, 31, 0x28C488u);
    ctx->pc = 0x28C484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C480u;
            // 0x28c484: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C488u; }
        if (ctx->pc != 0x28C488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C488u; }
        if (ctx->pc != 0x28C488u) { return; }
    }
    ctx->pc = 0x28C488u;
label_28c488:
    // 0x28c488: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x28c488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c48c:
    // 0x28c48c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28c48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c490: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28c490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28c494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c498: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28c498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c49c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c4a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x28C4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4A8u;
            // 0x28c4ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C4B0u;
label_28c4b0:
    // 0x28c4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28c4b4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x28c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28c4b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28c4bc: 0x2c620082  sltiu       $v0, $v1, 0x82
    ctx->pc = 0x28c4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)130) ? 1 : 0);
    // 0x28c4c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c4c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28c4c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c4c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c4cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28c4ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c4d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28c4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28c4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c4e4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28C4E4u;
    {
        const bool branch_taken_0x28c4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4E4u;
            // 0x28c4e8: 0x8e110020  lw          $s1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4e4) {
            ctx->pc = 0x28C5A4u;
            goto label_28c5a4;
        }
    }
    ctx->pc = 0x28C4ECu;
    // 0x28c4ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c4f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28c4f4: 0x2442ad40  addiu       $v0, $v0, -0x52C0
    ctx->pc = 0x28c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946112));
    // 0x28c4f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c4fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c500: 0x800008  jr          $a0
    ctx->pc = 0x28C500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C508u: goto label_28c508;
            case 0x28C528u: goto label_28c528;
            case 0x28C534u: goto label_28c534;
            case 0x28C544u: goto label_28c544;
            case 0x28C558u: goto label_28c558;
            case 0x28C570u: goto label_28c570;
            case 0x28C580u: goto label_28c580;
            case 0x28C588u: goto label_28c588;
            case 0x28C594u: goto label_28c594;
            case 0x28C59Cu: goto label_28c59c;
            case 0x28C5A4u: goto label_28c5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C508u;
label_28c508:
    // 0x28c508: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x28c508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c50c: 0x50800026  beql        $a0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x28C50Cu;
    {
        const bool branch_taken_0x28c50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c50c) {
            ctx->pc = 0x28C510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C50Cu;
            // 0x28c510: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C514u;
    // 0x28c514: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28c518: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28C518u;
    SET_GPR_U32(ctx, 31, 0x28C520u);
    ctx->pc = 0x28C51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C518u;
            // 0x28c51c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C520u; }
        if (ctx->pc != 0x28C520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C520u; }
        if (ctx->pc != 0x28C520u) { return; }
    }
    ctx->pc = 0x28C520u;
label_28c520:
    // 0x28c520: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28C520u;
    {
        const bool branch_taken_0x28c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C520u;
            // 0x28c524: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c520) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C528u;
label_28c528:
    // 0x28c528: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c52c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28C52Cu;
    {
        const bool branch_taken_0x28c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C52Cu;
            // 0x28c530: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c52c) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C534u;
label_28c534:
    // 0x28c534: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x28c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x28c538: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28c538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28c53c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28C53Cu;
    {
        const bool branch_taken_0x28c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C53Cu;
            // 0x28c540: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c53c) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C544u;
label_28c544:
    // 0x28c544: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x28C544u;
    {
        const bool branch_taken_0x28c544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C544u;
            // 0x28c548: 0x8e340000  lw          $s4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c544) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C54Cu;
    // 0x28c54c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c550: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28C550u;
    {
        const bool branch_taken_0x28c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C550u;
            // 0x28c554: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c550) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C558u;
label_28c558:
    // 0x28c558: 0xc0a30ae  jal         func_28C2B8
    ctx->pc = 0x28C558u;
    SET_GPR_U32(ctx, 31, 0x28C560u);
    ctx->pc = 0x28C55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C558u;
            // 0x28c55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C2B8u;
    if (runtime->hasFunction(0x28C2B8u)) {
        auto targetFn = runtime->lookupFunction(0x28C2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C560u; }
        if (ctx->pc != 0x28C560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C2B8_0x28c2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C560u; }
        if (ctx->pc != 0x28C560u) { return; }
    }
    ctx->pc = 0x28C560u;
label_28c560:
    // 0x28c560: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x28c560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28c564: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x28c564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x28c568: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28C568u;
    {
        const bool branch_taken_0x28c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C568u;
            // 0x28c56c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c568) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C570u;
label_28c570:
    // 0x28c570: 0x5640000d  bnel        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28C570u;
    {
        const bool branch_taken_0x28c570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c570) {
            ctx->pc = 0x28C574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C570u;
            // 0x28c574: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C578u;
    // 0x28c578: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28C578u;
    {
        const bool branch_taken_0x28c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C578u;
            // 0x28c57c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c578) {
            ctx->pc = 0x28C5ACu;
            goto label_28c5ac;
        }
    }
    ctx->pc = 0x28C580u;
label_28c580:
    // 0x28c580: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28C580u;
    {
        const bool branch_taken_0x28c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C580u;
            // 0x28c584: 0x8e140010  lw          $s4, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c580) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C588u;
label_28c588:
    // 0x28c588: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28c588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28c58c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C58Cu;
    {
        const bool branch_taken_0x28c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C58Cu;
            // 0x28c590: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c58c) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C594u;
label_28c594:
    // 0x28c594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28C594u;
    {
        const bool branch_taken_0x28c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C594u;
            // 0x28c598: 0x8e340000  lw          $s4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c594) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C59Cu;
label_28c59c:
    // 0x28c59c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28C59Cu;
    {
        const bool branch_taken_0x28c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C59Cu;
            // 0x28c5a0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c59c) {
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C5A4u;
label_28c5a4:
    // 0x28c5a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28c5a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c5a8:
    // 0x28c5a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28c5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c5ac:
    // 0x28c5ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c5b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28c5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c5b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28c5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c5b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c5bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x28C5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5C4u;
            // 0x28c5c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C5CCu;
    // 0x28c5cc: 0x0  nop
    ctx->pc = 0x28c5ccu;
    // NOP
label_28c5d0:
    // 0x28c5d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28c5d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c5d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c5dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28c5dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c5e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c5e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c5ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28c5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c5f4: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28C5F4u;
    SET_GPR_U32(ctx, 31, 0x28C5FCu);
    ctx->pc = 0x28C5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5F4u;
            // 0x28c5f8: 0x8e500020  lw          $s0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (runtime->hasFunction(0x284EB0u)) {
        auto targetFn = runtime->lookupFunction(0x284EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C5FCu; }
        if (ctx->pc != 0x28C5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EB0_0x284eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C5FCu; }
        if (ctx->pc != 0x28C5FCu) { return; }
    }
    ctx->pc = 0x28C5FCu;
label_28c5fc:
    // 0x28c5fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28c600: 0x5ca00003  bgtzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C600u;
    {
        const bool branch_taken_0x28c600 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x28c600) {
            ctx->pc = 0x28C604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C600u;
            // 0x28c604: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C610u;
            goto label_28c610;
        }
    }
    ctx->pc = 0x28C608u;
    // 0x28c608: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28C608u;
    {
        const bool branch_taken_0x28c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C608u;
            // 0x28c60c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c608) {
            ctx->pc = 0x28C69Cu;
            goto label_28c69c;
        }
    }
    ctx->pc = 0x28C610u;
label_28c610:
    // 0x28c610: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x28C610u;
    {
        const bool branch_taken_0x28c610 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C610u;
            // 0x28c614: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c610) {
            ctx->pc = 0x28C654u;
            goto label_28c654;
        }
    }
    ctx->pc = 0x28C618u;
    // 0x28c618: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x28c618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28c61c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28c620: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C620u;
    {
        const bool branch_taken_0x28c620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C620u;
            // 0x28c624: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c620) {
            ctx->pc = 0x28C658u;
            goto label_28c658;
        }
    }
    ctx->pc = 0x28C628u;
    // 0x28c628: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c62c: 0x0  nop
    ctx->pc = 0x28c62cu;
    // NOP
label_28c630:
    // 0x28c630: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x28c630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28c634: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C634u;
    {
        const bool branch_taken_0x28c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C634u;
            // 0x28c638: 0xd01021  addu        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c634) {
            ctx->pc = 0x28C658u;
            goto label_28c658;
        }
    }
    ctx->pc = 0x28C63Cu;
    // 0x28c63c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x28c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28c640: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c644: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28C644u;
    {
        const bool branch_taken_0x28c644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28c644) {
            ctx->pc = 0x28C648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C644u;
            // 0x28c648: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c630;
        }
    }
    ctx->pc = 0x28C64Cu;
    // 0x28c64c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28C64Cu;
    {
        const bool branch_taken_0x28c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c64c) {
            ctx->pc = 0x28C658u;
            goto label_28c658;
        }
    }
    ctx->pc = 0x28C654u;
label_28c654:
    // 0x28c654: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28c654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28c658:
    // 0x28c658: 0x56050005  bnel        $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C658u;
    {
        const bool branch_taken_0x28c658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x28c658) {
            ctx->pc = 0x28C65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C658u;
            // 0x28c65c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C670u;
            goto label_28c670;
        }
    }
    ctx->pc = 0x28C660u;
    // 0x28c660: 0xc0a139e  jal         func_284E78
    ctx->pc = 0x28C660u;
    SET_GPR_U32(ctx, 31, 0x28C668u);
    ctx->pc = 0x28C664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C660u;
            // 0x28c664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284E78u;
    if (runtime->hasFunction(0x284E78u)) {
        auto targetFn = runtime->lookupFunction(0x284E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C668u; }
        if (ctx->pc != 0x28C668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284E78_0x284e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C668u; }
        if (ctx->pc != 0x28C668u) { return; }
    }
    ctx->pc = 0x28C668u;
label_28c668:
    // 0x28c668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28C668u;
    {
        const bool branch_taken_0x28c668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C668u;
            // 0x28c66c: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c668) {
            ctx->pc = 0x28C674u;
            goto label_28c674;
        }
    }
    ctx->pc = 0x28C670u;
label_28c670:
    // 0x28c670: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x28c670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28c674:
    // 0x28c674: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28c674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c678: 0x202300a  movz        $a2, $s0, $v0
    ctx->pc = 0x28c678u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    // 0x28c67c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c680: 0xc0a30c6  jal         func_28C318
    ctx->pc = 0x28C680u;
    SET_GPR_U32(ctx, 31, 0x28C688u);
    ctx->pc = 0x28C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C680u;
            // 0x28c684: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C318u;
    if (runtime->hasFunction(0x28C318u)) {
        auto targetFn = runtime->lookupFunction(0x28C318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C688u; }
        if (ctx->pc != 0x28C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C318_0x28c318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C688u; }
        if (ctx->pc != 0x28C688u) { return; }
    }
    ctx->pc = 0x28C688u;
label_28c688:
    // 0x28c688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c68c: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28C68Cu;
    {
        const bool branch_taken_0x28c68c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C68Cu;
            // 0x28c690: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c68c) {
            ctx->pc = 0x28C698u;
            goto label_28c698;
        }
    }
    ctx->pc = 0x28C694u;
    // 0x28c694: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28c694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_28c698:
    // 0x28c698: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c69c:
    // 0x28c69c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c6a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28c6a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c6a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c6a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28C6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6B0u;
            // 0x28c6b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C6B8u;
label_28c6b8:
    // 0x28c6b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28c6bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c6c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28c6d0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28C6D0u;
    SET_GPR_U32(ctx, 31, 0x28C6D8u);
    ctx->pc = 0x28C6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6D0u;
            // 0x28c6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6D8u; }
        if (ctx->pc != 0x28C6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6D8u; }
        if (ctx->pc != 0x28C6D8u) { return; }
    }
    ctx->pc = 0x28C6D8u;
label_28c6d8:
    // 0x28c6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6e0: 0xc0a30fe  jal         func_28C3F8
    ctx->pc = 0x28C6E0u;
    SET_GPR_U32(ctx, 31, 0x28C6E8u);
    ctx->pc = 0x28C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6E0u;
            // 0x28c6e4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C3F8u;
    goto label_28c3f8;
    ctx->pc = 0x28C6E8u;
label_28c6e8:
    // 0x28c6e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c6ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x28C6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6F4u;
            // 0x28c6f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C6FCu;
    // 0x28c6fc: 0x0  nop
    ctx->pc = 0x28c6fcu;
    // NOP
    ctx->pc = 0x28c700u;
}
