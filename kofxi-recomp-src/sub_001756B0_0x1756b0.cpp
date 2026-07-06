#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001756B0
// Address: 0x1756b0 - 0x175e70
void sub_001756B0_0x1756b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001756B0_0x1756b0");
#endif

    switch (ctx->pc) {
        case 0x1756d0u: goto label_1756d0;
        case 0x1756dcu: goto label_1756dc;
        case 0x175720u: goto label_175720;
        case 0x17577cu: goto label_17577c;
        case 0x1757e4u: goto label_1757e4;
        case 0x175828u: goto label_175828;
        case 0x17587cu: goto label_17587c;
        case 0x1758d8u: goto label_1758d8;
        case 0x17591cu: goto label_17591c;
        case 0x175970u: goto label_175970;
        case 0x1759ccu: goto label_1759cc;
        case 0x175a10u: goto label_175a10;
        case 0x175a64u: goto label_175a64;
        case 0x175ac4u: goto label_175ac4;
        case 0x175b08u: goto label_175b08;
        case 0x175b5cu: goto label_175b5c;
        case 0x175becu: goto label_175bec;
        case 0x175c58u: goto label_175c58;
        case 0x175cacu: goto label_175cac;
        case 0x175d48u: goto label_175d48;
        case 0x175da8u: goto label_175da8;
        case 0x175e08u: goto label_175e08;
        case 0x175e5cu: goto label_175e5c;
        default: break;
    }

    ctx->pc = 0x1756b0u;

    // 0x1756b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1756b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1756b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1756b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1756b8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1756b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1756bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1756bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1756c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1756c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1756c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1756c8: 0xc067db8  jal         func_19F6E0
    ctx->pc = 0x1756C8u;
    SET_GPR_U32(ctx, 31, 0x1756D0u);
    ctx->pc = 0x1756CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756C8u;
            // 0x1756cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6E0u;
    if (runtime->hasFunction(0x19F6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756D0u; }
        if (ctx->pc != 0x1756D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6E0_0x19f6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756D0u; }
        if (ctx->pc != 0x1756D0u) { return; }
    }
    ctx->pc = 0x1756D0u;
label_1756d0:
    // 0x1756d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1756d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1756d4: 0xc067db8  jal         func_19F6E0
    ctx->pc = 0x1756D4u;
    SET_GPR_U32(ctx, 31, 0x1756DCu);
    ctx->pc = 0x1756D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756D4u;
            // 0x1756d8: 0x27a5003b  addiu       $a1, $sp, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6E0u;
    if (runtime->hasFunction(0x19F6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756DCu; }
        if (ctx->pc != 0x1756DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6E0_0x19f6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756DCu; }
        if (ctx->pc != 0x1756DCu) { return; }
    }
    ctx->pc = 0x1756DCu;
label_1756dc:
    // 0x1756dc: 0x3c034230  lui         $v1, 0x4230
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16944 << 16));
    // 0x1756e0: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x1756e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1756e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1756e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1756ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1756ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1756f0: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1756f4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1756f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1756f8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1756f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1756fc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1756fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175700: 0x248461b0  addiu       $a0, $a0, 0x61B0
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25008));
    // 0x175704: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175708: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17570c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17570cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175710: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175714: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175718: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175718u;
    SET_GPR_U32(ctx, 31, 0x175720u);
    ctx->pc = 0x17571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175718u;
            // 0x17571c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175720u; }
        if (ctx->pc != 0x175720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175720u; }
        if (ctx->pc != 0x175720u) { return; }
    }
    ctx->pc = 0x175720u;
label_175720:
    // 0x175720: 0x3c0243f6  lui         $v0, 0x43F6
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17398 << 16));
    // 0x175724: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x175724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x175728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17572c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175730: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175730u;
    {
        const bool branch_taken_0x175730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x175730) {
            ctx->pc = 0x175734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175730u;
            // 0x175734: 0x3c0243e8  lui         $v0, 0x43E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175744u;
            goto label_175744;
        }
    }
    ctx->pc = 0x175738u;
    // 0x175738: 0x3c0243de  lui         $v0, 0x43DE
    ctx->pc = 0x175738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17374 << 16));
    // 0x17573c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17573cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175740: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
label_175744:
    // 0x175744: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175748: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17574c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175750: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175754: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175758: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17575c: 0x248461b0  addiu       $a0, $a0, 0x61B0
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25008));
    // 0x175760: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175764: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17576c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175770: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175774: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175774u;
    SET_GPR_U32(ctx, 31, 0x17577Cu);
    ctx->pc = 0x175778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175774u;
            // 0x175778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17577Cu; }
        if (ctx->pc != 0x17577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17577Cu; }
        if (ctx->pc != 0x17577Cu) { return; }
    }
    ctx->pc = 0x17577Cu;
label_17577c:
    // 0x17577c: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x17577cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x175780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175784: 0x506700f6  beql        $v1, $a3, . + 4 + (0xF6 << 2)
    ctx->pc = 0x175784u;
    {
        const bool branch_taken_0x175784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x175784) {
            ctx->pc = 0x175788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175784u;
            // 0x175788: 0x93a60038  lbu         $a2, 0x38($sp) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175B60u;
            goto label_175b60;
        }
    }
    ctx->pc = 0x17578Cu;
    // 0x17578c: 0x93a4003a  lbu         $a0, 0x3A($sp)
    ctx->pc = 0x17578cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 58)));
    // 0x175790: 0x5080003c  beql        $a0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x175790u;
    {
        const bool branch_taken_0x175790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175790) {
            ctx->pc = 0x175794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175790u;
            // 0x175794: 0x93a30038  lbu         $v1, 0x38($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175884u;
            goto label_175884;
        }
    }
    ctx->pc = 0x175798u;
    // 0x175798: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x175798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17579c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1757a0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1757a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1757a4: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x1757a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x1757a8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1757a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1757ac: 0x3c034318  lui         $v1, 0x4318
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17176 << 16));
    // 0x1757b0: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x1757b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x1757b4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1757b8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1757b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1757bc: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1757bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1757c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1757c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1757c4: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1757c8: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1757cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1757ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757d0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1757d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1757d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1757d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1757d8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1757d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1757dc: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1757DCu;
    SET_GPR_U32(ctx, 31, 0x1757E4u);
    ctx->pc = 0x1757E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1757DCu;
            // 0x1757e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757E4u; }
        if (ctx->pc != 0x1757E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757E4u; }
        if (ctx->pc != 0x1757E4u) { return; }
    }
    ctx->pc = 0x1757E4u;
label_1757e4:
    // 0x1757e4: 0x3c034324  lui         $v1, 0x4324
    ctx->pc = 0x1757e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17188 << 16));
    // 0x1757e8: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x1757e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x1757ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1757ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1757f0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1757f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1757f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1757f8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1757fc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1757fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175800: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175804: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175808: 0x248461b8  addiu       $a0, $a0, 0x61B8
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25016));
    // 0x17580c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17580cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175810: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175818: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17581c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17581cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175820: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175820u;
    SET_GPR_U32(ctx, 31, 0x175828u);
    ctx->pc = 0x175824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175820u;
            // 0x175824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175828u; }
        if (ctx->pc != 0x175828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175828u; }
        if (ctx->pc != 0x175828u) { return; }
    }
    ctx->pc = 0x175828u;
label_175828:
    // 0x175828: 0x93a50039  lbu         $a1, 0x39($sp)
    ctx->pc = 0x175828u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
    // 0x17582c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17582cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175830: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x175830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x175834: 0x3c0743e8  lui         $a3, 0x43E8
    ctx->pc = 0x175834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17384 << 16));
    // 0x175838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17583c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x17583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175840: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x175840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x175844: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175848: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17584c: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x17584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x175850: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175854: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x175858: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x175858u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17585c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175864: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175868: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17586c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17586cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175870: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175874: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175874u;
    SET_GPR_U32(ctx, 31, 0x17587Cu);
    ctx->pc = 0x175878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175874u;
            // 0x175878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17587Cu; }
        if (ctx->pc != 0x17587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17587Cu; }
        if (ctx->pc != 0x17587Cu) { return; }
    }
    ctx->pc = 0x17587Cu;
label_17587c:
    // 0x17587c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x17587Cu;
    {
        const bool branch_taken_0x17587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17587Cu;
            // 0x175880: 0x93a4003d  lbu         $a0, 0x3D($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17587c) {
            ctx->pc = 0x175974u;
            goto label_175974;
        }
    }
    ctx->pc = 0x175884u;
label_175884:
    // 0x175884: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x175884u;
    {
        const bool branch_taken_0x175884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175884) {
            ctx->pc = 0x175970u;
            goto label_175970;
        }
    }
    ctx->pc = 0x17588Cu;
    // 0x17588c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x175890: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175894: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x175898: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x17589c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1758a0: 0x3c034318  lui         $v1, 0x4318
    ctx->pc = 0x1758a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17176 << 16));
    // 0x1758a4: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x1758a8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1758ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1758acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1758b0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1758b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1758b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1758b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1758b8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1758bc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1758c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1758c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1758c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1758c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1758cc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1758ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1758d0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1758D0u;
    SET_GPR_U32(ctx, 31, 0x1758D8u);
    ctx->pc = 0x1758D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758D0u;
            // 0x1758d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758D8u; }
        if (ctx->pc != 0x1758D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758D8u; }
        if (ctx->pc != 0x1758D8u) { return; }
    }
    ctx->pc = 0x1758D8u;
label_1758d8:
    // 0x1758d8: 0x3c034324  lui         $v1, 0x4324
    ctx->pc = 0x1758d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17188 << 16));
    // 0x1758dc: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x1758dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x1758e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1758e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1758e4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1758e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1758e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1758e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1758ec: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1758ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1758f0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1758f4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1758f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1758f8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1758f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1758fc: 0x248461b8  addiu       $a0, $a0, 0x61B8
    ctx->pc = 0x1758fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25016));
    // 0x175900: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175904: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17590c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17590cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175910: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175914: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175914u;
    SET_GPR_U32(ctx, 31, 0x17591Cu);
    ctx->pc = 0x175918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175914u;
            // 0x175918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17591Cu; }
        if (ctx->pc != 0x17591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17591Cu; }
        if (ctx->pc != 0x17591Cu) { return; }
    }
    ctx->pc = 0x17591Cu;
label_17591c:
    // 0x17591c: 0x93a50039  lbu         $a1, 0x39($sp)
    ctx->pc = 0x17591cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
    // 0x175920: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175924: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x175924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x175928: 0x3c0743e8  lui         $a3, 0x43E8
    ctx->pc = 0x175928u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17384 << 16));
    // 0x17592c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17592cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175930: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175934: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x175934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x175938: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17593c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x17593cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x175940: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x175940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x175944: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175948: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17594c: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x17594cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175950: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17595c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17595cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175960: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175964: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175968: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175968u;
    SET_GPR_U32(ctx, 31, 0x175970u);
    ctx->pc = 0x17596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175968u;
            // 0x17596c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175970u; }
        if (ctx->pc != 0x175970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175970u; }
        if (ctx->pc != 0x175970u) { return; }
    }
    ctx->pc = 0x175970u;
label_175970:
    // 0x175970: 0x93a4003d  lbu         $a0, 0x3D($sp)
    ctx->pc = 0x175970u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
label_175974:
    // 0x175974: 0x5080003d  beql        $a0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x175974u;
    {
        const bool branch_taken_0x175974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175974) {
            ctx->pc = 0x175978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175974u;
            // 0x175978: 0x93a3003b  lbu         $v1, 0x3B($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175A6Cu;
            goto label_175a6c;
        }
    }
    ctx->pc = 0x17597Cu;
    // 0x17597c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x175980: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175984: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x175984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x175988: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x175988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x17598c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x17598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x175990: 0x3c03440a  lui         $v1, 0x440A
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17418 << 16));
    // 0x175994: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x175994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x175998: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17599c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17599cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1759a0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1759a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1759a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1759a8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1759ac: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1759b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1759b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759b4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1759b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1759b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1759b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1759bc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1759bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1759c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1759c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1759c4: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1759C4u;
    SET_GPR_U32(ctx, 31, 0x1759CCu);
    ctx->pc = 0x1759C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1759C4u;
            // 0x1759c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759CCu; }
        if (ctx->pc != 0x1759CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759CCu; }
        if (ctx->pc != 0x1759CCu) { return; }
    }
    ctx->pc = 0x1759CCu;
label_1759cc:
    // 0x1759cc: 0x3c03440d  lui         $v1, 0x440D
    ctx->pc = 0x1759ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17421 << 16));
    // 0x1759d0: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x1759d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x1759d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1759d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1759d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1759dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1759dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1759e0: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1759e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1759e4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1759e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1759e8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1759ec: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1759ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1759f0: 0x248461b8  addiu       $a0, $a0, 0x61B8
    ctx->pc = 0x1759f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25016));
    // 0x1759f4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1759f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1759f8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1759f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1759fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1759fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175a08: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175A08u;
    SET_GPR_U32(ctx, 31, 0x175A10u);
    ctx->pc = 0x175A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A08u;
            // 0x175a0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A10u; }
        if (ctx->pc != 0x175A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A10u; }
        if (ctx->pc != 0x175A10u) { return; }
    }
    ctx->pc = 0x175A10u;
label_175a10:
    // 0x175a10: 0x93a5003c  lbu         $a1, 0x3C($sp)
    ctx->pc = 0x175a10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x175a14: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175a18: 0x3c024410  lui         $v0, 0x4410
    ctx->pc = 0x175a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17424 << 16));
    // 0x175a1c: 0x3c0743e8  lui         $a3, 0x43E8
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17384 << 16));
    // 0x175a20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175a24: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175a28: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x175a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x175a2c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175a30: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x175a34: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x175a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x175a38: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175a3c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x175a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x175a40: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x175a40u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175a44: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a50: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175a54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175a58: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175a5c: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175A5Cu;
    SET_GPR_U32(ctx, 31, 0x175A64u);
    ctx->pc = 0x175A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A5Cu;
            // 0x175a60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A64u; }
        if (ctx->pc != 0x175A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A64u; }
        if (ctx->pc != 0x175A64u) { return; }
    }
    ctx->pc = 0x175A64u;
label_175a64:
    // 0x175a64: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x175A64u;
    {
        const bool branch_taken_0x175a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a64) {
            ctx->pc = 0x175B5Cu;
            goto label_175b5c;
        }
    }
    ctx->pc = 0x175A6Cu;
label_175a6c:
    // 0x175a6c: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x175A6Cu;
    {
        const bool branch_taken_0x175a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175a6c) {
            ctx->pc = 0x175B5Cu;
            goto label_175b5c;
        }
    }
    ctx->pc = 0x175A74u;
    // 0x175a74: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x175a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x175a78: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x175a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x175a7c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x175a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x175a80: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x175a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x175a84: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x175a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x175a88: 0x3c03440a  lui         $v1, 0x440A
    ctx->pc = 0x175a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17418 << 16));
    // 0x175a8c: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x175a90: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175a94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x175a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175a98: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175a9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175aa0: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175aa4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175aac: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175ab0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ab4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175ab8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175abc: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175ABCu;
    SET_GPR_U32(ctx, 31, 0x175AC4u);
    ctx->pc = 0x175AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175ABCu;
            // 0x175ac0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AC4u; }
        if (ctx->pc != 0x175AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AC4u; }
        if (ctx->pc != 0x175AC4u) { return; }
    }
    ctx->pc = 0x175AC4u;
label_175ac4:
    // 0x175ac4: 0x3c03440d  lui         $v1, 0x440D
    ctx->pc = 0x175ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17421 << 16));
    // 0x175ac8: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
    // 0x175acc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x175accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175ad0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175ad4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175ad8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175adc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175ae0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175ae4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175ae8: 0x248461b8  addiu       $a0, $a0, 0x61B8
    ctx->pc = 0x175ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25016));
    // 0x175aec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175af0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175af4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175af8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175afc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175b00: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175B00u;
    SET_GPR_U32(ctx, 31, 0x175B08u);
    ctx->pc = 0x175B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B00u;
            // 0x175b04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B08u; }
        if (ctx->pc != 0x175B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B08u; }
        if (ctx->pc != 0x175B08u) { return; }
    }
    ctx->pc = 0x175B08u;
label_175b08:
    // 0x175b08: 0x93a5003c  lbu         $a1, 0x3C($sp)
    ctx->pc = 0x175b08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x175b0c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175b10: 0x3c024410  lui         $v0, 0x4410
    ctx->pc = 0x175b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17424 << 16));
    // 0x175b14: 0x3c0743e8  lui         $a3, 0x43E8
    ctx->pc = 0x175b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17384 << 16));
    // 0x175b18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175b1c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175b20: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x175b24: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175b28: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x175b2c: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x175b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x175b30: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175b34: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x175b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x175b38: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x175b38u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175b3c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175b48: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175b4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175b50: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175b54: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175B54u;
    SET_GPR_U32(ctx, 31, 0x175B5Cu);
    ctx->pc = 0x175B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B54u;
            // 0x175b58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B5Cu; }
        if (ctx->pc != 0x175B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B5Cu; }
        if (ctx->pc != 0x175B5Cu) { return; }
    }
    ctx->pc = 0x175B5Cu;
label_175b5c:
    // 0x175b5c: 0x93a60038  lbu         $a2, 0x38($sp)
    ctx->pc = 0x175b5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_175b60:
    // 0x175b60: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x175b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x175b64: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x175b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x175b68: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x175b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x175b6c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x175b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175b70: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x175b74: 0x0  nop
    ctx->pc = 0x175b74u;
    // NOP
    // 0x175b78: 0x1810  mfhi        $v1
    ctx->pc = 0x175b78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x175b7c: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x175b7cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175b80: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x175b80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x175b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175b88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x175b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x175b8c: 0x1810  mfhi        $v1
    ctx->pc = 0x175b8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x175b90: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x175B90u;
    {
        const bool branch_taken_0x175b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B90u;
            // 0x175b94: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b90) {
            ctx->pc = 0x175BECu;
            goto label_175bec;
        }
    }
    ctx->pc = 0x175B98u;
    // 0x175b98: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x175b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x175b9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175ba0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175ba4: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175ba8: 0x3c0242e8  lui         $v0, 0x42E8
    ctx->pc = 0x175ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17128 << 16));
    // 0x175bac: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175bb0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175bbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175bc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175bc4: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175bc8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175bc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175bcc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175bd0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175bd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175bd8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175bdc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175be0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175be4: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175BE4u;
    SET_GPR_U32(ctx, 31, 0x175BECu);
    ctx->pc = 0x175BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BE4u;
            // 0x175be8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BECu; }
        if (ctx->pc != 0x175BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BECu; }
        if (ctx->pc != 0x175BECu) { return; }
    }
    ctx->pc = 0x175BECu;
label_175bec:
    // 0x175bec: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x175becu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x175bf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175bf4: 0x5067001a  beql        $v1, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x175BF4u;
    {
        const bool branch_taken_0x175bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x175bf4) {
            ctx->pc = 0x175BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175BF4u;
            // 0x175bf8: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x175C60u;
            goto label_175c60;
        }
    }
    ctx->pc = 0x175BFCu;
    // 0x175bfc: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x175bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x175c00: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x175C00u;
    {
        const bool branch_taken_0x175c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c00) {
            ctx->pc = 0x175C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175C00u;
            // 0x175c04: 0x93a8003b  lbu         $t0, 0x3B($sp) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175CB0u;
            goto label_175cb0;
        }
    }
    ctx->pc = 0x175C08u;
    // 0x175c08: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x175c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x175c0c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175c10: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175c14: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175c18: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x175c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x175c1c: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175c20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175c2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175c30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175c34: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175c38: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175c38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175c3c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175c40: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175c44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c48: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175c4c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175c50: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175C50u;
    SET_GPR_U32(ctx, 31, 0x175C58u);
    ctx->pc = 0x175C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C50u;
            // 0x175c54: 0x24a5d538  addiu       $a1, $a1, -0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C58u; }
        if (ctx->pc != 0x175C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C58u; }
        if (ctx->pc != 0x175C58u) { return; }
    }
    ctx->pc = 0x175C58u;
label_175c58:
    // 0x175c58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x175C58u;
    {
        const bool branch_taken_0x175c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c58) {
            ctx->pc = 0x175CACu;
            goto label_175cac;
        }
    }
    ctx->pc = 0x175C60u;
label_175c60:
    // 0x175c60: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175c64: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175c68: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175c6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x175c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x175c70: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175c74: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c7c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175c80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175c84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175c88: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175c8c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175c8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175c90: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175c94: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175c98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175c98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c9c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175ca0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175ca4: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175CA4u;
    SET_GPR_U32(ctx, 31, 0x175CACu);
    ctx->pc = 0x175CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CA4u;
            // 0x175ca8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CACu; }
        if (ctx->pc != 0x175CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CACu; }
        if (ctx->pc != 0x175CACu) { return; }
    }
    ctx->pc = 0x175CACu;
label_175cac:
    // 0x175cac: 0x93a8003b  lbu         $t0, 0x3B($sp)
    ctx->pc = 0x175cacu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
label_175cb0:
    // 0x175cb0: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x175cb4: 0x34846667  ori         $a0, $a0, 0x6667
    ctx->pc = 0x175cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x175cb8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x175cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x175cbc: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x175cbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x175cc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175cc4: 0x880018  mult        $zero, $a0, $t0
    ctx->pc = 0x175cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175cc8: 0x82fc2  srl         $a1, $t0, 31
    ctx->pc = 0x175cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x175ccc: 0x0  nop
    ctx->pc = 0x175cccu;
    // NOP
    // 0x175cd0: 0x2010  mfhi        $a0
    ctx->pc = 0x175cd0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x175cd4: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x175cd4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175cd8: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x175cdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x175ce0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x175ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x175ce4: 0x2010  mfhi        $a0
    ctx->pc = 0x175ce4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x175ce8: 0x10670031  beq         $v1, $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x175CE8u;
    {
        const bool branch_taken_0x175ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x175CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CE8u;
            // 0x175cec: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ce8) {
            ctx->pc = 0x175DB0u;
            goto label_175db0;
        }
    }
    ctx->pc = 0x175CF0u;
    // 0x175cf0: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x175CF0u;
    {
        const bool branch_taken_0x175cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cf0) {
            ctx->pc = 0x175CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175CF0u;
            // 0x175cf4: 0x93a3003b  lbu         $v1, 0x3B($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175D4Cu;
            goto label_175d4c;
        }
    }
    ctx->pc = 0x175CF8u;
    // 0x175cf8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x175cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175cfc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175d00: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175d04: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175d08: 0x3c024401  lui         $v0, 0x4401
    ctx->pc = 0x175d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17409 << 16));
    // 0x175d0c: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175d10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175d1c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175d20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175d24: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175d28: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175d28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175d2c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175d30: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175d34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d38: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175d3c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175d40: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175D40u;
    SET_GPR_U32(ctx, 31, 0x175D48u);
    ctx->pc = 0x175D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D40u;
            // 0x175d44: 0x24a5d538  addiu       $a1, $a1, -0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D48u; }
        if (ctx->pc != 0x175D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D48u; }
        if (ctx->pc != 0x175D48u) { return; }
    }
    ctx->pc = 0x175D48u;
label_175d48:
    // 0x175d48: 0x93a3003b  lbu         $v1, 0x3B($sp)
    ctx->pc = 0x175d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
label_175d4c:
    // 0x175d4c: 0x50600044  beql        $v1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x175D4Cu;
    {
        const bool branch_taken_0x175d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175d4c) {
            ctx->pc = 0x175D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175D4Cu;
            // 0x175d50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175E60u;
            goto label_175e60;
        }
    }
    ctx->pc = 0x175D54u;
    // 0x175d54: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x175d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x175d58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175d5c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175d60: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175d64: 0x3c024404  lui         $v0, 0x4404
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17412 << 16));
    // 0x175d68: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175d6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175d70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d74: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175d7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175d80: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175d84: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175d84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175d88: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175d8c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175d90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175d94: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175d98: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175d9c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175da0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175DA0u;
    SET_GPR_U32(ctx, 31, 0x175DA8u);
    ctx->pc = 0x175DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DA0u;
            // 0x175da4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DA8u; }
        if (ctx->pc != 0x175DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DA8u; }
        if (ctx->pc != 0x175DA8u) { return; }
    }
    ctx->pc = 0x175DA8u;
label_175da8:
    // 0x175da8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x175DA8u;
    {
        const bool branch_taken_0x175da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175da8) {
            ctx->pc = 0x175E5Cu;
            goto label_175e5c;
        }
    }
    ctx->pc = 0x175DB0u;
label_175db0:
    // 0x175db0: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x175DB0u;
    {
        const bool branch_taken_0x175db0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x175db0) {
            ctx->pc = 0x175DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175DB0u;
            // 0x175db4: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x175E0Cu;
            goto label_175e0c;
        }
    }
    ctx->pc = 0x175DB8u;
    // 0x175db8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x175db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175dbc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175dc0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175dc4: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175dc8: 0x3c02440d  lui         $v0, 0x440D
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17421 << 16));
    // 0x175dcc: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175dd0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175dd8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175ddc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175de0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175de4: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175de8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175de8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175dec: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175df0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175df4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175df8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175dfc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175e00: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175E00u;
    SET_GPR_U32(ctx, 31, 0x175E08u);
    ctx->pc = 0x175E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E00u;
            // 0x175e04: 0x24a5d538  addiu       $a1, $a1, -0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E08u; }
        if (ctx->pc != 0x175E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E08u; }
        if (ctx->pc != 0x175E08u) { return; }
    }
    ctx->pc = 0x175E08u;
label_175e08:
    // 0x175e08: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x175e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_175e0c:
    // 0x175e0c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x175e10: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x175e14: 0x3c0543e8  lui         $a1, 0x43E8
    ctx->pc = 0x175e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17384 << 16));
    // 0x175e18: 0x3c024410  lui         $v0, 0x4410
    ctx->pc = 0x175e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17424 << 16));
    // 0x175e1c: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x175e20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175e24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175e30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175e34: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175e38: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x175e38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175e3c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175e40: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175e44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175e48: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175e4c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x175e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175e50: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175e54: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175E54u;
    SET_GPR_U32(ctx, 31, 0x175E5Cu);
    ctx->pc = 0x175E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E54u;
            // 0x175e58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E5Cu; }
        if (ctx->pc != 0x175E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E5Cu; }
        if (ctx->pc != 0x175E5Cu) { return; }
    }
    ctx->pc = 0x175E5Cu;
label_175e5c:
    // 0x175e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175e60:
    // 0x175e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e68: 0x3e00008  jr          $ra
    ctx->pc = 0x175E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175E68u;
            // 0x175e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175E70u;
    ctx->pc = 0x175e70u;
}
