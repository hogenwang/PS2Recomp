#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027E438
// Address: 0x27e438 - 0x27f040
void sub_0027E438_0x27e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E438_0x27e438");
#endif

    switch (ctx->pc) {
        case 0x27e468u: goto label_27e468;
        case 0x27e47cu: goto label_27e47c;
        case 0x27e484u: goto label_27e484;
        case 0x27e498u: goto label_27e498;
        case 0x27e4a0u: goto label_27e4a0;
        case 0x27e4c0u: goto label_27e4c0;
        case 0x27e4d4u: goto label_27e4d4;
        case 0x27e4e4u: goto label_27e4e4;
        case 0x27e53cu: goto label_27e53c;
        case 0x27e558u: goto label_27e558;
        case 0x27e560u: goto label_27e560;
        case 0x27e568u: goto label_27e568;
        case 0x27e570u: goto label_27e570;
        case 0x27e5bcu: goto label_27e5bc;
        case 0x27e5d8u: goto label_27e5d8;
        case 0x27e5dcu: goto label_27e5dc;
        case 0x27e5e4u: goto label_27e5e4;
        case 0x27e5ecu: goto label_27e5ec;
        case 0x27e610u: goto label_27e610;
        case 0x27e61cu: goto label_27e61c;
        case 0x27e650u: goto label_27e650;
        case 0x27e658u: goto label_27e658;
        case 0x27e6c8u: goto label_27e6c8;
        case 0x27e6d0u: goto label_27e6d0;
        case 0x27e750u: goto label_27e750;
        case 0x27e7b8u: goto label_27e7b8;
        case 0x27e7d4u: goto label_27e7d4;
        case 0x27e984u: goto label_27e984;
        case 0x27e98cu: goto label_27e98c;
        case 0x27e9a8u: goto label_27e9a8;
        case 0x27ea74u: goto label_27ea74;
        case 0x27eb90u: goto label_27eb90;
        case 0x27eba0u: goto label_27eba0;
        case 0x27ed00u: goto label_27ed00;
        case 0x27ed20u: goto label_27ed20;
        case 0x27ed50u: goto label_27ed50;
        case 0x27ed5cu: goto label_27ed5c;
        case 0x27ed74u: goto label_27ed74;
        case 0x27ed80u: goto label_27ed80;
        case 0x27edb8u: goto label_27edb8;
        case 0x27edd0u: goto label_27edd0;
        case 0x27ede8u: goto label_27ede8;
        case 0x27edf8u: goto label_27edf8;
        case 0x27ee0cu: goto label_27ee0c;
        case 0x27ee38u: goto label_27ee38;
        case 0x27ee8cu: goto label_27ee8c;
        case 0x27eec0u: goto label_27eec0;
        case 0x27ef10u: goto label_27ef10;
        case 0x27ef58u: goto label_27ef58;
        case 0x27efc0u: goto label_27efc0;
        case 0x27f010u: goto label_27f010;
        default: break;
    }

    ctx->pc = 0x27e438u;

label_27e438:
    // 0x27e438: 0x27bdde90  addiu       $sp, $sp, -0x2170
    ctx->pc = 0x27e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958736));
    // 0x27e43c: 0xffb02120  sd          $s0, 0x2120($sp)
    ctx->pc = 0x27e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8480), GPR_U64(ctx, 16));
    // 0x27e440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27e440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e444: 0xffb12128  sd          $s1, 0x2128($sp)
    ctx->pc = 0x27e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8488), GPR_U64(ctx, 17));
    // 0x27e448: 0xffb22130  sd          $s2, 0x2130($sp)
    ctx->pc = 0x27e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8496), GPR_U64(ctx, 18));
    // 0x27e44c: 0xffb32138  sd          $s3, 0x2138($sp)
    ctx->pc = 0x27e44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8504), GPR_U64(ctx, 19));
    // 0x27e450: 0xffb42140  sd          $s4, 0x2140($sp)
    ctx->pc = 0x27e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8512), GPR_U64(ctx, 20));
    // 0x27e454: 0xffbf2148  sd          $ra, 0x2148($sp)
    ctx->pc = 0x27e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8520), GPR_U64(ctx, 31));
    // 0x27e458: 0xe7b62160  swc1        $f22, 0x2160($sp)
    ctx->pc = 0x27e458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8544), bits); }
    // 0x27e45c: 0xe7b52158  swc1        $f21, 0x2158($sp)
    ctx->pc = 0x27e45cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8536), bits); }
    // 0x27e460: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x27E460u;
    SET_GPR_U32(ctx, 31, 0x27E468u);
    ctx->pc = 0x27E464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E460u;
            // 0x27e464: 0xe7b42150  swc1        $f20, 0x2150($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8528), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E468u; }
        if (ctx->pc != 0x27E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E468u; }
        if (ctx->pc != 0x27E468u) { return; }
    }
    ctx->pc = 0x27E468u;
label_27e468:
    // 0x27e468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e46c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27e46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e474: 0xc0b024e  jal         func_2C0938
    ctx->pc = 0x27E474u;
    SET_GPR_U32(ctx, 31, 0x27E47Cu);
    ctx->pc = 0x27E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E474u;
            // 0x27e478: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0938u;
    if (runtime->hasFunction(0x2C0938u)) {
        auto targetFn = runtime->lookupFunction(0x2C0938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E47Cu; }
        if (ctx->pc != 0x27E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0938_0x2c0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E47Cu; }
        if (ctx->pc != 0x27E47Cu) { return; }
    }
    ctx->pc = 0x27E47Cu;
label_27e47c:
    // 0x27e47c: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x27E47Cu;
    SET_GPR_U32(ctx, 31, 0x27E484u);
    ctx->pc = 0x27E480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E47Cu;
            // 0x27e480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (runtime->hasFunction(0x28EB88u)) {
        auto targetFn = runtime->lookupFunction(0x28EB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E484u; }
        if (ctx->pc != 0x27E484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EB88_0x28eb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E484u; }
        if (ctx->pc != 0x27E484u) { return; }
    }
    ctx->pc = 0x27E484u;
label_27e484:
    // 0x27e484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e488: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x27E488u;
    {
        const bool branch_taken_0x27e488 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x27E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E488u;
            // 0x27e48c: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e488) {
            ctx->pc = 0x27E4FCu;
            goto label_27e4fc;
        }
    }
    ctx->pc = 0x27E490u;
    // 0x27e490: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x27e490u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x27e494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e498:
    // 0x27e498: 0xc0a3af4  jal         func_28EBD0
    ctx->pc = 0x27E498u;
    SET_GPR_U32(ctx, 31, 0x27E4A0u);
    ctx->pc = 0x27E49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E498u;
            // 0x27e49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EBD0u;
    if (runtime->hasFunction(0x28EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x28EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4A0u; }
        if (ctx->pc != 0x27E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EBD0_0x28ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4A0u; }
        if (ctx->pc != 0x27E4A0u) { return; }
    }
    ctx->pc = 0x27E4A0u;
label_27e4a0:
    // 0x27e4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4a4: 0x27a62100  addiu       $a2, $sp, 0x2100
    ctx->pc = 0x27e4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8448));
    // 0x27e4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27e4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4ac: 0x27a72108  addiu       $a3, $sp, 0x2108
    ctx->pc = 0x27e4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8456));
    // 0x27e4b0: 0x27a82110  addiu       $t0, $sp, 0x2110
    ctx->pc = 0x27e4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8464));
    // 0x27e4b4: 0x27a92114  addiu       $t1, $sp, 0x2114
    ctx->pc = 0x27e4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8468));
    // 0x27e4b8: 0xc0a3b06  jal         func_28EC18
    ctx->pc = 0x27E4B8u;
    SET_GPR_U32(ctx, 31, 0x27E4C0u);
    ctx->pc = 0x27E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4B8u;
            // 0x27e4bc: 0x27aa2118  addiu       $t2, $sp, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EC18u;
    if (runtime->hasFunction(0x28EC18u)) {
        auto targetFn = runtime->lookupFunction(0x28EC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4C0u; }
        if (ctx->pc != 0x27E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EC18_0x28ec18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4C0u; }
        if (ctx->pc != 0x27E4C0u) { return; }
    }
    ctx->pc = 0x27E4C0u;
label_27e4c0:
    // 0x27e4c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27E4C0u;
    {
        const bool branch_taken_0x27e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4C0u;
            // 0x27e4c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4c0) {
            ctx->pc = 0x27E4ECu;
            goto label_27e4ec;
        }
    }
    ctx->pc = 0x27E4C8u;
    // 0x27e4c8: 0x8fa42100  lw          $a0, 0x2100($sp)
    ctx->pc = 0x27e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8448)));
    // 0x27e4cc: 0xc0a3d5c  jal         func_28F570
    ctx->pc = 0x27E4CCu;
    SET_GPR_U32(ctx, 31, 0x27E4D4u);
    ctx->pc = 0x27E4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4CCu;
            // 0x27e4d0: 0xdfa52108  ld          $a1, 0x2108($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F570u;
    if (runtime->hasFunction(0x28F570u)) {
        auto targetFn = runtime->lookupFunction(0x28F570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4D4u; }
        if (ctx->pc != 0x27E4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F570_0x28f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4D4u; }
        if (ctx->pc != 0x27E4D4u) { return; }
    }
    ctx->pc = 0x27E4D4u;
label_27e4d4:
    // 0x27e4d4: 0x2684a5a8  addiu       $a0, $s4, -0x5A58
    ctx->pc = 0x27e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944168));
    // 0x27e4d8: 0x42200b  movn        $a0, $v0, $v0
    ctx->pc = 0x27e4d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x27e4dc: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x27E4DCu;
    SET_GPR_U32(ctx, 31, 0x27E4E4u);
    ctx->pc = 0x27E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4DCu;
            // 0x27e4e0: 0x2665a5b8  addiu       $a1, $s3, -0x5A48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4E4u; }
        if (ctx->pc != 0x27E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4E4u; }
        if (ctx->pc != 0x27E4E4u) { return; }
    }
    ctx->pc = 0x27E4E4u;
label_27e4e4:
    // 0x27e4e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E4E4u;
    {
        const bool branch_taken_0x27e4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4e4) {
            ctx->pc = 0x27E4FCu;
            goto label_27e4fc;
        }
    }
    ctx->pc = 0x27E4ECu;
label_27e4ec:
    // 0x27e4ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e4f0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x27e4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27e4f4: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x27E4F4u;
    {
        const bool branch_taken_0x27e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e4f4) {
            ctx->pc = 0x27E4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4F4u;
            // 0x27e4f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e498;
        }
    }
    ctx->pc = 0x27E4FCu;
label_27e4fc:
    // 0x27e4fc: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E4FCu;
    {
        const bool branch_taken_0x27e4fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x27E500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4FCu;
            // 0x27e500: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4fc) {
            ctx->pc = 0x27E510u;
            goto label_27e510;
        }
    }
    ctx->pc = 0x27E504u;
    // 0x27e504: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x27E504u;
    {
        const bool branch_taken_0x27e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E504u;
            // 0x27e508: 0x27b32000  addiu       $s3, $sp, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e504) {
            ctx->pc = 0x27E624u;
            goto label_27e624;
        }
    }
    ctx->pc = 0x27E50Cu;
    // 0x27e50c: 0x0  nop
    ctx->pc = 0x27e50cu;
    // NOP
label_27e510:
    // 0x27e510: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e514: 0x2463e55c  addiu       $v1, $v1, -0x1AA4
    ctx->pc = 0x27e514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960476));
    // 0x27e518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e51c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E51Cu;
    {
        const bool branch_taken_0x27e51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e51c) {
            ctx->pc = 0x27E53Cu;
            goto label_27e53c;
        }
    }
    ctx->pc = 0x27E524u;
    // 0x27e524: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27e524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27e528: 0x2484e570  addiu       $a0, $a0, -0x1A90
    ctx->pc = 0x27e528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960496));
    // 0x27e52c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27e52cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27e530: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27e530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27e534: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27E534u;
    SET_GPR_U32(ctx, 31, 0x27E53Cu);
    ctx->pc = 0x27E538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E534u;
            // 0x27e538: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E53Cu; }
        if (ctx->pc != 0x27E53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E53Cu; }
        if (ctx->pc != 0x27E53Cu) { return; }
    }
    ctx->pc = 0x27E53Cu;
label_27e53c:
    // 0x27e53c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27E53Cu;
    {
        const bool branch_taken_0x27e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e53c) {
            ctx->pc = 0x27E570u;
            goto label_27e570;
        }
    }
    ctx->pc = 0x27E544u;
    // 0x27e544: 0x270fd640  addiu       $t7, $t8, -0x29C0
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 4294956608));
    // 0x27e548: 0xa25c9851  sb          $gp, -0x67AF($s2)
    ctx->pc = 0x27e548u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294940753), (uint8_t)GPR_U32(ctx, 28));
    // 0x27e54c: 0xfdc2ce72  sd          $v0, -0x318E($t6)
    ctx->pc = 0x27e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 4294954610), GPR_U64(ctx, 2));
    // 0x27e550: 0xc9d6ab5  jal         func_275AAD4
    ctx->pc = 0x27E550u;
    SET_GPR_U32(ctx, 31, 0x27E558u);
    ctx->pc = 0x27E554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E550u;
            // 0x27e554: 0x8702320b  lh          $v0, 0x320B($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 12811)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275AAD4u;
    {
        auto targetFn = runtime->lookupFunction(0x275AAD4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E558u; }
        if (ctx->pc != 0x27E558u) { return; }
    }
    ctx->pc = 0x27E558u;
label_27e558:
    // 0x27e558: 0xc62ca3c  jal         func_18B28F0
    ctx->pc = 0x27E558u;
    SET_GPR_U32(ctx, 31, 0x27E560u);
    ctx->pc = 0x18B28F0u;
    {
        auto targetFn = runtime->lookupFunction(0x18B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E560u; }
        if (ctx->pc != 0x27E560u) { return; }
    }
    ctx->pc = 0x27E560u;
label_27e560:
    // 0x27e560: 0x8df8a54  j           func_37E2950
    ctx->pc = 0x27E560u;
    ctx->pc = 0x27E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E560u;
            // 0x27e564: 0x980b3650  lwr         $t3, 0x3650($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13904); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x37E2950u;
    {
        auto targetFn = runtime->lookupFunction(0x37E2950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27E568u;
label_27e568:
    // 0x27e568: 0x8df8a18  j           func_37E2860
    ctx->pc = 0x27E568u;
    ctx->pc = 0x37E2860u;
    {
        auto targetFn = runtime->lookupFunction(0x37E2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27E570u;
label_27e570:
    // 0x27e570: 0xf81281ed  sqc2        $vf18, -0x7E13($zero)
    ctx->pc = 0x27e570u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 4294935021), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x27e574: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x27e574u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27e578: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x27e578u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27e57c: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x27e57cu;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27e580: 0x4824bb57  .word       0x4824BB57                   # qmfc2.i     $a0, $vf23 # 00000356 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x27e580u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27e584: 0xef0fb1d8  .word       0xEF0FB1D8                   # INVALID     $t8, $t7, -0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27e584u;
    // Unhandled opcode: 0x3B
    // 0x27e588: 0x4a0039da  vmulz       $vf7, $vf7, $vf0z
    ctx->pc = 0x27e588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x27e58c: 0xef2ebfd5  .word       0xEF2EBFD5                   # INVALID     $t9, $t6, -0x402B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27e58cu;
    // Unhandled opcode: 0x3B
    // 0x27e590: 0xc4a7b354  lwc1        $f7, -0x4CAC($a1)
    ctx->pc = 0x27e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294947668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27e594: 0x42a7bed9  .word       0x42A7BED9                   # INVALID     $s5, $a3, -0x4127 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27e594u;
    // Unhandled COP0 instruction format: 0x15
    // 0x27e598: 0xefa030da  .word       0xEFA030DA                   # INVALID     $sp, $zero, 0x30DA # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27e598u;
    // Unhandled opcode: 0x3B
    // 0x27e59c: 0xf82489ed  sqc2        $vf4, -0x7613($at)
    ctx->pc = 0x27e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294937069), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27e5a0: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x27e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27e5a4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27e5a8: 0x24a5e580  addiu       $a1, $a1, -0x1A80
    ctx->pc = 0x27e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960512));
    // 0x27e5ac: 0x68971ab4  ldl         $s7, 0x1AB4($a0)
    ctx->pc = 0x27e5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 6836); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x27e5b0: 0xf8171b6e  sqc2        $vf23, 0x1B6E($zero)
    ctx->pc = 0x27e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 7022), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27e5b4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x27E5B4u;
    SET_GPR_U32(ctx, 31, 0x27E5BCu);
    ctx->pc = 0x27E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5B4u;
            // 0x27e5b8: 0xe80188dd  swc2        $1, -0x7723($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5BCu; }
        if (ctx->pc != 0x27E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5BCu; }
        if (ctx->pc != 0x27E5BCu) { return; }
    }
    ctx->pc = 0x27E5BCu;
label_27e5bc:
    // 0x27e5bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27E5BCu;
    {
        const bool branch_taken_0x27e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e5bc) {
            ctx->pc = 0x27E5ECu;
            goto label_27e5ec;
        }
    }
    ctx->pc = 0x27E5C4u;
    // 0x27e5c4: 0xa2b99599  sb          $t9, -0x6A67($s5)
    ctx->pc = 0x27e5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294940057), (uint8_t)GPR_U32(ctx, 25));
    // 0x27e5c8: 0xfc7ecc22  sd          $fp, -0x33DE($v1)
    ctx->pc = 0x27e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954018), GPR_U64(ctx, 30));
    // 0x27e5cc: 0xa39762a9  sb          $s7, 0x62A9($gp)
    ctx->pc = 0x27e5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 25257), (uint8_t)GPR_U32(ctx, 23));
    // 0x27e5d0: 0xcfafbd2  jal         func_3EBEF48
    ctx->pc = 0x27E5D0u;
    SET_GPR_U32(ctx, 31, 0x27E5D8u);
    ctx->pc = 0x27E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5D0u;
            // 0x27e5d4: 0xc7fc927  jal         func_1FF249C (Delay Slot)
        // JAL 0x1FF249C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EBEF48u;
    {
        auto targetFn = runtime->lookupFunction(0x3EBEF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5D8u; }
        if (ctx->pc != 0x27E5D8u) { return; }
    }
    ctx->pc = 0x27E5D8u;
label_27e5d8:
    // 0x27e5d8: 0x7c9820  add         $s3, $v1, $gp
    ctx->pc = 0x27e5d8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27e5dc:
    // 0x27e5dc: 0x8d45a8f  j           func_3516A3C
    ctx->pc = 0x27E5DCu;
    ctx->pc = 0x27E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5DCu;
            // 0x27e5e0: 0x980b3651  lwr         $t3, 0x3651($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13905); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3516A3Cu;
    {
        auto targetFn = runtime->lookupFunction(0x3516A3Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27E5E4u;
label_27e5e4:
    // 0x27e5e4: 0x8d45ac3  j           func_3516B0C
    ctx->pc = 0x27E5E4u;
    ctx->pc = 0x3516B0Cu;
    {
        auto targetFn = runtime->lookupFunction(0x3516B0Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27E5ECu;
label_27e5ec:
    // 0x27e5ec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27e5f0: 0x2442e5dc  addiu       $v0, $v0, -0x1A24
    ctx->pc = 0x27e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960604));
    // 0x27e5f4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27e5f8: 0x2484e5bc  addiu       $a0, $a0, -0x1A44
    ctx->pc = 0x27e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960572));
    // 0x27e5fc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27e600: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e600u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e604: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e608: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27E608u;
    SET_GPR_U32(ctx, 31, 0x27E610u);
    ctx->pc = 0x27E60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E608u;
            // 0x27e60c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E610u; }
        if (ctx->pc != 0x27E610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E610u; }
        if (ctx->pc != 0x27E610u) { return; }
    }
    ctx->pc = 0x27E610u;
label_27e610:
    // 0x27e610: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e614: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x27E614u;
    SET_GPR_U32(ctx, 31, 0x27E61Cu);
    ctx->pc = 0x27E618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E614u;
            // 0x27e618: 0x8fa42114  lw          $a0, 0x2114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8468)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E61Cu; }
        if (ctx->pc != 0x27E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E61Cu; }
        if (ctx->pc != 0x27E61Cu) { return; }
    }
    ctx->pc = 0x27E61Cu;
label_27e61c:
    // 0x27e61c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e620: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x27e620u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_27e624:
    // 0x27e624: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27e628: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27e628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27e62c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27e62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27e630: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x27e630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e634: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27e634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27e638: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27e638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27e63c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27e63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e640: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27e640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27e644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27e644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27e648: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x27e648u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x27e64c: 0x0  nop
    ctx->pc = 0x27e64cu;
    // NOP
label_27e650:
    // 0x27e650: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27E650u;
    SET_GPR_U32(ctx, 31, 0x27E658u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E658u; }
        if (ctx->pc != 0x27E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E658u; }
        if (ctx->pc != 0x27E658u) { return; }
    }
    ctx->pc = 0x27E658u;
label_27e658:
    // 0x27e658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e65c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e660: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x27e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x27e664: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e668: 0x0  nop
    ctx->pc = 0x27e668u;
    // NOP
    // 0x27e66c: 0x0  nop
    ctx->pc = 0x27e66cu;
    // NOP
    // 0x27e670: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27e670u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27e674: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27e674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27e678: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27e678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e67c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e67cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e680: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27e680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27e684: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27E684u;
    {
        const bool branch_taken_0x27e684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E684u;
            // 0x27e688: 0x2e032000  sltiu       $v1, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e684) {
            ctx->pc = 0x27E69Cu;
            goto label_27e69c;
        }
    }
    ctx->pc = 0x27E68Cu;
    // 0x27e68c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27e68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27e690: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e690u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e694: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27e694u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27e698: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x27e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_27e69c:
    // 0x27e69c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27E69Cu;
    {
        const bool branch_taken_0x27e69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E69Cu;
            // 0x27e6a0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e69c) {
            ctx->pc = 0x27E650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e650;
        }
    }
    ctx->pc = 0x27E6A4u;
    // 0x27e6a4: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27e6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27e6a8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27e6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27e6ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27e6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27e6b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27e6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6b4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27e6b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27e6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27e6bc: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x27e6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x27e6c0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27e6c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27e6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27e6c8:
    // 0x27e6c8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27E6C8u;
    SET_GPR_U32(ctx, 31, 0x27E6D0u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6D0u; }
        if (ctx->pc != 0x27E6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6D0u; }
        if (ctx->pc != 0x27E6D0u) { return; }
    }
    ctx->pc = 0x27E6D0u;
label_27e6d0:
    // 0x27e6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e6d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e6d8: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x27e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27e6dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e6e0: 0x0  nop
    ctx->pc = 0x27e6e0u;
    // NOP
    // 0x27e6e4: 0x0  nop
    ctx->pc = 0x27e6e4u;
    // NOP
    // 0x27e6e8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27e6e8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27e6ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27e6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27e6f0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27e6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e6f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e6f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e6f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27e6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27e6fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27E6FCu;
    {
        const bool branch_taken_0x27e6fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6FCu;
            // 0x27e700: 0x2e030100  sltiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6fc) {
            ctx->pc = 0x27E714u;
            goto label_27e714;
        }
    }
    ctx->pc = 0x27E704u;
    // 0x27e704: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27e704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27e708: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e70c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27e70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27e710: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x27e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_27e714:
    // 0x27e714: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27E714u;
    {
        const bool branch_taken_0x27e714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E714u;
            // 0x27e718: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e714) {
            ctx->pc = 0x27E6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e6c8;
        }
    }
    ctx->pc = 0x27E71Cu;
    // 0x27e71c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27e71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e720: 0xdfb02120  ld          $s0, 0x2120($sp)
    ctx->pc = 0x27e720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 8480)));
    // 0x27e724: 0xdfb12128  ld          $s1, 0x2128($sp)
    ctx->pc = 0x27e724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8488)));
    // 0x27e728: 0xdfb22130  ld          $s2, 0x2130($sp)
    ctx->pc = 0x27e728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 8496)));
    // 0x27e72c: 0xdfb32138  ld          $s3, 0x2138($sp)
    ctx->pc = 0x27e72cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 8504)));
    // 0x27e730: 0xdfb42140  ld          $s4, 0x2140($sp)
    ctx->pc = 0x27e730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8512)));
    // 0x27e734: 0xdfbf2148  ld          $ra, 0x2148($sp)
    ctx->pc = 0x27e734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8520)));
    // 0x27e738: 0xc7b62160  lwc1        $f22, 0x2160($sp)
    ctx->pc = 0x27e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27e73c: 0xc7b52158  lwc1        $f21, 0x2158($sp)
    ctx->pc = 0x27e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27e740: 0xc7b42150  lwc1        $f20, 0x2150($sp)
    ctx->pc = 0x27e740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e744: 0x3e00008  jr          $ra
    ctx->pc = 0x27E744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E744u;
            // 0x27e748: 0x27bd2170  addiu       $sp, $sp, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E74Cu;
    // 0x27e74c: 0x0  nop
    ctx->pc = 0x27e74cu;
    // NOP
label_27e750:
    // 0x27e750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27e754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27e758: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27e758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e75c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x27e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x27e760: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x27e760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e764: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x27e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x27e768: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x27e768u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e76c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27e76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27e770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27e770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27e774: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x27e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x27e778: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x27e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x27e77c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x27e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x27e780: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x27e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x27e784: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x27e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x27e788: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27e788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27e78c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e790: 0x2463e7d8  addiu       $v1, $v1, -0x1828
    ctx->pc = 0x27e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961112));
    // 0x27e794: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e798: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E798u;
    {
        const bool branch_taken_0x27e798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e798) {
            ctx->pc = 0x27E7B8u;
            goto label_27e7b8;
        }
    }
    ctx->pc = 0x27E7A0u;
    // 0x27e7a0: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27e7a4: 0x2484e7ec  addiu       $a0, $a0, -0x1814
    ctx->pc = 0x27e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961132));
    // 0x27e7a8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27e7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27e7ac: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27e7b0: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27E7B0u;
    SET_GPR_U32(ctx, 31, 0x27E7B8u);
    ctx->pc = 0x27E7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7B0u;
            // 0x27e7b4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7B8u; }
        if (ctx->pc != 0x27E7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7B8u; }
        if (ctx->pc != 0x27E7B8u) { return; }
    }
    ctx->pc = 0x27E7B8u;
label_27e7b8:
    // 0x27e7b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27E7B8u;
    {
        const bool branch_taken_0x27e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7b8) {
            ctx->pc = 0x27E7ECu;
            goto label_27e7ec;
        }
    }
    ctx->pc = 0x27E7C0u;
    // 0x27e7c0: 0xdd2569f7  ld          $a1, 0x69F7($t1)
    ctx->pc = 0x27e7c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 27127)));
    // 0x27e7c4: 0x852ebc4b  lh          $t6, -0x43B5($t1)
    ctx->pc = 0x27e7c4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294949963)));
    // 0x27e7c8: 0x86bee533  lh          $fp, -0x1ACD($s5)
    ctx->pc = 0x27e7c8u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294960435)));
    // 0x27e7cc: 0xc55b134  jal         func_156C4D0
    ctx->pc = 0x27E7CCu;
    SET_GPR_U32(ctx, 31, 0x27E7D4u);
    ctx->pc = 0x27E7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7CCu;
            // 0x27e7d0: 0xde8b5627  ld          $t3, 0x5627($s4) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 22055)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156C4D0u;
    {
        auto targetFn = runtime->lookupFunction(0x156C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7D4u; }
        if (ctx->pc != 0x27E7D4u) { return; }
    }
    ctx->pc = 0x27E7D4u;
label_27e7d4:
    // 0x27e7d4: 0xfe8234da  sd          $v0, 0x34DA($s4)
    ctx->pc = 0x27e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 13530), GPR_U64(ctx, 2));
    // 0x27e7d8: 0x0  nop
    ctx->pc = 0x27e7d8u;
    // NOP
    // 0x27e7dc: 0x4c960144  .word       0x4C960144                   # INVALID     $a0, $s6, 0x144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27e7dcu;
    // Unhandled opcode: 0x13
    // 0x27e7e0: 0x980b36a6  lwr         $t3, 0x36A6($zero)
    ctx->pc = 0x27e7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13990); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27e7e4: 0x4c960714  .word       0x4C960714                   # INVALID     $a0, $s6, 0x714 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27e7e4u;
    // Unhandled opcode: 0x13
    // 0x27e7e8: 0x0  nop
    ctx->pc = 0x27e7e8u;
    // NOP
label_27e7ec:
    // 0x27e7ec: 0x9ac5a9b0  lwr         $a1, -0x5650($s6)
    ctx->pc = 0x27e7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4294945200); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x27e7f0: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e7f0u;
    // Unhandled opcode: 0x35
    // 0x27e7f4: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e7f4u;
    // Unhandled opcode: 0x35
    // 0x27e7f8: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e7f8u;
    // Unhandled opcode: 0x35
    // 0x27e7fc: 0xe447a882  swc1        $f7, -0x577E($v0)
    ctx->pc = 0x27e7fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944898), bits); }
    // 0x27e800: 0xe4c8afa9  swc1        $f8, -0x5057($a2)
    ctx->pc = 0x27e800u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294946729), bits); }
    // 0x27e804: 0xfe43e126  sd          $v1, -0x1EDA($s2)
    ctx->pc = 0x27e804u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294959398), GPR_U64(ctx, 3));
    // 0x27e808: 0x23c8a8a1  addi        $t0, $fp, -0x575F
    ctx->pc = 0x27e808u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 30), (int32_t)4294944929, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x27e80c: 0xd5c0a9a3  ldc1        $f0, -0x565D($t6)
    ctx->pc = 0x27e80cu;
    // Unhandled opcode: 0x35
    // 0x27e810: 0x56c4a6a0  bnel        $s6, $a0, . + 4 + (-0x5960 << 2)
    ctx->pc = 0x27E810u;
    {
        const bool branch_taken_0x27e810 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x27e810) {
            ctx->pc = 0x27E814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E810u;
            // 0x27e814: 0xe447a8aa  swc1        $f7, -0x5756($v0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944938), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x268294u;
            return;
        }
    }
    ctx->pc = 0x27E818u;
    // 0x27e818: 0xd647a8a1  ldc1        $f7, -0x575F($s2)
    ctx->pc = 0x27e818u;
    // Unhandled opcode: 0x35
    // 0x27e81c: 0xd46d3450  ldc1        $f13, 0x3450($v1)
    ctx->pc = 0x27e81cu;
    // Unhandled opcode: 0x35
    // 0x27e820: 0x267f1274  addiu       $ra, $s3, 0x1274
    ctx->pc = 0x27e820u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 19), 4724));
    // 0x27e824: 0x2eccf50b  sltiu       $t4, $s6, -0xAF5
    ctx->pc = 0x27e824u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4294964491) ? 1 : 0);
    // 0x27e828: 0xc2f06769  ll          $s0, 0x6769($s7)
    ctx->pc = 0x27e828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 26473); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27e82c: 0xe68ecb40  swc1        $f14, -0x34C0($s4)
    ctx->pc = 0x27e82cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294953792), bits); }
    // 0x27e830: 0xb0fddecb  sdl         $sp, -0x2135($a3)
    ctx->pc = 0x27e830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294958795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 29); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e834: 0xd42313f0  ldc1        $f3, 0x13F0($at)
    ctx->pc = 0x27e834u;
    // Unhandled opcode: 0x35
    // 0x27e838: 0x10ca4377  beq         $a2, $t2, . + 4 + (0x4377 << 2)
    ctx->pc = 0x27E838u;
    {
        const bool branch_taken_0x27e838 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x27E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E838u;
            // 0x27e83c: 0x8d76aaad  lw          $s6, -0x5553($t3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294945453)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e838) {
            ctx->pc = 0x28F618u;
            return;
        }
    }
    ctx->pc = 0x27E840u;
    // 0x27e840: 0x185f2d4a  .word       0x185F2D4A                   # blez        $v0, . + 4 + (0x2D4A << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E840u;
    {
        const bool branch_taken_0x27e840 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27E844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E840u;
            // 0x27e844: 0x4ac19d44  vsubx.yz    $vf21, $vf19, $vf1x (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e840) {
            ctx->pc = 0x289D6Cu;
            return;
        }
    }
    ctx->pc = 0x27E848u;
    // 0x27e848: 0x428362ab  .word       0x428362AB                   # INVALID     $s4, $v1, 0x62AB # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27e848u;
    // Unhandled COP0 instruction format: 0x14
    // 0x27e84c: 0x2fca3733  sltiu       $t2, $fp, 0x3733
    ctx->pc = 0x27e84cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)14131) ? 1 : 0);
    // 0x27e850: 0x7291d6f0  .word       0x7291D6F0                   # INVALID     $s4, $s1, -0x2910 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x27e850u;
    // Unhandled PMFHL instruction: function 0x1B
    // 0x27e854: 0x6ac35de7  ldl         $v1, 0x5DE7($s6)
    ctx->pc = 0x27e854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24039); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27e858: 0xaf44a3ba  sw          $a0, -0x5C46($k0)
    ctx->pc = 0x27e858u;
    WRITE32(ADD32(GPR_U32(ctx, 26), 4294943674), GPR_U32(ctx, 4));
    // 0x27e85c: 0x39883113  xori        $t0, $t4, 0x3113
    ctx->pc = 0x27e85cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)12563);
    // 0x27e860: 0xcf7616dd  pref        0x16, 0x16DD($k1)
    ctx->pc = 0x27e860u;
    // PREF instruction (ignored)
    // 0x27e864: 0x471da4c4  .word       0x471DA4C4                   # INVALID     $t8, $sp, -0x5B3C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27e864u;
    // Unhandled FPU instruction: format 0x18, function 0x4
    // 0x27e868: 0xf07f2226  scd         $ra, 0x2226($v1)
    ctx->pc = 0x27e868u;
    // Unhandled opcode: 0x3C
    // 0x27e86c: 0xba90cb88  swr         $s0, -0x3478($s4)
    ctx->pc = 0x27e86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294953864); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27e870: 0x94206afd  lhu         $zero, 0x6AFD($at)
    ctx->pc = 0x27e870u;
    SET_GPR_U32(ctx, 0, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27389)));
    // 0x27e874: 0x3a0f26bd  xori        $t7, $s0, 0x26BD
    ctx->pc = 0x27e874u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)9917);
    // 0x27e878: 0x8d1e89e2  lw          $fp, -0x761E($t0)
    ctx->pc = 0x27e878u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294937058)));
    // 0x27e87c: 0x6a4e01dc  ldl         $t6, 0x1DC($s2)
    ctx->pc = 0x27e87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 476); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x27e880: 0xdbd0e309  lqc2        $vf16, -0x1CF7($fp)
    ctx->pc = 0x27e880u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294959881)));
    // 0x27e884: 0x4f54b463  .word       0x4F54B463                   # INVALID     $k0, $s4, -0x4B9D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27e884u;
    // Unhandled opcode: 0x13
    // 0x27e888: 0xd8ad96a3  lqc2        $vf13, -0x695D($a1)
    ctx->pc = 0x27e888u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 4294940323)));
    // 0x27e88c: 0x24fe9826  addiu       $fp, $a3, -0x67DA
    ctx->pc = 0x27e88cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940710));
    // 0x27e890: 0x7e0a9cfd  sq          $t2, -0x6303($s0)
    ctx->pc = 0x27e890u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294941949), GPR_VEC(ctx, 10));
    // 0x27e894: 0x1a08957e  .word       0x1A08957E                   # blez        $s0, . + 4 + (-0x6A82 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E894u;
    {
        const bool branch_taken_0x27e894 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x27E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E894u;
            // 0x27e898: 0x1778b5d7  bne         $k1, $t8, . + 4 + (-0x4A29 << 2) (Delay Slot)
        // Likely branch instruction at 0x27E898 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e894) {
            ctx->pc = 0x263E90u;
            return;
        }
    }
    ctx->pc = 0x27E89Cu;
    // 0x27e89c: 0x7e9035bc  sq          $s0, 0x35BC($s4)
    ctx->pc = 0x27e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 13756), GPR_VEC(ctx, 16));
    // 0x27e8a0: 0xd551687a  ldc1        $f17, 0x687A($t2)
    ctx->pc = 0x27e8a0u;
    // Unhandled opcode: 0x35
    // 0x27e8a4: 0x5d934474  .word       0x5D934474                   # bgtzl       $t4, . + 4 + (0x4474 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E8A4u;
    {
        const bool branch_taken_0x27e8a4 = (GPR_S32(ctx, 12) > 0);
        if (branch_taken_0x27e8a4) {
            ctx->pc = 0x27E8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8A4u;
            // 0x27e8a8: 0xbcdb1e6c  cache       0x1B, 0x1E6C($a2) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FA78u;
            return;
        }
    }
    ctx->pc = 0x27E8ACu;
    // 0x27e8ac: 0x48ca0f00  .word       0x48CA0F00                   # ctc2.ni     $t2, $vi1 # 00000700 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x27e8acu;
    ctx->vu0_mac_flags = GPR_U32(ctx, 10);
    // 0x27e8b0: 0xd5c8a011  ldc1        $f8, -0x5FEF($t6)
    ctx->pc = 0x27e8b0u;
    // Unhandled opcode: 0x35
    // 0x27e8b4: 0x5ab55087  .word       0x5AB55087                   # blezl       $s5, . + 4 + (0x5087 << 2) # 00150000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E8B4u;
    {
        const bool branch_taken_0x27e8b4 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x27e8b4) {
            ctx->pc = 0x27E8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8B4u;
            // 0x27e8b8: 0x103a3066  beq         $at, $k0, . + 4 + (0x3066 << 2) (Delay Slot)
        // Likely branch instruction at 0x27E8B8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x292AD4u;
            return;
        }
    }
    ctx->pc = 0x27E8BCu;
    // 0x27e8bc: 0x25fe9f72  addiu       $fp, $t7, -0x608E
    ctx->pc = 0x27e8bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 4294942578));
    // 0x27e8c0: 0xc22d9bf3  ll          $t5, -0x640D($s1)
    ctx->pc = 0x27e8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294941683); SET_GPR_S32(ctx, 13, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27e8c4: 0xc67bd8eb  lwc1        $f27, -0x2715($s3)
    ctx->pc = 0x27e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294957291)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27e8c8: 0x9530907b  lhu         $s0, -0x6F85($t1)
    ctx->pc = 0x27e8c8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294938747)));
    // 0x27e8cc: 0x379a9650  ori         $k0, $gp, 0x9650
    ctx->pc = 0x27e8ccu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)38480);
    // 0x27e8d0: 0x59d7d3a4  .word       0x59D7D3A4                   # blezl       $t6, . + 4 + (-0x2C5C << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E8D0u;
    {
        const bool branch_taken_0x27e8d0 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x27e8d0) {
            ctx->pc = 0x27E8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8D0u;
            // 0x27e8d4: 0x5aff16e9  .word       0x5AFF16E9                   # blezl       $s7, . + 4 + (0x16E9 << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27E8D4 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x273764u;
            return;
        }
    }
    ctx->pc = 0x27E8D8u;
    // 0x27e8d8: 0xc7e9609e  lwc1        $f9, 0x609E($ra)
    ctx->pc = 0x27e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 31), 24734)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27e8dc: 0x82e5cec2  lb          $a1, -0x313E($s7)
    ctx->pc = 0x27e8dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294954690)));
    // 0x27e8e0: 0x9695632f  lhu         $s5, 0x632F($s4)
    ctx->pc = 0x27e8e0u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 25391)));
    // 0x27e8e4: 0x295115da  slti        $s1, $t2, 0x15DA
    ctx->pc = 0x27e8e4u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5594) ? 1 : 0);
    // 0x27e8e8: 0x22e41bab  addi        $a0, $s7, 0x1BAB
    ctx->pc = 0x27e8e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 23), (int32_t)7083, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x27e8ec: 0x86da1f52  lh          $k0, 0x1F52($s6)
    ctx->pc = 0x27e8ecu;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 8018)));
    // 0x27e8f0: 0x29b7dd1a  slti        $s7, $t5, -0x22E6
    ctx->pc = 0x27e8f0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4294958362) ? 1 : 0);
    // 0x27e8f4: 0x18fd2c1b  .word       0x18FD2C1B                   # blez        $a3, . + 4 + (0x2C1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E8F4u;
    {
        const bool branch_taken_0x27e8f4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x27E8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8F4u;
            // 0x27e8f8: 0xb9ed6636  swr         $t5, 0x6636($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 26166); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8f4) {
            ctx->pc = 0x289964u;
            return;
        }
    }
    ctx->pc = 0x27E8FCu;
    // 0x27e8fc: 0xdf15d0f7  ld          $s5, -0x2F09($t8)
    ctx->pc = 0x27e8fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 24), 4294955255)));
    // 0x27e900: 0x540071a6  bnel        $zero, $zero, . + 4 + (0x71A6 << 2)
    ctx->pc = 0x27E900u;
    {
        const bool branch_taken_0x27e900 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e900) {
            ctx->pc = 0x27E904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E900u;
            // 0x27e904: 0xcbf6f482  lwc2        $22, -0xB7E($ra) (Delay Slot)
        // Unhandled opcode: 0x32
        ctx->in_delay_slot = false;
            ctx->pc = 0x29AF9Cu;
            return;
        }
    }
    ctx->pc = 0x27E908u;
    // 0x27e908: 0xf3db82aa  scd         $k1, -0x7D56($fp)
    ctx->pc = 0x27e908u;
    // Unhandled opcode: 0x3C
    // 0x27e90c: 0x9bc68190  lwr         $a2, -0x7E70($fp)
    ctx->pc = 0x27e90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294934928); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x27e910: 0x31514726  andi        $s1, $t2, 0x4726
    ctx->pc = 0x27e910u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)18214);
    // 0x27e914: 0x99a7d165  lwr         $a3, -0x2E9B($t5)
    ctx->pc = 0x27e914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294955365); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x27e918: 0xab2fc812  swl         $t7, -0x37EE($t9)
    ctx->pc = 0x27e918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294952978); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27e91c: 0x95c7aaa1  lhu         $a3, -0x555F($t6)
    ctx->pc = 0x27e91cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294945441)));
    // 0x27e920: 0xd4c4a9a0  ldc1        $f4, -0x5660($a2)
    ctx->pc = 0x27e920u;
    // Unhandled opcode: 0x35
    // 0x27e924: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e924u;
    // Unhandled opcode: 0x35
    // 0x27e928: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e928u;
    // Unhandled opcode: 0x35
    // 0x27e92c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27e930: 0x2442e7fc  addiu       $v0, $v0, -0x1804
    ctx->pc = 0x27e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961148));
    // 0x27e934: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x27e938: 0x248334c0  addiu       $v1, $a0, 0x34C0
    ctx->pc = 0x27e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    // 0x27e93c: 0xdcc5cb0c  ld          $a1, -0x34F4($a2)
    ctx->pc = 0x27e93cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294953740)));
    // 0x27e940: 0xcfc5a9b0  pref        0x05, -0x5650($fp)
    ctx->pc = 0x27e940u;
    // PREF instruction (ignored)
    // 0x27e944: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e944u;
    // Unhandled opcode: 0x35
    // 0x27e948: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e948u;
    // Unhandled opcode: 0x35
    // 0x27e94c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e94cu;
    // Unhandled opcode: 0x35
    // 0x27e950: 0xe49999ad  swc1        $f25, -0x6653($a0)
    ctx->pc = 0x27e950u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941101), bits); }
    // 0x27e954: 0xd2cc8326  lld         $t4, -0x7CDA($s6)
    ctx->pc = 0x27e954u;
    // Unhandled opcode: 0x34
    // 0x27e958: 0x9c435ead  lwu         $v1, 0x5EAD($v0)
    ctx->pc = 0x27e958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24237)));
    // 0x27e95c: 0xd5c4a8a5  ldc1        $f4, -0x575B($t6)
    ctx->pc = 0x27e95cu;
    // Unhandled opcode: 0x35
    // 0x27e960: 0xd4c6e2a0  ldc1        $f6, -0x1D60($a2)
    ctx->pc = 0x27e960u;
    // Unhandled opcode: 0x35
    // 0x27e964: 0xe48dabe1  swc1        $f13, -0x541F($a0)
    ctx->pc = 0x27e964u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294945761), bits); }
    // 0x27e968: 0xd40bdaf2  ldc1        $f11, -0x250E($zero)
    ctx->pc = 0x27e968u;
    // Unhandled opcode: 0x35
    // 0x27e96c: 0x7e225609  sq          $v0, 0x5609($s1)
    ctx->pc = 0x27e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 22025), GPR_VEC(ctx, 2));
    // 0x27e970: 0x237bcb43  addi        $k1, $k1, -0x34BD
    ctx->pc = 0x27e970u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 27), (int32_t)4294953795, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 27, (int32_t)tmp); }
    // 0x27e974: 0x8eae6ba6  lw          $t6, 0x6BA6($s5)
    ctx->pc = 0x27e974u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27558)));
    // 0x27e978: 0xb7a15549  sdr         $at, 0x5549($sp)
    ctx->pc = 0x27e978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 21833); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e97c: 0x88a039f  j           func_2280E7C
    ctx->pc = 0x27E97Cu;
    ctx->pc = 0x27E980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E97Cu;
            // 0x27e980: 0x9962d5b1  lwr         $v0, -0x2A4F($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294956465); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2280E7Cu;
    {
        auto targetFn = runtime->lookupFunction(0x2280E7Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27E984u;
label_27e984:
    // 0x27e984: 0xde2ae01  jal         func_78AB804
    ctx->pc = 0x27E984u;
    SET_GPR_U32(ctx, 31, 0x27E98Cu);
    ctx->pc = 0x27E988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E984u;
            // 0x27e988: 0xbe320e29  cache       0x12, 0xE29($s1) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x78AB804u;
    {
        auto targetFn = runtime->lookupFunction(0x78AB804u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E98Cu; }
        if (ctx->pc != 0x27E98Cu) { return; }
    }
    ctx->pc = 0x27E98Cu;
label_27e98c:
    // 0x27e98c: 0xd21381a2  lld         $s3, -0x7E5E($s0)
    ctx->pc = 0x27e98cu;
    // Unhandled opcode: 0x34
    // 0x27e990: 0xdcd3878e  ld          $s3, -0x7872($a2)
    ctx->pc = 0x27e990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 6), 4294936462)));
    // 0x27e994: 0xc07982b1  ll          $t9, -0x7D4F($v1)
    ctx->pc = 0x27e994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294935217); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27e998: 0xeaeacca3  swc2        $10, -0x335D($s7)
    ctx->pc = 0x27e998u;
    // Unhandled opcode: 0x3A
    // 0x27e99c: 0xab12e7be  swl         $s2, -0x1842($t8)
    ctx->pc = 0x27e99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294961086); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27e9a0: 0x9d4b6e1  j           func_752DB84
    ctx->pc = 0x27E9A0u;
    ctx->pc = 0x27E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9A0u;
            // 0x27e9a4: 0xbb0db3cf  swr         $t5, -0x4C31($t8) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294947791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x752DB84u;
    {
        auto targetFn = runtime->lookupFunction(0x752DB84u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27E9A8u;
label_27e9a8:
    // 0x27e9a8: 0xdfc7aaa1  ld          $a3, -0x555F($fp)
    ctx->pc = 0x27e9a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 30), 4294945441)));
    // 0x27e9ac: 0xd4c4a9a0  ldc1        $f4, -0x5660($a2)
    ctx->pc = 0x27e9acu;
    // Unhandled opcode: 0x35
    // 0x27e9b0: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e9b0u;
    // Unhandled opcode: 0x35
    // 0x27e9b4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27e9b8: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x27e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x27e9bc: 0xc8c5cb0c  lwc2        $5, -0x34F4($a2)
    ctx->pc = 0x27e9bcu;
    // Unhandled opcode: 0x32
    // 0x27e9c0: 0xf9c5a9b0  sqc2        $vf5, -0x5650($t6)
    ctx->pc = 0x27e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 4294945200), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27e9c4: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e9c4u;
    // Unhandled opcode: 0x35
    // 0x27e9c8: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e9c8u;
    // Unhandled opcode: 0x35
    // 0x27e9cc: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27e9ccu;
    // Unhandled opcode: 0x35
    // 0x27e9d0: 0xe4443690  swc1        $f4, 0x3690($v0)
    ctx->pc = 0x27e9d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 13968), bits); }
    // 0x27e9d4: 0xd9c3a08a  lqc2        $vf3, -0x5F76($t6)
    ctx->pc = 0x27e9d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294942858)));
    // 0x27e9d8: 0x528d2f57  beql        $s4, $t5, . + 4 + (0x2F57 << 2)
    ctx->pc = 0x27E9D8u;
    {
        const bool branch_taken_0x27e9d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 13));
        if (branch_taken_0x27e9d8) {
            ctx->pc = 0x27E9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9D8u;
            // 0x27e9dc: 0xd9c4a8a1  lqc2        $vf4, -0x575F($t6) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294944929)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A738u;
            return;
        }
    }
    ctx->pc = 0x27E9E0u;
    // 0x27e9e0: 0xd1c5aa21  lld         $a1, -0x55DF($t6)
    ctx->pc = 0x27e9e0u;
    // Unhandled opcode: 0x34
    // 0x27e9e4: 0x59c59921  .word       0x59C59921                   # blezl       $t6, . + 4 + (-0x66DF << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E9E4u;
    {
        const bool branch_taken_0x27e9e4 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x27e9e4) {
            ctx->pc = 0x27E9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9E4u;
            // 0x27e9e8: 0x5dc72821  .word       0x5DC72821                   # bgtzl       $t6, . + 4 + (0x2821 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27E9E8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x264E6Cu;
            return;
        }
    }
    ctx->pc = 0x27E9ECu;
    // 0x27e9ec: 0xd420b01f  ldc1        $f0, -0x4FE1($at)
    ctx->pc = 0x27e9ecu;
    // Unhandled opcode: 0x35
    // 0x27e9f0: 0xb966ffc1  swr         $a2, -0x3F($t3)
    ctx->pc = 0x27e9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294967233); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27e9f4: 0xf95ce1d1  sqc2        $vf28, -0x1E2F($t2)
    ctx->pc = 0x27e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294959569), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x27e9f8: 0x22a27719  addi        $v0, $s5, 0x7719
    ctx->pc = 0x27e9f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)30489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27e9fc: 0x592e1e3e  .word       0x592E1E3E                   # blezl       $t1, . + 4 + (0x1E3E << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27E9FCu;
    {
        const bool branch_taken_0x27e9fc = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x27e9fc) {
            ctx->pc = 0x27EA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9FCu;
            // 0x27ea00: 0x5245a331  beql        $s2, $a1, . + 4 + (-0x5CCF << 2) (Delay Slot)
        // Likely branch instruction at 0x27EA00 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2862F8u;
            return;
        }
    }
    ctx->pc = 0x27EA04u;
    // 0x27ea04: 0xda3f9185  lqc2        $vf31, -0x6E7B($s1)
    ctx->pc = 0x27ea04u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294939013)));
    // 0x27ea08: 0x7b832122  lq          $v1, 0x2122($gp)
    ctx->pc = 0x27ea08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 28), 8482)));
    // 0x27ea0c: 0x31b60100  andi        $s6, $t5, 0x100
    ctx->pc = 0x27ea0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)256);
    // 0x27ea10: 0x4fe1f4ad  .word       0x4FE1F4AD                   # INVALID     $ra, $at, -0xB53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ea10u;
    // Unhandled opcode: 0x13
    // 0x27ea14: 0xcb09ccce  lwc2        $9, -0x3332($t8)
    ctx->pc = 0x27ea14u;
    // Unhandled opcode: 0x32
    // 0x27ea18: 0xd87579f6  lqc2        $vf21, 0x79F6($v1)
    ctx->pc = 0x27ea18u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 31222)));
    // 0x27ea1c: 0x50dd2e3a  beql        $a2, $sp, . + 4 + (0x2E3A << 2)
    ctx->pc = 0x27EA1Cu;
    {
        const bool branch_taken_0x27ea1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 29));
        if (branch_taken_0x27ea1c) {
            ctx->pc = 0x27EA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA1Cu;
            // 0x27ea20: 0xd25eb901  lld         $fp, -0x46FF($s2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A308u;
            return;
        }
    }
    ctx->pc = 0x27EA24u;
    // 0x27ea24: 0xa71a1df8  sh          $k0, 0x1DF8($t8)
    ctx->pc = 0x27ea24u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 7672), (uint16_t)GPR_U32(ctx, 26));
    // 0x27ea28: 0xedaec761  .word       0xEDAEC761                   # INVALID     $t5, $t6, -0x389F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ea28u;
    // Unhandled opcode: 0x3B
    // 0x27ea2c: 0x22d07c08  addi        $s0, $s6, 0x7C08
    ctx->pc = 0x27ea2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 22), (int32_t)31752, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x27ea30: 0x7cfa03b2  sq          $k0, 0x3B2($a3)
    ctx->pc = 0x27ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 946), GPR_VEC(ctx, 26));
    // 0x27ea34: 0xd248980c  lld         $t0, -0x67F4($s2)
    ctx->pc = 0x27ea34u;
    // Unhandled opcode: 0x34
    // 0x27ea38: 0xab759d77  swl         $s5, -0x6289($k1)
    ctx->pc = 0x27ea38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294942071); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ea3c: 0x5bf1ce28  .word       0x5BF1CE28                   # blezl       $ra, . + 4 + (-0x31D8 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27EA3Cu;
    {
        const bool branch_taken_0x27ea3c = (GPR_S32(ctx, 31) <= 0);
        if (branch_taken_0x27ea3c) {
            ctx->pc = 0x27EA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA3Cu;
            // 0x27ea40: 0xdd08bdb1  ld          $t0, -0x424F($t0) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 4294950321)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2722E0u;
            return;
        }
    }
    ctx->pc = 0x27EA44u;
    // 0x27ea44: 0x368becf6  ori         $t3, $s4, 0xECF6
    ctx->pc = 0x27ea44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)60662);
    // 0x27ea48: 0xbddad1a2  cache       0x1A, -0x2E5E($t6)
    ctx->pc = 0x27ea48u;
    // CACHE instruction (ignored)
    // 0x27ea4c: 0x541f75e7  bnel        $zero, $ra, . + 4 + (0x75E7 << 2)
    ctx->pc = 0x27EA4Cu;
    {
        const bool branch_taken_0x27ea4c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 31));
        if (branch_taken_0x27ea4c) {
            ctx->pc = 0x27EA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA4Cu;
            // 0x27ea50: 0x45ec1296  .word       0x45EC1296                   # INVALID     $t7, $t4, 0x1296 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        // Unhandled FPU instruction: format 0xF, function 0x16
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C1ECu;
            return;
        }
    }
    ctx->pc = 0x27EA54u;
    // 0x27ea54: 0x1da6f565  .word       0x1DA6F565                   # bgtz        $t5, . + 4 + (-0xA9B << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27EA54u;
    {
        const bool branch_taken_0x27ea54 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x27EA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA54u;
            // 0x27ea58: 0x34128427  ori         $s2, $zero, 0x8427 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea54) {
            ctx->pc = 0x27BFECu;
            return;
        }
    }
    ctx->pc = 0x27EA5Cu;
    // 0x27ea5c: 0xaf641e92  sw          $a0, 0x1E92($k1)
    ctx->pc = 0x27ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 27), 7826), GPR_U32(ctx, 4));
    // 0x27ea60: 0x64be991a  daddiu      $fp, $a1, -0x66E6
    ctx->pc = 0x27ea60u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294940954);
    // 0x27ea64: 0xfeea980a  sd          $t2, -0x67F6($s7)
    ctx->pc = 0x27ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294940682), GPR_U64(ctx, 10));
    // 0x27ea68: 0x3a66ce7a  xori        $a2, $s3, 0xCE7A
    ctx->pc = 0x27ea68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)52858);
    // 0x27ea6c: 0xfc7aaa1  jal         func_F1EAA84
    ctx->pc = 0x27EA6Cu;
    SET_GPR_U32(ctx, 31, 0x27EA74u);
    ctx->pc = 0x27EA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA6Cu;
            // 0x27ea70: 0xd4c4a9a0  ldc1        $f4, -0x5660($a2) (Delay Slot)
        // Unhandled opcode: 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0xF1EAA84u;
    {
        auto targetFn = runtime->lookupFunction(0xF1EAA84u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA74u; }
        if (ctx->pc != 0x27EA74u) { return; }
    }
    ctx->pc = 0x27EA74u;
label_27ea74:
    // 0x27ea74: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ea74u;
    // Unhandled opcode: 0x35
    // 0x27ea78: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ea78u;
    // Unhandled opcode: 0x35
    // 0x27ea7c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27ea80: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x27ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x27ea84: 0xe4c5cb0c  swc1        $f5, -0x34F4($a2)
    ctx->pc = 0x27ea84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953740), bits); }
    // 0x27ea88: 0xf9c5a9b0  sqc2        $vf5, -0x5650($t6)
    ctx->pc = 0x27ea88u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 4294945200), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ea8c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ea8cu;
    // Unhandled opcode: 0x35
    // 0x27ea90: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ea90u;
    // Unhandled opcode: 0x35
    // 0x27ea94: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ea94u;
    // Unhandled opcode: 0x35
    // 0x27ea98: 0xe4443690  swc1        $f4, 0x3690($v0)
    ctx->pc = 0x27ea98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 13968), bits); }
    // 0x27ea9c: 0xd9c3a08a  lqc2        $vf3, -0x5F76($t6)
    ctx->pc = 0x27ea9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294942858)));
    // 0x27eaa0: 0x528d2f57  beql        $s4, $t5, . + 4 + (0x2F57 << 2)
    ctx->pc = 0x27EAA0u;
    {
        const bool branch_taken_0x27eaa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 13));
        if (branch_taken_0x27eaa0) {
            ctx->pc = 0x27EAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAA0u;
            // 0x27eaa4: 0xd9c4a8a1  lqc2        $vf4, -0x575F($t6) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294944929)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A800u;
            return;
        }
    }
    ctx->pc = 0x27EAA8u;
    // 0x27eaa8: 0xd1c5aa21  lld         $a1, -0x55DF($t6)
    ctx->pc = 0x27eaa8u;
    // Unhandled opcode: 0x34
    // 0x27eaac: 0x59c59921  .word       0x59C59921                   # blezl       $t6, . + 4 + (-0x66DF << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27EAACu;
    {
        const bool branch_taken_0x27eaac = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x27eaac) {
            ctx->pc = 0x27EAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAACu;
            // 0x27eab0: 0x5dc72821  .word       0x5DC72821                   # bgtzl       $t6, . + 4 + (0x2821 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27EAB0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x264F34u;
            return;
        }
    }
    ctx->pc = 0x27EAB4u;
    // 0x27eab4: 0xd473f32b  ldc1        $f19, -0xCD5($v1)
    ctx->pc = 0x27eab4u;
    // Unhandled opcode: 0x35
    // 0x27eab8: 0x77c8c383  .word       0x77C8C383                   # INVALID     $fp, $t0, -0x3C7D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27eab8u;
    // Unhandled opcode: 0x1D
    // 0x27eabc: 0x5745c26f  bnel        $k0, $a1, . + 4 + (-0x3D91 << 2)
    ctx->pc = 0x27EABCu;
    {
        const bool branch_taken_0x27eabc = (GPR_U64(ctx, 26) != GPR_U64(ctx, 5));
        if (branch_taken_0x27eabc) {
            ctx->pc = 0x27EAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EABCu;
            // 0x27eac0: 0xed425d81  .word       0xED425D81                   # INVALID     $t2, $v0, 0x5D81 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x3B
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F47Cu;
            return;
        }
    }
    ctx->pc = 0x27EAC4u;
    // 0x27eac4: 0xc7f6afec  lwc1        $f22, -0x5014($ra)
    ctx->pc = 0x27eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 31), 4294946796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27eac8: 0xf16744f5  scd         $a3, 0x44F5($t3)
    ctx->pc = 0x27eac8u;
    // Unhandled opcode: 0x3C
    // 0x27eacc: 0xc6526c07  lwc1        $f18, 0x6C07($s2)
    ctx->pc = 0x27eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 27655)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x27ead0: 0x547c5323  bnel        $v1, $gp, . + 4 + (0x5323 << 2)
    ctx->pc = 0x27EAD0u;
    {
        const bool branch_taken_0x27ead0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 28));
        if (branch_taken_0x27ead0) {
            ctx->pc = 0x27EAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAD0u;
            // 0x27ead4: 0x15e5095a  bne         $t7, $a1, . + 4 + (0x95A << 2) (Delay Slot)
        // Likely branch instruction at 0x27EAD4 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x293760u;
            return;
        }
    }
    ctx->pc = 0x27EAD8u;
    // 0x27ead8: 0xfbd0a4dc  sqc2        $vf16, -0x5B24($fp)
    ctx->pc = 0x27ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 4294943964), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x27eadc: 0x75a5c2de  .word       0x75A5C2DE                   # INVALID     $t5, $a1, -0x3D22 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27eadcu;
    // Unhandled opcode: 0x1D
    // 0x27eae0: 0xade953a6  sw          $t1, 0x53A6($t7)
    ctx->pc = 0x27eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 21414), GPR_U32(ctx, 9));
    // 0x27eae4: 0xdbff0756  lqc2        $vf31, 0x756($ra)
    ctx->pc = 0x27eae4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 1878)));
    // 0x27eae8: 0xcfaa1872  pref        0x0A, 0x1872($sp)
    ctx->pc = 0x27eae8u;
    // PREF instruction (ignored)
    // 0x27eaec: 0x2bea81f2  slti        $t2, $ra, -0x7E0E
    ctx->pc = 0x27eaecu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 31) < (int64_t)(int32_t)4294935026) ? 1 : 0);
    // 0x27eaf0: 0x8b46d4eb  lwl         $a2, -0x2B15($k0)
    ctx->pc = 0x27eaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294956267); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x27eaf4: 0x10bf1e58  beq         $a1, $ra, . + 4 + (0x1E58 << 2)
    ctx->pc = 0x27EAF4u;
    {
        const bool branch_taken_0x27eaf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 31));
        ctx->pc = 0x27EAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAF4u;
            // 0x27eaf8: 0xb2da29f4  sdl         $k0, 0x29F4($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 10740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaf4) {
            ctx->pc = 0x286458u;
            return;
        }
    }
    ctx->pc = 0x27EAFCu;
    // 0x27eafc: 0x28726b2e  slti        $s2, $v1, 0x6B2E
    ctx->pc = 0x27eafcu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27438) ? 1 : 0);
    // 0x27eb00: 0x8d8fbdf7  lw          $t7, -0x4209($t4)
    ctx->pc = 0x27eb00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294950391)));
    // 0x27eb04: 0x92143333  lbu         $s4, 0x3333($s0)
    ctx->pc = 0x27eb04u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13107)));
    // 0x27eb08: 0x6a8438a3  ldl         $a0, 0x38A3($s4)
    ctx->pc = 0x27eb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27eb0c: 0x6fd02933  ldr         $s0, 0x2933($fp)
    ctx->pc = 0x27eb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 10547); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x27eb10: 0x882e4e6c  lwl         $t6, 0x4E6C($at)
    ctx->pc = 0x27eb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 20076); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x27eb14: 0xdca9969e  ld          $t1, -0x6962($a1)
    ctx->pc = 0x27eb14u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 4294940318)));
    // 0x27eb18: 0x678f555f  daddiu      $t7, $gp, 0x555F
    ctx->pc = 0x27eb18u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 28) + (int64_t)(int32_t)21855);
    // 0x27eb1c: 0x9fa98a75  lwu         $t1, -0x758B($sp)
    ctx->pc = 0x27eb1cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4294937205)));
    // 0x27eb20: 0x84478fe4  lh          $a3, -0x701C($v0)
    ctx->pc = 0x27eb20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294938596)));
    // 0x27eb24: 0xcd4b8a63  pref        0x0B, -0x759D($t2)
    ctx->pc = 0x27eb24u;
    // PREF instruction (ignored)
    // 0x27eb28: 0xa52fb084  sh          $t7, -0x4F7C($t1)
    ctx->pc = 0x27eb28u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294946948), (uint16_t)GPR_U32(ctx, 15));
    // 0x27eb2c: 0x93c137d5  lbu         $at, 0x37D5($fp)
    ctx->pc = 0x27eb2cu;
    SET_GPR_U32(ctx, 1, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 14293)));
    // 0x27eb30: 0x6b0d0fa0  ldl         $t5, 0xFA0($t8)
    ctx->pc = 0x27eb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4000); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x27eb34: 0xcbc7aaa1  lwc2        $7, -0x555F($fp)
    ctx->pc = 0x27eb34u;
    // Unhandled opcode: 0x32
    // 0x27eb38: 0xd4c4a9a0  ldc1        $f4, -0x5660($a2)
    ctx->pc = 0x27eb38u;
    // Unhandled opcode: 0x35
    // 0x27eb3c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27eb3cu;
    // Unhandled opcode: 0x35
    // 0x27eb40: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27eb40u;
    // Unhandled opcode: 0x35
    // 0x27eb44: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27eb48: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x27eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x27eb4c: 0x90c5cb0c  lbu         $a1, -0x34F4($a2)
    ctx->pc = 0x27eb4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294953740)));
    // 0x27eb50: 0xf9c5a9b0  sqc2        $vf5, -0x5650($t6)
    ctx->pc = 0x27eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 4294945200), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27eb54: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27eb54u;
    // Unhandled opcode: 0x35
    // 0x27eb58: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27eb58u;
    // Unhandled opcode: 0x35
    // 0x27eb5c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27eb5cu;
    // Unhandled opcode: 0x35
    // 0x27eb60: 0xe4443690  swc1        $f4, 0x3690($v0)
    ctx->pc = 0x27eb60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 13968), bits); }
    // 0x27eb64: 0xd9c3a08a  lqc2        $vf3, -0x5F76($t6)
    ctx->pc = 0x27eb64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294942858)));
    // 0x27eb68: 0x528d2f57  beql        $s4, $t5, . + 4 + (0x2F57 << 2)
    ctx->pc = 0x27EB68u;
    {
        const bool branch_taken_0x27eb68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 13));
        if (branch_taken_0x27eb68) {
            ctx->pc = 0x27EB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB68u;
            // 0x27eb6c: 0xd9c4a8a1  lqc2        $vf4, -0x575F($t6) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294944929)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A8C8u;
            return;
        }
    }
    ctx->pc = 0x27EB70u;
    // 0x27eb70: 0xd1c5aa21  lld         $a1, -0x55DF($t6)
    ctx->pc = 0x27eb70u;
    // Unhandled opcode: 0x34
    // 0x27eb74: 0x59c59921  .word       0x59C59921                   # blezl       $t6, . + 4 + (-0x66DF << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27EB74u;
    {
        const bool branch_taken_0x27eb74 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x27eb74) {
            ctx->pc = 0x27EB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB74u;
            // 0x27eb78: 0x5dc72821  .word       0x5DC72821                   # bgtzl       $t6, . + 4 + (0x2821 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27EB78 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x264FFCu;
            return;
        }
    }
    ctx->pc = 0x27EB7Cu;
    // 0x27eb7c: 0xd40cf5f9  ldc1        $f12, -0xA07($zero)
    ctx->pc = 0x27eb7cu;
    // Unhandled opcode: 0x35
    // 0x27eb80: 0x4a37b22a  vmul.w      $vf8, $vf22, $vf23
    ctx->pc = 0x27eb80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x27eb84: 0xd5d11db0  ldc1        $f17, 0x1DB0($t6)
    ctx->pc = 0x27eb84u;
    // Unhandled opcode: 0x35
    // 0x27eb88: 0xbc1e97b  j           func_F07A5EC
    ctx->pc = 0x27EB88u;
    ctx->pc = 0x27EB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB88u;
            // 0x27eb8c: 0x379206ca  ori         $s2, $gp, 0x6CA (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)1738);
        ctx->in_delay_slot = false;
    ctx->pc = 0xF07A5ECu;
    {
        auto targetFn = runtime->lookupFunction(0xF07A5ECu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27EB90u;
label_27eb90:
    // 0x27eb90: 0x91852624  lbu         $a1, 0x2624($t4)
    ctx->pc = 0x27eb90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9764)));
    // 0x27eb94: 0xd8ce7893  lqc2        $vf14, 0x7893($a2)
    ctx->pc = 0x27eb94u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 30867)));
    // 0x27eb98: 0xd1cb86f  jal         func_472E1BC
    ctx->pc = 0x27EB98u;
    SET_GPR_U32(ctx, 31, 0x27EBA0u);
    ctx->pc = 0x27EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB98u;
            // 0x27eb9c: 0x3ac7f1bf  xori        $a3, $s6, 0xF1BF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)61887);
        ctx->in_delay_slot = false;
    ctx->pc = 0x472E1BCu;
    {
        auto targetFn = runtime->lookupFunction(0x472E1BCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBA0u; }
        if (ctx->pc != 0x27EBA0u) { return; }
    }
    ctx->pc = 0x27EBA0u;
label_27eba0:
    // 0x27eba0: 0xf1328308  scd         $s2, -0x7CF8($t1)
    ctx->pc = 0x27eba0u;
    // Unhandled opcode: 0x3C
    // 0x27eba4: 0x90c0034c  lbu         $zero, 0x34C($a2)
    ctx->pc = 0x27eba4u;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 844)));
    // 0x27eba8: 0xd7dad1df  ldc1        $f26, -0x2E21($fp)
    ctx->pc = 0x27eba8u;
    // Unhandled opcode: 0x35
    // 0x27ebac: 0x4a56103a  .word       0x4A56103A                   # INVALID     $s2, $s6, 0x103A # 00000000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x27ebacu;
    // Unhandled VU0 Special1 function: 0x3A
    // 0x27ebb0: 0xd46f8add  ldc1        $f15, -0x7523($v1)
    ctx->pc = 0x27ebb0u;
    // Unhandled opcode: 0x35
    // 0x27ebb4: 0x2692c02  .word       0x02692C02                   # srl         $a1, $t1, 16 # 02600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x27ebb8: 0xb7806ed2  sdr         $zero, 0x6ED2($gp)
    ctx->pc = 0x27ebb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 28370); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ebbc: 0xf3095dec  scd         $t1, 0x5DEC($t8)
    ctx->pc = 0x27ebbcu;
    // Unhandled opcode: 0x3C
    // 0x27ebc0: 0x12b0d872  beq         $s5, $s0, . + 4 + (-0x278E << 2)
    ctx->pc = 0x27EBC0u;
    {
        const bool branch_taken_0x27ebc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        ctx->pc = 0x27EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBC0u;
            // 0x27ebc4: 0xed2ae6e2  .word       0xED2AE6E2                   # INVALID     $t1, $t2, -0x191E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x3B
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebc0) {
            ctx->pc = 0x274D8Cu;
            return;
        }
    }
    ctx->pc = 0x27EBC8u;
    // 0x27ebc8: 0x24b076aa  addiu       $s0, $a1, 0x76AA
    ctx->pc = 0x27ebc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 30378));
    // 0x27ebcc: 0x44032780  .word       0x44032780                   # mfc1        $v1, $f4 # 00000780 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27ebccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27ebd0: 0xbb5da658  swr         $sp, -0x59A8($k0)
    ctx->pc = 0x27ebd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294944344); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 29); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ebd4: 0x78e6f6d0  lq          $a2, -0x930($a3)
    ctx->pc = 0x27ebd4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 4294964944)));
    // 0x27ebd8: 0xfdf30d69  sd          $s3, 0xD69($t7)
    ctx->pc = 0x27ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 3433), GPR_U64(ctx, 19));
    // 0x27ebdc: 0x5222183a  beql        $s1, $v0, . + 4 + (0x183A << 2)
    ctx->pc = 0x27EBDCu;
    {
        const bool branch_taken_0x27ebdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ebdc) {
            ctx->pc = 0x27EBE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBDCu;
            // 0x27ebe0: 0xf40efa05  sdc1        $f14, -0x5FB($zero) (Delay Slot)
        // Unhandled opcode: 0x3D
        ctx->in_delay_slot = false;
            ctx->pc = 0x284CC8u;
            return;
        }
    }
    ctx->pc = 0x27EBE4u;
    // 0x27ebe4: 0x5122941e  beql        $t1, $v0, . + 4 + (-0x6BE2 << 2)
    ctx->pc = 0x27EBE4u;
    {
        const bool branch_taken_0x27ebe4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ebe4) {
            ctx->pc = 0x27EBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBE4u;
            // 0x27ebe8: 0xa95f5784  swl         $ra, 0x5784($t2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 10), 22404); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x263C60u;
            return;
        }
    }
    ctx->pc = 0x27EBECu;
    // 0x27ebec: 0x91f675d6  lbu         $s6, 0x75D6($t7)
    ctx->pc = 0x27ebecu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 30166)));
    // 0x27ebf0: 0xc128a602  ll          $t0, -0x59FE($t1)
    ctx->pc = 0x27ebf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294944258); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27ebf4: 0xa5a1e5c5  sh          $at, -0x1A3B($t5)
    ctx->pc = 0x27ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294960581), (uint16_t)GPR_U32(ctx, 1));
    // 0x27ebf8: 0xfa44c1e5  sqc2        $vf4, -0x3E1B($s2)
    ctx->pc = 0x27ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294951397), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27ebfc: 0x73c7aaa1  .word       0x73C7AAA1                   # maddu1      $s5, $fp, $a3 # 00000280 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27ebfcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 30) * (uint64_t)GPR_U32(ctx, 7); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x27ec00: 0xd4c4a9a0  ldc1        $f4, -0x5660($a2)
    ctx->pc = 0x27ec00u;
    // Unhandled opcode: 0x35
    // 0x27ec04: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ec04u;
    // Unhandled opcode: 0x35
    // 0x27ec08: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ec08u;
    // Unhandled opcode: 0x35
    // 0x27ec0c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27ec10: 0x2442eb60  addiu       $v0, $v0, -0x14A0
    ctx->pc = 0x27ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x27ec14: 0x8cc5cb0c  lw          $a1, -0x34F4($a2)
    ctx->pc = 0x27ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953740)));
    // 0x27ec18: 0xffc5a9b0  sd          $a1, -0x5650($fp)
    ctx->pc = 0x27ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294945200), GPR_U64(ctx, 5));
    // 0x27ec1c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ec1cu;
    // Unhandled opcode: 0x35
    // 0x27ec20: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ec20u;
    // Unhandled opcode: 0x35
    // 0x27ec24: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ec24u;
    // Unhandled opcode: 0x35
    // 0x27ec28: 0xe4443290  swc1        $f4, 0x3290($v0)
    ctx->pc = 0x27ec28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12944), bits); }
    // 0x27ec2c: 0xd9c3a08a  lqc2        $vf3, -0x5F76($t6)
    ctx->pc = 0x27ec2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294942858)));
    // 0x27ec30: 0x528d2f57  beql        $s4, $t5, . + 4 + (0x2F57 << 2)
    ctx->pc = 0x27EC30u;
    {
        const bool branch_taken_0x27ec30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 13));
        if (branch_taken_0x27ec30) {
            ctx->pc = 0x27EC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC30u;
            // 0x27ec34: 0xd9c4a8a1  lqc2        $vf4, -0x575F($t6) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294944929)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A990u;
            return;
        }
    }
    ctx->pc = 0x27EC38u;
    // 0x27ec38: 0xd1c5aa21  lld         $a1, -0x55DF($t6)
    ctx->pc = 0x27ec38u;
    // Unhandled opcode: 0x34
    // 0x27ec3c: 0x5dc59921  .word       0x5DC59921                   # bgtzl       $t6, . + 4 + (-0x66DF << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27EC3Cu;
    {
        const bool branch_taken_0x27ec3c = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x27ec3c) {
            ctx->pc = 0x27EC40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC3Cu;
            // 0x27ec40: 0x51c7d7a0  beql        $t6, $a3, . + 4 + (-0x2860 << 2) (Delay Slot)
        // Likely branch instruction at 0x27EC40 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2650C4u;
            return;
        }
    }
    ctx->pc = 0x27EC44u;
    // 0x27ec44: 0x460bd361  .word       0x460BD361                   # cvt.d.s     $f13, $f26 # 000B0000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ec44u;
    // Unhandled FPU.S instruction: function 0x21
    // 0x27ec48: 0x7a4697fa  lq          $a2, -0x6806($s2)
    ctx->pc = 0x27ec48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 4294940666)));
    // 0x27ec4c: 0x7e4c2af7  sq          $t4, 0x2AF7($s2)
    ctx->pc = 0x27ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 10999), GPR_VEC(ctx, 12));
    // 0x27ec50: 0x78e0a8d6  lq          $zero, -0x572A($a3)
    ctx->pc = 0x27ec50u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 7), 4294944982)));
    // 0x27ec54: 0xd868072e  lqc2        $vf8, 0x72E($v1)
    ctx->pc = 0x27ec54u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 1838)));
    // 0x27ec58: 0xf8f2674b  sqc2        $vf18, 0x674B($a3)
    ctx->pc = 0x27ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 26443), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x27ec5c: 0xe1bdcdf4  sc          $sp, -0x320C($t5)
    ctx->pc = 0x27ec5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294954484); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27ec60: 0xd7202de0  ldc1        $f0, 0x2DE0($t9)
    ctx->pc = 0x27ec60u;
    // Unhandled opcode: 0x35
    // 0x27ec64: 0x850c162f  lh          $t4, 0x162F($t0)
    ctx->pc = 0x27ec64u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 5679)));
    // 0x27ec68: 0xdc272322  ld          $a3, 0x2322($at)
    ctx->pc = 0x27ec68u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 8994)));
    // 0x27ec6c: 0xdc17bf26  ld          $s7, -0x40DA($zero)
    ctx->pc = 0x27ec6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 0), 4294950694)));
    // 0x27ec70: 0xe3904011  sc          $s0, 0x4011($gp)
    ctx->pc = 0x27ec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16401); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 16)); SET_GPR_S32(ctx, 16, 1); } else { SET_GPR_S32(ctx, 16, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27ec74: 0xf5c704d6  sdc1        $f7, 0x4D6($t6)
    ctx->pc = 0x27ec74u;
    // Unhandled opcode: 0x3D
    // 0x27ec78: 0xbc4433a5  cache       0x04, 0x33A5($v0)
    ctx->pc = 0x27ec78u;
    // CACHE instruction (ignored)
    // 0x27ec7c: 0x768e60eb  .word       0x768E60EB                   # INVALID     $s4, $t6, 0x60EB # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ec7cu;
    // Unhandled opcode: 0x1D
    // 0x27ec80: 0xf1a38bf6  scd         $v1, -0x740A($t5)
    ctx->pc = 0x27ec80u;
    // Unhandled opcode: 0x3C
    // 0x27ec84: 0xb84dae2f  swr         $t5, -0x51D1($v0)
    ctx->pc = 0x27ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294946351); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ec88: 0x2344f0cd  addi        $a0, $k0, -0xF33
    ctx->pc = 0x27ec88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 26), (int32_t)4294963405, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x27ec8c: 0x50c2ccd0  beql        $a2, $v0, . + 4 + (-0x3330 << 2)
    ctx->pc = 0x27EC8Cu;
    {
        const bool branch_taken_0x27ec8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ec8c) {
            ctx->pc = 0x27EC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC8Cu;
            // 0x27ec90: 0xc7b4df9e  lwc1        $f20, -0x2062($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4294959006)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x271FD0u;
            return;
        }
    }
    ctx->pc = 0x27EC94u;
    // 0x27ec94: 0x4fb2e543  .word       0x4FB2E543                   # INVALID     $sp, $s2, -0x1ABD # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ec94u;
    // Unhandled opcode: 0x13
    // 0x27ec98: 0x844cff38  lh          $t4, -0xC8($v0)
    ctx->pc = 0x27ec98u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967096)));
    // 0x27ec9c: 0x9c7cb407  lwu         $gp, -0x4BF9($v1)
    ctx->pc = 0x27ec9cu;
    SET_GPR_U32(ctx, 28, READ32(ADD32(GPR_U32(ctx, 3), 4294947847)));
    // 0x27eca0: 0xfddfba8e  sd          $ra, -0x4572($t6)
    ctx->pc = 0x27eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 4294949518), GPR_U64(ctx, 31));
    // 0x27eca4: 0x9ed4f03c  lwu         $s4, -0xFC4($s6)
    ctx->pc = 0x27eca4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 22), 4294963260)));
    // 0x27eca8: 0xcad07ce9  lwc2        $16, 0x7CE9($s6)
    ctx->pc = 0x27eca8u;
    // Unhandled opcode: 0x32
    // 0x27ecac: 0x80e9da9a  lb          $t1, -0x2566($a3)
    ctx->pc = 0x27ecacu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294957722)));
    // 0x27ecb0: 0xbd471837  cache       0x07, 0x1837($t2)
    ctx->pc = 0x27ecb0u;
    // CACHE instruction (ignored)
    // 0x27ecb4: 0xed59c4d0  .word       0xED59C4D0                   # INVALID     $t2, $t9, -0x3B30 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ecb4u;
    // Unhandled opcode: 0x3B
    // 0x27ecb8: 0xb38d4c7d  sdl         $t5, 0x4C7D($gp)
    ctx->pc = 0x27ecb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 19581); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ecbc: 0xf91361be  sqc2        $vf19, 0x61BE($t0)
    ctx->pc = 0x27ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 25022), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x27ecc0: 0xafc7aaa1  sw          $a3, -0x555F($fp)
    ctx->pc = 0x27ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294945441), GPR_U32(ctx, 7));
    // 0x27ecc4: 0xd4c4a9a0  ldc1        $f4, -0x5660($a2)
    ctx->pc = 0x27ecc4u;
    // Unhandled opcode: 0x35
    // 0x27ecc8: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ecc8u;
    // Unhandled opcode: 0x35
    // 0x27eccc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27ecd0: 0x2442ec28  addiu       $v0, $v0, -0x13D8
    ctx->pc = 0x27ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962216));
    // 0x27ecd4: 0x87c569b2  lh          $a1, 0x69B2($fp)
    ctx->pc = 0x27ecd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 27058)));
    // 0x27ecd8: 0xb8c5cb0c  swr         $a1, -0x34F4($a2)
    ctx->pc = 0x27ecd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294953740); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ecdc: 0xf97da9a0  sqc2        $vf29, -0x5660($t3)
    ctx->pc = 0x27ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 4294945184), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x27ece0: 0xf96569a3  sqc2        $vf5, 0x69A3($t3)
    ctx->pc = 0x27ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 27043), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ece4: 0xf96da9a0  sqc2        $vf13, -0x5660($t3)
    ctx->pc = 0x27ece4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 4294945184), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27ece8: 0xd4c52d2e  ldc1        $f5, 0x2D2E($a2)
    ctx->pc = 0x27ece8u;
    // Unhandled opcode: 0x35
    // 0x27ecec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27ececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27ecf0: 0x244234c0  addiu       $v0, $v0, 0x34C0
    ctx->pc = 0x27ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x27ecf4: 0xdcc51c0f  ld          $a1, 0x1C0F($a2)
    ctx->pc = 0x27ecf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 7183)));
    // 0x27ecf8: 0xc0a399c  jal         func_28E670
    ctx->pc = 0x27ECF8u;
    SET_GPR_U32(ctx, 31, 0x27ED00u);
    ctx->pc = 0x27ECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECF8u;
            // 0x27ecfc: 0xc4c5f984  lwc1        $f5, -0x67C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294965636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E670u;
    if (runtime->hasFunction(0x28E670u)) {
        auto targetFn = runtime->lookupFunction(0x28E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED00u; }
        if (ctx->pc != 0x27ED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E670_0x28e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED00u; }
        if (ctx->pc != 0x27ED00u) { return; }
    }
    ctx->pc = 0x27ED00u;
label_27ed00:
    // 0x27ed00: 0xf94da9a0  sqc2        $vf13, -0x5660($t2)
    ctx->pc = 0x27ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294945184), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27ed04: 0xf95de9a0  sqc2        $vf29, -0x1660($t2)
    ctx->pc = 0x27ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294961568), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x27ed08: 0xd4c5ad2e  ldc1        $f5, -0x52D2($a2)
    ctx->pc = 0x27ed08u;
    // Unhandled opcode: 0x35
    // 0x27ed0c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ed0cu;
    // Unhandled opcode: 0x35
    // 0x27ed10: 0xc0c5b986  ll          $a1, -0x467A($a2)
    ctx->pc = 0x27ed10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294949254); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27ed14: 0xf9edc9a2  sqc2        $vf13, -0x365E($t7)
    ctx->pc = 0x27ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294953378), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27ed18: 0xc0a3a8a  jal         func_28EA28
    ctx->pc = 0x27ED18u;
    SET_GPR_U32(ctx, 31, 0x27ED20u);
    ctx->pc = 0x27ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED18u;
            // 0x27ed1c: 0x5455b8a0  bnel        $v0, $s5, . + 4 + (-0x4760 << 2) (Delay Slot)
        // Likely branch instruction at 0x27ED1C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EA28u;
    if (runtime->hasFunction(0x28EA28u)) {
        auto targetFn = runtime->lookupFunction(0x28EA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED20u; }
        if (ctx->pc != 0x27ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EA28_0x28ea28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED20u; }
        if (ctx->pc != 0x27ED20u) { return; }
    }
    ctx->pc = 0x27ED20u;
label_27ed20:
    // 0x27ed20: 0xc1c5e9f0  ll          $a1, -0x1610($t6)
    ctx->pc = 0x27ed20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294961648); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27ed24: 0xd4c56d2f  ldc1        $f5, 0x6D2F($a2)
    ctx->pc = 0x27ed24u;
    // Unhandled opcode: 0x35
    // 0x27ed28: 0xd5c59886  ldc1        $f5, -0x677A($t6)
    ctx->pc = 0x27ed28u;
    // Unhandled opcode: 0x35
    // 0x27ed2c: 0xd2c58b8e  lld         $a1, -0x7472($s6)
    ctx->pc = 0x27ed2cu;
    // Unhandled opcode: 0x34
    // 0x27ed30: 0x233ae9f4  addi        $k0, $t9, -0x160C
    ctx->pc = 0x27ed30u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)4294961652, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x27ed34: 0xd4c5ad2e  ldc1        $f5, -0x52D2($a2)
    ctx->pc = 0x27ed34u;
    // Unhandled opcode: 0x35
    // 0x27ed38: 0xd5c55986  ldc1        $f5, 0x5986($t6)
    ctx->pc = 0x27ed38u;
    // Unhandled opcode: 0x35
    // 0x27ed3c: 0xfed5bfa2  sd          $s5, -0x405E($s6)
    ctx->pc = 0x27ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294950818), GPR_U64(ctx, 21));
    // 0x27ed40: 0xecc5e9f0  .word       0xECC5E9F0                   # INVALID     $a2, $a1, -0x1610 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ed40u;
    // Unhandled opcode: 0x3B
    // 0x27ed44: 0xf945a9a0  sqc2        $vf5, -0x5660($t2)
    ctx->pc = 0x27ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294945184), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ed48: 0xc0a39ae  jal         func_28E6B8
    ctx->pc = 0x27ED48u;
    SET_GPR_U32(ctx, 31, 0x27ED50u);
    ctx->pc = 0x27ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED48u;
            // 0x27ed4c: 0xd0c52d2e  lld         $a1, 0x2D2E($a2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E6B8u;
    if (runtime->hasFunction(0x28E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x28E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED50u; }
        if (ctx->pc != 0x27ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E6B8_0x28e6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED50u; }
        if (ctx->pc != 0x27ED50u) { return; }
    }
    ctx->pc = 0x27ED50u;
label_27ed50:
    // 0x27ed50: 0xf9e5c9a2  sqc2        $vf5, -0x365E($t7)
    ctx->pc = 0x27ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294953378), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ed54: 0xc0a3a8a  jal         func_28EA28
    ctx->pc = 0x27ED54u;
    SET_GPR_U32(ctx, 31, 0x27ED5Cu);
    ctx->pc = 0x27ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED54u;
            // 0x27ed58: 0xf9ede9a0  sqc2        $vf13, -0x1660($t7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 15), 4294961568), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EA28u;
    if (runtime->hasFunction(0x28EA28u)) {
        auto targetFn = runtime->lookupFunction(0x28EA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED5Cu; }
        if (ctx->pc != 0x27ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EA28_0x28ea28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED5Cu; }
        if (ctx->pc != 0x27ED5Cu) { return; }
    }
    ctx->pc = 0x27ED5Cu;
label_27ed5c:
    // 0x27ed5c: 0xe5c5e9f4  swc1        $f5, -0x160C($t6)
    ctx->pc = 0x27ed5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294961652), bits); }
    // 0x27ed60: 0xf945a9a0  sqc2        $vf5, -0x5660($t2)
    ctx->pc = 0x27ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294945184), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ed64: 0xf97da9a2  sqc2        $vf29, -0x565E($t3)
    ctx->pc = 0x27ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 4294945186), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x27ed68: 0xd0c53d86  lld         $a1, 0x3D86($a2)
    ctx->pc = 0x27ed68u;
    // Unhandled opcode: 0x34
    // 0x27ed6c: 0xa3aa9b0  j           func_8EAA6C0
    ctx->pc = 0x27ED6Cu;
    ctx->pc = 0x27ED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED6Cu;
            // 0x27ed70: 0xd0c51c86  lld         $a1, 0x1C86($a2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x8EAA6C0u;
    {
        auto targetFn = runtime->lookupFunction(0x8EAA6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27ED74u;
label_27ed74:
    // 0x27ed74: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ed74u;
    // Unhandled opcode: 0x35
    // 0x27ed78: 0xc09f90e  jal         func_27E438
    ctx->pc = 0x27ED78u;
    SET_GPR_U32(ctx, 31, 0x27ED80u);
    ctx->pc = 0x27ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED78u;
            // 0x27ed7c: 0xf945a9a0  sqc2        $vf5, -0x5660($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 4294945184), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E438u;
    goto label_27e438;
    ctx->pc = 0x27ED80u;
label_27ed80:
    // 0x27ed80: 0xfcc5e9a4  sd          $a1, -0x165C($a2)
    ctx->pc = 0x27ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294961572), GPR_U64(ctx, 5));
    // 0x27ed84: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x27ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x27ed88: 0xf5d5f8a2  sdc1        $f21, -0x75E($t6)
    ctx->pc = 0x27ed88u;
    // Unhandled opcode: 0x3D
    // 0x27ed8c: 0x248334c0  addiu       $v1, $a0, 0x34C0
    ctx->pc = 0x27ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    // 0x27ed90: 0xd2c5ad84  lld         $a1, -0x527C($s6)
    ctx->pc = 0x27ed90u;
    // Unhandled opcode: 0x34
    // 0x27ed94: 0x54d5aba0  bnel        $a2, $s5, . + 4 + (-0x5460 << 2)
    ctx->pc = 0x27ED94u;
    {
        const bool branch_taken_0x27ed94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 21));
        if (branch_taken_0x27ed94) {
            ctx->pc = 0x27ED98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED94u;
            // 0x27ed98: 0xf9ed09a3  sqc2        $vf13, 0x9A3($t7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 15), 2467), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269C18u;
            return;
        }
    }
    ctx->pc = 0x27ED9Cu;
    // 0x27ed9c: 0xf5f5cba0  sdc1        $f21, -0x3460($t7)
    ctx->pc = 0x27ed9cu;
    // Unhandled opcode: 0x3D
    // 0x27eda0: 0xf9dd69a0  sqc2        $vf29, 0x69A0($t6)
    ctx->pc = 0x27eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 27040), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x27eda4: 0xd8c56e2c  lqc2        $vf5, 0x6E2C($a2)
    ctx->pc = 0x27eda4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 28204)));
    // 0x27eda8: 0xdcc5c12c  ld          $a1, -0x3ED4($a2)
    ctx->pc = 0x27eda8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294951212)));
    // 0x27edac: 0xd0c50f87  lld         $a1, 0xF87($a2)
    ctx->pc = 0x27edacu;
    // Unhandled opcode: 0x34
    // 0x27edb0: 0xc0a3d26  jal         func_28F498
    ctx->pc = 0x27EDB0u;
    SET_GPR_U32(ctx, 31, 0x27EDB8u);
    ctx->pc = 0x27EDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDB0u;
            // 0x27edb4: 0xd0c5010f  lld         $a1, 0x10F($a2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F498u;
    if (runtime->hasFunction(0x28F498u)) {
        auto targetFn = runtime->lookupFunction(0x28F498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDB8u; }
        if (ctx->pc != 0x27EDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F498_0x28f498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDB8u; }
        if (ctx->pc != 0x27EDB8u) { return; }
    }
    ctx->pc = 0x27EDB8u;
label_27edb8:
    // 0x27edb8: 0xcec5e9b0  pref        0x05, -0x1650($s6)
    ctx->pc = 0x27edb8u;
    // PREF instruction (ignored)
    // 0x27edbc: 0xdcc50b2f  ld          $a1, 0xB2F($a2)
    ctx->pc = 0x27edbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 2863)));
    // 0x27edc0: 0xd4c50c2f  ldc1        $f5, 0xC2F($a2)
    ctx->pc = 0x27edc0u;
    // Unhandled opcode: 0x35
    // 0x27edc4: 0xf545f7a0  sdc1        $f5, -0x860($t2)
    ctx->pc = 0x27edc4u;
    // Unhandled opcode: 0x3D
    // 0x27edc8: 0xc0a391e  jal         func_28E478
    ctx->pc = 0x27EDC8u;
    SET_GPR_U32(ctx, 31, 0x27EDD0u);
    ctx->pc = 0x27EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDC8u;
            // 0x27edcc: 0xd4c5ad2e  ldc1        $f5, -0x52D2($a2) (Delay Slot)
        // Unhandled opcode: 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E478u;
    if (runtime->hasFunction(0x28E478u)) {
        auto targetFn = runtime->lookupFunction(0x28E478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDD0u; }
        if (ctx->pc != 0x27EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E478_0x28e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDD0u; }
        if (ctx->pc != 0x27EDD0u) { return; }
    }
    ctx->pc = 0x27EDD0u;
label_27edd0:
    // 0x27edd0: 0xd7c5e9b4  ldc1        $f5, -0x164C($fp)
    ctx->pc = 0x27edd0u;
    // Unhandled opcode: 0x35
    // 0x27edd4: 0xd4c50d2f  ldc1        $f5, 0xD2F($a2)
    ctx->pc = 0x27edd4u;
    // Unhandled opcode: 0x35
    // 0x27edd8: 0xc6c5a9b0  lwc1        $f5, -0x5650($s6)
    ctx->pc = 0x27edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294945200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27eddc: 0xf945a9a0  sqc2        $vf5, -0x5660($t2)
    ctx->pc = 0x27eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294945184), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ede0: 0xc0a3d02  jal         func_28F408
    ctx->pc = 0x27EDE0u;
    SET_GPR_U32(ctx, 31, 0x27EDE8u);
    ctx->pc = 0x27EDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDE0u;
            // 0x27ede4: 0xf94d49a2  sqc2        $vf13, 0x49A2($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 18850), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDE8u; }
        if (ctx->pc != 0x27EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDE8u; }
        if (ctx->pc != 0x27EDE8u) { return; }
    }
    ctx->pc = 0x27EDE8u;
label_27ede8:
    // 0x27ede8: 0xd9c589ba  lqc2        $vf5, -0x7646($t6)
    ctx->pc = 0x27ede8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294937018)));
    // 0x27edec: 0xd4c5090f  ldc1        $f5, 0x90F($a2)
    ctx->pc = 0x27edecu;
    // Unhandled opcode: 0x35
    // 0x27edf0: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x27EDF0u;
    SET_GPR_U32(ctx, 31, 0x27EDF8u);
    ctx->pc = 0x27EDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDF0u;
            // 0x27edf4: 0xd4c5ad2e  ldc1        $f5, -0x52D2($a2) (Delay Slot)
        // Unhandled opcode: 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDF8u; }
        if (ctx->pc != 0x27EDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDF8u; }
        if (ctx->pc != 0x27EDF8u) { return; }
    }
    ctx->pc = 0x27EDF8u;
label_27edf8:
    // 0x27edf8: 0x233ae9b0  addi        $k0, $t9, -0x1650
    ctx->pc = 0x27edf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)4294961584, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x27edfc: 0xf9ede9a0  sqc2        $vf13, -0x1660($t7)
    ctx->pc = 0x27edfcu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294961568), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27ee00: 0x283aad2e  slti        $k0, $at, -0x52D2
    ctx->pc = 0x27ee00u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)4294946094) ? 1 : 0);
    // 0x27ee04: 0xc0a391e  jal         func_28E478
    ctx->pc = 0x27EE04u;
    SET_GPR_U32(ctx, 31, 0x27EE0Cu);
    ctx->pc = 0x27EE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE04u;
            // 0x27ee08: 0x283ab986  slti        $k0, $at, -0x467A (Delay Slot)
        SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)4294949254) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E478u;
    if (runtime->hasFunction(0x28E478u)) {
        auto targetFn = runtime->lookupFunction(0x28E478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE0Cu; }
        if (ctx->pc != 0x27EE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E478_0x28e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE0Cu; }
        if (ctx->pc != 0x27EE0Cu) { return; }
    }
    ctx->pc = 0x27EE0Cu;
label_27ee0c:
    // 0x27ee0c: 0xd1c5e9f0  lld         $a1, -0x1610($t6)
    ctx->pc = 0x27ee0cu;
    // Unhandled opcode: 0x34
    // 0x27ee10: 0xf945a9a0  sqc2        $vf5, -0x5660($t2)
    ctx->pc = 0x27ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294945184), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x27ee14: 0x2b3a9886  slti        $k0, $t9, -0x677A
    ctx->pc = 0x27ee14u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)4294940806) ? 1 : 0);
    // 0x27ee18: 0x213a89be  addi        $k0, $t1, -0x7642
    ctx->pc = 0x27ee18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294937022, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x27ee1c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ee1cu;
    // Unhandled opcode: 0x35
    // 0x27ee20: 0xd5c5b984  ldc1        $f5, -0x467C($t6)
    ctx->pc = 0x27ee20u;
    // Unhandled opcode: 0x35
    // 0x27ee24: 0xd4c50d2f  ldc1        $f5, 0xD2F($a2)
    ctx->pc = 0x27ee24u;
    // Unhandled opcode: 0x35
    // 0x27ee28: 0xd0c529b0  lld         $a1, 0x29B0($a2)
    ctx->pc = 0x27ee28u;
    // Unhandled opcode: 0x34
    // 0x27ee2c: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2)
    ctx->pc = 0x27ee2cu;
    // Unhandled opcode: 0x35
    // 0x27ee30: 0xc0a3d02  jal         func_28F408
    ctx->pc = 0x27EE30u;
    SET_GPR_U32(ctx, 31, 0x27EE38u);
    ctx->pc = 0x27EE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE30u;
            // 0x27ee34: 0xd4c5a9a0  ldc1        $f5, -0x5660($a2) (Delay Slot)
        // Unhandled opcode: 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE38u; }
        if (ctx->pc != 0x27EE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE38u; }
        if (ctx->pc != 0x27EE38u) { return; }
    }
    ctx->pc = 0x27EE38u;
label_27ee38:
    // 0x27ee38: 0xd4c5090f  ldc1        $f5, 0x90F($a2)
    ctx->pc = 0x27ee38u;
    // Unhandled opcode: 0x35
    // 0x27ee3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27EE3Cu;
    {
        const bool branch_taken_0x27ee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ee3c) {
            ctx->pc = 0x27EE6Cu;
            goto label_27ee6c;
        }
    }
    ctx->pc = 0x27EE44u;
    // 0x27ee44: 0x3c81820  add         $v1, $fp, $t0
    ctx->pc = 0x27ee44u;
    {     int32_t rs_val = GPR_S32(ctx, 30);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x27ee48: 0x8677ac8b  lh          $s7, -0x5375($s3)
    ctx->pc = 0x27ee48u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294945931)));
    // 0x27ee4c: 0x26bf82b0  addiu       $ra, $s5, -0x7D50
    ctx->pc = 0x27ee4cu;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935216));
    // 0x27ee50: 0xa07bfbe1  sb          $k1, -0x41F($v1)
    ctx->pc = 0x27ee50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966241), (uint8_t)GPR_U32(ctx, 27));
    // 0x27ee54: 0x354c020  add         $t8, $k0, $s4
    ctx->pc = 0x27ee54u;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x27ee58: 0xde0f73e7  ld          $t7, 0x73E7($s0)
    ctx->pc = 0x27ee58u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 16), 29671)));
    // 0x27ee5c: 0x4c964410  .word       0x4C964410                   # INVALID     $a0, $s6, 0x4410 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ee5cu;
    // Unhandled opcode: 0x13
    // 0x27ee60: 0x980b36a7  lwr         $t3, 0x36A7($zero)
    ctx->pc = 0x27ee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13991); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27ee64: 0x4c964240  .word       0x4C964240                   # INVALID     $a0, $s6, 0x4240 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27ee64u;
    // Unhandled opcode: 0x13
    // 0x27ee68: 0x0  nop
    ctx->pc = 0x27ee68u;
    // NOP
label_27ee6c:
    // 0x27ee6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27ee70: 0x2442ee5c  addiu       $v0, $v0, -0x11A4
    ctx->pc = 0x27ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962780));
    // 0x27ee74: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27ee78: 0x2484ee3c  addiu       $a0, $a0, -0x11C4
    ctx->pc = 0x27ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962748));
    // 0x27ee7c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27ee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27ee80: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27ee84: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27EE84u;
    SET_GPR_U32(ctx, 31, 0x27EE8Cu);
    ctx->pc = 0x27EE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE84u;
            // 0x27ee88: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE8Cu; }
        if (ctx->pc != 0x27EE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE8Cu; }
        if (ctx->pc != 0x27EE8Cu) { return; }
    }
    ctx->pc = 0x27EE8Cu;
label_27ee8c:
    // 0x27ee8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ee8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27ee90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27ee94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27ee94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27ee98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ee9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27ee9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27eea0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x27eea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27eea4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x27eea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27eea8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x27eea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27eeac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x27eeacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27eeb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x27eeb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27eeb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x27eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x27EEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEB8u;
            // 0x27eebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EEC0u;
label_27eec0:
    // 0x27eec0: 0x520005d  bltz        $t1, . + 4 + (0x5D << 2)
    ctx->pc = 0x27EEC0u;
    {
        const bool branch_taken_0x27eec0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x27EEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEC0u;
            // 0x27eec4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eec0) {
            ctx->pc = 0x27F038u;
            goto label_27f038;
        }
    }
    ctx->pc = 0x27EEC8u;
    // 0x27eec8: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x27eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x27eecc: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x27EECCu;
    {
        const bool branch_taken_0x27eecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27EED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EECCu;
            // 0x27eed0: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eecc) {
            ctx->pc = 0x27EF80u;
            goto label_27ef80;
        }
    }
    ctx->pc = 0x27EED4u;
    // 0x27eed4: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x27eed4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x27eed8: 0x8d44355c  lw          $a0, 0x355C($t2)
    ctx->pc = 0x27eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13660)));
    // 0x27eedc: 0x288200ff  slti        $v0, $a0, 0xFF
    ctx->pc = 0x27eedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x27eee0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x27EEE0u;
    {
        const bool branch_taken_0x27eee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEE0u;
            // 0x27eee4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eee0) {
            ctx->pc = 0x27F038u;
            goto label_27f038;
        }
    }
    ctx->pc = 0x27EEE8u;
    // 0x27eee8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x27eeec: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x27eeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x27eef0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27EEF0u;
    {
        const bool branch_taken_0x27eef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEF0u;
            // 0x27eef4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eef0) {
            ctx->pc = 0x27EF38u;
            goto label_27ef38;
        }
    }
    ctx->pc = 0x27EEF8u;
    // 0x27eef8: 0x3c0801c9  lui         $t0, 0x1C9
    ctx->pc = 0x27eef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
    // 0x27eefc: 0x25084078  addiu       $t0, $t0, 0x4078
    ctx->pc = 0x27eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16504));
    // 0x27ef00: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x27ef04: 0x18e00009  blez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x27EF04u;
    {
        const bool branch_taken_0x27ef04 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x27EF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF04u;
            // 0x27ef08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef04) {
            ctx->pc = 0x27EF2Cu;
            goto label_27ef2c;
        }
    }
    ctx->pc = 0x27EF0Cu;
    // 0x27ef0c: 0x0  nop
    ctx->pc = 0x27ef0cu;
    // NOP
label_27ef10:
    // 0x27ef10: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27ef14: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x27ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27ef18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27ef18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ef1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27ef20: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x27ef20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27ef24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27EF24u;
    {
        const bool branch_taken_0x27ef24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF24u;
            // 0x27ef28: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef24) {
            ctx->pc = 0x27EF10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ef10;
        }
    }
    ctx->pc = 0x27EF2Cu;
label_27ef2c:
    // 0x27ef2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27EF2Cu;
    {
        const bool branch_taken_0x27ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF2Cu;
            // 0x27ef30: 0x2543355c  addiu       $v1, $t2, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef2c) {
            ctx->pc = 0x27EFE0u;
            goto label_27efe0;
        }
    }
    ctx->pc = 0x27EF34u;
    // 0x27ef34: 0x0  nop
    ctx->pc = 0x27ef34u;
    // NOP
label_27ef38:
    // 0x27ef38: 0x3c0801c9  lui         $t0, 0x1C9
    ctx->pc = 0x27ef38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
    // 0x27ef3c: 0x25084078  addiu       $t0, $t0, 0x4078
    ctx->pc = 0x27ef3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16504));
    // 0x27ef40: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x27ef40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x27ef44: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x27ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27ef48: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27EF48u;
    {
        const bool branch_taken_0x27ef48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27EF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF48u;
            // 0x27ef4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef48) {
            ctx->pc = 0x27EF74u;
            goto label_27ef74;
        }
    }
    ctx->pc = 0x27EF50u;
    // 0x27ef50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27ef50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef54: 0x0  nop
    ctx->pc = 0x27ef54u;
    // NOP
label_27ef58:
    // 0x27ef58: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27ef5c: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x27ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27ef60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27ef60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ef64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27ef68: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x27ef68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27ef6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27EF6Cu;
    {
        const bool branch_taken_0x27ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF6Cu;
            // 0x27ef70: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef6c) {
            ctx->pc = 0x27EF58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ef58;
        }
    }
    ctx->pc = 0x27EF74u;
label_27ef74:
    // 0x27ef74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27ef78: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27EF78u;
    {
        const bool branch_taken_0x27ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF78u;
            // 0x27ef7c: 0xad42355c  sw          $v0, 0x355C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 13660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef78) {
            ctx->pc = 0x27F034u;
            goto label_27f034;
        }
    }
    ctx->pc = 0x27EF80u;
label_27ef80:
    // 0x27ef80: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x27EF80u;
    {
        const bool branch_taken_0x27ef80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27EF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF80u;
            // 0x27ef84: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef80) {
            ctx->pc = 0x27F038u;
            goto label_27f038;
        }
    }
    ctx->pc = 0x27EF88u;
    // 0x27ef88: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x27ef88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x27ef8c: 0x8d443560  lw          $a0, 0x3560($t2)
    ctx->pc = 0x27ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13664)));
    // 0x27ef90: 0x288200ff  slti        $v0, $a0, 0xFF
    ctx->pc = 0x27ef90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x27ef94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27EF94u;
    {
        const bool branch_taken_0x27ef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF94u;
            // 0x27ef98: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef94) {
            ctx->pc = 0x27F038u;
            goto label_27f038;
        }
    }
    ctx->pc = 0x27EF9Cu;
    // 0x27ef9c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x27ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x27efa0: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x27efa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x27efa4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27EFA4u;
    {
        const bool branch_taken_0x27efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFA4u;
            // 0x27efa8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efa4) {
            ctx->pc = 0x27EFF0u;
            goto label_27eff0;
        }
    }
    ctx->pc = 0x27EFACu;
    // 0x27efac: 0x3c0801c9  lui         $t0, 0x1C9
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
    // 0x27efb0: 0x25084178  addiu       $t0, $t0, 0x4178
    ctx->pc = 0x27efb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16760));
    // 0x27efb4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x27efb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x27efb8: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x27EFB8u;
    {
        const bool branch_taken_0x27efb8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x27EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFB8u;
            // 0x27efbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efb8) {
            ctx->pc = 0x27EFDCu;
            goto label_27efdc;
        }
    }
    ctx->pc = 0x27EFC0u;
label_27efc0:
    // 0x27efc0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27efc4: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x27efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27efc8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27efc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27efcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27efccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27efd0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x27efd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27efd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27EFD4u;
    {
        const bool branch_taken_0x27efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFD4u;
            // 0x27efd8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efd4) {
            ctx->pc = 0x27EFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27efc0;
        }
    }
    ctx->pc = 0x27EFDCu;
label_27efdc:
    // 0x27efdc: 0x25433560  addiu       $v1, $t2, 0x3560
    ctx->pc = 0x27efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 13664));
label_27efe0:
    // 0x27efe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27efe4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x27efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27efe8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27EFE8u;
    {
        const bool branch_taken_0x27efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFE8u;
            // 0x27efec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efe8) {
            ctx->pc = 0x27F034u;
            goto label_27f034;
        }
    }
    ctx->pc = 0x27EFF0u;
label_27eff0:
    // 0x27eff0: 0x3c0801c9  lui         $t0, 0x1C9
    ctx->pc = 0x27eff0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
    // 0x27eff4: 0x25084178  addiu       $t0, $t0, 0x4178
    ctx->pc = 0x27eff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16760));
    // 0x27eff8: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x27eff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x27effc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x27effcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f000: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27F000u;
    {
        const bool branch_taken_0x27f000 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F000u;
            // 0x27f004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f000) {
            ctx->pc = 0x27F02Cu;
            goto label_27f02c;
        }
    }
    ctx->pc = 0x27F008u;
    // 0x27f008: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27f008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f00c: 0x0  nop
    ctx->pc = 0x27f00cu;
    // NOP
label_27f010:
    // 0x27f010: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27f014: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x27f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27f018: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27f018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f01c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27f020: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x27f020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27f024: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27F024u;
    {
        const bool branch_taken_0x27f024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F024u;
            // 0x27f028: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f024) {
            ctx->pc = 0x27F010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f010;
        }
    }
    ctx->pc = 0x27F02Cu;
label_27f02c:
    // 0x27f02c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f030: 0xad423560  sw          $v0, 0x3560($t2)
    ctx->pc = 0x27f030u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 13664), GPR_U32(ctx, 2));
label_27f034:
    // 0x27f034: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x27f034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_27f038:
    // 0x27f038: 0x3e00008  jr          $ra
    ctx->pc = 0x27F038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F040u;
    ctx->pc = 0x27f040u;
}
