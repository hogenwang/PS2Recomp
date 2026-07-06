#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD4D8
// Address: 0x2dd4d8 - 0x2dd6e0
void sub_002DD4D8_0x2dd4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD4D8_0x2dd4d8");
#endif

    switch (ctx->pc) {
        case 0x2dd52cu: goto label_2dd52c;
        case 0x2dd574u: goto label_2dd574;
        case 0x2dd588u: goto label_2dd588;
        case 0x2dd59cu: goto label_2dd59c;
        case 0x2dd5bcu: goto label_2dd5bc;
        case 0x2dd618u: goto label_2dd618;
        case 0x2dd6b4u: goto label_2dd6b4;
        default: break;
    }

    ctx->pc = 0x2dd4d8u;

    // 0x2dd4d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dd4dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dd4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dd4e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dd4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dd4e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2dd4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dd4ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2dd4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2dd4f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dd4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dd4f4: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x2dd4f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2dd4f8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2dd4f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dd4fc: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2dd4fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd500: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dd500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dd504: 0x2463d54c  addiu       $v1, $v1, -0x2AB4
    ctx->pc = 0x2dd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956364));
    // 0x2dd508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dd508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd50c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD50Cu;
    {
        const bool branch_taken_0x2dd50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd50c) {
            ctx->pc = 0x2DD52Cu;
            goto label_2dd52c;
        }
    }
    ctx->pc = 0x2DD514u;
    // 0x2dd514: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd518: 0x2484d560  addiu       $a0, $a0, -0x2AA0
    ctx->pc = 0x2dd518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956384));
    // 0x2dd51c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dd51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dd520: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dd520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dd524: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD524u;
    SET_GPR_U32(ctx, 31, 0x2DD52Cu);
    ctx->pc = 0x2DD528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD524u;
            // 0x2dd528: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD52Cu; }
        if (ctx->pc != 0x2DD52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD52Cu; }
        if (ctx->pc != 0x2DD52Cu) { return; }
    }
    ctx->pc = 0x2DD52Cu;
label_2dd52c:
    // 0x2dd52c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DD52Cu;
    {
        const bool branch_taken_0x2dd52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd52c) {
            ctx->pc = 0x2DD560u;
            goto label_2dd560;
        }
    }
    ctx->pc = 0x2DD534u;
    // 0x2dd534: 0x850f0f33  lh          $t7, 0xF33($t0)
    ctx->pc = 0x2dd534u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 3891)));
    // 0x2dd538: 0x18a7020  add         $t6, $t4, $t2
    ctx->pc = 0x2dd538u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2dd53c: 0xfedafae2  sd          $k0, -0x51E($s6)
    ctx->pc = 0x2dd53cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294965986), GPR_U64(ctx, 26));
    // 0x2dd540: 0x8fc20255  lw          $v0, 0x255($fp)
    ctx->pc = 0x2dd540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 597)));
    // 0x2dd544: 0x255afaa0  addiu       $k0, $t2, -0x560
    ctx->pc = 0x2dd544u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965920));
    // 0x2dd548: 0x26af8be0  addiu       $t7, $s5, -0x7420
    ctx->pc = 0x2dd548u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937568));
    // 0x2dd54c: 0x0  nop
    ctx->pc = 0x2dd54cu;
    // NOP
    // 0x2dd550: 0xc354545f  ll          $s4, 0x545F($k0)
    ctx->pc = 0x2dd550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21599); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd554: 0xc713114a  lwc1        $f19, 0x114A($t8)
    ctx->pc = 0x2dd554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4426)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2dd558: 0xc354555b  ll          $s4, 0x555B($k0)
    ctx->pc = 0x2dd558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21851); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd55c: 0x0  nop
    ctx->pc = 0x2dd55cu;
    // NOP
label_2dd560:
    // 0x2dd560: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dd560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dd564: 0x8c5098b0  lw          $s0, -0x6750($v0)
    ctx->pc = 0x2dd564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dd568: 0x13a0cdab  beqz        $sp, . + 4 + (-0x3255 << 2)
    ctx->pc = 0x2DD568u;
    {
        const bool branch_taken_0x2dd568 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD568u;
            // 0x2dd56c: 0xba34eab  j           func_E8D3AAC (Delay Slot)
        // J 0xE8D3AAC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd568) {
            ctx->pc = 0x2D0C18u;
            return;
        }
    }
    ctx->pc = 0x2DD570u;
    // 0x2dd570: 0x43aedbaa  .word       0x43AEDBAA                   # INVALID     $sp, $t6, -0x2456 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dd570u;
    // Unhandled COP0 instruction format: 0x1D
label_2dd574:
    // 0x2dd574: 0x13a08ebb  beqz        $sp, . + 4 + (-0x7145 << 2)
    ctx->pc = 0x2DD574u;
    {
        const bool branch_taken_0x2dd574 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD574u;
            // 0x2dd578: 0x13a28ebb  beq         $sp, $v0, . + 4 + (-0x7145 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD578 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd574) {
            ctx->pc = 0x2C1064u;
            return;
        }
    }
    ctx->pc = 0x2DD57Cu;
    // 0x2dd57c: 0x13a18ebb  beq         $sp, $at, . + 4 + (-0x7145 << 2)
    ctx->pc = 0x2DD57Cu;
    {
        const bool branch_taken_0x2dd57c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 1));
        ctx->pc = 0x2DD580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD57Cu;
            // 0x2dd580: 0xba043aa  j           func_E810EA8 (Delay Slot)
        // J 0xE810EA8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd57c) {
            ctx->pc = 0x2C106Cu;
            return;
        }
    }
    ctx->pc = 0x2DD584u;
    // 0x2dd584: 0x13a10ebb  beq         $sp, $at, . + 4 + (0xEBB << 2)
label_2dd588:
    if (ctx->pc == 0x2DD588u) {
        ctx->pc = 0x2DD588u;
            // 0x2dd588: 0x1fa14da9  .word       0x1FA14DA9                   # bgtz        $sp, . + 4 + (0x4DA9 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DD588 - Handled by branch logic
        ctx->pc = 0x2DD58Cu;
        goto label_fallthrough_0x2dd584;
    }
    ctx->pc = 0x2DD584u;
    {
        const bool branch_taken_0x2dd584 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 1));
        ctx->pc = 0x2DD588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD584u;
            // 0x2dd588: 0x1fa14da9  .word       0x1FA14DA9                   # bgtz        $sp, . + 4 + (0x4DA9 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DD588 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd584) {
            ctx->pc = 0x2E1074u;
            return;
        }
    }
label_fallthrough_0x2dd584:
    ctx->pc = 0x2DD58Cu;
    // 0x2dd58c: 0x3b2da7a  .word       0x03B2DA7A                   # dsrl        $k1, $s2, 9 # 03A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd58cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 18) >> 9);
    // 0x2dd590: 0x93a249a8  lbu         $v0, 0x49A8($sp)
    ctx->pc = 0x2dd590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18856)));
    // 0x2dd594: 0xc0b76e0  jal         func_2DDB80
    ctx->pc = 0x2DD594u;
    SET_GPR_U32(ctx, 31, 0x2DD59Cu);
    ctx->pc = 0x2DD598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD594u;
            // 0x2dd598: 0x1870c1c9  .word       0x1870C1C9                   # blez        $v1, . + 4 + (-0x3E37 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DD598 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB80u;
    if (runtime->hasFunction(0x2DDB80u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD59Cu; }
        if (ctx->pc != 0x2DD59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB80_0x2ddb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD59Cu; }
        if (ctx->pc != 0x2DD59Cu) { return; }
    }
    ctx->pc = 0x2DD59Cu;
label_2dd59c:
    // 0x2dd59c: 0x83a0498b  lb          $zero, 0x498B($sp)
    ctx->pc = 0x2dd59cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 18827)));
    // 0x2dd5a0: 0x87a00c73  lh          $zero, 0xC73($sp)
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3187)));
    // 0x2dd5a4: 0x13a08eb2  beqz        $sp, . + 4 + (-0x714E << 2)
    ctx->pc = 0x2DD5A4u;
    {
        const bool branch_taken_0x2dd5a4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5A4u;
            // 0x2dd5a8: 0x43aedbaa  .word       0x43AEDBAA                   # INVALID     $sp, $t6, -0x2456 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x1D
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5a4) {
            ctx->pc = 0x2C1070u;
            return;
        }
    }
    ctx->pc = 0x2DD5ACu;
    // 0x2dd5ac: 0x13a28eb2  beq         $sp, $v0, . + 4 + (-0x714E << 2)
    ctx->pc = 0x2DD5ACu;
    {
        const bool branch_taken_0x2dd5ac = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5ACu;
            // 0x2dd5b0: 0x13a18eb2  beq         $sp, $at, . + 4 + (-0x714E << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD5B0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5ac) {
            ctx->pc = 0x2C1078u;
            return;
        }
    }
    ctx->pc = 0x2DD5B4u;
    // 0x2dd5b4: 0xba1cbaa  j           func_E872EA8
    ctx->pc = 0x2DD5B4u;
    ctx->pc = 0x2DD5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5B4u;
            // 0x2dd5b8: 0x13a10eb2  beq         $sp, $at, . + 4 + (0xEB2 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD5B8 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xE872EA8u;
    {
        auto targetFn = runtime->lookupFunction(0xE872EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DD5BCu;
label_2dd5bc:
    // 0x2dd5bc: 0x3a04faa  .word       0x03A04FAA                   # slt         $t1, $sp, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd5bcu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2dd5c0: 0x13a24c79  beq         $sp, $v0, . + 4 + (0x4C79 << 2)
    ctx->pc = 0x2DD5C0u;
    {
        const bool branch_taken_0x2dd5c0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5C0u;
            // 0x2dd5c4: 0x3b6dbaa  .word       0x03B6DBAA                   # slt         $k1, $sp, $s6 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5c0) {
            ctx->pc = 0x2F07A8u;
            return;
        }
    }
    ctx->pc = 0x2DD5C8u;
    // 0x2dd5c8: 0x83a8dfc8  lb          $t0, -0x2038($sp)
    ctx->pc = 0x2dd5c8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 4294959048)));
    // 0x2dd5cc: 0x83b0deb8  lb          $s0, -0x2148($sp)
    ctx->pc = 0x2dd5ccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 4294958776)));
    // 0x2dd5d0: 0x8ba00f8b  lwl         $zero, 0xF8B($sp)
    ctx->pc = 0x2dd5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3979); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
    // 0x2dd5d4: 0x93a0cdf8  lbu         $zero, -0x3208($sp)
    ctx->pc = 0x2dd5d4u;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4294954488)));
    // 0x2dd5d8: 0x17a049fb  bnez        $sp, . + 4 + (0x49FB << 2)
    ctx->pc = 0x2DD5D8u;
    {
        const bool branch_taken_0x2dd5d8 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5D8u;
            // 0x2dd5dc: 0x685d518a  ldl         $sp, 0x518A($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20874); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 29, (GPR_U64(ctx, 29) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5d8) {
            ctx->pc = 0x2EFDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD5E0u;
    // 0x2dd5e0: 0x93a00feb  lbu         $zero, 0xFEB($sp)
    ctx->pc = 0x2dd5e0u;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4075)));
    // 0x2dd5e4: 0xbcc7d1aa  cache       0x07, -0x2E56($a2)
    ctx->pc = 0x2dd5e4u;
    // CACHE instruction (ignored)
    // 0x2dd5e8: 0xf85fd1ba  sqc2        $vf31, -0x2E46($v0)
    ctx->pc = 0x2dd5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294955450), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2dd5ec: 0xc3b86dea  ll          $t8, 0x6DEA($sp)
    ctx->pc = 0x2dd5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28138); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd5f0: 0x43aada7a  .word       0x43AADA7A                   # INVALID     $sp, $t2, -0x2586 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dd5f0u;
    // Unhandled COP0 instruction format: 0x1D
    // 0x2dd5f4: 0xbe604daa  cache       0x00, 0x4DAA($s3)
    ctx->pc = 0x2dd5f4u;
    // CACHE instruction (ignored)
    // 0x2dd5f8: 0xc3b46dea  ll          $s4, 0x6DEA($sp)
    ctx->pc = 0x2dd5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28138); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd5fc: 0x43a2dbaa  .word       0x43A2DBAA                   # INVALID     $sp, $v0, -0x2456 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dd5fcu;
    // Unhandled COP0 instruction format: 0x1D
    // 0x2dd600: 0xbc244daa  cache       0x04, 0x4DAA($at)
    ctx->pc = 0x2dd600u;
    // CACHE instruction (ignored)
    // 0x2dd604: 0xc3b06dea  ll          $s0, 0x6DEA($sp)
    ctx->pc = 0x2dd604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28138); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd608: 0xdfa04da2  ld          $zero, 0x4DA2($sp)
    ctx->pc = 0x2dd608u;
    SET_GPR_U64(ctx, 0, READ64(ADD32(GPR_U32(ctx, 29), 19874)));
    // 0x2dd60c: 0x3a04faa  .word       0x03A04FAA                   # slt         $t1, $sp, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd60cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2dd610: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DD610u;
    SET_GPR_U32(ctx, 31, 0x2DD618u);
    ctx->pc = 0x2DD614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD610u;
            // 0x2dd614: 0x3a04faa  .word       0x03A04FAA                   # slt         $t1, $sp, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD618u; }
        if (ctx->pc != 0x2DD618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD618u; }
        if (ctx->pc != 0x2DD618u) { return; }
    }
    ctx->pc = 0x2DD618u;
label_2dd618:
    // 0x2dd618: 0x3a06deb  .word       0x03A06DEB                   # sltu        $t5, $sp, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd618u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x2dd61c: 0x3a07cea  .word       0x03A07CEA                   # slt         $t7, $sp, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd61cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2dd620: 0x3b0de82  .word       0x03B0DE82                   # srl         $k1, $s0, 26 # 03A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd620u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 16), 26));
    // 0x2dd624: 0x13a0cca2  beqz        $sp, . + 4 + (-0x335E << 2)
    ctx->pc = 0x2DD624u;
    {
        const bool branch_taken_0x2dd624 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD624u;
            // 0x2dd628: 0x3a04faa  .word       0x03A04FAA                   # slt         $t1, $sp, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd624) {
            ctx->pc = 0x2D08B0u;
            return;
        }
    }
    ctx->pc = 0x2DD62Cu;
    // 0x2dd62c: 0x3a04faa  .word       0x03A04FAA                   # slt         $t1, $sp, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd62cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2dd630: 0x3a1eca1  .word       0x03A1ECA1                   # addu        $sp, $sp, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2dd634: 0x83a16ca0  lb          $at, 0x6CA0($sp)
    ctx->pc = 0x2dd634u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 27808)));
    // 0x2dd638: 0x43b374aa  .word       0x43B374AA                   # INVALID     $sp, $s3, 0x74AA # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dd638u;
    // Unhandled COP0 instruction format: 0x1D
    // 0x2dd63c: 0x3827caa  .word       0x03827CAA                   # slt         $t7, $gp, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd63cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 28) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dd640: 0x3a46dab  .word       0x03A46DAB                   # sltu        $t5, $sp, $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd640u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2dd644: 0x3a2ed2a  .word       0x03A2ED2A                   # slt         $sp, $sp, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd644u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 29) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dd648: 0x97a248ab  lhu         $v0, 0x48AB($sp)
    ctx->pc = 0x2dd648u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18603)));
    // 0x2dd64c: 0x3a0eca0  .word       0x03A0ECA0                   # add         $sp, $sp, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd64cu;
    {     int32_t rs_val = GPR_S32(ctx, 29);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x2dd650: 0x3827caa  .word       0x03827CAA                   # slt         $t7, $gp, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd650u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 28) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dd654: 0x3a46dab  .word       0x03A46DAB                   # sltu        $t5, $sp, $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd654u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2dd658: 0x83aadf82  lb          $t2, -0x207E($sp)
    ctx->pc = 0x2dd658u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 4294958978)));
    // 0x2dd65c: 0x685e599a  ldl         $fp, 0x599A($v0)
    ctx->pc = 0x2dd65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 22938); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem << shift)); }
    // 0x2dd660: 0x13a00feb  beqz        $sp, . + 4 + (0xFEB << 2)
    ctx->pc = 0x2DD660u;
    {
        const bool branch_taken_0x2dd660 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD660u;
            // 0x2dd664: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD664 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd660) {
            ctx->pc = 0x2E1610u;
            return;
        }
    }
    ctx->pc = 0x2DD668u;
    // 0x2dd668: 0x0  nop
    ctx->pc = 0x2dd668u;
    // NOP
    // 0x2dd66c: 0x1beb020  add         $s6, $t5, $fp
    ctx->pc = 0x2dd66cu;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2dd670: 0x24e44f20  addiu       $a0, $a3, 0x4F20
    ctx->pc = 0x2dd670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 20256));
    // 0x2dd674: 0xfc895442  sd          $t1, 0x5442($a0)
    ctx->pc = 0x2dd674u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 21570), GPR_U64(ctx, 9));
    // 0x2dd678: 0xdcc550ff  ld          $a1, 0x50FF($a2)
    ctx->pc = 0x2dd678u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 20735)));
    // 0x2dd67c: 0xdddbe2ef  ld          $k1, -0x1D11($t6)
    ctx->pc = 0x2dd67cu;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 14), 4294959855)));
    // 0x2dd680: 0x8c9244f5  lw          $s2, 0x44F5($a0)
    ctx->pc = 0x2dd680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17653)));
    // 0x2dd684: 0xc354f545  ll          $s4, -0xABB($k0)
    ctx->pc = 0x2dd684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294964549); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd688: 0xc713114b  lwc1        $f19, 0x114B($t8)
    ctx->pc = 0x2dd688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4427)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2dd68c: 0xc354f441  ll          $s4, -0xBBF($k0)
    ctx->pc = 0x2dd68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294964289); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dd690: 0x0  nop
    ctx->pc = 0x2dd690u;
    // NOP
label_2dd694:
    // 0x2dd694: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dd694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dd698: 0x2442d684  addiu       $v0, $v0, -0x297C
    ctx->pc = 0x2dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956676));
    // 0x2dd69c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd6a0: 0x2484d664  addiu       $a0, $a0, -0x299C
    ctx->pc = 0x2dd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956644));
    // 0x2dd6a4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dd6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dd6a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dd6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd6ac: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD6ACu;
    SET_GPR_U32(ctx, 31, 0x2DD6B4u);
    ctx->pc = 0x2DD6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD6ACu;
            // 0x2dd6b0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6B4u; }
        if (ctx->pc != 0x2DD6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6B4u; }
        if (ctx->pc != 0x2DD6B4u) { return; }
    }
    ctx->pc = 0x2DD6B4u;
label_2dd6b4:
    // 0x2dd6b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dd6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dd6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd6bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dd6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd6c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2dd6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd6c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2dd6c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dd6c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dd6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd6cc: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2dd6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dd6d0: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2dd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dd6d4: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2dd6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dd6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD6D8u;
            // 0x2dd6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD6E0u;
    ctx->pc = 0x2dd6e0u;
}
