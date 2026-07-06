#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002786C8
// Address: 0x2786c8 - 0x2787b8
void sub_002786C8_0x2786c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002786C8_0x2786c8");
#endif

    switch (ctx->pc) {
        case 0x278704u: goto label_278704;
        case 0x27871cu: goto label_27871c;
        case 0x278750u: goto label_278750;
        case 0x278774u: goto label_278774;
        case 0x2787a4u: goto label_2787a4;
        default: break;
    }

    ctx->pc = 0x2786c8u;

    // 0x2786c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2786c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2786cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2786ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2786d0: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x2786d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2786d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2786d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2786d8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x2786d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x2786dc: 0x24638724  addiu       $v1, $v1, -0x78DC
    ctx->pc = 0x2786dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936356));
    // 0x2786e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2786e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2786E4u;
    {
        const bool branch_taken_0x2786e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2786e4) {
            ctx->pc = 0x278704u;
            goto label_278704;
        }
    }
    ctx->pc = 0x2786ECu;
    // 0x2786ec: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x2786ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x2786f0: 0x24848738  addiu       $a0, $a0, -0x78C8
    ctx->pc = 0x2786f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936376));
    // 0x2786f4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2786f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2786f8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2786f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2786fc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2786FCu;
    SET_GPR_U32(ctx, 31, 0x278704u);
    ctx->pc = 0x278700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786FCu;
            // 0x278700: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278704u; }
        if (ctx->pc != 0x278704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278704u; }
        if (ctx->pc != 0x278704u) { return; }
    }
    ctx->pc = 0x278704u;
label_278704:
    // 0x278704: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278704u;
    {
        const bool branch_taken_0x278704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278704) {
            ctx->pc = 0x278738u;
            goto label_278738;
        }
    }
    ctx->pc = 0x27870Cu;
    // 0x27870c: 0x24cc0c18  addiu       $t4, $a2, 0xC18
    ctx->pc = 0x27870cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3096));
    // 0x278710: 0xdff730d7  ld          $s7, 0x30D7($ra)
    ctx->pc = 0x278710u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 31), 12503)));
    // 0x278714: 0xcdf585b  jal         func_37D616C
    ctx->pc = 0x278714u;
    SET_GPR_U32(ctx, 31, 0x27871Cu);
    ctx->pc = 0x278718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278714u;
            // 0x278718: 0xff434eba  sd          $v1, 0x4EBA($k0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 26), 20154), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D616Cu;
    {
        auto targetFn = runtime->lookupFunction(0x37D616Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27871Cu; }
        if (ctx->pc != 0x27871Cu) { return; }
    }
    ctx->pc = 0x27871Cu;
label_27871c:
    // 0x27871c: 0xa0827f59  sb          $v0, 0x7F59($a0)
    ctx->pc = 0x27871cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32601), (uint8_t)GPR_U32(ctx, 2));
    // 0x278720: 0xa3b0a599  sb          $s0, -0x5A67($sp)
    ctx->pc = 0x278720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294944153), (uint8_t)GPR_U32(ctx, 16));
    // 0x278724: 0x0  nop
    ctx->pc = 0x278724u;
    // NOP
    // 0x278728: 0x60e81b8c  daddi       $t0, $a3, 0x1B8C
    ctx->pc = 0x278728u;
    { int64_t src = (int64_t)GPR_S64(ctx, 7); int64_t imm = (int64_t)(int32_t)7052; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x27872c: 0x980818f4  lwr         $t0, 0x18F4($zero)
    ctx->pc = 0x27872cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6388); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x278730: 0x60e81b90  daddi       $t0, $a3, 0x1B90
    ctx->pc = 0x278730u;
    { int64_t src = (int64_t)GPR_S64(ctx, 7); int64_t imm = (int64_t)(int32_t)7056; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x278734: 0x0  nop
    ctx->pc = 0x278734u;
    // NOP
label_278738:
    // 0x278738: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x278738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x27873c: 0x94c6613c  lhu         $a2, 0x613C($a2)
    ctx->pc = 0x27873cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24892)));
    // 0x278740: 0x841947ee  lh          $t9, 0x47EE($zero)
    ctx->pc = 0x278740u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 0), 18414)));
    // 0x278744: 0x24a532bc  addiu       $a1, $a1, 0x32BC
    ctx->pc = 0x278744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12988));
    // 0x278748: 0xc09de72  jal         func_2779C8
    ctx->pc = 0x278748u;
    SET_GPR_U32(ctx, 31, 0x278750u);
    ctx->pc = 0x27874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278748u;
            // 0x27874c: 0x92e64731  lbu         $a2, 0x4731($s7) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 18225)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2779C8u;
    if (runtime->hasFunction(0x2779C8u)) {
        auto targetFn = runtime->lookupFunction(0x2779C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278750u; }
        if (ctx->pc != 0x278750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002779C8_0x2779c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278750u; }
        if (ctx->pc != 0x278750u) { return; }
    }
    ctx->pc = 0x278750u;
label_278750:
    // 0x278750: 0x9666631b  lhu         $a2, 0x631B($s3)
    ctx->pc = 0x278750u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 25371)));
    // 0x278754: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278754u;
    {
        const bool branch_taken_0x278754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278754) {
            ctx->pc = 0x278784u;
            goto label_278784;
        }
    }
    ctx->pc = 0x27875Cu;
    // 0x27875c: 0x8444683b  lh          $a0, 0x683B($v0)
    ctx->pc = 0x27875cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26683)));
    // 0x278760: 0x26a954d8  addiu       $t1, $s5, 0x54D8
    ctx->pc = 0x278760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 21720));
    // 0x278764: 0xa0d0f099  sb          $s0, -0xF67($a2)
    ctx->pc = 0x278764u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294963353), (uint8_t)GPR_U32(ctx, 16));
    // 0x278768: 0xa06d7161  sb          $t5, 0x7161($v1)
    ctx->pc = 0x278768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29025), (uint8_t)GPR_U32(ctx, 13));
    // 0x27876c: 0xc6e507a  jal         func_1B941E8
    ctx->pc = 0x27876Cu;
    SET_GPR_U32(ctx, 31, 0x278774u);
    ctx->pc = 0x278770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27876Cu;
            // 0x278770: 0xdf2f0f17  ld          $t7, 0xF17($t9) (Delay Slot)
        SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 25), 3863)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B941E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1B941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278774u; }
        if (ctx->pc != 0x278774u) { return; }
    }
    ctx->pc = 0x278774u;
label_278774:
    // 0x278774: 0x60c8b18e  daddi       $t0, $a2, -0x4E72
    ctx->pc = 0x278774u;
    { int64_t src = (int64_t)GPR_S64(ctx, 6); int64_t imm = (int64_t)(int32_t)4294947214; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x278778: 0x980818f5  lwr         $t0, 0x18F5($zero)
    ctx->pc = 0x278778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6389); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x27877c: 0x60c8b192  daddi       $t0, $a2, -0x4E6E
    ctx->pc = 0x27877cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 6); int64_t imm = (int64_t)(int32_t)4294947218; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x278780: 0x0  nop
    ctx->pc = 0x278780u;
    // NOP
label_278784:
    // 0x278784: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278788: 0x24428774  addiu       $v0, $v0, -0x788C
    ctx->pc = 0x278788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936436));
    // 0x27878c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27878cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278790: 0x24848754  addiu       $a0, $a0, -0x78AC
    ctx->pc = 0x278790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936404));
    // 0x278794: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278798: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x278798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27879c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27879Cu;
    SET_GPR_U32(ctx, 31, 0x2787A4u);
    ctx->pc = 0x2787A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27879Cu;
            // 0x2787a0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2787A4u; }
        if (ctx->pc != 0x2787A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2787A4u; }
        if (ctx->pc != 0x2787A4u) { return; }
    }
    ctx->pc = 0x2787A4u;
label_2787a4:
    // 0x2787a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2787a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2787a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2787ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2787acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2787b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2787B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787B0u;
            // 0x2787b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2787B8u;
    ctx->pc = 0x2787b8u;
}
