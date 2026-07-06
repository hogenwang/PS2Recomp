#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154310
// Address: 0x154310 - 0x1543f0
void sub_00154310_0x154310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154310_0x154310");
#endif

    switch (ctx->pc) {
        case 0x154324u: goto label_154324;
        case 0x15432cu: goto label_15432c;
        case 0x15433cu: goto label_15433c;
        case 0x154358u: goto label_154358;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543e0u: goto label_1543e0;
        default: break;
    }

    ctx->pc = 0x154310u;

    // 0x154310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x154314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15431c: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x15431Cu;
    SET_GPR_U32(ctx, 31, 0x154324u);
    ctx->pc = 0x154320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15431Cu;
            // 0x154320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B00u;
    if (runtime->hasFunction(0x1A4B00u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154324u; }
        if (ctx->pc != 0x154324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B00_0x1a4b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154324u; }
        if (ctx->pc != 0x154324u) { return; }
    }
    ctx->pc = 0x154324u;
label_154324:
    // 0x154324: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x154324u;
    SET_GPR_U32(ctx, 31, 0x15432Cu);
    ctx->pc = 0x32C7D0u;
    if (runtime->hasFunction(0x32C7D0u)) {
        auto targetFn = runtime->lookupFunction(0x32C7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15432Cu; }
        if (ctx->pc != 0x15432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C7D0_0x32c7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15432Cu; }
        if (ctx->pc != 0x15432Cu) { return; }
    }
    ctx->pc = 0x15432Cu;
label_15432c:
    // 0x15432c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154334: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x154334u;
    SET_GPR_U32(ctx, 31, 0x15433Cu);
    ctx->pc = 0x154338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154334u;
            // 0x154338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15433Cu; }
        if (ctx->pc != 0x15433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15433Cu; }
        if (ctx->pc != 0x15433Cu) { return; }
    }
    ctx->pc = 0x15433Cu;
label_15433c:
    // 0x15433c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x154340: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154344: 0xa043f340  sb          $v1, -0xCC0($v0)
    ctx->pc = 0x154344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964032), (uint8_t)GPR_U32(ctx, 3));
    // 0x154348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15434c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154350: 0xc054ac4  jal         func_152B10
    ctx->pc = 0x154350u;
    SET_GPR_U32(ctx, 31, 0x154358u);
    ctx->pc = 0x154354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154350u;
            // 0x154354: 0xac43da20  sw          $v1, -0x25E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152B10u;
    if (runtime->hasFunction(0x152B10u)) {
        auto targetFn = runtime->lookupFunction(0x152B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154358u; }
        if (ctx->pc != 0x154358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152B10_0x152b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154358u; }
        if (ctx->pc != 0x154358u) { return; }
    }
    ctx->pc = 0x154358u;
label_154358:
    // 0x154358: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15435c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x154360: 0x9448f108  lhu         $t0, -0xEF8($v0)
    ctx->pc = 0x154360u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x154364: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x154368: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15436c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154370: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154374: 0x2508fec0  addiu       $t0, $t0, -0x140
    ctx->pc = 0x154374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966976));
    // 0x154378: 0x9447f10a  lhu         $a3, -0xEF6($v0)
    ctx->pc = 0x154378u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963466)));
    // 0x15437c: 0xa488db3c  sh          $t0, -0x24C4($a0)
    ctx->pc = 0x15437cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957884), (uint16_t)GPR_U32(ctx, 8));
    // 0x154380: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x154380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x154384: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154388: 0xa445db20  sh          $a1, -0x24E0($v0)
    ctx->pc = 0x154388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 5));
    // 0x15438c: 0x24e2ff10  addiu       $v0, $a3, -0xF0
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967056));
    // 0x154390: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x154390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x154394: 0xa462db3e  sh          $v0, -0x24C2($v1)
    ctx->pc = 0x154394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957886), (uint16_t)GPR_U32(ctx, 2));
    // 0x154398: 0x24a5d148  addiu       $a1, $a1, -0x2EB8
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955336));
    // 0x15439c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1543a0: 0xa444db22  sh          $a0, -0x24DE($v0)
    ctx->pc = 0x1543a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 4));
    // 0x1543a4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1543a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1543a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1543a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1543ac: 0xa440f348  sh          $zero, -0xCB8($v0)
    ctx->pc = 0x1543acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964040), (uint16_t)GPR_U32(ctx, 0));
    // 0x1543b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1543b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1543b4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1543B4u;
    SET_GPR_U32(ctx, 31, 0x1543BCu);
    ctx->pc = 0x1543B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1543B4u;
            // 0x1543b8: 0xa040d9c8  sb          $zero, -0x2638($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957512), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543BCu; }
        if (ctx->pc != 0x1543BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543BCu; }
        if (ctx->pc != 0x1543BCu) { return; }
    }
    ctx->pc = 0x1543BCu;
label_1543bc:
    // 0x1543bc: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x1543BCu;
    SET_GPR_U32(ctx, 31, 0x1543C4u);
    ctx->pc = 0x1543C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1543BCu;
            // 0x1543c0: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543C4u; }
        if (ctx->pc != 0x1543C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543C4u; }
        if (ctx->pc != 0x1543C4u) { return; }
    }
    ctx->pc = 0x1543C4u;
label_1543c4:
    // 0x1543c4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x1543c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x1543c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1543c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1543cc: 0xac621e50  sw          $v0, 0x1E50($v1)
    ctx->pc = 0x1543ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7760), GPR_U32(ctx, 2));
    // 0x1543d0: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x1543D0u;
    SET_GPR_U32(ctx, 31, 0x1543D8u);
    ctx->pc = 0x1543D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1543D0u;
            // 0x1543d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543D8u; }
        if (ctx->pc != 0x1543D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543D8u; }
        if (ctx->pc != 0x1543D8u) { return; }
    }
    ctx->pc = 0x1543D8u;
label_1543d8:
    // 0x1543d8: 0xc0c25c4  jal         func_309710
    ctx->pc = 0x1543D8u;
    SET_GPR_U32(ctx, 31, 0x1543E0u);
    ctx->pc = 0x309710u;
    if (runtime->hasFunction(0x309710u)) {
        auto targetFn = runtime->lookupFunction(0x309710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543E0u; }
        if (ctx->pc != 0x1543E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309710_0x309710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1543E0u; }
        if (ctx->pc != 0x1543E0u) { return; }
    }
    ctx->pc = 0x1543E0u;
label_1543e0:
    // 0x1543e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1543e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1543e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1543e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1543e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1543E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1543ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1543E8u;
            // 0x1543ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1543F0u;
    ctx->pc = 0x1543f0u;
}
