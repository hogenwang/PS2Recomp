#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6678
// Address: 0x1e6678 - 0x1e6728
void sub_001E6678_0x1e6678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6678_0x1e6678");
#endif

    switch (ctx->pc) {
        case 0x1e6678u: goto label_1e6678;
        case 0x1e667cu: goto label_1e667c;
        case 0x1e6680u: goto label_1e6680;
        case 0x1e6684u: goto label_1e6684;
        case 0x1e6688u: goto label_1e6688;
        case 0x1e668cu: goto label_1e668c;
        case 0x1e6690u: goto label_1e6690;
        case 0x1e6694u: goto label_1e6694;
        case 0x1e6698u: goto label_1e6698;
        case 0x1e669cu: goto label_1e669c;
        case 0x1e66a0u: goto label_1e66a0;
        case 0x1e66a4u: goto label_1e66a4;
        case 0x1e66a8u: goto label_1e66a8;
        case 0x1e66acu: goto label_1e66ac;
        case 0x1e66b0u: goto label_1e66b0;
        case 0x1e66b4u: goto label_1e66b4;
        case 0x1e66b8u: goto label_1e66b8;
        case 0x1e66bcu: goto label_1e66bc;
        case 0x1e66c0u: goto label_1e66c0;
        case 0x1e66c4u: goto label_1e66c4;
        case 0x1e66c8u: goto label_1e66c8;
        case 0x1e66ccu: goto label_1e66cc;
        case 0x1e66d0u: goto label_1e66d0;
        case 0x1e66d4u: goto label_1e66d4;
        case 0x1e66d8u: goto label_1e66d8;
        case 0x1e66dcu: goto label_1e66dc;
        case 0x1e66e0u: goto label_1e66e0;
        case 0x1e66e4u: goto label_1e66e4;
        case 0x1e66e8u: goto label_1e66e8;
        case 0x1e66ecu: goto label_1e66ec;
        case 0x1e66f0u: goto label_1e66f0;
        case 0x1e66f4u: goto label_1e66f4;
        case 0x1e66f8u: goto label_1e66f8;
        case 0x1e66fcu: goto label_1e66fc;
        case 0x1e6700u: goto label_1e6700;
        case 0x1e6704u: goto label_1e6704;
        case 0x1e6708u: goto label_1e6708;
        case 0x1e670cu: goto label_1e670c;
        case 0x1e6710u: goto label_1e6710;
        case 0x1e6714u: goto label_1e6714;
        case 0x1e6718u: goto label_1e6718;
        case 0x1e671cu: goto label_1e671c;
        case 0x1e6720u: goto label_1e6720;
        case 0x1e6724u: goto label_1e6724;
        default: break;
    }

    ctx->pc = 0x1e6678u;

label_1e6678:
    // 0x1e6678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e667c:
    // 0x1e667c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6680:
    // 0x1e6680: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x1e6680u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1e6684:
    // 0x1e6684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6688:
    // 0x1e6688: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1e6688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e668c:
    // 0x1e668c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e6690:
    // 0x1e6690: 0x26100488  addiu       $s0, $s0, 0x488
    ctx->pc = 0x1e6690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
label_1e6694:
    // 0x1e6694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e6694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1e6698:
    // 0x1e6698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e669c:
    // 0x1e669c: 0x8c93003c  lw          $s3, 0x3C($a0)
    ctx->pc = 0x1e669cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1e66a0:
    // 0x1e66a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e66a4:
    // 0x1e66a4: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x1e66a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e66a8:
    // 0x1e66a8: 0xc079a08  jal         func_1E6820
label_1e66ac:
    if (ctx->pc == 0x1E66ACu) {
        ctx->pc = 0x1E66ACu;
            // 0x1e66ac: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1E66B0u;
        goto label_1e66b0;
    }
    ctx->pc = 0x1E66A8u;
    SET_GPR_U32(ctx, 31, 0x1E66B0u);
    ctx->pc = 0x1E66ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66A8u;
            // 0x1e66ac: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (runtime->hasFunction(0x1E6820u)) {
        auto targetFn = runtime->lookupFunction(0x1E6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66B0u; }
        if (ctx->pc != 0x1E66B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6820_0x1e6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66B0u; }
        if (ctx->pc != 0x1E66B0u) { return; }
    }
    ctx->pc = 0x1E66B0u;
label_1e66b0:
    // 0x1e66b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e66b4:
    // 0x1e66b4: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_1e66b8:
    if (ctx->pc == 0x1E66B8u) {
        ctx->pc = 0x1E66B8u;
            // 0x1e66b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E66BCu;
        goto label_1e66bc;
    }
    ctx->pc = 0x1E66B4u;
    {
        const bool branch_taken_0x1e66b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E66B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66B4u;
            // 0x1e66b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66b4) {
            ctx->pc = 0x1E6708u;
            goto label_1e6708;
        }
    }
    ctx->pc = 0x1E66BCu;
label_1e66bc:
    // 0x1e66bc: 0xc0798a2  jal         func_1E6288
label_1e66c0:
    if (ctx->pc == 0x1E66C0u) {
        ctx->pc = 0x1E66C4u;
        goto label_1e66c4;
    }
    ctx->pc = 0x1E66BCu;
    SET_GPR_U32(ctx, 31, 0x1E66C4u);
    ctx->pc = 0x1E6288u;
    if (runtime->hasFunction(0x1E6288u)) {
        auto targetFn = runtime->lookupFunction(0x1E6288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66C4u; }
        if (ctx->pc != 0x1E66C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6288_0x1e6288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66C4u; }
        if (ctx->pc != 0x1E66C4u) { return; }
    }
    ctx->pc = 0x1E66C4u;
label_1e66c4:
    // 0x1e66c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e66c8:
    // 0x1e66c8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1e66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1e66cc:
    // 0x1e66cc: 0x40f809  jalr        $v0
label_1e66d0:
    if (ctx->pc == 0x1E66D0u) {
        ctx->pc = 0x1E66D0u;
            // 0x1e66d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E66D4u;
        goto label_1e66d4;
    }
    ctx->pc = 0x1E66CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E66D4u);
        ctx->pc = 0x1E66D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66CCu;
            // 0x1e66d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E66D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E66D4u; }
            if (ctx->pc != 0x1E66D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E66D4u;
label_1e66d4:
    // 0x1e66d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e66d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e66d8:
    // 0x1e66d8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x1e66d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_1e66dc:
    // 0x1e66dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e66dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e66e0:
    // 0x1e66e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e66e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e66e4:
    // 0x1e66e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e66e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e66e8:
    // 0x1e66e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e66e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e66ec:
    // 0x1e66ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e66ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e66f0:
    // 0x1e66f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e66f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e66f4:
    // 0x1e66f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e66f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e66f8:
    // 0x1e66f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e66f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e66fc:
    // 0x1e66fc: 0x807b6ba  j           func_1EDAE8
label_1e6700:
    if (ctx->pc == 0x1E6700u) {
        ctx->pc = 0x1E6700u;
            // 0x1e6700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E6704u;
        goto label_1e6704;
    }
    ctx->pc = 0x1E66FCu;
    ctx->pc = 0x1E6700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66FCu;
            // 0x1e6700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAE8u;
    if (runtime->hasFunction(0x1EDAE8u)) {
        auto targetFn = runtime->lookupFunction(0x1EDAE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001EDAE8_0x1edae8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6704u;
label_1e6704:
    // 0x1e6704: 0x0  nop
    ctx->pc = 0x1e6704u;
    // NOP
label_1e6708:
    // 0x1e6708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e670c:
    // 0x1e670c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e670cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6710:
    // 0x1e6710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e6710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6714:
    // 0x1e6714: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e6714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e6718:
    // 0x1e6718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e671c:
    // 0x1e671c: 0x3e00008  jr          $ra
label_1e6720:
    if (ctx->pc == 0x1E6720u) {
        ctx->pc = 0x1E6720u;
            // 0x1e6720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E6724u;
        goto label_1e6724;
    }
    ctx->pc = 0x1E671Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E671Cu;
            // 0x1e6720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6724u;
label_1e6724:
    // 0x1e6724: 0x0  nop
    ctx->pc = 0x1e6724u;
    // NOP
    ctx->pc = 0x1e6728u;
}
