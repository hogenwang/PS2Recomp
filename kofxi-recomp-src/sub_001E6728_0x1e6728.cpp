#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6728
// Address: 0x1e6728 - 0x1e67d8
void sub_001E6728_0x1e6728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6728_0x1e6728");
#endif

    switch (ctx->pc) {
        case 0x1e6728u: goto label_1e6728;
        case 0x1e672cu: goto label_1e672c;
        case 0x1e6730u: goto label_1e6730;
        case 0x1e6734u: goto label_1e6734;
        case 0x1e6738u: goto label_1e6738;
        case 0x1e673cu: goto label_1e673c;
        case 0x1e6740u: goto label_1e6740;
        case 0x1e6744u: goto label_1e6744;
        case 0x1e6748u: goto label_1e6748;
        case 0x1e674cu: goto label_1e674c;
        case 0x1e6750u: goto label_1e6750;
        case 0x1e6754u: goto label_1e6754;
        case 0x1e6758u: goto label_1e6758;
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6760u: goto label_1e6760;
        case 0x1e6764u: goto label_1e6764;
        case 0x1e6768u: goto label_1e6768;
        case 0x1e676cu: goto label_1e676c;
        case 0x1e6770u: goto label_1e6770;
        case 0x1e6774u: goto label_1e6774;
        case 0x1e6778u: goto label_1e6778;
        case 0x1e677cu: goto label_1e677c;
        case 0x1e6780u: goto label_1e6780;
        case 0x1e6784u: goto label_1e6784;
        case 0x1e6788u: goto label_1e6788;
        case 0x1e678cu: goto label_1e678c;
        case 0x1e6790u: goto label_1e6790;
        case 0x1e6794u: goto label_1e6794;
        case 0x1e6798u: goto label_1e6798;
        case 0x1e679cu: goto label_1e679c;
        case 0x1e67a0u: goto label_1e67a0;
        case 0x1e67a4u: goto label_1e67a4;
        case 0x1e67a8u: goto label_1e67a8;
        case 0x1e67acu: goto label_1e67ac;
        case 0x1e67b0u: goto label_1e67b0;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67bcu: goto label_1e67bc;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67c8u: goto label_1e67c8;
        case 0x1e67ccu: goto label_1e67cc;
        case 0x1e67d0u: goto label_1e67d0;
        case 0x1e67d4u: goto label_1e67d4;
        default: break;
    }

    ctx->pc = 0x1e6728u;

label_1e6728:
    // 0x1e6728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e672c:
    // 0x1e672c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6730:
    // 0x1e6730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6734:
    // 0x1e6734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e6734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e6738:
    // 0x1e6738: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1e673c:
    // 0x1e673c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e6740:
    // 0x1e6740: 0xc079a08  jal         func_1E6820
label_1e6744:
    if (ctx->pc == 0x1E6744u) {
        ctx->pc = 0x1E6744u;
            // 0x1e6744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6748u;
        goto label_1e6748;
    }
    ctx->pc = 0x1E6740u;
    SET_GPR_U32(ctx, 31, 0x1E6748u);
    ctx->pc = 0x1E6744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6740u;
            // 0x1e6744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (runtime->hasFunction(0x1E6820u)) {
        auto targetFn = runtime->lookupFunction(0x1E6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6748u; }
        if (ctx->pc != 0x1E6748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6820_0x1e6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6748u; }
        if (ctx->pc != 0x1E6748u) { return; }
    }
    ctx->pc = 0x1E6748u;
label_1e6748:
    // 0x1e6748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e674c:
    // 0x1e674c: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_1e6750:
    if (ctx->pc == 0x1E6750u) {
        ctx->pc = 0x1E6750u;
            // 0x1e6750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E6754u;
        goto label_1e6754;
    }
    ctx->pc = 0x1E674Cu;
    {
        const bool branch_taken_0x1e674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e674c) {
            ctx->pc = 0x1E6750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E674Cu;
            // 0x1e6750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E67BCu;
            goto label_1e67bc;
        }
    }
    ctx->pc = 0x1E6754u;
label_1e6754:
    // 0x1e6754: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x1e6754u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e6758:
    // 0x1e6758: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1e6758u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e675c:
    // 0x1e675c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1e6760:
    if (ctx->pc == 0x1E6760u) {
        ctx->pc = 0x1E6760u;
            // 0x1e6760: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1E6764u;
        goto label_1e6764;
    }
    ctx->pc = 0x1E675Cu;
    {
        const bool branch_taken_0x1e675c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E675Cu;
            // 0x1e6760: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e675c) {
            ctx->pc = 0x1E67B8u;
            goto label_1e67b8;
        }
    }
    ctx->pc = 0x1E6764u;
label_1e6764:
    // 0x1e6764: 0xc079b20  jal         func_1E6C80
label_1e6768:
    if (ctx->pc == 0x1E6768u) {
        ctx->pc = 0x1E676Cu;
        goto label_1e676c;
    }
    ctx->pc = 0x1E6764u;
    SET_GPR_U32(ctx, 31, 0x1E676Cu);
    ctx->pc = 0x1E6C80u;
    if (runtime->hasFunction(0x1E6C80u)) {
        auto targetFn = runtime->lookupFunction(0x1E6C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E676Cu; }
        if (ctx->pc != 0x1E676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6C80_0x1e6c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E676Cu; }
        if (ctx->pc != 0x1E676Cu) { return; }
    }
    ctx->pc = 0x1E676Cu;
label_1e676c:
    // 0x1e676c: 0xc0798a2  jal         func_1E6288
label_1e6770:
    if (ctx->pc == 0x1E6770u) {
        ctx->pc = 0x1E6770u;
            // 0x1e6770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6774u;
        goto label_1e6774;
    }
    ctx->pc = 0x1E676Cu;
    SET_GPR_U32(ctx, 31, 0x1E6774u);
    ctx->pc = 0x1E6770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E676Cu;
            // 0x1e6770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6288u;
    if (runtime->hasFunction(0x1E6288u)) {
        auto targetFn = runtime->lookupFunction(0x1E6288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6774u; }
        if (ctx->pc != 0x1E6774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6288_0x1e6288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6774u; }
        if (ctx->pc != 0x1E6774u) { return; }
    }
    ctx->pc = 0x1E6774u;
label_1e6774:
    // 0x1e6774: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e6774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1e6778:
    // 0x1e6778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e677c:
    // 0x1e677c: 0xc07987a  jal         func_1E61E8
label_1e6780:
    if (ctx->pc == 0x1E6780u) {
        ctx->pc = 0x1E6780u;
            // 0x1e6780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6784u;
        goto label_1e6784;
    }
    ctx->pc = 0x1E677Cu;
    SET_GPR_U32(ctx, 31, 0x1E6784u);
    ctx->pc = 0x1E6780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E677Cu;
            // 0x1e6780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61E8u;
    if (runtime->hasFunction(0x1E61E8u)) {
        auto targetFn = runtime->lookupFunction(0x1E61E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6784u; }
        if (ctx->pc != 0x1E6784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E61E8_0x1e61e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6784u; }
        if (ctx->pc != 0x1E6784u) { return; }
    }
    ctx->pc = 0x1E6784u;
label_1e6784:
    // 0x1e6784: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e6788:
    // 0x1e6788: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e678c:
    // 0x1e678c: 0x40f809  jalr        $v0
label_1e6790:
    if (ctx->pc == 0x1E6790u) {
        ctx->pc = 0x1E6790u;
            // 0x1e6790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6794u;
        goto label_1e6794;
    }
    ctx->pc = 0x1E678Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6794u);
        ctx->pc = 0x1E6790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E678Cu;
            // 0x1e6790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6794u; }
            if (ctx->pc != 0x1E6794u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6794u;
label_1e6794:
    // 0x1e6794: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1e6794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1e6798:
    // 0x1e6798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e6798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e679c:
    // 0x1e679c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e679cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e67a0:
    // 0x1e67a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e67a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e67a4:
    // 0x1e67a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e67a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e67a8:
    // 0x1e67a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e67a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e67ac:
    // 0x1e67ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e67acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e67b0:
    // 0x1e67b0: 0x807982e  j           func_1E60B8
label_1e67b4:
    if (ctx->pc == 0x1E67B4u) {
        ctx->pc = 0x1E67B4u;
            // 0x1e67b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E67B8u;
        goto label_1e67b8;
    }
    ctx->pc = 0x1E67B0u;
    ctx->pc = 0x1E67B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67B0u;
            // 0x1e67b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E60B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1E60B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E67B8u;
label_1e67b8:
    // 0x1e67b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e67b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e67bc:
    // 0x1e67bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e67bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e67c0:
    // 0x1e67c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e67c4:
    // 0x1e67c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e67c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e67c8:
    // 0x1e67c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e67c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e67cc:
    // 0x1e67cc: 0x3e00008  jr          $ra
label_1e67d0:
    if (ctx->pc == 0x1E67D0u) {
        ctx->pc = 0x1E67D0u;
            // 0x1e67d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E67D4u;
        goto label_1e67d4;
    }
    ctx->pc = 0x1E67CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E67D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67CCu;
            // 0x1e67d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E67D4u;
label_1e67d4:
    // 0x1e67d4: 0x0  nop
    ctx->pc = 0x1e67d4u;
    // NOP
    ctx->pc = 0x1e67d8u;
}
