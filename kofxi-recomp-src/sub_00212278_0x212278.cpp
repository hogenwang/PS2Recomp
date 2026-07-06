#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212278
// Address: 0x212278 - 0x212370
void sub_00212278_0x212278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212278_0x212278");
#endif

    switch (ctx->pc) {
        case 0x2122b4u: goto label_2122b4;
        case 0x2122c8u: goto label_2122c8;
        case 0x2122dcu: goto label_2122dc;
        case 0x2122f0u: goto label_2122f0;
        case 0x212304u: goto label_212304;
        case 0x212318u: goto label_212318;
        case 0x21232cu: goto label_21232c;
        case 0x212340u: goto label_212340;
        case 0x212348u: goto label_212348;
        default: break;
    }

    ctx->pc = 0x212278u;

    // 0x212278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21227c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21228c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21228cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212290: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x212294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21229c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21229cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2122a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2122a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2122a8: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2122ac: 0xc084612  jal         func_211848
    ctx->pc = 0x2122ACu;
    SET_GPR_U32(ctx, 31, 0x2122B4u);
    ctx->pc = 0x2122B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122ACu;
            // 0x2122b0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122B4u; }
        if (ctx->pc != 0x2122B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122B4u; }
        if (ctx->pc != 0x2122B4u) { return; }
    }
    ctx->pc = 0x2122B4u;
label_2122b4:
    // 0x2122b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2122b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2122b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2122bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122c0: 0xc084612  jal         func_211848
    ctx->pc = 0x2122C0u;
    SET_GPR_U32(ctx, 31, 0x2122C8u);
    ctx->pc = 0x2122C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122C0u;
            // 0x2122c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122C8u; }
        if (ctx->pc != 0x2122C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122C8u; }
        if (ctx->pc != 0x2122C8u) { return; }
    }
    ctx->pc = 0x2122C8u;
label_2122c8:
    // 0x2122c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2122c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2122ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2122d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122d4: 0xc084582  jal         func_211608
    ctx->pc = 0x2122D4u;
    SET_GPR_U32(ctx, 31, 0x2122DCu);
    ctx->pc = 0x2122D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122D4u;
            // 0x2122d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122DCu; }
        if (ctx->pc != 0x2122DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122DCu; }
        if (ctx->pc != 0x2122DCu) { return; }
    }
    ctx->pc = 0x2122DCu;
label_2122dc:
    // 0x2122dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2122dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2122e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2122e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122e8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2122E8u;
    SET_GPR_U32(ctx, 31, 0x2122F0u);
    ctx->pc = 0x2122ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122E8u;
            // 0x2122ec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122F0u; }
        if (ctx->pc != 0x2122F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122F0u; }
        if (ctx->pc != 0x2122F0u) { return; }
    }
    ctx->pc = 0x2122F0u;
label_2122f0:
    // 0x2122f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2122f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2122f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2122f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122fc: 0xc084612  jal         func_211848
    ctx->pc = 0x2122FCu;
    SET_GPR_U32(ctx, 31, 0x212304u);
    ctx->pc = 0x212300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122FCu;
            // 0x212300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212304u; }
        if (ctx->pc != 0x212304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212304u; }
        if (ctx->pc != 0x212304u) { return; }
    }
    ctx->pc = 0x212304u;
label_212304:
    // 0x212304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212308: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21230c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21230cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212310: 0xc084612  jal         func_211848
    ctx->pc = 0x212310u;
    SET_GPR_U32(ctx, 31, 0x212318u);
    ctx->pc = 0x212314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212310u;
            // 0x212314: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212318u; }
        if (ctx->pc != 0x212318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212318u; }
        if (ctx->pc != 0x212318u) { return; }
    }
    ctx->pc = 0x212318u;
label_212318:
    // 0x212318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21231c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212320: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212324: 0xc084612  jal         func_211848
    ctx->pc = 0x212324u;
    SET_GPR_U32(ctx, 31, 0x21232Cu);
    ctx->pc = 0x212328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212324u;
            // 0x212328: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21232Cu; }
        if (ctx->pc != 0x21232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21232Cu; }
        if (ctx->pc != 0x21232Cu) { return; }
    }
    ctx->pc = 0x21232Cu;
label_21232c:
    // 0x21232c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212330: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212338: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212338u;
    SET_GPR_U32(ctx, 31, 0x212340u);
    ctx->pc = 0x21233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212338u;
            // 0x21233c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212340u; }
        if (ctx->pc != 0x212340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212340u; }
        if (ctx->pc != 0x212340u) { return; }
    }
    ctx->pc = 0x212340u;
label_212340:
    // 0x212340: 0xc084832  jal         func_2120C8
    ctx->pc = 0x212340u;
    SET_GPR_U32(ctx, 31, 0x212348u);
    ctx->pc = 0x212344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212340u;
            // 0x212344: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2120C8u;
    if (runtime->hasFunction(0x2120C8u)) {
        auto targetFn = runtime->lookupFunction(0x2120C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212348u; }
        if (ctx->pc != 0x212348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002120C8_0x2120c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212348u; }
        if (ctx->pc != 0x212348u) { return; }
    }
    ctx->pc = 0x212348u;
label_212348:
    // 0x212348: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x212348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21234c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21234cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212350: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x212354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21235c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21235cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212364: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x212364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212368: 0x3e00008  jr          $ra
    ctx->pc = 0x212368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21236Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212368u;
            // 0x21236c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212370u;
    ctx->pc = 0x212370u;
}
