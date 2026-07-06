#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD3C8
// Address: 0x2dd3c8 - 0x2dd4d8
void sub_002DD3C8_0x2dd3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD3C8_0x2dd3c8");
#endif

    switch (ctx->pc) {
        case 0x2dd400u: goto label_2dd400;
        case 0x2dd46cu: goto label_2dd46c;
        case 0x2dd494u: goto label_2dd494;
        case 0x2dd4c4u: goto label_2dd4c4;
        default: break;
    }

    ctx->pc = 0x2dd3c8u;

    // 0x2dd3c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd3cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd3d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dd3d4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dd3d8: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x2dd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x2dd3dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd3e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD3E0u;
    {
        const bool branch_taken_0x2dd3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3e0) {
            ctx->pc = 0x2DD400u;
            goto label_2dd400;
        }
    }
    ctx->pc = 0x2DD3E8u;
    // 0x2dd3e8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd3ec: 0x2484d434  addiu       $a0, $a0, -0x2BCC
    ctx->pc = 0x2dd3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956084));
    // 0x2dd3f0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dd3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dd3f4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dd3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dd3f8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD3F8u;
    SET_GPR_U32(ctx, 31, 0x2DD400u);
    ctx->pc = 0x2DD3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD3F8u;
            // 0x2dd3fc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD400u; }
        if (ctx->pc != 0x2DD400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD400u; }
        if (ctx->pc != 0x2DD400u) { return; }
    }
    ctx->pc = 0x2DD400u;
label_2dd400:
    // 0x2dd400: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DD400u;
    {
        const bool branch_taken_0x2dd400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd400) {
            ctx->pc = 0x2DD434u;
            goto label_2dd434;
        }
    }
    ctx->pc = 0x2DD408u;
    // 0x2dd408: 0xa3d4a9e9  sb          $s4, -0x5617($fp)
    ctx->pc = 0x2dd408u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294945257), (uint8_t)GPR_U32(ctx, 20));
    // 0x2dd40c: 0x8d31bf75  lw          $s1, -0x408B($t1)
    ctx->pc = 0x2dd40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950773)));
    // 0x2dd410: 0xfd4dd42a  sd          $t5, -0x2BD6($t2)
    ctx->pc = 0x2dd410u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294956074), GPR_U64(ctx, 13));
    // 0x2dd414: 0xdfd22b4f  ld          $s2, 0x2B4F($fp)
    ctx->pc = 0x2dd414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 11087)));
    // 0x2dd418: 0x8f4d26b5  lw          $t5, 0x26B5($k0)
    ctx->pc = 0x2dd418u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 9909)));
    // 0x2dd41c: 0xff96ab22  sd          $s6, -0x54DE($gp)
    ctx->pc = 0x2dd41cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294945570), GPR_U64(ctx, 22));
    // 0x2dd420: 0x0  nop
    ctx->pc = 0x2dd420u;
    // NOP
    // 0x2dd424: 0xd248c875  lld         $t0, -0x378B($s2)
    ctx->pc = 0x2dd424u;
    // Unhandled opcode: 0x34
    // 0x2dd428: 0xc7130ff0  lwc1        $f19, 0xFF0($t8)
    ctx->pc = 0x2dd428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2dd42c: 0xd248c835  lld         $t0, -0x37CB($s2)
    ctx->pc = 0x2dd42cu;
    // Unhandled opcode: 0x34
    // 0x2dd430: 0x0  nop
    ctx->pc = 0x2dd430u;
    // NOP
label_2dd434:
    // 0x2dd434: 0x8bb1cbfb  lwl         $s1, -0x3405($sp)
    ctx->pc = 0x2dd434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953979); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x2dd438: 0xabb1cbbb  swl         $s1, -0x3445($sp)
    ctx->pc = 0x2dd438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953915); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd43c: 0xabb1cbbb  swl         $s1, -0x3445($sp)
    ctx->pc = 0x2dd43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953915); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd440: 0xabb1cbbb  swl         $s1, -0x3445($sp)
    ctx->pc = 0x2dd440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953915); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd444: 0xe654077e  swc1        $f20, 0x77E($s2)
    ctx->pc = 0x2dd444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1918), bits); }
    // 0x2dd448: 0xd620021e  ldc1        $f0, 0x21E($s1)
    ctx->pc = 0x2dd448u;
    // Unhandled opcode: 0x35
    // 0x2dd44c: 0x7224037a  .word       0x7224037A                   # INVALID     $s1, $a0, 0x37A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dd44cu;
    // Unhandled MMI instruction: function 0x3A
    // 0x2dd450: 0x7bb1cbbb  lq          $s1, -0x3445($sp)
    ctx->pc = 0x2dd450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4294953915)));
    // 0x2dd454: 0xabb1cbbb  swl         $s1, -0x3445($sp)
    ctx->pc = 0x2dd454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953915); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd458: 0xabb1cbbb  swl         $s1, -0x3445($sp)
    ctx->pc = 0x2dd458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953915); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd45c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd460: 0x2484d444  addiu       $a0, $a0, -0x2BBC
    ctx->pc = 0x2dd460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956100));
    // 0x2dd464: 0xc045714  jal         func_115C50
    ctx->pc = 0x2DD464u;
    SET_GPR_U32(ctx, 31, 0x2DD46Cu);
    ctx->pc = 0x2DD468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD464u;
            // 0x2dd468: 0xabb1cbbb  swl         $s1, -0x3445($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294953915); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x115C50u;
    if (runtime->hasFunction(0x115C50u)) {
        auto targetFn = runtime->lookupFunction(0x115C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD46Cu; }
        if (ctx->pc != 0x2DD46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115C50_0x115c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD46Cu; }
        if (ctx->pc != 0x2DD46Cu) { return; }
    }
    ctx->pc = 0x2DD46Cu;
label_2dd46c:
    // 0x2dd46c: 0x35b1c3bb  ori         $s1, $t5, 0xC3BB
    ctx->pc = 0x2dd46cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)50107);
    // 0x2dd470: 0xa1ad8bb8  sb          $t5, -0x7448($t5)
    ctx->pc = 0x2dd470u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294937528), (uint8_t)GPR_U32(ctx, 13));
    // 0x2dd474: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DD474u;
    {
        const bool branch_taken_0x2dd474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd474) {
            ctx->pc = 0x2DD4A4u;
            goto label_2dd4a4;
        }
    }
    ctx->pc = 0x2DD47Cu;
    // 0x2dd47c: 0x85a21aeb  lh          $v0, 0x1AEB($t5)
    ctx->pc = 0x2dd47cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6891)));
    // 0x2dd480: 0xdd44041f  ld          $a0, 0x41F($t2)
    ctx->pc = 0x2dd480u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 1055)));
    // 0x2dd484: 0x8d4808a5  lw          $t0, 0x8A5($t2)
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 2213)));
    // 0x2dd488: 0x84a21aeb  lh          $v0, 0x1AEB($a1)
    ctx->pc = 0x2dd488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6891)));
    // 0x2dd48c: 0xc16ef0d  jal         func_5BBC34
    ctx->pc = 0x2DD48Cu;
    SET_GPR_U32(ctx, 31, 0x2DD494u);
    ctx->pc = 0x2DD490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD48Cu;
            // 0x2dd490: 0xa0c93b59  sb          $t1, 0x3B59($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 15193), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5BBC34u;
    {
        auto targetFn = runtime->lookupFunction(0x5BBC34u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD494u; }
        if (ctx->pc != 0x2DD494u) { return; }
    }
    ctx->pc = 0x2DD494u;
label_2dd494:
    // 0x2dd494: 0xd24578c8  lld         $a1, 0x78C8($s2)
    ctx->pc = 0x2dd494u;
    // Unhandled opcode: 0x34
    // 0x2dd498: 0xc7130ff1  lwc1        $f19, 0xFF1($t8)
    ctx->pc = 0x2dd498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4081)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2dd49c: 0xd2457888  lld         $a1, 0x7888($s2)
    ctx->pc = 0x2dd49cu;
    // Unhandled opcode: 0x34
    // 0x2dd4a0: 0x0  nop
    ctx->pc = 0x2dd4a0u;
    // NOP
label_2dd4a4:
    // 0x2dd4a4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dd4a8: 0x2442d494  addiu       $v0, $v0, -0x2B6C
    ctx->pc = 0x2dd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956180));
    // 0x2dd4ac: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd4b0: 0x2484d474  addiu       $a0, $a0, -0x2B8C
    ctx->pc = 0x2dd4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956148));
    // 0x2dd4b4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dd4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dd4b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dd4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd4bc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD4BCu;
    SET_GPR_U32(ctx, 31, 0x2DD4C4u);
    ctx->pc = 0x2DD4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4BCu;
            // 0x2dd4c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4C4u; }
        if (ctx->pc != 0x2DD4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4C4u; }
        if (ctx->pc != 0x2DD4C4u) { return; }
    }
    ctx->pc = 0x2DD4C4u;
label_2dd4c4:
    // 0x2dd4c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dd4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4D0u;
            // 0x2dd4d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD4D8u;
    ctx->pc = 0x2dd4d8u;
}
