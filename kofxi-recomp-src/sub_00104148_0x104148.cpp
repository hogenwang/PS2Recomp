#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00104148
// Address: 0x104148 - 0x104320
void sub_00104148_0x104148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104148_0x104148");
#endif

    switch (ctx->pc) {
        case 0x10417cu: goto label_10417c;
        case 0x104190u: goto label_104190;
        case 0x10419cu: goto label_10419c;
        case 0x1041acu: goto label_1041ac;
        case 0x1041bcu: goto label_1041bc;
        case 0x1041ccu: goto label_1041cc;
        case 0x1041d8u: goto label_1041d8;
        case 0x1041f8u: goto label_1041f8;
        case 0x104230u: goto label_104230;
        case 0x10423cu: goto label_10423c;
        case 0x10424cu: goto label_10424c;
        case 0x104258u: goto label_104258;
        case 0x104268u: goto label_104268;
        case 0x104274u: goto label_104274;
        case 0x10429cu: goto label_10429c;
        case 0x1042b8u: goto label_1042b8;
        case 0x1042e4u: goto label_1042e4;
        case 0x1042f0u: goto label_1042f0;
        case 0x1042fcu: goto label_1042fc;
        default: break;
    }

    ctx->pc = 0x104148u;

    // 0x104148: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x104148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10414c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x10414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x104150: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x104150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104154: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x104154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x104158: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x104158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10415c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10415cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104160: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x104160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x104164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x104164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104168: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x104168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10416c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x104170: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x104170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x104174: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x104174u;
    SET_GPR_U32(ctx, 31, 0x10417Cu);
    ctx->pc = 0x104178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104174u;
            // 0x104178: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10417Cu; }
        if (ctx->pc != 0x10417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10417Cu; }
        if (ctx->pc != 0x10417Cu) { return; }
    }
    ctx->pc = 0x10417Cu;
label_10417c:
    // 0x10417c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x104180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x104180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104188: 0xc040d2a  jal         func_1034A8
    ctx->pc = 0x104188u;
    SET_GPR_U32(ctx, 31, 0x104190u);
    ctx->pc = 0x10418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104188u;
            // 0x10418c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1034A8u;
    if (runtime->hasFunction(0x1034A8u)) {
        auto targetFn = runtime->lookupFunction(0x1034A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104190u; }
        if (ctx->pc != 0x104190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001034A8_0x1034a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104190u; }
        if (ctx->pc != 0x104190u) { return; }
    }
    ctx->pc = 0x104190u;
label_104190:
    // 0x104190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x104190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104194: 0xc040d62  jal         func_103588
    ctx->pc = 0x104194u;
    SET_GPR_U32(ctx, 31, 0x10419Cu);
    ctx->pc = 0x104198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104194u;
            // 0x104198: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103588u;
    if (runtime->hasFunction(0x103588u)) {
        auto targetFn = runtime->lookupFunction(0x103588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10419Cu; }
        if (ctx->pc != 0x10419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103588_0x103588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10419Cu; }
        if (ctx->pc != 0x10419Cu) { return; }
    }
    ctx->pc = 0x10419Cu;
label_10419c:
    // 0x10419c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x10419cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1041a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1041a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041a4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1041A4u;
    SET_GPR_U32(ctx, 31, 0x1041ACu);
    ctx->pc = 0x1041A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1041A4u;
            // 0x1041a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103588u;
    if (runtime->hasFunction(0x103588u)) {
        auto targetFn = runtime->lookupFunction(0x103588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041ACu; }
        if (ctx->pc != 0x1041ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103588_0x103588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041ACu; }
        if (ctx->pc != 0x1041ACu) { return; }
    }
    ctx->pc = 0x1041ACu;
label_1041ac:
    // 0x1041ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1041acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1041b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1041b4: 0xc040d2a  jal         func_1034A8
    ctx->pc = 0x1041B4u;
    SET_GPR_U32(ctx, 31, 0x1041BCu);
    ctx->pc = 0x1041B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1041B4u;
            // 0x1041b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1034A8u;
    if (runtime->hasFunction(0x1034A8u)) {
        auto targetFn = runtime->lookupFunction(0x1034A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041BCu; }
        if (ctx->pc != 0x1041BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001034A8_0x1034a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041BCu; }
        if (ctx->pc != 0x1041BCu) { return; }
    }
    ctx->pc = 0x1041BCu;
label_1041bc:
    // 0x1041bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1041bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1041c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041c4: 0xc040e92  jal         func_103A48
    ctx->pc = 0x1041C4u;
    SET_GPR_U32(ctx, 31, 0x1041CCu);
    ctx->pc = 0x1041C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1041C4u;
            // 0x1041c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (runtime->hasFunction(0x103A48u)) {
        auto targetFn = runtime->lookupFunction(0x103A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041CCu; }
        if (ctx->pc != 0x1041CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103A48_0x103a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041CCu; }
        if (ctx->pc != 0x1041CCu) { return; }
    }
    ctx->pc = 0x1041CCu;
label_1041cc:
    // 0x1041cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041d0: 0xc040da4  jal         func_103690
    ctx->pc = 0x1041D0u;
    SET_GPR_U32(ctx, 31, 0x1041D8u);
    ctx->pc = 0x1041D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1041D0u;
            // 0x1041d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103690u;
    if (runtime->hasFunction(0x103690u)) {
        auto targetFn = runtime->lookupFunction(0x103690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041D8u; }
        if (ctx->pc != 0x1041D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103690_0x103690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041D8u; }
        if (ctx->pc != 0x1041D8u) { return; }
    }
    ctx->pc = 0x1041D8u;
label_1041d8:
    // 0x1041d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1041d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1041dc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1041dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1041e0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1041e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1041e4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1041e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1041e8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1041e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1041ec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1041f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1041F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1041F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1041F0u;
            // 0x1041f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1041F8u;
label_1041f8:
    // 0x1041f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1041f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1041fc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1041fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x104200: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x104200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x104204: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x104204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x104208: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x104208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10420c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10420cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104210: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x104210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x104214: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x104214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x104218: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x104218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10421c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10421cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104220: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x104220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x104224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x104224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x104228: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x104228u;
    SET_GPR_U32(ctx, 31, 0x104230u);
    ctx->pc = 0x10422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104228u;
            // 0x10422c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (runtime->hasFunction(0x1039E0u)) {
        auto targetFn = runtime->lookupFunction(0x1039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104230u; }
        if (ctx->pc != 0x104230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001039E0_0x1039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104230u; }
        if (ctx->pc != 0x104230u) { return; }
    }
    ctx->pc = 0x104230u;
label_104230:
    // 0x104230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104234: 0xc040d62  jal         func_103588
    ctx->pc = 0x104234u;
    SET_GPR_U32(ctx, 31, 0x10423Cu);
    ctx->pc = 0x104238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104234u;
            // 0x104238: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103588u;
    if (runtime->hasFunction(0x103588u)) {
        auto targetFn = runtime->lookupFunction(0x103588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10423Cu; }
        if (ctx->pc != 0x10423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103588_0x103588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10423Cu; }
        if (ctx->pc != 0x10423Cu) { return; }
    }
    ctx->pc = 0x10423Cu;
label_10423c:
    // 0x10423c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104240: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x104240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x104244: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x104244u;
    SET_GPR_U32(ctx, 31, 0x10424Cu);
    ctx->pc = 0x104248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104244u;
            // 0x104248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (runtime->hasFunction(0x1039E0u)) {
        auto targetFn = runtime->lookupFunction(0x1039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10424Cu; }
        if (ctx->pc != 0x10424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001039E0_0x1039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10424Cu; }
        if (ctx->pc != 0x10424Cu) { return; }
    }
    ctx->pc = 0x10424Cu;
label_10424c:
    // 0x10424c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x10424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x104250: 0xc040d62  jal         func_103588
    ctx->pc = 0x104250u;
    SET_GPR_U32(ctx, 31, 0x104258u);
    ctx->pc = 0x104254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104250u;
            // 0x104254: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103588u;
    if (runtime->hasFunction(0x103588u)) {
        auto targetFn = runtime->lookupFunction(0x103588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104258u; }
        if (ctx->pc != 0x104258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103588_0x103588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104258u; }
        if (ctx->pc != 0x104258u) { return; }
    }
    ctx->pc = 0x104258u;
label_104258:
    // 0x104258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x104258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10425c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10425cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x104260: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x104260u;
    SET_GPR_U32(ctx, 31, 0x104268u);
    ctx->pc = 0x104264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104260u;
            // 0x104264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (runtime->hasFunction(0x1039E0u)) {
        auto targetFn = runtime->lookupFunction(0x1039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104268u; }
        if (ctx->pc != 0x104268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001039E0_0x1039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104268u; }
        if (ctx->pc != 0x104268u) { return; }
    }
    ctx->pc = 0x104268u;
label_104268:
    // 0x104268: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x104268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10426c: 0xc040d62  jal         func_103588
    ctx->pc = 0x10426Cu;
    SET_GPR_U32(ctx, 31, 0x104274u);
    ctx->pc = 0x104270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10426Cu;
            // 0x104270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103588u;
    if (runtime->hasFunction(0x103588u)) {
        auto targetFn = runtime->lookupFunction(0x103588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104274u; }
        if (ctx->pc != 0x104274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103588_0x103588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104274u; }
        if (ctx->pc != 0x104274u) { return; }
    }
    ctx->pc = 0x104274u;
label_104274:
    // 0x104274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10427c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x104280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x104284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104288: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x104288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x10428c: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x10428cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x104290: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x104290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x104294: 0xc040d82  jal         func_103608
    ctx->pc = 0x104294u;
    SET_GPR_U32(ctx, 31, 0x10429Cu);
    ctx->pc = 0x104298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104294u;
            // 0x104298: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x103608u;
    if (runtime->hasFunction(0x103608u)) {
        auto targetFn = runtime->lookupFunction(0x103608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10429Cu; }
        if (ctx->pc != 0x10429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103608_0x103608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10429Cu; }
        if (ctx->pc != 0x10429Cu) { return; }
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10429cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1042a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1042a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1042a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1042a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1042a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1042a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1042ac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1042acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1042b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1042B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1042B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042B0u;
            // 0x1042b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1042B8u;
label_1042b8:
    // 0x1042b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1042b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1042bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1042bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1042c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1042c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1042c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1042c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1042c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1042cc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1042ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1042d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1042d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1042d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1042d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1042dc: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1042DCu;
    SET_GPR_U32(ctx, 31, 0x1042E4u);
    ctx->pc = 0x1042E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042DCu;
            // 0x1042e0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042E4u; }
        if (ctx->pc != 0x1042E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042E4u; }
        if (ctx->pc != 0x1042E4u) { return; }
    }
    ctx->pc = 0x1042E4u;
label_1042e4:
    // 0x1042e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1042e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042e8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1042E8u;
    SET_GPR_U32(ctx, 31, 0x1042F0u);
    ctx->pc = 0x1042ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042E8u;
            // 0x1042ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042F0u; }
        if (ctx->pc != 0x1042F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042F0u; }
        if (ctx->pc != 0x1042F0u) { return; }
    }
    ctx->pc = 0x1042F0u;
label_1042f0:
    // 0x1042f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1042f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042f4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1042F4u;
    SET_GPR_U32(ctx, 31, 0x1042FCu);
    ctx->pc = 0x1042F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042F4u;
            // 0x1042f8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042FCu; }
        if (ctx->pc != 0x1042FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042FCu; }
        if (ctx->pc != 0x1042FCu) { return; }
    }
    ctx->pc = 0x1042FCu;
label_1042fc:
    // 0x1042fc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1042fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x104300: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x104300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104304: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x104304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10430c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10430cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104310: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104318: 0x8040eb2  j           func_103AC8
    ctx->pc = 0x104318u;
    ctx->pc = 0x10431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104318u;
            // 0x10431c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00103AC8_0x103ac8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x104320u;
    ctx->pc = 0x104320u;
}
