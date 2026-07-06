#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F72E0
// Address: 0x2f72e0 - 0x2f7438
void sub_002F72E0_0x2f72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F72E0_0x2f72e0");
#endif

    switch (ctx->pc) {
        case 0x2f731cu: goto label_2f731c;
        case 0x2f7338u: goto label_2f7338;
        case 0x2f7340u: goto label_2f7340;
        case 0x2f7348u: goto label_2f7348;
        case 0x2f7354u: goto label_2f7354;
        case 0x2f73b0u: goto label_2f73b0;
        case 0x2f73d8u: goto label_2f73d8;
        case 0x2f73f4u: goto label_2f73f4;
        case 0x2f73fcu: goto label_2f73fc;
        case 0x2f7408u: goto label_2f7408;
        default: break;
    }

    ctx->pc = 0x2f72e0u;

    // 0x2f72e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f72e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2f72e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f72e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f72ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f72ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f72f0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2f72f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2f72f4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2f72f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F72F8u;
    {
        const bool branch_taken_0x2f72f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F72FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72F8u;
            // 0x2f72fc: 0x2402fc0b  addiu       $v0, $zero, -0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72f8) {
            ctx->pc = 0x2F7308u;
            goto label_2f7308;
        }
    }
    ctx->pc = 0x2F7300u;
    // 0x2f7300: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2F7300u;
    {
        const bool branch_taken_0x2f7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7300u;
            // 0x2f7304: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7300) {
            ctx->pc = 0x2F7420u;
            goto label_2f7420;
        }
    }
    ctx->pc = 0x2F7308u;
label_2f7308:
    // 0x2f7308: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2f7308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2f730c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F730Cu;
    {
        const bool branch_taken_0x2f730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f730c) {
            ctx->pc = 0x2F7310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F730Cu;
            // 0x2f7310: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7324u;
            goto label_2f7324;
        }
    }
    ctx->pc = 0x2F7314u;
    // 0x2f7314: 0xc0bdc10  jal         func_2F7040
    ctx->pc = 0x2F7314u;
    SET_GPR_U32(ctx, 31, 0x2F731Cu);
    ctx->pc = 0x2F7318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7314u;
            // 0x2f7318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7040u;
    if (runtime->hasFunction(0x2F7040u)) {
        auto targetFn = runtime->lookupFunction(0x2F7040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F731Cu; }
        if (ctx->pc != 0x2F731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7040_0x2f7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F731Cu; }
        if (ctx->pc != 0x2F731Cu) { return; }
    }
    ctx->pc = 0x2F731Cu;
label_2f731c:
    // 0x2f731c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2F731Cu;
    {
        const bool branch_taken_0x2f731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F731Cu;
            // 0x2f7320: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f731c) {
            ctx->pc = 0x2F7428u;
            goto label_2f7428;
        }
    }
    ctx->pc = 0x2F7324u;
label_2f7324:
    // 0x2f7324: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2f7324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7328: 0x10910008  beq         $a0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7328u;
    {
        const bool branch_taken_0x2f7328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2f7328) {
            ctx->pc = 0x2F734Cu;
            goto label_2f734c;
        }
    }
    ctx->pc = 0x2F7330u;
    // 0x2f7330: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2F7330u;
    SET_GPR_U32(ctx, 31, 0x2F7338u);
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7338u; }
        if (ctx->pc != 0x2F7338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7338u; }
        if (ctx->pc != 0x2F7338u) { return; }
    }
    ctx->pc = 0x2F7338u;
label_2f7338:
    // 0x2f7338: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2F7338u;
    SET_GPR_U32(ctx, 31, 0x2F7340u);
    ctx->pc = 0x2F733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7338u;
            // 0x2f733c: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7340u; }
        if (ctx->pc != 0x2F7340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7340u; }
        if (ctx->pc != 0x2F7340u) { return; }
    }
    ctx->pc = 0x2F7340u;
label_2f7340:
    // 0x2f7340: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F7340u;
    SET_GPR_U32(ctx, 31, 0x2F7348u);
    ctx->pc = 0x2F7344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7340u;
            // 0x2f7344: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7348u; }
        if (ctx->pc != 0x2F7348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7348u; }
        if (ctx->pc != 0x2F7348u) { return; }
    }
    ctx->pc = 0x2F7348u;
label_2f7348:
    // 0x2f7348: 0xae11009c  sw          $s1, 0x9C($s0)
    ctx->pc = 0x2f7348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 17));
label_2f734c:
    // 0x2f734c: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F734Cu;
    SET_GPR_U32(ctx, 31, 0x2F7354u);
    ctx->pc = 0x2F7350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F734Cu;
            // 0x2f7350: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (runtime->hasFunction(0x2F9140u)) {
        auto targetFn = runtime->lookupFunction(0x2F9140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7354u; }
        if (ctx->pc != 0x2F7354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9140_0x2f9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7354u; }
        if (ctx->pc != 0x2F7354u) { return; }
    }
    ctx->pc = 0x2F7354u;
label_2f7354:
    // 0x2f7354: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7354u;
    {
        const bool branch_taken_0x2f7354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7354u;
            // 0x2f7358: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7354) {
            ctx->pc = 0x2F7368u;
            goto label_2f7368;
        }
    }
    ctx->pc = 0x2F735Cu;
    // 0x2f735c: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f7360: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F7360u;
    {
        const bool branch_taken_0x2f7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7360u;
            // 0x2f7364: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7360) {
            ctx->pc = 0x2F7408u;
            goto label_2f7408;
        }
    }
    ctx->pc = 0x2F7368u;
label_2f7368:
    // 0x2f7368: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x2f7368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2f736c: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x2f736cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2f7370: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x2f7370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2f7374: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2f7374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2f7378: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f7378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2f737c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f737cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f7380: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2f7380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2f7384: 0x24427040  addiu       $v0, $v0, 0x7040
    ctx->pc = 0x2f7384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28736));
    // 0x2f7388: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x2f7388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x2f738c: 0x24a52428  addiu       $a1, $a1, 0x2428
    ctx->pc = 0x2f738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9256));
    // 0x2f7390: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2f7390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2f7394: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7398: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f7398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2f739c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2f739cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2f73a0: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2f73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x2f73a4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2f73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2f73a8: 0xc043298  jal         func_10CA60
    ctx->pc = 0x2F73A8u;
    SET_GPR_U32(ctx, 31, 0x2F73B0u);
    ctx->pc = 0x2F73ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73A8u;
            // 0x2f73ac: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73B0u; }
        if (ctx->pc != 0x2F73B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73B0u; }
        if (ctx->pc != 0x2F73B0u) { return; }
    }
    ctx->pc = 0x2F73B0u;
label_2f73b0:
    // 0x2f73b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f73b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73b4: 0x14910004  bne         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F73B4u;
    {
        const bool branch_taken_0x2f73b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F73B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73B4u;
            // 0x2f73b8: 0xae04009c  sw          $a0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f73b4) {
            ctx->pc = 0x2F73C8u;
            goto label_2f73c8;
        }
    }
    ctx->pc = 0x2F73BCu;
    // 0x2f73bc: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
    // 0x2f73c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F73C0u;
    {
        const bool branch_taken_0x2f73c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F73C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73C0u;
            // 0x2f73c4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f73c0) {
            ctx->pc = 0x2F7400u;
            goto label_2f7400;
        }
    }
    ctx->pc = 0x2F73C8u;
label_2f73c8:
    // 0x2f73c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f73cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f73ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73d0: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x2F73D0u;
    SET_GPR_U32(ctx, 31, 0x2F73D8u);
    ctx->pc = 0x2F73D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73D0u;
            // 0x2f73d4: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73D8u; }
        if (ctx->pc != 0x2F73D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73D8u; }
        if (ctx->pc != 0x2F73D8u) { return; }
    }
    ctx->pc = 0x2F73D8u;
label_2f73d8:
    // 0x2f73d8: 0x14510012  bne         $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F73D8u;
    {
        const bool branch_taken_0x2f73d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F73DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73D8u;
            // 0x2f73dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f73d8) {
            ctx->pc = 0x2F7424u;
            goto label_2f7424;
        }
    }
    ctx->pc = 0x2F73E0u;
    // 0x2f73e0: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
    // 0x2f73e4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2f73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2f73e8: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2f73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2f73ec: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2F73ECu;
    SET_GPR_U32(ctx, 31, 0x2F73F4u);
    ctx->pc = 0x2F73F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73ECu;
            // 0x2f73f0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73F4u; }
        if (ctx->pc != 0x2F73F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73F4u; }
        if (ctx->pc != 0x2F73F4u) { return; }
    }
    ctx->pc = 0x2F73F4u;
label_2f73f4:
    // 0x2f73f4: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2F73F4u;
    SET_GPR_U32(ctx, 31, 0x2F73FCu);
    ctx->pc = 0x2F73F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73F4u;
            // 0x2f73f8: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73FCu; }
        if (ctx->pc != 0x2F73FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F73FCu; }
        if (ctx->pc != 0x2F73FCu) { return; }
    }
    ctx->pc = 0x2F73FCu;
label_2f73fc:
    // 0x2f73fc: 0xae11009c  sw          $s1, 0x9C($s0)
    ctx->pc = 0x2f73fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 17));
label_2f7400:
    // 0x2f7400: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F7400u;
    SET_GPR_U32(ctx, 31, 0x2F7408u);
    ctx->pc = 0x2F7404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7400u;
            // 0x2f7404: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7408u; }
        if (ctx->pc != 0x2F7408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7408u; }
        if (ctx->pc != 0x2F7408u) { return; }
    }
    ctx->pc = 0x2F7408u;
label_2f7408:
    // 0x2f7408: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2f7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f740c: 0x2402fc0d  addiu       $v0, $zero, -0x3F3
    ctx->pc = 0x2f740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
    // 0x2f7410: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7410u;
    {
        const bool branch_taken_0x2f7410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F7414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7410u;
            // 0x2f7414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7410) {
            ctx->pc = 0x2F7424u;
            goto label_2f7424;
        }
    }
    ctx->pc = 0x2F7418u;
    // 0x2f7418: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2f7418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2f741c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2f741cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2f7420:
    // 0x2f7420: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7424:
    // 0x2f7424: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f7424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f7428:
    // 0x2f7428: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2f7428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f742c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f742cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7430: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7430u;
            // 0x2f7434: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7438u;
    ctx->pc = 0x2f7438u;
}
