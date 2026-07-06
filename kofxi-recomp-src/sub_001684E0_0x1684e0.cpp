#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001684E0
// Address: 0x1684e0 - 0x168ce0
void sub_001684E0_0x1684e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001684E0_0x1684e0");
#endif

    switch (ctx->pc) {
        case 0x168534u: goto label_168534;
        case 0x168568u: goto label_168568;
        case 0x16859cu: goto label_16859c;
        case 0x1685b0u: goto label_1685b0;
        case 0x1685ccu: goto label_1685cc;
        case 0x1685ecu: goto label_1685ec;
        case 0x168608u: goto label_168608;
        case 0x168628u: goto label_168628;
        case 0x168660u: goto label_168660;
        case 0x1686b8u: goto label_1686b8;
        case 0x1686e0u: goto label_1686e0;
        case 0x16870cu: goto label_16870c;
        case 0x168744u: goto label_168744;
        case 0x16877cu: goto label_16877c;
        case 0x1687b4u: goto label_1687b4;
        case 0x1687ecu: goto label_1687ec;
        case 0x168824u: goto label_168824;
        case 0x16885cu: goto label_16885c;
        case 0x168894u: goto label_168894;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688fcu: goto label_1688fc;
        case 0x168934u: goto label_168934;
        case 0x168964u: goto label_168964;
        case 0x168994u: goto label_168994;
        case 0x1689b4u: goto label_1689b4;
        case 0x1689ccu: goto label_1689cc;
        case 0x168a30u: goto label_168a30;
        case 0x168a8cu: goto label_168a8c;
        case 0x168aa4u: goto label_168aa4;
        case 0x168ae4u: goto label_168ae4;
        default: break;
    }

    ctx->pc = 0x1684e0u;

    // 0x1684e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1684e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1684e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1684e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1684e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1684e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1684ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1684ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1684f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1684f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1684f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1684f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1684f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1684f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1684fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1684fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16850c: 0x641200ff  daddiu      $s2, $zero, 0xFF
    ctx->pc = 0x16850cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x168510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168514: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x168514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x168518: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x168518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16851c: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x16851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    // 0x168520: 0xafa60108  sw          $a2, 0x108($sp)
    ctx->pc = 0x168520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 6));
    // 0x168524: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x168524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x168528: 0xa7a000d0  sh          $zero, 0xD0($sp)
    ctx->pc = 0x168528u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 0));
    // 0x16852c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x16852Cu;
    SET_GPR_U32(ctx, 31, 0x168534u);
    ctx->pc = 0x168530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16852Cu;
            // 0x168530: 0x2f082  srl         $fp, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168534u; }
        if (ctx->pc != 0x168534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168534u; }
        if (ctx->pc != 0x168534u) { return; }
    }
    ctx->pc = 0x168534u;
label_168534:
    // 0x168534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x168534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168538: 0x86a204fe  lh          $v0, 0x4FE($s5)
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1278)));
    // 0x16853c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16853Cu;
    {
        const bool branch_taken_0x16853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16853c) {
            ctx->pc = 0x16854Cu;
            goto label_16854c;
        }
    }
    ctx->pc = 0x168544u;
    // 0x168544: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x168544u;
    {
        const bool branch_taken_0x168544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168544u;
            // 0x168548: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168544) {
            ctx->pc = 0x168CACu;
            goto label_168cac;
        }
    }
    ctx->pc = 0x16854Cu;
label_16854c:
    // 0x16854c: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16854Cu;
    {
        const bool branch_taken_0x16854c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16854c) {
            ctx->pc = 0x168550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16854Cu;
            // 0x168550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16855Cu;
            goto label_16855c;
        }
    }
    ctx->pc = 0x168554u;
    // 0x168554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168554u;
    {
        const bool branch_taken_0x168554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168554u;
            // 0x168558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168554) {
            ctx->pc = 0x168568u;
            goto label_168568;
        }
    }
    ctx->pc = 0x16855Cu;
label_16855c:
    // 0x16855c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168560: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x168560u;
    SET_GPR_U32(ctx, 31, 0x168568u);
    ctx->pc = 0x168564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168560u;
            // 0x168564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168568u; }
        if (ctx->pc != 0x168568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168568u; }
        if (ctx->pc != 0x168568u) { return; }
    }
    ctx->pc = 0x168568u;
label_168568:
    // 0x168568: 0x8ea30498  lw          $v1, 0x498($s5)
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1176)));
    // 0x16856c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x16856cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168570: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x168570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x168574: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168574u;
    {
        const bool branch_taken_0x168574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168574) {
            ctx->pc = 0x168578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168574u;
            // 0x168578: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16858Cu;
            goto label_16858c;
        }
    }
    ctx->pc = 0x16857Cu;
    // 0x16857c: 0x2402f3ff  addiu       $v0, $zero, -0xC01
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x168580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168584: 0xaea20498  sw          $v0, 0x498($s5)
    ctx->pc = 0x168584u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1176), GPR_U32(ctx, 2));
    // 0x168588: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x168588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_16858c:
    // 0x16858c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16858cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168590: 0x184001c5  blez        $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x168590u;
    {
        const bool branch_taken_0x168590 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168590u;
            // 0x168594: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168590) {
            ctx->pc = 0x168CA8u;
            goto label_168ca8;
        }
    }
    ctx->pc = 0x168598u;
    // 0x168598: 0x3297ffff  andi        $s7, $s4, 0xFFFF
    ctx->pc = 0x168598u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_16859c:
    // 0x16859c: 0x8fb3010c  lw          $s3, 0x10C($sp)
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1685a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1685a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1685a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1685a8: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x1685A8u;
    SET_GPR_U32(ctx, 31, 0x1685B0u);
    ctx->pc = 0x1685ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685A8u;
            // 0x1685ac: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685B0u; }
        if (ctx->pc != 0x1685B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685B0u; }
        if (ctx->pc != 0x1685B0u) { return; }
    }
    ctx->pc = 0x1685B0u;
label_1685b0:
    // 0x1685b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1685b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1685b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1685b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685b8: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x1685b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x1685bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1685c0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1685c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1685c4: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x1685C4u;
    SET_GPR_U32(ctx, 31, 0x1685CCu);
    ctx->pc = 0x1685C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685C4u;
            // 0x1685c8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685CCu; }
        if (ctx->pc != 0x1685CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685CCu; }
        if (ctx->pc != 0x1685CCu) { return; }
    }
    ctx->pc = 0x1685CCu;
label_1685cc:
    // 0x1685cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1685ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1685d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1685d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685d4: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x1685d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x1685d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1685d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1685dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1685dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1685e0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1685e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685e4: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x1685E4u;
    SET_GPR_U32(ctx, 31, 0x1685ECu);
    ctx->pc = 0x1685E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685E4u;
            // 0x1685e8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685ECu; }
        if (ctx->pc != 0x1685ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685ECu; }
        if (ctx->pc != 0x1685ECu) { return; }
    }
    ctx->pc = 0x1685ECu;
label_1685ec:
    // 0x1685ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1685ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1685f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1685f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685f4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1685f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1685f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1685f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1685fc: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1685fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x168600: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x168600u;
    SET_GPR_U32(ctx, 31, 0x168608u);
    ctx->pc = 0x168604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168600u;
            // 0x168604: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168608u; }
        if (ctx->pc != 0x168608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168608u; }
        if (ctx->pc != 0x168608u) { return; }
    }
    ctx->pc = 0x168608u;
label_168608:
    // 0x168608: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x168608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16860c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x16860cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168610: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x168610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168614: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x168614u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x168618: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x168618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16861c: 0x1840019c  blez        $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x16861Cu;
    {
        const bool branch_taken_0x16861c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16861Cu;
            // 0x168620: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16861c) {
            ctx->pc = 0x168C90u;
            goto label_168c90;
        }
    }
    ctx->pc = 0x168624u;
    // 0x168624: 0x0  nop
    ctx->pc = 0x168624u;
    // NOP
label_168628:
    // 0x168628: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x168628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16862c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x16862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x168630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168634: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x168634u;
    {
        const bool branch_taken_0x168634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168634) {
            ctx->pc = 0x168638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168634u;
            // 0x168638: 0x97a200e0  lhu         $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168640u;
            goto label_168640;
        }
    }
    ctx->pc = 0x16863Cu;
    // 0x16863c: 0x97a200f0  lhu         $v0, 0xF0($sp)
    ctx->pc = 0x16863cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_168640:
    // 0x168640: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x168640u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168644: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x168644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x168648: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168648u;
    {
        const bool branch_taken_0x168648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168648) {
            ctx->pc = 0x168670u;
            goto label_168670;
        }
    }
    ctx->pc = 0x168650u;
    // 0x168650: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x168650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168658: 0xc059c98  jal         func_167260
    ctx->pc = 0x168658u;
    SET_GPR_U32(ctx, 31, 0x168660u);
    ctx->pc = 0x16865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168658u;
            // 0x16865c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167260u;
    if (runtime->hasFunction(0x167260u)) {
        auto targetFn = runtime->lookupFunction(0x167260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168660u; }
        if (ctx->pc != 0x168660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167260_0x167260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168660u; }
        if (ctx->pc != 0x168660u) { return; }
    }
    ctx->pc = 0x168660u;
label_168660:
    // 0x168660: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x168660u;
    {
        const bool branch_taken_0x168660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168660) {
            ctx->pc = 0x168698u;
            goto label_168698;
        }
    }
    ctx->pc = 0x168668u;
    // 0x168668: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x168668u;
    {
        const bool branch_taken_0x168668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168668u;
            // 0x16866c: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168668) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168670u;
label_168670:
    // 0x168670: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x168670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x168674: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x168674u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x168678: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168678u;
    {
        const bool branch_taken_0x168678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168678) {
            ctx->pc = 0x168698u;
            goto label_168698;
        }
    }
    ctx->pc = 0x168680u;
    // 0x168680: 0x2ae10003  slti        $at, $s7, 0x3
    ctx->pc = 0x168680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x168684: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x168684u;
    {
        const bool branch_taken_0x168684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168684) {
            ctx->pc = 0x168698u;
            goto label_168698;
        }
    }
    ctx->pc = 0x16868Cu;
    // 0x16868c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x16868Cu;
    {
        const bool branch_taken_0x16868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16868Cu;
            // 0x168690: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16868c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168694u;
    // 0x168694: 0x0  nop
    ctx->pc = 0x168694u;
    // NOP
label_168698:
    // 0x168698: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16869c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x16869Cu;
    {
        const bool branch_taken_0x16869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16869c) {
            ctx->pc = 0x1689A8u;
            goto label_1689a8;
        }
    }
    ctx->pc = 0x1686A4u;
    // 0x1686a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1686a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1686a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1686A8u;
    {
        const bool branch_taken_0x1686a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686a8) {
            ctx->pc = 0x1686C8u;
            goto label_1686c8;
        }
    }
    ctx->pc = 0x1686B0u;
    // 0x1686b0: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1686B0u;
    SET_GPR_U32(ctx, 31, 0x1686B8u);
    ctx->pc = 0x1686B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686B0u;
            // 0x1686b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (runtime->hasFunction(0x18AC80u)) {
        auto targetFn = runtime->lookupFunction(0x18AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686B8u; }
        if (ctx->pc != 0x1686B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AC80_0x18ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686B8u; }
        if (ctx->pc != 0x1686B8u) { return; }
    }
    ctx->pc = 0x1686B8u;
label_1686b8:
    // 0x1686b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1686B8u;
    {
        const bool branch_taken_0x1686b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1686b8) {
            ctx->pc = 0x1686C8u;
            goto label_1686c8;
        }
    }
    ctx->pc = 0x1686C0u;
    // 0x1686c0: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x1686C0u;
    {
        const bool branch_taken_0x1686c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1686C0u;
            // 0x1686c4: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686c0) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x1686C8u;
label_1686c8:
    // 0x1686c8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1686c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1686cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1686ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1686d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1686D0u;
    {
        const bool branch_taken_0x1686d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686d0) {
            ctx->pc = 0x1686F0u;
            goto label_1686f0;
        }
    }
    ctx->pc = 0x1686D8u;
    // 0x1686d8: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1686D8u;
    SET_GPR_U32(ctx, 31, 0x1686E0u);
    ctx->pc = 0x1686DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686D8u;
            // 0x1686dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (runtime->hasFunction(0x18AC80u)) {
        auto targetFn = runtime->lookupFunction(0x18AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686E0u; }
        if (ctx->pc != 0x1686E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AC80_0x18ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686E0u; }
        if (ctx->pc != 0x1686E0u) { return; }
    }
    ctx->pc = 0x1686E0u;
label_1686e0:
    // 0x1686e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1686E0u;
    {
        const bool branch_taken_0x1686e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1686e0) {
            ctx->pc = 0x1686F0u;
            goto label_1686f0;
        }
    }
    ctx->pc = 0x1686E8u;
    // 0x1686e8: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x1686E8u;
    {
        const bool branch_taken_0x1686e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1686E8u;
            // 0x1686ec: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686e8) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x1686F0u;
label_1686f0:
    // 0x1686f0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1686f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1686f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1686f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1686F8u;
    {
        const bool branch_taken_0x1686f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686f8) {
            ctx->pc = 0x168728u;
            goto label_168728;
        }
    }
    ctx->pc = 0x168700u;
    // 0x168700: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168704: 0xc0629e8  jal         func_18A7A0
    ctx->pc = 0x168704u;
    SET_GPR_U32(ctx, 31, 0x16870Cu);
    ctx->pc = 0x168708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168704u;
            // 0x168708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A7A0u;
    if (runtime->hasFunction(0x18A7A0u)) {
        auto targetFn = runtime->lookupFunction(0x18A7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16870Cu; }
        if (ctx->pc != 0x16870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A7A0_0x18a7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16870Cu; }
        if (ctx->pc != 0x16870Cu) { return; }
    }
    ctx->pc = 0x16870Cu;
label_16870c:
    // 0x16870c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x16870cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168710: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x168710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x168714: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168714u;
    {
        const bool branch_taken_0x168714 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x168714) {
            ctx->pc = 0x168728u;
            goto label_168728;
        }
    }
    ctx->pc = 0x16871Cu;
    // 0x16871c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x16871Cu;
    {
        const bool branch_taken_0x16871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16871Cu;
            // 0x168720: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16871c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168724u;
    // 0x168724: 0x0  nop
    ctx->pc = 0x168724u;
    // NOP
label_168728:
    // 0x168728: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16872c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x168730: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168730u;
    {
        const bool branch_taken_0x168730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168730) {
            ctx->pc = 0x168760u;
            goto label_168760;
        }
    }
    ctx->pc = 0x168738u;
    // 0x168738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16873c: 0xc0629e8  jal         func_18A7A0
    ctx->pc = 0x16873Cu;
    SET_GPR_U32(ctx, 31, 0x168744u);
    ctx->pc = 0x168740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16873Cu;
            // 0x168740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A7A0u;
    if (runtime->hasFunction(0x18A7A0u)) {
        auto targetFn = runtime->lookupFunction(0x18A7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168744u; }
        if (ctx->pc != 0x168744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A7A0_0x18a7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168744u; }
        if (ctx->pc != 0x168744u) { return; }
    }
    ctx->pc = 0x168744u;
label_168744:
    // 0x168744: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x168744u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168748: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x168748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16874c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16874Cu;
    {
        const bool branch_taken_0x16874c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16874c) {
            ctx->pc = 0x168760u;
            goto label_168760;
        }
    }
    ctx->pc = 0x168754u;
    // 0x168754: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x168754u;
    {
        const bool branch_taken_0x168754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168754u;
            // 0x168758: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168754) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x16875Cu;
    // 0x16875c: 0x0  nop
    ctx->pc = 0x16875cu;
    // NOP
label_168760:
    // 0x168760: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168764: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x168764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x168768: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168768u;
    {
        const bool branch_taken_0x168768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168768) {
            ctx->pc = 0x168798u;
            goto label_168798;
        }
    }
    ctx->pc = 0x168770u;
    // 0x168770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168774: 0xc062a30  jal         func_18A8C0
    ctx->pc = 0x168774u;
    SET_GPR_U32(ctx, 31, 0x16877Cu);
    ctx->pc = 0x168778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168774u;
            // 0x168778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A8C0u;
    if (runtime->hasFunction(0x18A8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16877Cu; }
        if (ctx->pc != 0x16877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A8C0_0x18a8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16877Cu; }
        if (ctx->pc != 0x16877Cu) { return; }
    }
    ctx->pc = 0x16877Cu;
label_16877c:
    // 0x16877c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x16877cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168780: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x168780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x168784: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168784u;
    {
        const bool branch_taken_0x168784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x168784) {
            ctx->pc = 0x168798u;
            goto label_168798;
        }
    }
    ctx->pc = 0x16878Cu;
    // 0x16878c: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x16878Cu;
    {
        const bool branch_taken_0x16878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16878Cu;
            // 0x168790: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16878c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168794u;
    // 0x168794: 0x0  nop
    ctx->pc = 0x168794u;
    // NOP
label_168798:
    // 0x168798: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16879c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1687a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1687A0u;
    {
        const bool branch_taken_0x1687a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1687a0) {
            ctx->pc = 0x1687D0u;
            goto label_1687d0;
        }
    }
    ctx->pc = 0x1687A8u;
    // 0x1687a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1687a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687ac: 0xc062a30  jal         func_18A8C0
    ctx->pc = 0x1687ACu;
    SET_GPR_U32(ctx, 31, 0x1687B4u);
    ctx->pc = 0x1687B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687ACu;
            // 0x1687b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A8C0u;
    if (runtime->hasFunction(0x18A8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687B4u; }
        if (ctx->pc != 0x1687B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A8C0_0x18a8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687B4u; }
        if (ctx->pc != 0x1687B4u) { return; }
    }
    ctx->pc = 0x1687B4u;
label_1687b4:
    // 0x1687b4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1687b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1687b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1687bc: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1687BCu;
    {
        const bool branch_taken_0x1687bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1687bc) {
            ctx->pc = 0x1687D0u;
            goto label_1687d0;
        }
    }
    ctx->pc = 0x1687C4u;
    // 0x1687c4: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x1687C4u;
    {
        const bool branch_taken_0x1687c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687C4u;
            // 0x1687c8: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687c4) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x1687CCu;
    // 0x1687cc: 0x0  nop
    ctx->pc = 0x1687ccu;
    // NOP
label_1687d0:
    // 0x1687d0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1687d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1687d4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1687d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1687d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1687D8u;
    {
        const bool branch_taken_0x1687d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1687d8) {
            ctx->pc = 0x168808u;
            goto label_168808;
        }
    }
    ctx->pc = 0x1687E0u;
    // 0x1687e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1687e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e4: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x1687E4u;
    SET_GPR_U32(ctx, 31, 0x1687ECu);
    ctx->pc = 0x1687E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687E4u;
            // 0x1687e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (runtime->hasFunction(0x18A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687ECu; }
        if (ctx->pc != 0x1687ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A9F0_0x18a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687ECu; }
        if (ctx->pc != 0x1687ECu) { return; }
    }
    ctx->pc = 0x1687ECu;
label_1687ec:
    // 0x1687ec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1687ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1687f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1687f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1687f4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1687F4u;
    {
        const bool branch_taken_0x1687f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1687f4) {
            ctx->pc = 0x168808u;
            goto label_168808;
        }
    }
    ctx->pc = 0x1687FCu;
    // 0x1687fc: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1687FCu;
    {
        const bool branch_taken_0x1687fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687FCu;
            // 0x168800: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687fc) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168804u;
    // 0x168804: 0x0  nop
    ctx->pc = 0x168804u;
    // NOP
label_168808:
    // 0x168808: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16880c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x16880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x168810: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168810u;
    {
        const bool branch_taken_0x168810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168810) {
            ctx->pc = 0x168840u;
            goto label_168840;
        }
    }
    ctx->pc = 0x168818u;
    // 0x168818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16881c: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x16881Cu;
    SET_GPR_U32(ctx, 31, 0x168824u);
    ctx->pc = 0x168820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16881Cu;
            // 0x168820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (runtime->hasFunction(0x18A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168824u; }
        if (ctx->pc != 0x168824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A9F0_0x18a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168824u; }
        if (ctx->pc != 0x168824u) { return; }
    }
    ctx->pc = 0x168824u;
label_168824:
    // 0x168824: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x168824u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168828: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x168828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16882c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16882Cu;
    {
        const bool branch_taken_0x16882c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16882c) {
            ctx->pc = 0x168840u;
            goto label_168840;
        }
    }
    ctx->pc = 0x168834u;
    // 0x168834: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x168834u;
    {
        const bool branch_taken_0x168834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168834u;
            // 0x168838: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168834) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x16883Cu;
    // 0x16883c: 0x0  nop
    ctx->pc = 0x16883cu;
    // NOP
label_168840:
    // 0x168840: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168844: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x168844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x168848: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168848u;
    {
        const bool branch_taken_0x168848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168848) {
            ctx->pc = 0x168878u;
            goto label_168878;
        }
    }
    ctx->pc = 0x168850u;
    // 0x168850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168854: 0xc062ad4  jal         func_18AB50
    ctx->pc = 0x168854u;
    SET_GPR_U32(ctx, 31, 0x16885Cu);
    ctx->pc = 0x168858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168854u;
            // 0x168858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AB50u;
    if (runtime->hasFunction(0x18AB50u)) {
        auto targetFn = runtime->lookupFunction(0x18AB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16885Cu; }
        if (ctx->pc != 0x16885Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AB50_0x18ab50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16885Cu; }
        if (ctx->pc != 0x16885Cu) { return; }
    }
    ctx->pc = 0x16885Cu;
label_16885c:
    // 0x16885c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x16885cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168860: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x168860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x168864: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168864u;
    {
        const bool branch_taken_0x168864 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x168864) {
            ctx->pc = 0x168878u;
            goto label_168878;
        }
    }
    ctx->pc = 0x16886Cu;
    // 0x16886c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x16886Cu;
    {
        const bool branch_taken_0x16886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16886Cu;
            // 0x168870: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16886c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168874u;
    // 0x168874: 0x0  nop
    ctx->pc = 0x168874u;
    // NOP
label_168878:
    // 0x168878: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16887c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x16887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x168880: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168880u;
    {
        const bool branch_taken_0x168880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168880) {
            ctx->pc = 0x1688B0u;
            goto label_1688b0;
        }
    }
    ctx->pc = 0x168888u;
    // 0x168888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16888c: 0xc062ad4  jal         func_18AB50
    ctx->pc = 0x16888Cu;
    SET_GPR_U32(ctx, 31, 0x168894u);
    ctx->pc = 0x168890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16888Cu;
            // 0x168890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AB50u;
    if (runtime->hasFunction(0x18AB50u)) {
        auto targetFn = runtime->lookupFunction(0x18AB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168894u; }
        if (ctx->pc != 0x168894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AB50_0x18ab50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168894u; }
        if (ctx->pc != 0x168894u) { return; }
    }
    ctx->pc = 0x168894u;
label_168894:
    // 0x168894: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x168894u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168898: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x168898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16889c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16889Cu;
    {
        const bool branch_taken_0x16889c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16889c) {
            ctx->pc = 0x1688B0u;
            goto label_1688b0;
        }
    }
    ctx->pc = 0x1688A4u;
    // 0x1688a4: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1688A4u;
    {
        const bool branch_taken_0x1688a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1688A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1688A4u;
            // 0x1688a8: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688a4) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x1688ACu;
    // 0x1688ac: 0x0  nop
    ctx->pc = 0x1688acu;
    // NOP
label_1688b0:
    // 0x1688b0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1688b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1688b4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1688b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1688b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1688B8u;
    {
        const bool branch_taken_0x1688b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688b8) {
            ctx->pc = 0x1688E0u;
            goto label_1688e0;
        }
    }
    ctx->pc = 0x1688C0u;
    // 0x1688c0: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x1688c0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1688c4: 0xc05a358  jal         func_168D60
    ctx->pc = 0x1688C4u;
    SET_GPR_U32(ctx, 31, 0x1688CCu);
    ctx->pc = 0x1688C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688C4u;
            // 0x1688c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168D60u;
    if (runtime->hasFunction(0x168D60u)) {
        auto targetFn = runtime->lookupFunction(0x168D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688CCu; }
        if (ctx->pc != 0x1688CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D60_0x168d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688CCu; }
        if (ctx->pc != 0x1688CCu) { return; }
    }
    ctx->pc = 0x1688CCu;
label_1688cc:
    // 0x1688cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1688ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1688d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1688D0u;
    {
        const bool branch_taken_0x1688d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688d0) {
            ctx->pc = 0x1688E0u;
            goto label_1688e0;
        }
    }
    ctx->pc = 0x1688D8u;
    // 0x1688d8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x1688D8u;
    {
        const bool branch_taken_0x1688d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1688DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1688D8u;
            // 0x1688dc: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688d8) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x1688E0u;
label_1688e0:
    // 0x1688e0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1688e4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1688e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1688e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1688E8u;
    {
        const bool branch_taken_0x1688e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688e8) {
            ctx->pc = 0x168918u;
            goto label_168918;
        }
    }
    ctx->pc = 0x1688F0u;
    // 0x1688f0: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x1688f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1688f4: 0xc05a358  jal         func_168D60
    ctx->pc = 0x1688F4u;
    SET_GPR_U32(ctx, 31, 0x1688FCu);
    ctx->pc = 0x1688F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688F4u;
            // 0x1688f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168D60u;
    if (runtime->hasFunction(0x168D60u)) {
        auto targetFn = runtime->lookupFunction(0x168D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688FCu; }
        if (ctx->pc != 0x1688FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D60_0x168d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688FCu; }
        if (ctx->pc != 0x1688FCu) { return; }
    }
    ctx->pc = 0x1688FCu;
label_1688fc:
    // 0x1688fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1688fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168904: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168904u;
    {
        const bool branch_taken_0x168904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168904) {
            ctx->pc = 0x168918u;
            goto label_168918;
        }
    }
    ctx->pc = 0x16890Cu;
    // 0x16890c: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x16890Cu;
    {
        const bool branch_taken_0x16890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16890Cu;
            // 0x168910: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16890c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168914u;
    // 0x168914: 0x0  nop
    ctx->pc = 0x168914u;
    // NOP
label_168918:
    // 0x168918: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16891c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x16891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x168920: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168920u;
    {
        const bool branch_taken_0x168920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168920) {
            ctx->pc = 0x168948u;
            goto label_168948;
        }
    }
    ctx->pc = 0x168928u;
    // 0x168928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16892c: 0xc062b34  jal         func_18ACD0
    ctx->pc = 0x16892Cu;
    SET_GPR_U32(ctx, 31, 0x168934u);
    ctx->pc = 0x168930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16892Cu;
            // 0x168930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACD0u;
    if (runtime->hasFunction(0x18ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168934u; }
        if (ctx->pc != 0x168934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ACD0_0x18acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168934u; }
        if (ctx->pc != 0x168934u) { return; }
    }
    ctx->pc = 0x168934u;
label_168934:
    // 0x168934: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168934u;
    {
        const bool branch_taken_0x168934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168934) {
            ctx->pc = 0x168948u;
            goto label_168948;
        }
    }
    ctx->pc = 0x16893Cu;
    // 0x16893c: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x16893Cu;
    {
        const bool branch_taken_0x16893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16893Cu;
            // 0x168940: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16893c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168944u;
    // 0x168944: 0x0  nop
    ctx->pc = 0x168944u;
    // NOP
label_168948:
    // 0x168948: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16894c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x16894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x168950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168950u;
    {
        const bool branch_taken_0x168950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168950) {
            ctx->pc = 0x168978u;
            goto label_168978;
        }
    }
    ctx->pc = 0x168958u;
    // 0x168958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16895c: 0xc062b34  jal         func_18ACD0
    ctx->pc = 0x16895Cu;
    SET_GPR_U32(ctx, 31, 0x168964u);
    ctx->pc = 0x168960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16895Cu;
            // 0x168960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACD0u;
    if (runtime->hasFunction(0x18ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168964u; }
        if (ctx->pc != 0x168964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ACD0_0x18acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168964u; }
        if (ctx->pc != 0x168964u) { return; }
    }
    ctx->pc = 0x168964u;
label_168964:
    // 0x168964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168964u;
    {
        const bool branch_taken_0x168964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168964) {
            ctx->pc = 0x168978u;
            goto label_168978;
        }
    }
    ctx->pc = 0x16896Cu;
    // 0x16896c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x16896Cu;
    {
        const bool branch_taken_0x16896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16896Cu;
            // 0x168970: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16896c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168974u;
    // 0x168974: 0x0  nop
    ctx->pc = 0x168974u;
    // NOP
label_168978:
    // 0x168978: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16897c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x16897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x168980: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168980u;
    {
        const bool branch_taken_0x168980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168980) {
            ctx->pc = 0x1689A8u;
            goto label_1689a8;
        }
    }
    ctx->pc = 0x168988u;
    // 0x168988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16898c: 0xc062b34  jal         func_18ACD0
    ctx->pc = 0x16898Cu;
    SET_GPR_U32(ctx, 31, 0x168994u);
    ctx->pc = 0x168990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16898Cu;
            // 0x168990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACD0u;
    if (runtime->hasFunction(0x18ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168994u; }
        if (ctx->pc != 0x168994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ACD0_0x18acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168994u; }
        if (ctx->pc != 0x168994u) { return; }
    }
    ctx->pc = 0x168994u;
label_168994:
    // 0x168994: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168994u;
    {
        const bool branch_taken_0x168994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168994) {
            ctx->pc = 0x1689A8u;
            goto label_1689a8;
        }
    }
    ctx->pc = 0x16899Cu;
    // 0x16899c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x16899Cu;
    {
        const bool branch_taken_0x16899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16899Cu;
            // 0x1689a0: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16899c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x1689A4u;
    // 0x1689a4: 0x0  nop
    ctx->pc = 0x1689a4u;
    // NOP
label_1689a8:
    // 0x1689a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1689a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689ac: 0xc063308  jal         func_18CC20
    ctx->pc = 0x1689ACu;
    SET_GPR_U32(ctx, 31, 0x1689B4u);
    ctx->pc = 0x1689B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689ACu;
            // 0x1689b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (runtime->hasFunction(0x18CC20u)) {
        auto targetFn = runtime->lookupFunction(0x18CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689B4u; }
        if (ctx->pc != 0x1689B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CC20_0x18cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689B4u; }
        if (ctx->pc != 0x1689B4u) { return; }
    }
    ctx->pc = 0x1689B4u;
label_1689b4:
    // 0x1689b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1689b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1689b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1689b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1689bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1689c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1689c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1689c4: 0xc063308  jal         func_18CC20
    ctx->pc = 0x1689C4u;
    SET_GPR_U32(ctx, 31, 0x1689CCu);
    ctx->pc = 0x1689C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689C4u;
            // 0x1689c8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (runtime->hasFunction(0x18CC20u)) {
        auto targetFn = runtime->lookupFunction(0x18CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689CCu; }
        if (ctx->pc != 0x1689CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CC20_0x18cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689CCu; }
        if (ctx->pc != 0x1689CCu) { return; }
    }
    ctx->pc = 0x1689CCu;
label_1689cc:
    // 0x1689cc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1689ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1689d0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1689d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1689d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1689d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1689d8: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x1689d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1689dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1689dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1689e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1689e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1689e4: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1689E4u;
    {
        const bool branch_taken_0x1689e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1689E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1689E4u;
            // 0x1689e8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689e4) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x1689ECu;
    // 0x1689ec: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x1689ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1689f0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1689f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1689f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1689f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1689f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1689f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1689fc: 0x5440009d  bnel        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x1689FCu;
    {
        const bool branch_taken_0x1689fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1689fc) {
            ctx->pc = 0x168A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1689FCu;
            // 0x168a00: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168C74u;
            goto label_168c74;
        }
    }
    ctx->pc = 0x168A04u;
    // 0x168a04: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x168a04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x168a08: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x168a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x168a0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168a10: 0x14620097  bne         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x168A10u;
    {
        const bool branch_taken_0x168a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168a10) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168A18u;
    // 0x168a18: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x168A18u;
    {
        const bool branch_taken_0x168a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a18) {
            ctx->pc = 0x168A68u;
            goto label_168a68;
        }
    }
    ctx->pc = 0x168A20u;
    // 0x168a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168a28: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x168A28u;
    SET_GPR_U32(ctx, 31, 0x168A30u);
    ctx->pc = 0x168A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A28u;
            // 0x168a2c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A30u; }
        if (ctx->pc != 0x168A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A30u; }
        if (ctx->pc != 0x168A30u) { return; }
    }
    ctx->pc = 0x168A30u;
label_168a30:
    // 0x168a30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x168a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168a34: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x168a34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x168a38: 0x30443f00  andi        $a0, $v0, 0x3F00
    ctx->pc = 0x168a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x168a3c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x168a3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x168a40: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x168a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x168a44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x168a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168a48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x168a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168a4c: 0x401027  not         $v0, $v0
    ctx->pc = 0x168a4cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x168a50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x168a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x168a54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168A54u;
    {
        const bool branch_taken_0x168a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a54) {
            ctx->pc = 0x168A68u;
            goto label_168a68;
        }
    }
    ctx->pc = 0x168A5Cu;
    // 0x168a5c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x168A5Cu;
    {
        const bool branch_taken_0x168a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A5Cu;
            // 0x168a60: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a5c) {
            ctx->pc = 0x168C78u;
            goto label_168c78;
        }
    }
    ctx->pc = 0x168A64u;
    // 0x168a64: 0x0  nop
    ctx->pc = 0x168a64u;
    // NOP
label_168a68:
    // 0x168a68: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168a6c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x168a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x168a70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168a74: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168A74u;
    {
        const bool branch_taken_0x168a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a74) {
            ctx->pc = 0x168A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168A74u;
            // 0x168a78: 0x96650000  lhu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168A84u;
            goto label_168a84;
        }
    }
    ctx->pc = 0x168A7Cu;
    // 0x168a7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168A7Cu;
    {
        const bool branch_taken_0x168a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A7Cu;
            // 0x168a80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a7c) {
            ctx->pc = 0x168A90u;
            goto label_168a90;
        }
    }
    ctx->pc = 0x168A84u;
label_168a84:
    // 0x168a84: 0xc05a11c  jal         func_168470
    ctx->pc = 0x168A84u;
    SET_GPR_U32(ctx, 31, 0x168A8Cu);
    ctx->pc = 0x168A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A84u;
            // 0x168a88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168470u;
    if (runtime->hasFunction(0x168470u)) {
        auto targetFn = runtime->lookupFunction(0x168470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A8Cu; }
        if (ctx->pc != 0x168A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168470_0x168470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A8Cu; }
        if (ctx->pc != 0x168A8Cu) { return; }
    }
    ctx->pc = 0x168A8Cu;
label_168a8c:
    // 0x168a8c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x168a8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_168a90:
    // 0x168a90: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x168A90u;
    {
        const bool branch_taken_0x168a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a90) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168A98u;
    // 0x168a98: 0x82650008  lb          $a1, 0x8($s3)
    ctx->pc = 0x168a98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168a9c: 0xc05c604  jal         func_171810
    ctx->pc = 0x168A9Cu;
    SET_GPR_U32(ctx, 31, 0x168AA4u);
    ctx->pc = 0x168AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A9Cu;
            // 0x168aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (runtime->hasFunction(0x171810u)) {
        auto targetFn = runtime->lookupFunction(0x171810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AA4u; }
        if (ctx->pc != 0x168AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171810_0x171810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AA4u; }
        if (ctx->pc != 0x168AA4u) { return; }
    }
    ctx->pc = 0x168AA4u;
label_168aa4:
    // 0x168aa4: 0x8663000c  lh          $v1, 0xC($s3)
    ctx->pc = 0x168aa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x168aa8: 0x86a204da  lh          $v0, 0x4DA($s5)
    ctx->pc = 0x168aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1242)));
    // 0x168aac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x168aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168ab0: 0xa6a204da  sh          $v0, 0x4DA($s5)
    ctx->pc = 0x168ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1242), (uint16_t)GPR_U32(ctx, 2));
    // 0x168ab4: 0x86630010  lh          $v1, 0x10($s3)
    ctx->pc = 0x168ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168ab8: 0x86a204e0  lh          $v0, 0x4E0($s5)
    ctx->pc = 0x168ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1248)));
    // 0x168abc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x168abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168ac0: 0xa6a204e0  sh          $v0, 0x4E0($s5)
    ctx->pc = 0x168ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1248), (uint16_t)GPR_U32(ctx, 2));
    // 0x168ac4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168ac8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x168ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x168acc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168ACCu;
    {
        const bool branch_taken_0x168acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168acc) {
            ctx->pc = 0x168AF0u;
            goto label_168af0;
        }
    }
    ctx->pc = 0x168AD4u;
    // 0x168ad4: 0x8ea500dc  lw          $a1, 0xDC($s5)
    ctx->pc = 0x168ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x168ad8: 0x96a600ea  lhu         $a2, 0xEA($s5)
    ctx->pc = 0x168ad8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x168adc: 0xc063900  jal         func_18E400
    ctx->pc = 0x168ADCu;
    SET_GPR_U32(ctx, 31, 0x168AE4u);
    ctx->pc = 0x168AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168ADCu;
            // 0x168ae0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (runtime->hasFunction(0x18E400u)) {
        auto targetFn = runtime->lookupFunction(0x18E400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AE4u; }
        if (ctx->pc != 0x168AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E400_0x18e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AE4u; }
        if (ctx->pc != 0x168AE4u) { return; }
    }
    ctx->pc = 0x168AE4u;
label_168ae4:
    // 0x168ae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x168ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168ae8: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x168ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
    // 0x168aec: 0x0  nop
    ctx->pc = 0x168aecu;
    // NOP
label_168af0:
    // 0x168af0: 0x87a200d0  lh          $v0, 0xD0($sp)
    ctx->pc = 0x168af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x168af4: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x168af4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x168af8: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x168af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x168afc: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x168afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168b00: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x168b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b04: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x168b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x168b08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x168b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168b0c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x168b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x168b10: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x168B10u;
    {
        const bool branch_taken_0x168b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b10) {
            ctx->pc = 0x168B50u;
            goto label_168b50;
        }
    }
    ctx->pc = 0x168B18u;
    // 0x168b18: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x168b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x168b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168B1Cu;
    {
        const bool branch_taken_0x168b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b1c) {
            ctx->pc = 0x168B30u;
            goto label_168b30;
        }
    }
    ctx->pc = 0x168B24u;
    // 0x168b24: 0x8ea20498  lw          $v0, 0x498($s5)
    ctx->pc = 0x168b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1176)));
    // 0x168b28: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x168b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x168b2c: 0xaea20498  sw          $v0, 0x498($s5)
    ctx->pc = 0x168b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1176), GPR_U32(ctx, 2));
label_168b30:
    // 0x168b30: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x168b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168b34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x168b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x168b38: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x168B38u;
    {
        const bool branch_taken_0x168b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b38) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168B40u;
    // 0x168b40: 0x8ea20498  lw          $v0, 0x498($s5)
    ctx->pc = 0x168b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1176)));
    // 0x168b44: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x168b48: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x168B48u;
    {
        const bool branch_taken_0x168b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B48u;
            // 0x168b4c: 0xaea20498  sw          $v0, 0x498($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b48) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168B50u;
label_168b50:
    // 0x168b50: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x168b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x168b54: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168B54u;
    {
        const bool branch_taken_0x168b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b54) {
            ctx->pc = 0x168B88u;
            goto label_168b88;
        }
    }
    ctx->pc = 0x168B5Cu;
    // 0x168b5c: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168b5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168b60: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168b64: 0xa6a2039a  sh          $v0, 0x39A($s5)
    ctx->pc = 0x168b64u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 922), (uint16_t)GPR_U32(ctx, 2));
    // 0x168b68: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168b6c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168b70: 0xa6a2039c  sh          $v0, 0x39C($s5)
    ctx->pc = 0x168b70u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 924), (uint16_t)GPR_U32(ctx, 2));
    // 0x168b74: 0x8ea204a0  lw          $v0, 0x4A0($s5)
    ctx->pc = 0x168b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1184)));
    // 0x168b78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x168b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x168b7c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x168B7Cu;
    {
        const bool branch_taken_0x168b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B7Cu;
            // 0x168b80: 0xaea204a0  sw          $v0, 0x4A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b7c) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168B84u;
    // 0x168b84: 0x0  nop
    ctx->pc = 0x168b84u;
    // NOP
label_168b88:
    // 0x168b88: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x168b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x168b8c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168B8Cu;
    {
        const bool branch_taken_0x168b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b8c) {
            ctx->pc = 0x168BC0u;
            goto label_168bc0;
        }
    }
    ctx->pc = 0x168B94u;
    // 0x168b94: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168b94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168b98: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168b9c: 0xa6a2039a  sh          $v0, 0x39A($s5)
    ctx->pc = 0x168b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 922), (uint16_t)GPR_U32(ctx, 2));
    // 0x168ba0: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168ba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168ba4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168ba8: 0xa6a2039c  sh          $v0, 0x39C($s5)
    ctx->pc = 0x168ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 924), (uint16_t)GPR_U32(ctx, 2));
    // 0x168bac: 0x8ea204a0  lw          $v0, 0x4A0($s5)
    ctx->pc = 0x168bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1184)));
    // 0x168bb0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x168bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x168bb4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x168BB4u;
    {
        const bool branch_taken_0x168bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BB4u;
            // 0x168bb8: 0xaea204a0  sw          $v0, 0x4A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bb4) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168BBCu;
    // 0x168bbc: 0x0  nop
    ctx->pc = 0x168bbcu;
    // NOP
label_168bc0:
    // 0x168bc0: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x168bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x168bc4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168BC4u;
    {
        const bool branch_taken_0x168bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bc4) {
            ctx->pc = 0x168BF8u;
            goto label_168bf8;
        }
    }
    ctx->pc = 0x168BCCu;
    // 0x168bcc: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168bd0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168bd4: 0xa6a2039a  sh          $v0, 0x39A($s5)
    ctx->pc = 0x168bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 922), (uint16_t)GPR_U32(ctx, 2));
    // 0x168bd8: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168bd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168bdc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168be0: 0xa6a2039c  sh          $v0, 0x39C($s5)
    ctx->pc = 0x168be0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 924), (uint16_t)GPR_U32(ctx, 2));
    // 0x168be4: 0x8ea204a0  lw          $v0, 0x4A0($s5)
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1184)));
    // 0x168be8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x168be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x168bec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x168BECu;
    {
        const bool branch_taken_0x168bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BECu;
            // 0x168bf0: 0xaea204a0  sw          $v0, 0x4A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bec) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168BF4u;
    // 0x168bf4: 0x0  nop
    ctx->pc = 0x168bf4u;
    // NOP
label_168bf8:
    // 0x168bf8: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x168bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x168bfc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168BFCu;
    {
        const bool branch_taken_0x168bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bfc) {
            ctx->pc = 0x168C30u;
            goto label_168c30;
        }
    }
    ctx->pc = 0x168C04u;
    // 0x168c04: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168c04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168c08: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168c0c: 0xa6a2039a  sh          $v0, 0x39A($s5)
    ctx->pc = 0x168c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 922), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c10: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168c14: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168c18: 0xa6a2039c  sh          $v0, 0x39C($s5)
    ctx->pc = 0x168c18u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 924), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c1c: 0x8ea204a0  lw          $v0, 0x4A0($s5)
    ctx->pc = 0x168c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1184)));
    // 0x168c20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x168c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x168c24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x168C24u;
    {
        const bool branch_taken_0x168c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C24u;
            // 0x168c28: 0xaea204a0  sw          $v0, 0x4A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c24) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168C2Cu;
    // 0x168c2c: 0x0  nop
    ctx->pc = 0x168c2cu;
    // NOP
label_168c30:
    // 0x168c30: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x168c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x168c34: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168C34u;
    {
        const bool branch_taken_0x168c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c34) {
            ctx->pc = 0x168C68u;
            goto label_168c68;
        }
    }
    ctx->pc = 0x168C3Cu;
    // 0x168c3c: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168c40: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168c44: 0xa6a2039a  sh          $v0, 0x39A($s5)
    ctx->pc = 0x168c44u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 922), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c48: 0x82a2057d  lb          $v0, 0x57D($s5)
    ctx->pc = 0x168c48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1405)));
    // 0x168c4c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x168c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168c50: 0xa6a2039c  sh          $v0, 0x39C($s5)
    ctx->pc = 0x168c50u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 924), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c54: 0x8ea204a0  lw          $v0, 0x4A0($s5)
    ctx->pc = 0x168c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1184)));
    // 0x168c58: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x168c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x168c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168C5Cu;
    {
        const bool branch_taken_0x168c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C5Cu;
            // 0x168c60: 0xaea204a0  sw          $v0, 0x4A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c5c) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168C64u;
    // 0x168c64: 0x0  nop
    ctx->pc = 0x168c64u;
    // NOP
label_168c68:
    // 0x168c68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x168C68u;
    {
        const bool branch_taken_0x168c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C68u;
            // 0x168c6c: 0xa2b20507  sb          $s2, 0x507($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1287), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c68) {
            ctx->pc = 0x168CACu;
            goto label_168cac;
        }
    }
    ctx->pc = 0x168C70u;
label_168c70:
    // 0x168c70: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x168c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_168c74:
    // 0x168c74: 0x0  nop
    ctx->pc = 0x168c74u;
    // NOP
label_168c78:
    // 0x168c78: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x168c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x168c7c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x168c7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168c80: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x168c84: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x168c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168c88: 0x1440fe67  bnez        $v0, . + 4 + (-0x199 << 2)
    ctx->pc = 0x168C88u;
    {
        const bool branch_taken_0x168c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168c88) {
            ctx->pc = 0x168628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168628;
        }
    }
    ctx->pc = 0x168C90u;
label_168c90:
    // 0x168c90: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x168c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x168c94: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x168c94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168c98: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x168c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168c9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x168c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168ca0: 0x5440fe3e  bnel        $v0, $zero, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x168CA0u;
    {
        const bool branch_taken_0x168ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168ca0) {
            ctx->pc = 0x168CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168CA0u;
            // 0x168ca4: 0x3297ffff  andi        $s7, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16859Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16859c;
        }
    }
    ctx->pc = 0x168CA8u;
label_168ca8:
    // 0x168ca8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x168ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_168cac:
    // 0x168cac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x168cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168cb0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x168cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168cb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x168cb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168cb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x168cb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168cbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x168cbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168cc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168cc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x168CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168CD4u;
            // 0x168cd8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168CDCu;
    // 0x168cdc: 0x0  nop
    ctx->pc = 0x168cdcu;
    // NOP
    ctx->pc = 0x168ce0u;
}
