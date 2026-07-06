#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF248
// Address: 0x1ff248 - 0x1ff370
void sub_001FF248_0x1ff248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF248_0x1ff248");
#endif

    switch (ctx->pc) {
        case 0x1ff260u: goto label_1ff260;
        case 0x1ff290u: goto label_1ff290;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff320u: goto label_1ff320;
        case 0x1ff338u: goto label_1ff338;
        default: break;
    }

    ctx->pc = 0x1ff248u;

    // 0x1ff248: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1ff24c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff250: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x1ff250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ff254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF254u;
    {
        const bool branch_taken_0x1ff254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF254u;
            // 0x1ff258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff254) {
            ctx->pc = 0x1FF278u;
            goto label_1ff278;
        }
    }
    ctx->pc = 0x1FF25Cu;
    // 0x1ff25c: 0x0  nop
    ctx->pc = 0x1ff25cu;
    // NOP
label_1ff260:
    // 0x1ff260: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1ff260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1ff264: 0x28c3001a  slti        $v1, $a2, 0x1A
    ctx->pc = 0x1ff264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1ff268: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF268u;
    {
        const bool branch_taken_0x1ff268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF268u;
            // 0x1ff26c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff268) {
            ctx->pc = 0x1FF288u;
            goto label_1ff288;
        }
    }
    ctx->pc = 0x1FF270u;
    // 0x1ff270: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x1ff270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1ff274: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x1ff274u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_1ff278:
    // 0x1ff278: 0x0  nop
    ctx->pc = 0x1ff278u;
    // NOP
    // 0x1ff27c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF27Cu;
    {
        const bool branch_taken_0x1ff27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ff27c) {
            ctx->pc = 0x1FF280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF27Cu;
            // 0x1ff280: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff260;
        }
    }
    ctx->pc = 0x1FF284u;
    // 0x1ff284: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ff284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ff288:
    // 0x1ff288: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF288u;
            // 0x1ff28c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF290u;
label_1ff290:
    // 0x1ff290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff298: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff29c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff2a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff2a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff2a8: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF2A8u;
    SET_GPR_U32(ctx, 31, 0x1FF2B0u);
    ctx->pc = 0x1FF2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2A8u;
            // 0x1ff2ac: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2B0u; }
        if (ctx->pc != 0x1FF2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2B0u; }
        if (ctx->pc != 0x1FF2B0u) { return; }
    }
    ctx->pc = 0x1FF2B0u;
label_1ff2b0:
    // 0x1ff2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF2B8u;
    {
        const bool branch_taken_0x1ff2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2B8u;
            // 0x1ff2bc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2b8) {
            ctx->pc = 0x1FF2ECu;
            goto label_1ff2ec;
        }
    }
    ctx->pc = 0x1FF2C0u;
    // 0x1ff2c0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FF2C0u;
    SET_GPR_U32(ctx, 31, 0x1FF2C8u);
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2C8u; }
        if (ctx->pc != 0x1FF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2C8u; }
        if (ctx->pc != 0x1FF2C8u) { return; }
    }
    ctx->pc = 0x1FF2C8u;
label_1ff2c8:
    // 0x1ff2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff2cc: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x1ff2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ff2d0: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x1ff2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ff2d4: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x1ff2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ff2d8: 0x9a240008  lwr         $a0, 0x8($s1)
    ctx->pc = 0x1ff2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ff2dc: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1ff2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff2e0: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1ff2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff2e4: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x1ff2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ff2e8: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x1ff2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ff2ec:
    // 0x1ff2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff2f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2F8u;
            // 0x1ff2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF300u;
label_1ff300:
    // 0x1ff300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff308: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff30c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff314: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1ff314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff318: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF318u;
    SET_GPR_U32(ctx, 31, 0x1FF320u);
    ctx->pc = 0x1FF31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF318u;
            // 0x1ff31c: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF320u; }
        if (ctx->pc != 0x1FF320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF320u; }
        if (ctx->pc != 0x1FF320u) { return; }
    }
    ctx->pc = 0x1FF320u;
label_1ff320:
    // 0x1ff320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff328: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF328u;
    {
        const bool branch_taken_0x1ff328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF328u;
            // 0x1ff32c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff328) {
            ctx->pc = 0x1FF35Cu;
            goto label_1ff35c;
        }
    }
    ctx->pc = 0x1FF330u;
    // 0x1ff330: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FF330u;
    SET_GPR_U32(ctx, 31, 0x1FF338u);
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF338u; }
        if (ctx->pc != 0x1FF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF338u; }
        if (ctx->pc != 0x1FF338u) { return; }
    }
    ctx->pc = 0x1FF338u;
label_1ff338:
    // 0x1ff338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff33c: 0x6a230053  ldl         $v1, 0x53($s1)
    ctx->pc = 0x1ff33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ff340: 0x6e23004c  ldr         $v1, 0x4C($s1)
    ctx->pc = 0x1ff340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ff344: 0x8a240057  lwl         $a0, 0x57($s1)
    ctx->pc = 0x1ff344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ff348: 0x9a240054  lwr         $a0, 0x54($s1)
    ctx->pc = 0x1ff348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ff34c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1ff34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff350: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1ff350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff354: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x1ff354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ff358: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x1ff358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ff35c:
    // 0x1ff35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff368: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF368u;
            // 0x1ff36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF370u;
    ctx->pc = 0x1ff370u;
}
