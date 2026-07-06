#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001092C8
// Address: 0x1092c8 - 0x109498
void sub_001092C8_0x1092c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001092C8_0x1092c8");
#endif

    switch (ctx->pc) {
        case 0x1092c8u: goto label_1092c8;
        case 0x1092ccu: goto label_1092cc;
        case 0x1092d0u: goto label_1092d0;
        case 0x1092d4u: goto label_1092d4;
        case 0x1092d8u: goto label_1092d8;
        case 0x1092dcu: goto label_1092dc;
        case 0x1092e0u: goto label_1092e0;
        case 0x1092e4u: goto label_1092e4;
        case 0x1092e8u: goto label_1092e8;
        case 0x1092ecu: goto label_1092ec;
        case 0x1092f0u: goto label_1092f0;
        case 0x1092f4u: goto label_1092f4;
        case 0x1092f8u: goto label_1092f8;
        case 0x1092fcu: goto label_1092fc;
        case 0x109300u: goto label_109300;
        case 0x109304u: goto label_109304;
        case 0x109308u: goto label_109308;
        case 0x10930cu: goto label_10930c;
        case 0x109310u: goto label_109310;
        case 0x109314u: goto label_109314;
        case 0x109318u: goto label_109318;
        case 0x10931cu: goto label_10931c;
        case 0x109320u: goto label_109320;
        case 0x109324u: goto label_109324;
        case 0x109328u: goto label_109328;
        case 0x10932cu: goto label_10932c;
        case 0x109330u: goto label_109330;
        case 0x109334u: goto label_109334;
        case 0x109338u: goto label_109338;
        case 0x10933cu: goto label_10933c;
        case 0x109340u: goto label_109340;
        case 0x109344u: goto label_109344;
        case 0x109348u: goto label_109348;
        case 0x10934cu: goto label_10934c;
        case 0x109350u: goto label_109350;
        case 0x109354u: goto label_109354;
        case 0x109358u: goto label_109358;
        case 0x10935cu: goto label_10935c;
        case 0x109360u: goto label_109360;
        case 0x109364u: goto label_109364;
        case 0x109368u: goto label_109368;
        case 0x10936cu: goto label_10936c;
        case 0x109370u: goto label_109370;
        case 0x109374u: goto label_109374;
        case 0x109378u: goto label_109378;
        case 0x10937cu: goto label_10937c;
        case 0x109380u: goto label_109380;
        case 0x109384u: goto label_109384;
        case 0x109388u: goto label_109388;
        case 0x10938cu: goto label_10938c;
        case 0x109390u: goto label_109390;
        case 0x109394u: goto label_109394;
        case 0x109398u: goto label_109398;
        case 0x10939cu: goto label_10939c;
        case 0x1093a0u: goto label_1093a0;
        case 0x1093a4u: goto label_1093a4;
        case 0x1093a8u: goto label_1093a8;
        case 0x1093acu: goto label_1093ac;
        case 0x1093b0u: goto label_1093b0;
        case 0x1093b4u: goto label_1093b4;
        case 0x1093b8u: goto label_1093b8;
        case 0x1093bcu: goto label_1093bc;
        case 0x1093c0u: goto label_1093c0;
        case 0x1093c4u: goto label_1093c4;
        case 0x1093c8u: goto label_1093c8;
        case 0x1093ccu: goto label_1093cc;
        case 0x1093d0u: goto label_1093d0;
        case 0x1093d4u: goto label_1093d4;
        case 0x1093d8u: goto label_1093d8;
        case 0x1093dcu: goto label_1093dc;
        case 0x1093e0u: goto label_1093e0;
        case 0x1093e4u: goto label_1093e4;
        case 0x1093e8u: goto label_1093e8;
        case 0x1093ecu: goto label_1093ec;
        case 0x1093f0u: goto label_1093f0;
        case 0x1093f4u: goto label_1093f4;
        case 0x1093f8u: goto label_1093f8;
        case 0x1093fcu: goto label_1093fc;
        case 0x109400u: goto label_109400;
        case 0x109404u: goto label_109404;
        case 0x109408u: goto label_109408;
        case 0x10940cu: goto label_10940c;
        case 0x109410u: goto label_109410;
        case 0x109414u: goto label_109414;
        case 0x109418u: goto label_109418;
        case 0x10941cu: goto label_10941c;
        case 0x109420u: goto label_109420;
        case 0x109424u: goto label_109424;
        case 0x109428u: goto label_109428;
        case 0x10942cu: goto label_10942c;
        case 0x109430u: goto label_109430;
        case 0x109434u: goto label_109434;
        case 0x109438u: goto label_109438;
        case 0x10943cu: goto label_10943c;
        case 0x109440u: goto label_109440;
        case 0x109444u: goto label_109444;
        case 0x109448u: goto label_109448;
        case 0x10944cu: goto label_10944c;
        case 0x109450u: goto label_109450;
        case 0x109454u: goto label_109454;
        case 0x109458u: goto label_109458;
        case 0x10945cu: goto label_10945c;
        case 0x109460u: goto label_109460;
        case 0x109464u: goto label_109464;
        case 0x109468u: goto label_109468;
        case 0x10946cu: goto label_10946c;
        case 0x109470u: goto label_109470;
        case 0x109474u: goto label_109474;
        case 0x109478u: goto label_109478;
        case 0x10947cu: goto label_10947c;
        case 0x109480u: goto label_109480;
        case 0x109484u: goto label_109484;
        case 0x109488u: goto label_109488;
        case 0x10948cu: goto label_10948c;
        case 0x109490u: goto label_109490;
        case 0x109494u: goto label_109494;
        default: break;
    }

    ctx->pc = 0x1092c8u;

label_1092c8:
    // 0x1092c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1092c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1092cc:
    // 0x1092cc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1092ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_1092d0:
    // 0x1092d0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1092d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1092d4:
    // 0x1092d4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1092d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1092d8:
    // 0x1092d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1092d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1092dc:
    // 0x1092dc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1092dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1092e0:
    // 0x1092e0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1092e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1092e4:
    // 0x1092e4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1092e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1092e8:
    // 0x1092e8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1092e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1092ec:
    // 0x1092ec: 0x2447a270  addiu       $a3, $v0, -0x5D90
    ctx->pc = 0x1092ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943344));
label_1092f0:
    // 0x1092f0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1092f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1092f4:
    // 0x1092f4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1092f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1092f8:
    // 0x1092f8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1092f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1092fc:
    // 0x1092fc: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1092fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_109300:
    // 0x109300: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x109300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_109304:
    // 0x109304: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x109304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_109308:
    // 0x109308: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x109308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10930c:
    // 0x10930c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x10930cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109310:
    // 0x109310: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x109310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109314:
    // 0x109314: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x109314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109318:
    // 0x109318: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x109318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10931c:
    // 0x10931c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x10931cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109320:
    // 0x109320: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x109320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109324:
    // 0x109324: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x109324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109328:
    // 0x109328: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x109328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10932c:
    // 0x10932c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x10932cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_109330:
    // 0x109330: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_109334:
    // 0x109334: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x109334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109338:
    // 0x109338: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x109338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10933c:
    // 0x10933c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x10933cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109340:
    // 0x109340: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x109340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109344:
    // 0x109344: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x109344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_109348:
    // 0x109348: 0xc04258e  jal         func_109638
label_10934c:
    if (ctx->pc == 0x10934Cu) {
        ctx->pc = 0x10934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109348u;
        // 0x10934c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109350u;
        goto label_109350;
    }
    ctx->pc = 0x109348u;
    SET_GPR_U32(ctx, 31, 0x109350u);
    ctx->pc = 0x10934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109348u;
    // 0x10934c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109638u, 0x109348u, 0x109350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109350u;
label_109350:
    // 0x109350: 0x10000004  b           . + 4 + (0x4 << 2)
label_109354:
    if (ctx->pc == 0x109354u) {
        ctx->pc = 0x109354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109350u;
        // 0x109354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109358u;
        goto label_109358;
    }
    ctx->pc = 0x109350u;
    {
        const bool branch_taken_0x109350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109350u;
        // 0x109354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109350) {
            ctx->pc = 0x109364u;
            goto label_109364;
        }
    }
    ctx->pc = 0x109358u;
label_109358:
    // 0x109358: 0xc042534  jal         func_1094D0
label_10935c:
    if (ctx->pc == 0x10935Cu) {
        ctx->pc = 0x109360u;
        goto label_109360;
    }
    ctx->pc = 0x109358u;
    SET_GPR_U32(ctx, 31, 0x109360u);
    ctx->pc = 0x1094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D0u, 0x109358u, 0x109360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109360u;
label_109360:
    // 0x109360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109364:
    // 0x109364: 0xc041c90  jal         func_107240
label_109368:
    if (ctx->pc == 0x109368u) {
        ctx->pc = 0x109368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109364u;
        // 0x109368: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10936Cu;
        goto label_10936c;
    }
    ctx->pc = 0x109364u;
    SET_GPR_U32(ctx, 31, 0x10936Cu);
    ctx->pc = 0x109368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109364u;
    // 0x109368: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107240u, 0x109364u, 0x10936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10936Cu;
label_10936c:
    // 0x10936c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109370:
    // 0x109370: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_109374:
    if (ctx->pc == 0x109374u) {
        ctx->pc = 0x109374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109370u;
        // 0x109374: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109378u;
        goto label_109378;
    }
    ctx->pc = 0x109370u;
    {
        const bool branch_taken_0x109370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x109374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109370u;
        // 0x109374: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109370) {
            ctx->pc = 0x109384u;
            goto label_109384;
        }
    }
    ctx->pc = 0x109378u;
label_109378:
    // 0x109378: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10937c:
    // 0x10937c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_109380:
    if (ctx->pc == 0x109380u) {
        ctx->pc = 0x109384u;
        goto label_109384;
    }
    ctx->pc = 0x10937Cu;
    {
        const bool branch_taken_0x10937c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10937c) {
            ctx->pc = 0x109358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109358;
        }
    }
    ctx->pc = 0x109384u;
label_109384:
    // 0x109384: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x109384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_109388:
    // 0x109388: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x109388u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_10938c:
    // 0x10938c: 0x10000033  b           . + 4 + (0x33 << 2)
label_109390:
    if (ctx->pc == 0x109390u) {
        ctx->pc = 0x109390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10938Cu;
        // 0x109390: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109394u;
        goto label_109394;
    }
    ctx->pc = 0x10938Cu;
    {
        const bool branch_taken_0x10938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10938Cu;
        // 0x109390: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10938c) {
            ctx->pc = 0x10945Cu;
            goto label_10945c;
        }
    }
    ctx->pc = 0x109394u;
label_109394:
    // 0x109394: 0x0  nop
    ctx->pc = 0x109394u;
    // NOP
label_109398:
    // 0x109398: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_10939c:
    if (ctx->pc == 0x10939Cu) {
        ctx->pc = 0x10939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109398u;
        // 0x10939c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093A0u;
        goto label_1093a0;
    }
    ctx->pc = 0x109398u;
    {
        const bool branch_taken_0x109398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109398u;
        // 0x10939c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109398) {
            ctx->pc = 0x109414u;
            goto label_109414;
        }
    }
    ctx->pc = 0x1093A0u;
label_1093a0:
    // 0x1093a0: 0xc04258c  jal         func_109630
label_1093a4:
    if (ctx->pc == 0x1093A4u) {
        ctx->pc = 0x1093A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093A0u;
        // 0x1093a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093A8u;
        goto label_1093a8;
    }
    ctx->pc = 0x1093A0u;
    SET_GPR_U32(ctx, 31, 0x1093A8u);
    ctx->pc = 0x1093A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093A0u;
    // 0x1093a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109630u, 0x1093A0u, 0x1093A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093A8u;
label_1093a8:
    // 0x1093a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1093a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1093ac:
    // 0x1093ac: 0xc041c56  jal         func_107158
label_1093b0:
    if (ctx->pc == 0x1093B0u) {
        ctx->pc = 0x1093B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093ACu;
        // 0x1093b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093B4u;
        goto label_1093b4;
    }
    ctx->pc = 0x1093ACu;
    SET_GPR_U32(ctx, 31, 0x1093B4u);
    ctx->pc = 0x1093B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093ACu;
    // 0x1093b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1093ACu, 0x1093B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093B4u;
label_1093b4:
    // 0x1093b4: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x1093b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1093b8:
    // 0x1093b8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1093b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1093bc:
    // 0x1093bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1093bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1093c0:
    // 0x1093c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1093c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1093c4:
    // 0x1093c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1093c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1093c8:
    // 0x1093c8: 0x40f809  jalr        $v0
label_1093cc:
    if (ctx->pc == 0x1093CCu) {
        ctx->pc = 0x1093CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C8u;
        // 0x1093cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093D0u;
        goto label_1093d0;
    }
    ctx->pc = 0x1093C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1093D0u);
        ctx->pc = 0x1093CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C8u;
        // 0x1093cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1093C8u, 0x1093D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1093D0u;
label_1093d0:
    // 0x1093d0: 0xc04258e  jal         func_109638
label_1093d4:
    if (ctx->pc == 0x1093D4u) {
        ctx->pc = 0x1093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093D0u;
        // 0x1093d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093D8u;
        goto label_1093d8;
    }
    ctx->pc = 0x1093D0u;
    SET_GPR_U32(ctx, 31, 0x1093D8u);
    ctx->pc = 0x1093D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093D0u;
    // 0x1093d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109638u, 0x1093D0u, 0x1093D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093D8u;
label_1093d8:
    // 0x1093d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1093dc:
    if (ctx->pc == 0x1093DCu) {
        ctx->pc = 0x1093DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093D8u;
        // 0x1093dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093E0u;
        goto label_1093e0;
    }
    ctx->pc = 0x1093D8u;
    {
        const bool branch_taken_0x1093d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093D8u;
        // 0x1093dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093d8) {
            ctx->pc = 0x1093ECu;
            goto label_1093ec;
        }
    }
    ctx->pc = 0x1093E0u;
label_1093e0:
    // 0x1093e0: 0xc042534  jal         func_1094D0
label_1093e4:
    if (ctx->pc == 0x1093E4u) {
        ctx->pc = 0x1093E8u;
        goto label_1093e8;
    }
    ctx->pc = 0x1093E0u;
    SET_GPR_U32(ctx, 31, 0x1093E8u);
    ctx->pc = 0x1094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D0u, 0x1093E0u, 0x1093E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093E8u;
label_1093e8:
    // 0x1093e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1093e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1093ec:
    // 0x1093ec: 0xc041c90  jal         func_107240
label_1093f0:
    if (ctx->pc == 0x1093F0u) {
        ctx->pc = 0x1093F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093ECu;
        // 0x1093f0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093F4u;
        goto label_1093f4;
    }
    ctx->pc = 0x1093ECu;
    SET_GPR_U32(ctx, 31, 0x1093F4u);
    ctx->pc = 0x1093F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093ECu;
    // 0x1093f0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107240u, 0x1093ECu, 0x1093F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093F4u;
label_1093f4:
    // 0x1093f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1093f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1093f8:
    // 0x1093f8: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_1093fc:
    if (ctx->pc == 0x1093FCu) {
        ctx->pc = 0x1093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093F8u;
        // 0x1093fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109400u;
        goto label_109400;
    }
    ctx->pc = 0x1093F8u;
    {
        const bool branch_taken_0x1093f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093F8u;
        // 0x1093fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093f8) {
            ctx->pc = 0x109460u;
            goto label_109460;
        }
    }
    ctx->pc = 0x109400u;
label_109400:
    // 0x109400: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_109404:
    // 0x109404: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_109408:
    if (ctx->pc == 0x109408u) {
        ctx->pc = 0x10940Cu;
        goto label_10940c;
    }
    ctx->pc = 0x109404u;
    {
        const bool branch_taken_0x109404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109404) {
            ctx->pc = 0x1093E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1093e0;
        }
    }
    ctx->pc = 0x10940Cu;
label_10940c:
    // 0x10940c: 0x10000013  b           . + 4 + (0x13 << 2)
label_109410:
    if (ctx->pc == 0x109410u) {
        ctx->pc = 0x109414u;
        goto label_109414;
    }
    ctx->pc = 0x10940Cu;
    {
        const bool branch_taken_0x10940c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10940c) {
            ctx->pc = 0x10945Cu;
            goto label_10945c;
        }
    }
    ctx->pc = 0x109414u;
label_109414:
    // 0x109414: 0xc04258c  jal         func_109630
label_109418:
    if (ctx->pc == 0x109418u) {
        ctx->pc = 0x109418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109414u;
        // 0x109418: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10941Cu;
        goto label_10941c;
    }
    ctx->pc = 0x109414u;
    SET_GPR_U32(ctx, 31, 0x10941Cu);
    ctx->pc = 0x109418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109414u;
    // 0x109418: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109630u, 0x109414u, 0x10941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10941Cu;
label_10941c:
    // 0x10941c: 0xc04258e  jal         func_109638
label_109420:
    if (ctx->pc == 0x109420u) {
        ctx->pc = 0x109420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10941Cu;
        // 0x109420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109424u;
        goto label_109424;
    }
    ctx->pc = 0x10941Cu;
    SET_GPR_U32(ctx, 31, 0x109424u);
    ctx->pc = 0x109420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10941Cu;
    // 0x109420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109638u, 0x10941Cu, 0x109424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109424u;
label_109424:
    // 0x109424: 0x10000005  b           . + 4 + (0x5 << 2)
label_109428:
    if (ctx->pc == 0x109428u) {
        ctx->pc = 0x109428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109424u;
        // 0x109428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10942Cu;
        goto label_10942c;
    }
    ctx->pc = 0x109424u;
    {
        const bool branch_taken_0x109424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109424u;
        // 0x109428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109424) {
            ctx->pc = 0x10943Cu;
            goto label_10943c;
        }
    }
    ctx->pc = 0x10942Cu;
label_10942c:
    // 0x10942c: 0x0  nop
    ctx->pc = 0x10942cu;
    // NOP
label_109430:
    // 0x109430: 0xc042534  jal         func_1094D0
label_109434:
    if (ctx->pc == 0x109434u) {
        ctx->pc = 0x109438u;
        goto label_109438;
    }
    ctx->pc = 0x109430u;
    SET_GPR_U32(ctx, 31, 0x109438u);
    ctx->pc = 0x1094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D0u, 0x109430u, 0x109438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109438u;
label_109438:
    // 0x109438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10943c:
    // 0x10943c: 0xc041c90  jal         func_107240
label_109440:
    if (ctx->pc == 0x109440u) {
        ctx->pc = 0x109440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10943Cu;
        // 0x109440: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109444u;
        goto label_109444;
    }
    ctx->pc = 0x10943Cu;
    SET_GPR_U32(ctx, 31, 0x109444u);
    ctx->pc = 0x109440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10943Cu;
    // 0x109440: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107240u, 0x10943Cu, 0x109444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109444u;
label_109444:
    // 0x109444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109448:
    // 0x109448: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_10944c:
    if (ctx->pc == 0x10944Cu) {
        ctx->pc = 0x10944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109448u;
        // 0x10944c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109450u;
        goto label_109450;
    }
    ctx->pc = 0x109448u;
    {
        const bool branch_taken_0x109448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109448u;
        // 0x10944c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109448) {
            ctx->pc = 0x109460u;
            goto label_109460;
        }
    }
    ctx->pc = 0x109450u;
label_109450:
    // 0x109450: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_109454:
    // 0x109454: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_109458:
    if (ctx->pc == 0x109458u) {
        ctx->pc = 0x10945Cu;
        goto label_10945c;
    }
    ctx->pc = 0x109454u;
    {
        const bool branch_taken_0x109454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109454) {
            ctx->pc = 0x109430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109430;
        }
    }
    ctx->pc = 0x10945Cu;
label_10945c:
    // 0x10945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109460:
    // 0x109460: 0xc041c90  jal         func_107240
label_109464:
    if (ctx->pc == 0x109464u) {
        ctx->pc = 0x109464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109460u;
        // 0x109464: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109468u;
        goto label_109468;
    }
    ctx->pc = 0x109460u;
    SET_GPR_U32(ctx, 31, 0x109468u);
    ctx->pc = 0x109464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109460u;
    // 0x109464: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107240u, 0x109460u, 0x109468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109468u;
label_109468:
    // 0x109468: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_10946c:
    if (ctx->pc == 0x10946Cu) {
        ctx->pc = 0x10946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109468u;
        // 0x10946c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109470u;
        goto label_109470;
    }
    ctx->pc = 0x109468u;
    {
        const bool branch_taken_0x109468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x10946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109468u;
        // 0x10946c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109468) {
            ctx->pc = 0x1093A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1093a0;
        }
    }
    ctx->pc = 0x109470u;
label_109470:
    // 0x109470: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_109474:
    if (ctx->pc == 0x109474u) {
        ctx->pc = 0x109474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109470u;
        // 0x109474: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109478u;
        goto label_109478;
    }
    ctx->pc = 0x109470u;
    {
        const bool branch_taken_0x109470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x109474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109470u;
        // 0x109474: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109470) {
            ctx->pc = 0x109398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109398;
        }
    }
    ctx->pc = 0x109478u;
label_109478:
    // 0x109478: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x109478u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10947c:
    // 0x10947c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x10947cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_109480:
    // 0x109480: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x109480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_109484:
    // 0x109484: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x109484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_109488:
    // 0x109488: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x109488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10948c:
    // 0x10948c: 0x3e00008  jr          $ra
label_109490:
    if (ctx->pc == 0x109490u) {
        ctx->pc = 0x109490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10948Cu;
        // 0x109490: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109494u;
        goto label_109494;
    }
    ctx->pc = 0x10948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10948Cu;
        // 0x109490: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109494u;
label_109494:
    // 0x109494: 0x0  nop
    ctx->pc = 0x109494u;
    // NOP
    if (ctx->pc == 0x109494u) { ctx->pc = 0x109498u; }
}
