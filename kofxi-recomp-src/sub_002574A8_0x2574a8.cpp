#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002574A8
// Address: 0x2574a8 - 0x257678
void sub_002574A8_0x2574a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002574A8_0x2574a8");
#endif

    switch (ctx->pc) {
        case 0x2574d0u: goto label_2574d0;
        case 0x2574e4u: goto label_2574e4;
        case 0x2574fcu: goto label_2574fc;
        case 0x257510u: goto label_257510;
        case 0x257540u: goto label_257540;
        case 0x2575fcu: goto label_2575fc;
        case 0x257624u: goto label_257624;
        case 0x257648u: goto label_257648;
        case 0x25765cu: goto label_25765c;
        default: break;
    }

    ctx->pc = 0x2574a8u;

    // 0x2574a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2574a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2574ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2574acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2574b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2574b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2574b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2574b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2574b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2574bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2574bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574c0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2574c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2574c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2574c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2574c8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2574C8u;
    SET_GPR_U32(ctx, 31, 0x2574D0u);
    ctx->pc = 0x2574CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2574C8u;
            // 0x2574cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574D0u; }
        if (ctx->pc != 0x2574D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574D0u; }
        if (ctx->pc != 0x2574D0u) { return; }
    }
    ctx->pc = 0x2574D0u;
label_2574d0:
    // 0x2574d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2574d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2574d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2574d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574dc: 0xc095b06  jal         func_256C18
    ctx->pc = 0x2574DCu;
    SET_GPR_U32(ctx, 31, 0x2574E4u);
    ctx->pc = 0x2574E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2574DCu;
            // 0x2574e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256C18u;
    if (runtime->hasFunction(0x256C18u)) {
        auto targetFn = runtime->lookupFunction(0x256C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574E4u; }
        if (ctx->pc != 0x2574E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00256C18_0x256c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574E4u; }
        if (ctx->pc != 0x2574E4u) { return; }
    }
    ctx->pc = 0x2574E4u;
label_2574e4:
    // 0x2574e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2574e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2574E8u;
    {
        const bool branch_taken_0x2574e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574e8) {
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x2574F0u;
    // 0x2574f0: 0x8a440007  lwl         $a0, 0x7($s2)
    ctx->pc = 0x2574f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2574f4: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2574F4u;
    SET_GPR_U32(ctx, 31, 0x2574FCu);
    ctx->pc = 0x2574F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2574F4u;
            // 0x2574f8: 0x9a440004  lwr         $a0, 0x4($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574FCu; }
        if (ctx->pc != 0x2574FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574FCu; }
        if (ctx->pc != 0x2574FCu) { return; }
    }
    ctx->pc = 0x2574FCu;
label_2574fc:
    // 0x2574fc: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2574fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x257500: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257500u;
    {
        const bool branch_taken_0x257500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x257500) {
            ctx->pc = 0x257504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257500u;
            // 0x257504: 0x9603008a  lhu         $v1, 0x8A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 138)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257518u;
            goto label_257518;
        }
    }
    ctx->pc = 0x257508u;
label_257508:
    // 0x257508: 0xc08c698  jal         func_231A60
    ctx->pc = 0x257508u;
    SET_GPR_U32(ctx, 31, 0x257510u);
    ctx->pc = 0x25750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257508u;
            // 0x25750c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257510u; }
        if (ctx->pc != 0x257510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257510u; }
        if (ctx->pc != 0x257510u) { return; }
    }
    ctx->pc = 0x257510u;
label_257510:
    // 0x257510: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x257510u;
    {
        const bool branch_taken_0x257510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257510u;
            // 0x257514: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257510) {
            ctx->pc = 0x257660u;
            goto label_257660;
        }
    }
    ctx->pc = 0x257518u;
label_257518:
    // 0x257518: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x257518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25751c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25751Cu;
    {
        const bool branch_taken_0x25751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25751Cu;
            // 0x257520: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25751c) {
            ctx->pc = 0x257534u;
            goto label_257534;
        }
    }
    ctx->pc = 0x257524u;
    // 0x257524: 0x96020088  lhu         $v0, 0x88($s0)
    ctx->pc = 0x257524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x257528: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x257528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x25752c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25752Cu;
    {
        const bool branch_taken_0x25752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25752Cu;
            // 0x257530: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25752c) {
            ctx->pc = 0x257548u;
            goto label_257548;
        }
    }
    ctx->pc = 0x257534u;
label_257534:
    // 0x257534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257538: 0xc08c698  jal         func_231A60
    ctx->pc = 0x257538u;
    SET_GPR_U32(ctx, 31, 0x257540u);
    ctx->pc = 0x25753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257538u;
            // 0x25753c: 0xa602008a  sh          $v0, 0x8A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257540u; }
        if (ctx->pc != 0x257540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257540u; }
        if (ctx->pc != 0x257540u) { return; }
    }
    ctx->pc = 0x257540u;
label_257540:
    // 0x257540: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x257540u;
    {
        const bool branch_taken_0x257540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257540u;
            // 0x257544: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257540) {
            ctx->pc = 0x257660u;
            goto label_257660;
        }
    }
    ctx->pc = 0x257548u;
label_257548:
    // 0x257548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x257548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25754c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25754Cu;
    {
        const bool branch_taken_0x25754c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25754Cu;
            // 0x257550: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25754c) {
            ctx->pc = 0x257560u;
            goto label_257560;
        }
    }
    ctx->pc = 0x257554u;
    // 0x257554: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x257554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x257558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x257558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25755c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_257560:
    // 0x257560: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x257560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x257564: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x257564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x257568: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x257568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x25756c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25756Cu;
    {
        const bool branch_taken_0x25756c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25756Cu;
            // 0x257570: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25756c) {
            ctx->pc = 0x257580u;
            goto label_257580;
        }
    }
    ctx->pc = 0x257574u;
    // 0x257574: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x257574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x257578: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x257578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x25757c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x25757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_257580:
    // 0x257580: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x257580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x257584: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x257584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x257588: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x257588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25758c: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x257590: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x257590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x257594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257598: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x257598u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25759c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2575a0: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2575a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2575a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2575a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2575a8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2575A8u;
    {
        const bool branch_taken_0x2575a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2575a8) {
            ctx->pc = 0x2575ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2575A8u;
            // 0x2575ac: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2575C0u;
            goto label_2575c0;
        }
    }
    ctx->pc = 0x2575B0u;
    // 0x2575b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2575b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2575B4u;
    {
        const bool branch_taken_0x2575b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2575B4u;
            // 0x2575b8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575b4) {
            ctx->pc = 0x2575D8u;
            goto label_2575d8;
        }
    }
    ctx->pc = 0x2575BCu;
    // 0x2575bc: 0x0  nop
    ctx->pc = 0x2575bcu;
    // NOP
label_2575c0:
    // 0x2575c0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2575c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2575c4: 0x24631228  addiu       $v1, $v1, 0x1228
    ctx->pc = 0x2575c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x2575c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2575c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2575cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2575ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2575d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2575d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2575d4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2575d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_2575d8:
    // 0x2575d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2575d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2575dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2575dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2575e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2575e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2575e4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2575e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2575e8: 0xdc821218  ld          $v0, 0x1218($a0)
    ctx->pc = 0x2575e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4632)));
    // 0x2575ec: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x2575ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x2575f0: 0xfc821218  sd          $v0, 0x1218($a0)
    ctx->pc = 0x2575f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4632), GPR_U64(ctx, 2));
    // 0x2575f4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2575F4u;
    SET_GPR_U32(ctx, 31, 0x2575FCu);
    ctx->pc = 0x2575F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2575F4u;
            // 0x2575f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575FCu; }
        if (ctx->pc != 0x2575FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575FCu; }
        if (ctx->pc != 0x2575FCu) { return; }
    }
    ctx->pc = 0x2575FCu;
label_2575fc:
    // 0x2575fc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2575fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x257600: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x257600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x257604: 0xdc6201e8  ld          $v0, 0x1E8($v1)
    ctx->pc = 0x257604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x257608: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x257608u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25760c: 0xfc6201e8  sd          $v0, 0x1E8($v1)
    ctx->pc = 0x25760cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 488), GPR_U64(ctx, 2));
    // 0x257610: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x257614: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257614u;
    {
        const bool branch_taken_0x257614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257614) {
            ctx->pc = 0x257618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257614u;
            // 0x257618: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257628u;
            goto label_257628;
        }
    }
    ctx->pc = 0x25761Cu;
    // 0x25761c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x25761Cu;
    SET_GPR_U32(ctx, 31, 0x257624u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257624u; }
        if (ctx->pc != 0x257624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257624u; }
        if (ctx->pc != 0x257624u) { return; }
    }
    ctx->pc = 0x257624u;
label_257624:
    // 0x257624: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_257628:
    // 0x257628: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x257628u;
    {
        const bool branch_taken_0x257628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257628) {
            ctx->pc = 0x257654u;
            goto label_257654;
        }
    }
    ctx->pc = 0x257630u;
    // 0x257630: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x257630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x257634: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x257634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257638u;
    {
        const bool branch_taken_0x257638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257638u;
            // 0x25763c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257638) {
            ctx->pc = 0x257650u;
            goto label_257650;
        }
    }
    ctx->pc = 0x257640u;
    // 0x257640: 0xc090c4c  jal         func_243130
    ctx->pc = 0x257640u;
    SET_GPR_U32(ctx, 31, 0x257648u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257648u; }
        if (ctx->pc != 0x257648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257648u; }
        if (ctx->pc != 0x257648u) { return; }
    }
    ctx->pc = 0x257648u;
label_257648:
    // 0x257648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257648u;
    {
        const bool branch_taken_0x257648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257648) {
            ctx->pc = 0x257654u;
            goto label_257654;
        }
    }
    ctx->pc = 0x257650u;
label_257650:
    // 0x257650: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x257650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_257654:
    // 0x257654: 0xc098560  jal         func_261580
    ctx->pc = 0x257654u;
    SET_GPR_U32(ctx, 31, 0x25765Cu);
    ctx->pc = 0x257658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257654u;
            // 0x257658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25765Cu; }
        if (ctx->pc != 0x25765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25765Cu; }
        if (ctx->pc != 0x25765Cu) { return; }
    }
    ctx->pc = 0x25765Cu;
label_25765c:
    // 0x25765c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_257660:
    // 0x257660: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x257660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257664: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x257664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257668: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x257668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25766c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257670: 0x3e00008  jr          $ra
    ctx->pc = 0x257670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257670u;
            // 0x257674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257678u;
    ctx->pc = 0x257678u;
}
