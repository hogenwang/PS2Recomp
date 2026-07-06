#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8730
// Address: 0x2e8730 - 0x2e8a28
void sub_002E8730_0x2e8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8730_0x2e8730");
#endif

    switch (ctx->pc) {
        case 0x2e874cu: goto label_2e874c;
        case 0x2e875cu: goto label_2e875c;
        case 0x2e8764u: goto label_2e8764;
        case 0x2e8774u: goto label_2e8774;
        case 0x2e8798u: goto label_2e8798;
        case 0x2e87a4u: goto label_2e87a4;
        case 0x2e87ecu: goto label_2e87ec;
        case 0x2e8804u: goto label_2e8804;
        case 0x2e881cu: goto label_2e881c;
        case 0x2e882cu: goto label_2e882c;
        case 0x2e8848u: goto label_2e8848;
        case 0x2e8860u: goto label_2e8860;
        case 0x2e8878u: goto label_2e8878;
        case 0x2e8890u: goto label_2e8890;
        case 0x2e88a4u: goto label_2e88a4;
        case 0x2e88c8u: goto label_2e88c8;
        case 0x2e88e0u: goto label_2e88e0;
        case 0x2e88f0u: goto label_2e88f0;
        case 0x2e8900u: goto label_2e8900;
        case 0x2e8908u: goto label_2e8908;
        case 0x2e8918u: goto label_2e8918;
        case 0x2e8930u: goto label_2e8930;
        case 0x2e8958u: goto label_2e8958;
        case 0x2e897cu: goto label_2e897c;
        case 0x2e898cu: goto label_2e898c;
        case 0x2e899cu: goto label_2e899c;
        case 0x2e89b4u: goto label_2e89b4;
        case 0x2e89ccu: goto label_2e89cc;
        case 0x2e89e0u: goto label_2e89e0;
        case 0x2e89f0u: goto label_2e89f0;
        default: break;
    }

    ctx->pc = 0x2e8730u;

label_2e8730:
    // 0x2e8730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8738: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e873c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8740: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e8744: 0xc098154  jal         func_260550
    ctx->pc = 0x2E8744u;
    SET_GPR_U32(ctx, 31, 0x2E874Cu);
    ctx->pc = 0x2E8748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8744u;
            // 0x2e8748: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260550u;
    if (runtime->hasFunction(0x260550u)) {
        auto targetFn = runtime->lookupFunction(0x260550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E874Cu; }
        if (ctx->pc != 0x2E874Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260550_0x260550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E874Cu; }
        if (ctx->pc != 0x2E874Cu) { return; }
    }
    ctx->pc = 0x2E874Cu;
label_2e874c:
    // 0x2e874c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e874cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8754: 0xc0ba1ca  jal         func_2E8728
    ctx->pc = 0x2E8754u;
    SET_GPR_U32(ctx, 31, 0x2E875Cu);
    ctx->pc = 0x2E8758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8754u;
            // 0x2e8758: 0x26320100  addiu       $s2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8728u;
    if (runtime->hasFunction(0x2E8728u)) {
        auto targetFn = runtime->lookupFunction(0x2E8728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E875Cu; }
        if (ctx->pc != 0x2E875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8728_0x2e8728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E875Cu; }
        if (ctx->pc != 0x2E875Cu) { return; }
    }
    ctx->pc = 0x2E875Cu;
label_2e875c:
    // 0x2e875c: 0xc0ba1ca  jal         func_2E8728
    ctx->pc = 0x2E875Cu;
    SET_GPR_U32(ctx, 31, 0x2E8764u);
    ctx->pc = 0x2E8760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E875Cu;
            // 0x2e8760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8728u;
    if (runtime->hasFunction(0x2E8728u)) {
        auto targetFn = runtime->lookupFunction(0x2E8728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8764u; }
        if (ctx->pc != 0x2E8764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8728_0x2e8728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8764u; }
        if (ctx->pc != 0x2E8764u) { return; }
    }
    ctx->pc = 0x2E8764u;
label_2e8764:
    // 0x2e8764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e8768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e876c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2E876Cu;
    SET_GPR_U32(ctx, 31, 0x2E8774u);
    ctx->pc = 0x2E8770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E876Cu;
            // 0x2e8770: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8774u; }
        if (ctx->pc != 0x2E8774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8774u; }
        if (ctx->pc != 0x2E8774u) { return; }
    }
    ctx->pc = 0x2E8774u;
label_2e8774:
    // 0x2e8774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e877c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e877cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8780: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2e8780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e8784: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e8784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8788: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e878c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e878cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8790: 0x804a966  j           func_12A598
    ctx->pc = 0x2E8790u;
    ctx->pc = 0x2E8794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8790u;
            // 0x2e8794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012A598_0x12a598(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2E8798u;
label_2e8798:
    // 0x2e8798: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e8798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e879c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2e879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2e87a0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2e87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2e87a4:
    // 0x2e87a4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2e87a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e87a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e87ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e87acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87b0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2e87b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2e87b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e87b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87b8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2e87b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2e87bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e87bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87c0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2e87c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2e87c4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2e87c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2e87c8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2e87c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2e87cc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2e87ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2e87d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E87D0u;
    {
        const bool branch_taken_0x2e87d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87D0u;
            // 0x2e87d4: 0x8c920014  lw          $s2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87d0) {
            ctx->pc = 0x2E8804u;
            goto label_2e8804;
        }
    }
    ctx->pc = 0x2E87D8u;
    // 0x2e87d8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E87D8u;
    {
        const bool branch_taken_0x2e87d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87D8u;
            // 0x2e87dc: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87d8) {
            ctx->pc = 0x2E87ECu;
            goto label_2e87ec;
        }
    }
    ctx->pc = 0x2E87E0u;
    // 0x2e87e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e87e4: 0xc0ba1cc  jal         func_2E8730
    ctx->pc = 0x2E87E4u;
    SET_GPR_U32(ctx, 31, 0x2E87ECu);
    ctx->pc = 0x2E87E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87E4u;
            // 0x2e87e8: 0x90440d7d  lbu         $a0, 0xD7D($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3453)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8730u;
    goto label_2e8730;
    ctx->pc = 0x2E87ECu;
label_2e87ec:
    // 0x2e87ec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e87ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e87f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e87f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e87f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e87f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87fc: 0xc0ba1cc  jal         func_2E8730
    ctx->pc = 0x2E87FCu;
    SET_GPR_U32(ctx, 31, 0x2E8804u);
    ctx->pc = 0x2E8800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87FCu;
            // 0x2e8800: 0x90440d7d  lbu         $a0, 0xD7D($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3453)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8730u;
    goto label_2e8730;
    ctx->pc = 0x2E8804u;
label_2e8804:
    // 0x2e8804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8808: 0x1622007c  bne         $s1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2E8808u;
    {
        const bool branch_taken_0x2e8808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8808u;
            // 0x2e880c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8808) {
            ctx->pc = 0x2E89FCu;
            goto label_2e89fc;
        }
    }
    ctx->pc = 0x2E8810u;
    // 0x2e8810: 0x26530408  addiu       $s3, $s2, 0x408
    ctx->pc = 0x2e8810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1032));
    // 0x2e8814: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2E8814u;
    SET_GPR_U32(ctx, 31, 0x2E881Cu);
    ctx->pc = 0x2E8818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8814u;
            // 0x2e8818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E881Cu; }
        if (ctx->pc != 0x2E881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E881Cu; }
        if (ctx->pc != 0x2E881Cu) { return; }
    }
    ctx->pc = 0x2E881Cu;
label_2e881c:
    // 0x2e881c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E881Cu;
    {
        const bool branch_taken_0x2e881c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E8820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E881Cu;
            // 0x2e8820: 0x26500508  addiu       $s0, $s2, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e881c) {
            ctx->pc = 0x2E8860u;
            goto label_2e8860;
        }
    }
    ctx->pc = 0x2E8824u;
    // 0x2e8824: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2E8824u;
    SET_GPR_U32(ctx, 31, 0x2E882Cu);
    ctx->pc = 0x2E8828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8824u;
            // 0x2e8828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E882Cu; }
        if (ctx->pc != 0x2E882Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E882Cu; }
        if (ctx->pc != 0x2E882Cu) { return; }
    }
    ctx->pc = 0x2E882Cu;
label_2e882c:
    // 0x2e882c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E882Cu;
    {
        const bool branch_taken_0x2e882c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E8830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E882Cu;
            // 0x2e8830: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e882c) {
            ctx->pc = 0x2E8848u;
            goto label_2e8848;
        }
    }
    ctx->pc = 0x2E8834u;
    // 0x2e8834: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e8834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8838: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e8838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e883c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8840: 0xc0ba1cc  jal         func_2E8730
    ctx->pc = 0x2E8840u;
    SET_GPR_U32(ctx, 31, 0x2E8848u);
    ctx->pc = 0x2E8844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8840u;
            // 0x2e8844: 0x90440d7d  lbu         $a0, 0xD7D($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3453)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8730u;
    goto label_2e8730;
    ctx->pc = 0x2E8848u;
label_2e8848:
    // 0x2e8848: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e8848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e884c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e884cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8850: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e8850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e8854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e8854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8858: 0xc0ba1cc  jal         func_2E8730
    ctx->pc = 0x2E8858u;
    SET_GPR_U32(ctx, 31, 0x2E8860u);
    ctx->pc = 0x2E885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8858u;
            // 0x2e885c: 0x90440d7d  lbu         $a0, 0xD7D($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3453)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8730u;
    goto label_2e8730;
    ctx->pc = 0x2E8860u;
label_2e8860:
    // 0x2e8860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8864: 0x16220065  bne         $s1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E8864u;
    {
        const bool branch_taken_0x2e8864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8864u;
            // 0x2e8868: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8864) {
            ctx->pc = 0x2E89FCu;
            goto label_2e89fc;
        }
    }
    ctx->pc = 0x2E886Cu;
    // 0x2e886c: 0x26500608  addiu       $s0, $s2, 0x608
    ctx->pc = 0x2e886cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1544));
    // 0x2e8870: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2E8870u;
    SET_GPR_U32(ctx, 31, 0x2E8878u);
    ctx->pc = 0x2E8874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8870u;
            // 0x2e8874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8878u; }
        if (ctx->pc != 0x2E8878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8878u; }
        if (ctx->pc != 0x2E8878u) { return; }
    }
    ctx->pc = 0x2E8878u;
label_2e8878:
    // 0x2e8878: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E8878u;
    {
        const bool branch_taken_0x2e8878 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8878u;
            // 0x2e887c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8878) {
            ctx->pc = 0x2E88B4u;
            goto label_2e88b4;
        }
    }
    ctx->pc = 0x2E8880u;
    // 0x2e8880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8884: 0x24a5fbc0  addiu       $a1, $a1, -0x440
    ctx->pc = 0x2e8884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966208));
    // 0x2e8888: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E8888u;
    SET_GPR_U32(ctx, 31, 0x2E8890u);
    ctx->pc = 0x2E888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8888u;
            // 0x2e888c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8890u; }
        if (ctx->pc != 0x2E8890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8890u; }
        if (ctx->pc != 0x2E8890u) { return; }
    }
    ctx->pc = 0x2E8890u;
label_2e8890:
    // 0x2e8890: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8890u;
    {
        const bool branch_taken_0x2e8890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8890u;
            // 0x2e8894: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8890) {
            ctx->pc = 0x2E88B4u;
            goto label_2e88b4;
        }
    }
    ctx->pc = 0x2E8898u;
    // 0x2e8898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e889c: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2E889Cu;
    SET_GPR_U32(ctx, 31, 0x2E88A4u);
    ctx->pc = 0x2E88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E889Cu;
            // 0x2e88a0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88A4u; }
        if (ctx->pc != 0x2E88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88A4u; }
        if (ctx->pc != 0x2E88A4u) { return; }
    }
    ctx->pc = 0x2E88A4u;
label_2e88a4:
    // 0x2e88a4: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E88A4u;
    {
        const bool branch_taken_0x2e88a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E88A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88A4u;
            // 0x2e88a8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88a4) {
            ctx->pc = 0x2E88E8u;
            goto label_2e88e8;
        }
    }
    ctx->pc = 0x2E88ACu;
    // 0x2e88ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E88ACu;
    {
        const bool branch_taken_0x2e88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88ACu;
            // 0x2e88b0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88ac) {
            ctx->pc = 0x2E88D8u;
            goto label_2e88d8;
        }
    }
    ctx->pc = 0x2E88B4u;
label_2e88b4:
    // 0x2e88b4: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E88B4u;
    {
        const bool branch_taken_0x2e88b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88B4u;
            // 0x2e88b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88b4) {
            ctx->pc = 0x2E8930u;
            goto label_2e8930;
        }
    }
    ctx->pc = 0x2E88BCu;
    // 0x2e88bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e88bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88c0: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2E88C0u;
    SET_GPR_U32(ctx, 31, 0x2E88C8u);
    ctx->pc = 0x2E88C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88C0u;
            // 0x2e88c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88C8u; }
        if (ctx->pc != 0x2E88C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88C8u; }
        if (ctx->pc != 0x2E88C8u) { return; }
    }
    ctx->pc = 0x2E88C8u;
label_2e88c8:
    // 0x2e88c8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E88C8u;
    {
        const bool branch_taken_0x2e88c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E88CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88C8u;
            // 0x2e88cc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88c8) {
            ctx->pc = 0x2E88E8u;
            goto label_2e88e8;
        }
    }
    ctx->pc = 0x2E88D0u;
    // 0x2e88d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e88d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e88d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e88d8:
    // 0x2e88d8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E88D8u;
    SET_GPR_U32(ctx, 31, 0x2E88E0u);
    ctx->pc = 0x2E88DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88D8u;
            // 0x2e88dc: 0x24a5fbc8  addiu       $a1, $a1, -0x438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88E0u; }
        if (ctx->pc != 0x2E88E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88E0u; }
        if (ctx->pc != 0x2E88E0u) { return; }
    }
    ctx->pc = 0x2E88E0u;
label_2e88e0:
    // 0x2e88e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E88E0u;
    {
        const bool branch_taken_0x2e88e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88E0u;
            // 0x2e88e4: 0x26510708  addiu       $s1, $s2, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88e0) {
            ctx->pc = 0x2E8934u;
            goto label_2e8934;
        }
    }
    ctx->pc = 0x2E88E8u;
label_2e88e8:
    // 0x2e88e8: 0xc0ba16e  jal         func_2E85B8
    ctx->pc = 0x2E88E8u;
    SET_GPR_U32(ctx, 31, 0x2E88F0u);
    ctx->pc = 0x2E88ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88E8u;
            // 0x2e88ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E85B8u;
    if (runtime->hasFunction(0x2E85B8u)) {
        auto targetFn = runtime->lookupFunction(0x2E85B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88F0u; }
        if (ctx->pc != 0x2E88F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E85B8_0x2e85b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88F0u; }
        if (ctx->pc != 0x2E88F0u) { return; }
    }
    ctx->pc = 0x2E88F0u;
label_2e88f0:
    // 0x2e88f0: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E88F0u;
    {
        const bool branch_taken_0x2e88f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E88F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88F0u;
            // 0x2e88f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88f0) {
            ctx->pc = 0x2E8920u;
            goto label_2e8920;
        }
    }
    ctx->pc = 0x2E88F8u;
    // 0x2e88f8: 0xc09a152  jal         func_268548
    ctx->pc = 0x2E88F8u;
    SET_GPR_U32(ctx, 31, 0x2E8900u);
    ctx->pc = 0x2E88FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88F8u;
            // 0x2e88fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268548u;
    if (runtime->hasFunction(0x268548u)) {
        auto targetFn = runtime->lookupFunction(0x268548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8900u; }
        if (ctx->pc != 0x2E8900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268548_0x268548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8900u; }
        if (ctx->pc != 0x2E8900u) { return; }
    }
    ctx->pc = 0x2E8900u;
label_2e8900:
    // 0x2e8900: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8900u;
    {
        const bool branch_taken_0x2e8900 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8900u;
            // 0x2e8904: 0x26510708  addiu       $s1, $s2, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8900) {
            ctx->pc = 0x2E8934u;
            goto label_2e8934;
        }
    }
    ctx->pc = 0x2E8908u;
label_2e8908:
    // 0x2e8908: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e8908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e890c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e890cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8910: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E8910u;
    SET_GPR_U32(ctx, 31, 0x2E8918u);
    ctx->pc = 0x2E8914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8910u;
            // 0x2e8914: 0x24a5fc00  addiu       $a1, $a1, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8918u; }
        if (ctx->pc != 0x2E8918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8918u; }
        if (ctx->pc != 0x2E8918u) { return; }
    }
    ctx->pc = 0x2E8918u;
label_2e8918:
    // 0x2e8918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8918u;
    {
        const bool branch_taken_0x2e8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8918u;
            // 0x2e891c: 0x26510708  addiu       $s1, $s2, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8918) {
            ctx->pc = 0x2E8934u;
            goto label_2e8934;
        }
    }
    ctx->pc = 0x2E8920u;
label_2e8920:
    // 0x2e8920: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e8920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e8924: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8928: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E8928u;
    SET_GPR_U32(ctx, 31, 0x2E8930u);
    ctx->pc = 0x2E892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8928u;
            // 0x2e892c: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8930u; }
        if (ctx->pc != 0x2E8930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8930u; }
        if (ctx->pc != 0x2E8930u) { return; }
    }
    ctx->pc = 0x2E8930u;
label_2e8930:
    // 0x2e8930: 0x26510708  addiu       $s1, $s2, 0x708
    ctx->pc = 0x2e8930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1800));
label_2e8934:
    // 0x2e8934: 0x26500908  addiu       $s0, $s2, 0x908
    ctx->pc = 0x2e8934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2312));
    // 0x2e8938: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2e8938u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e893c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x2e893cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e8940: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2e8940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e8944: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2e8944u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e8948: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e894c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E894Cu;
    {
        const bool branch_taken_0x2e894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E894Cu;
            // 0x2e8950: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e894c) {
            ctx->pc = 0x2E89E8u;
            goto label_2e89e8;
        }
    }
    ctx->pc = 0x2E8954u;
    // 0x2e8954: 0x0  nop
    ctx->pc = 0x2e8954u;
    // NOP
label_2e8958:
    // 0x2e8958: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e8958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e895c: 0xa3b60021  sb          $s6, 0x21($sp)
    ctx->pc = 0x2e895cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 22));
    // 0x2e8960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e8960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8964: 0xa3b60011  sb          $s6, 0x11($sp)
    ctx->pc = 0x2e8964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 22));
    // 0x2e8968: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2e8968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2e896c: 0xa3b50030  sb          $s5, 0x30($sp)
    ctx->pc = 0x2e896cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e8970: 0xa3b50020  sb          $s5, 0x20($sp)
    ctx->pc = 0x2e8970u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e8974: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2E8974u;
    SET_GPR_U32(ctx, 31, 0x2E897Cu);
    ctx->pc = 0x2E8978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8974u;
            // 0x2e8978: 0xa3b50010  sb          $s5, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E897Cu; }
        if (ctx->pc != 0x2E897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E897Cu; }
        if (ctx->pc != 0x2E897Cu) { return; }
    }
    ctx->pc = 0x2E897Cu;
label_2e897c:
    // 0x2e897c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e897cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8984: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2E8984u;
    SET_GPR_U32(ctx, 31, 0x2E898Cu);
    ctx->pc = 0x2E8988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8984u;
            // 0x2e8988: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E898Cu; }
        if (ctx->pc != 0x2E898Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E898Cu; }
        if (ctx->pc != 0x2E898Cu) { return; }
    }
    ctx->pc = 0x2E898Cu;
label_2e898c:
    // 0x2e898c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8990: 0x2605ff00  addiu       $a1, $s0, -0x100
    ctx->pc = 0x2e8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
    // 0x2e8994: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2E8994u;
    SET_GPR_U32(ctx, 31, 0x2E899Cu);
    ctx->pc = 0x2E8998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8994u;
            // 0x2e8998: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E899Cu; }
        if (ctx->pc != 0x2E899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E899Cu; }
        if (ctx->pc != 0x2E899Cu) { return; }
    }
    ctx->pc = 0x2E899Cu;
label_2e899c:
    // 0x2e899c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e89a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e89a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e89a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e89a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89ac: 0xc09a0dc  jal         func_268370
    ctx->pc = 0x2E89ACu;
    SET_GPR_U32(ctx, 31, 0x2E89B4u);
    ctx->pc = 0x2E89B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89ACu;
            // 0x2e89b0: 0x24080802  addiu       $t0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268370u;
    if (runtime->hasFunction(0x268370u)) {
        auto targetFn = runtime->lookupFunction(0x268370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89B4u; }
        if (ctx->pc != 0x2E89B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268370_0x268370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89B4u; }
        if (ctx->pc != 0x2E89B4u) { return; }
    }
    ctx->pc = 0x2E89B4u;
label_2e89b4:
    // 0x2e89b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e89b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e89b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e89b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e89bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e89c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89c4: 0xc09a0dc  jal         func_268370
    ctx->pc = 0x2E89C4u;
    SET_GPR_U32(ctx, 31, 0x2E89CCu);
    ctx->pc = 0x2E89C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89C4u;
            // 0x2e89c8: 0x24080803  addiu       $t0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268370u;
    if (runtime->hasFunction(0x268370u)) {
        auto targetFn = runtime->lookupFunction(0x268370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89CCu; }
        if (ctx->pc != 0x2E89CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268370_0x268370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89CCu; }
        if (ctx->pc != 0x2E89CCu) { return; }
    }
    ctx->pc = 0x2E89CCu;
label_2e89cc:
    // 0x2e89cc: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E89CCu;
    {
        const bool branch_taken_0x2e89cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2e89cc) {
            ctx->pc = 0x2E89D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89CCu;
            // 0x2e89d0: 0x26100300  addiu       $s0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E89E4u;
            goto label_2e89e4;
        }
    }
    ctx->pc = 0x2E89D4u;
    // 0x2e89d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e89d8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E89D8u;
    SET_GPR_U32(ctx, 31, 0x2E89E0u);
    ctx->pc = 0x2E89DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89D8u;
            // 0x2e89dc: 0x2645fc80  addiu       $a1, $s2, -0x380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89E0u; }
        if (ctx->pc != 0x2E89E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89E0u; }
        if (ctx->pc != 0x2E89E0u) { return; }
    }
    ctx->pc = 0x2E89E0u;
label_2e89e0:
    // 0x2e89e0: 0x26100300  addiu       $s0, $s0, 0x300
    ctx->pc = 0x2e89e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_2e89e4:
    // 0x2e89e4: 0x26310300  addiu       $s1, $s1, 0x300
    ctx->pc = 0x2e89e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_2e89e8:
    // 0x2e89e8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2E89E8u;
    SET_GPR_U32(ctx, 31, 0x2E89F0u);
    ctx->pc = 0x2E89ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89E8u;
            // 0x2e89ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89F0u; }
        if (ctx->pc != 0x2E89F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89F0u; }
        if (ctx->pc != 0x2E89F0u) { return; }
    }
    ctx->pc = 0x2E89F0u;
label_2e89f0:
    // 0x2e89f0: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2E89F0u;
    {
        const bool branch_taken_0x2e89f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e89f0) {
            ctx->pc = 0x2E89F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89F0u;
            // 0x2e89f4: 0xa3b60031  sb          $s6, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8958;
        }
    }
    ctx->pc = 0x2E89F8u;
    // 0x2e89f8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2e89f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2e89fc:
    // 0x2e89fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e89fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a00: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2e8a00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e8a04: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2e8a04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8a08: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2e8a08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8a0c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2e8a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8a10: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2e8a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8a14: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2e8a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8a18: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2e8a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8a1c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e8a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8a20: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A20u;
            // 0x2e8a24: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8A28u;
    ctx->pc = 0x2e8a28u;
}
