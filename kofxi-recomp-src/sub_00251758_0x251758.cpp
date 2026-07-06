#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251758
// Address: 0x251758 - 0x251960
void sub_00251758_0x251758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251758_0x251758");
#endif

    switch (ctx->pc) {
        case 0x2517b8u: goto label_2517b8;
        case 0x2517c0u: goto label_2517c0;
        case 0x2517f4u: goto label_2517f4;
        case 0x251838u: goto label_251838;
        case 0x251844u: goto label_251844;
        case 0x251850u: goto label_251850;
        case 0x251860u: goto label_251860;
        case 0x2518c4u: goto label_2518c4;
        case 0x2518f4u: goto label_2518f4;
        case 0x25190cu: goto label_25190c;
        default: break;
    }

    ctx->pc = 0x251758u;

    // 0x251758: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x251758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25175c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251760: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x251760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x251764: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x251764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x251768: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x251768u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25176c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x251770: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x251770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x251774: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x251774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251778: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x251778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25177c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x251780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251784: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x251784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x251788: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x251788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25178c: 0x8cb1000c  lw          $s1, 0xC($a1)
    ctx->pc = 0x25178cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x251790: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x251790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x251794: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x251794u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x251798: 0x2634fffc  addiu       $s4, $s1, -0x4
    ctx->pc = 0x251798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x25179c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2517a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2517a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2517a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2517a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2517a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2517a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2517ac: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2517acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2517b0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2517B0u;
    {
        const bool branch_taken_0x2517b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517B0u;
            // 0x2517b4: 0x8cb50008  lw          $s5, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517b0) {
            ctx->pc = 0x2517E4u;
            goto label_2517e4;
        }
    }
    ctx->pc = 0x2517B8u;
label_2517b8:
    // 0x2517b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2517B8u;
    {
        const bool branch_taken_0x2517b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517B8u;
            // 0x2517bc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517b8) {
            ctx->pc = 0x251938u;
            goto label_251938;
        }
    }
    ctx->pc = 0x2517C0u;
label_2517c0:
    // 0x2517c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2517c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2517c4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2517c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2517c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2517c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2517cc: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2517ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2517d0: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x2517d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2517d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2517d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2517d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2517d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2517dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2517DCu;
    {
        const bool branch_taken_0x2517dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517DCu;
            // 0x2517e0: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517dc) {
            ctx->pc = 0x251868u;
            goto label_251868;
        }
    }
    ctx->pc = 0x2517E4u;
label_2517e4:
    // 0x2517e4: 0x8ab00003  lwl         $s0, 0x3($s5)
    ctx->pc = 0x2517e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2517e8: 0x9ab00000  lwr         $s0, 0x0($s5)
    ctx->pc = 0x2517e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x2517ec: 0xc08a254  jal         func_228950
    ctx->pc = 0x2517ECu;
    SET_GPR_U32(ctx, 31, 0x2517F4u);
    ctx->pc = 0x2517F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2517ECu;
            // 0x2517f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2517F4u; }
        if (ctx->pc != 0x2517F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2517F4u; }
        if (ctx->pc != 0x2517F4u) { return; }
    }
    ctx->pc = 0x2517F4u;
label_2517f4:
    // 0x2517f4: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2517F4u;
    {
        const bool branch_taken_0x2517f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2517f4) {
            ctx->pc = 0x2517F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2517F4u;
            // 0x2517f8: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251810u;
            goto label_251810;
        }
    }
    ctx->pc = 0x2517FCu;
    // 0x2517fc: 0x8aa20003  lwl         $v0, 0x3($s5)
    ctx->pc = 0x2517fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x251800: 0x9aa20000  lwr         $v0, 0x0($s5)
    ctx->pc = 0x251800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x251804: 0xaa620013  swl         $v0, 0x13($s3)
    ctx->pc = 0x251804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x251808: 0xba620010  swr         $v0, 0x10($s3)
    ctx->pc = 0x251808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25180c: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x25180cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_251810:
    // 0x251810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x251810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x251814: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x251814u;
    {
        const bool branch_taken_0x251814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251814u;
            // 0x251818: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251814) {
            ctx->pc = 0x251830u;
            goto label_251830;
        }
    }
    ctx->pc = 0x25181Cu;
    // 0x25181c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x25181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251820: 0x743023  subu        $a2, $v1, $s4
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x251824: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x251824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251828: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x251828u;
    {
        const bool branch_taken_0x251828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251828) {
            ctx->pc = 0x25182Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x251828u;
            // 0x25182c: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2518CCu;
            goto label_2518cc;
        }
    }
    ctx->pc = 0x251830u;
label_251830:
    // 0x251830: 0xc08c682  jal         func_231A08
    ctx->pc = 0x251830u;
    SET_GPR_U32(ctx, 31, 0x251838u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251838u; }
        if (ctx->pc != 0x251838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251838u; }
        if (ctx->pc != 0x251838u) { return; }
    }
    ctx->pc = 0x251838u;
label_251838:
    // 0x251838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25183c: 0xc098552  jal         func_261548
    ctx->pc = 0x25183Cu;
    SET_GPR_U32(ctx, 31, 0x251844u);
    ctx->pc = 0x251840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25183Cu;
            // 0x251840: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251844u; }
        if (ctx->pc != 0x251844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251844u; }
        if (ctx->pc != 0x251844u) { return; }
    }
    ctx->pc = 0x251844u;
label_251844:
    // 0x251844: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x251844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251848: 0xc08c698  jal         func_231A60
    ctx->pc = 0x251848u;
    SET_GPR_U32(ctx, 31, 0x251850u);
    ctx->pc = 0x25184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251848u;
            // 0x25184c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251850u; }
        if (ctx->pc != 0x251850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251850u; }
        if (ctx->pc != 0x251850u) { return; }
    }
    ctx->pc = 0x251850u;
label_251850:
    // 0x251850: 0x1620ffdb  bnez        $s1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x251850u;
    {
        const bool branch_taken_0x251850 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x251854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251850u;
            // 0x251854: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251850) {
            ctx->pc = 0x2517C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2517c0;
        }
    }
    ctx->pc = 0x251858u;
    // 0x251858: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x251858u;
    SET_GPR_U32(ctx, 31, 0x251860u);
    ctx->pc = 0x25185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251858u;
            // 0x25185c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (runtime->hasFunction(0x22A330u)) {
        auto targetFn = runtime->lookupFunction(0x22A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251860u; }
        if (ctx->pc != 0x251860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A330_0x22a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251860u; }
        if (ctx->pc != 0x251860u) { return; }
    }
    ctx->pc = 0x251860u;
label_251860:
    // 0x251860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x251860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251864: 0x0  nop
    ctx->pc = 0x251864u;
    // NOP
label_251868:
    // 0x251868: 0x1220ffd3  beqz        $s1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x251868u;
    {
        const bool branch_taken_0x251868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251868u;
            // 0x25186c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251868) {
            ctx->pc = 0x2517B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2517b8;
        }
    }
    ctx->pc = 0x251870u;
    // 0x251870: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x251870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x251874: 0x8c45f9e8  lw          $a1, -0x618($v0)
    ctx->pc = 0x251874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965736)));
    // 0x251878: 0x26900014  addiu       $s0, $s4, 0x14
    ctx->pc = 0x251878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x25187c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x25187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x251880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x251880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251884: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x251884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x251888: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x251888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25188c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x25188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x251890: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x251890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251894: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x251894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x251898: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x25189c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x25189cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2518a0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2518a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2518a4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2518a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x2518a8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2518a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2518acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2518b0: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x2518b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x2518b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2518b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2518b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2518b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518bc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2518BCu;
    SET_GPR_U32(ctx, 31, 0x2518C4u);
    ctx->pc = 0x2518C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2518BCu;
            // 0x2518c0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518C4u; }
        if (ctx->pc != 0x2518C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518C4u; }
        if (ctx->pc != 0x2518C4u) { return; }
    }
    ctx->pc = 0x2518C4u;
label_2518c4:
    // 0x2518c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2518C4u;
    {
        const bool branch_taken_0x2518c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2518C4u;
            // 0x2518c8: 0x8e530008  lw          $s3, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518c4) {
            ctx->pc = 0x2518FCu;
            goto label_2518fc;
        }
    }
    ctx->pc = 0x2518CCu;
label_2518cc:
    // 0x2518cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2518ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2518d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2518d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2518d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518d8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2518d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2518dc: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x2518dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x2518e0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2518e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2518e4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2518e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2518e8: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2518e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x2518ec: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x2518ECu;
    SET_GPR_U32(ctx, 31, 0x2518F4u);
    ctx->pc = 0x2518F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2518ECu;
            // 0x2518f0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (runtime->hasFunction(0x22D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518F4u; }
        if (ctx->pc != 0x2518F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3F0_0x22d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518F4u; }
        if (ctx->pc != 0x2518F4u) { return; }
    }
    ctx->pc = 0x2518F4u;
label_2518f4:
    // 0x2518f4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2518f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2518f8: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x2518f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2518fc:
    // 0x2518fc: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x2518fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x251900: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x251900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251904: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x251904u;
    SET_GPR_U32(ctx, 31, 0x25190Cu);
    ctx->pc = 0x251908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251904u;
            // 0x251908: 0x26650014  addiu       $a1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25190Cu; }
        if (ctx->pc != 0x25190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25190Cu; }
        if (ctx->pc != 0x25190Cu) { return; }
    }
    ctx->pc = 0x25190Cu;
label_25190c:
    // 0x25190c: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x25190cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x251910: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x251910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251914: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x251914u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x251918: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x251918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25191c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x25191cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x251920: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x251920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x251924: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x251924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x251928: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x251928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25192c: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x25192cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
    // 0x251930: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x251930u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x251934: 0xa2640003  sb          $a0, 0x3($s3)
    ctx->pc = 0x251934u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 4));
label_251938:
    // 0x251938: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x251938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25193c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25193cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251940: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x251940u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251944: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x251944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251948: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x251948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25194c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25194cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251950: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251958: 0x3e00008  jr          $ra
    ctx->pc = 0x251958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251958u;
            // 0x25195c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251960u;
    ctx->pc = 0x251960u;
}
