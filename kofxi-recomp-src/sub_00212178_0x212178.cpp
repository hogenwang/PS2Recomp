#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212178
// Address: 0x212178 - 0x212278
void sub_00212178_0x212178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212178_0x212178");
#endif

    switch (ctx->pc) {
        case 0x2121b4u: goto label_2121b4;
        case 0x2121c8u: goto label_2121c8;
        case 0x2121dcu: goto label_2121dc;
        case 0x2121f0u: goto label_2121f0;
        case 0x212204u: goto label_212204;
        case 0x212218u: goto label_212218;
        case 0x21222cu: goto label_21222c;
        case 0x212240u: goto label_212240;
        case 0x212250u: goto label_212250;
        default: break;
    }

    ctx->pc = 0x212178u;

    // 0x212178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21217c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212188: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21218c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21218cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212190: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212198: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21219c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21219cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2121a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121a4: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x2121a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2121a8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2121a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2121ac: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2121ACu;
    SET_GPR_U32(ctx, 31, 0x2121B4u);
    ctx->pc = 0x2121B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121ACu;
            // 0x2121b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121B4u; }
        if (ctx->pc != 0x2121B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121B4u; }
        if (ctx->pc != 0x2121B4u) { return; }
    }
    ctx->pc = 0x2121B4u;
label_2121b4:
    // 0x2121b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2121b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2121b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2121bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121c0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2121C0u;
    SET_GPR_U32(ctx, 31, 0x2121C8u);
    ctx->pc = 0x2121C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121C0u;
            // 0x2121c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121C8u; }
        if (ctx->pc != 0x2121C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121C8u; }
        if (ctx->pc != 0x2121C8u) { return; }
    }
    ctx->pc = 0x2121C8u;
label_2121c8:
    // 0x2121c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2121c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2121ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2121d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121d4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2121D4u;
    SET_GPR_U32(ctx, 31, 0x2121DCu);
    ctx->pc = 0x2121D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121D4u;
            // 0x2121d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121DCu; }
        if (ctx->pc != 0x2121DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121DCu; }
        if (ctx->pc != 0x2121DCu) { return; }
    }
    ctx->pc = 0x2121DCu;
label_2121dc:
    // 0x2121dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2121dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2121e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2121e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121e8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2121E8u;
    SET_GPR_U32(ctx, 31, 0x2121F0u);
    ctx->pc = 0x2121ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121E8u;
            // 0x2121ec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121F0u; }
        if (ctx->pc != 0x2121F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121F0u; }
        if (ctx->pc != 0x2121F0u) { return; }
    }
    ctx->pc = 0x2121F0u;
label_2121f0:
    // 0x2121f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2121f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2121f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2121f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121fc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2121FCu;
    SET_GPR_U32(ctx, 31, 0x212204u);
    ctx->pc = 0x212200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121FCu;
            // 0x212200: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212204u; }
        if (ctx->pc != 0x212204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212204u; }
        if (ctx->pc != 0x212204u) { return; }
    }
    ctx->pc = 0x212204u;
label_212204:
    // 0x212204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21220c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21220cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212210: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212210u;
    SET_GPR_U32(ctx, 31, 0x212218u);
    ctx->pc = 0x212214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212210u;
            // 0x212214: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212218u; }
        if (ctx->pc != 0x212218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212218u; }
        if (ctx->pc != 0x212218u) { return; }
    }
    ctx->pc = 0x212218u;
label_212218:
    // 0x212218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21221c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21221cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212224: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212224u;
    SET_GPR_U32(ctx, 31, 0x21222Cu);
    ctx->pc = 0x212228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212224u;
            // 0x212228: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21222Cu; }
        if (ctx->pc != 0x21222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21222Cu; }
        if (ctx->pc != 0x21222Cu) { return; }
    }
    ctx->pc = 0x21222Cu;
label_21222c:
    // 0x21222c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21222cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212230: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212238: 0xc08449a  jal         func_211268
    ctx->pc = 0x212238u;
    SET_GPR_U32(ctx, 31, 0x212240u);
    ctx->pc = 0x21223Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212238u;
            // 0x21223c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212240u; }
        if (ctx->pc != 0x212240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212240u; }
        if (ctx->pc != 0x212240u) { return; }
    }
    ctx->pc = 0x212240u;
label_212240:
    // 0x212240: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x212240u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212244: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x212244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212248: 0xc084832  jal         func_2120C8
    ctx->pc = 0x212248u;
    SET_GPR_U32(ctx, 31, 0x212250u);
    ctx->pc = 0x21224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212248u;
            // 0x21224c: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2120C8u;
    if (runtime->hasFunction(0x2120C8u)) {
        auto targetFn = runtime->lookupFunction(0x2120C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212250u; }
        if (ctx->pc != 0x212250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002120C8_0x2120c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212250u; }
        if (ctx->pc != 0x212250u) { return; }
    }
    ctx->pc = 0x212250u;
label_212250:
    // 0x212250: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x212250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21225c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21225cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212268: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x212268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21226c: 0x3e00008  jr          $ra
    ctx->pc = 0x21226Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21226Cu;
            // 0x212270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212274u;
    // 0x212274: 0x0  nop
    ctx->pc = 0x212274u;
    // NOP
    ctx->pc = 0x212278u;
}
