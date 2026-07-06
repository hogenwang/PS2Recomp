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

// Function: sub_001F2148
// Address: 0x1f2148 - 0x1f2218
void sub_001F2148_0x1f2148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2148_0x1f2148");
#endif

    switch (ctx->pc) {
        case 0x1f2174u: goto label_1f2174;
        default: break;
    }

    ctx->pc = 0x1f2148u;

    // 0x1f2148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f214c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f214cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f2150: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2154: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f2154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f2158: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f215c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2160: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f2160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f2164: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f2168: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f2168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f216c: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F216Cu;
    SET_GPR_U32(ctx, 31, 0x1F2174u);
    ctx->pc = 0x1F2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F216Cu;
    // 0x1f2170: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC518u, 0x1F216Cu, 0x1F2174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2174u;
label_1f2174:
    // 0x1f2174: 0x26500d88  addiu       $s0, $s2, 0xD88
    ctx->pc = 0x1f2174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1f2178: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f2178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f217c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1f217cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f2180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2184: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1f2184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f2188: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f2188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f218c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f218cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f2190: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1f2190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1f2194: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x1f2194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x1f2198: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1f219c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f219cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f21a0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F21A0u;
    {
        const bool branch_taken_0x1f21a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A0u;
        // 0x1f21a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21a0) {
            ctx->pc = 0x1F2200u;
            goto label_1f2200;
        }
    }
    ctx->pc = 0x1F21A8u;
    // 0x1f21a8: 0x6a220013  ldl         $v0, 0x13($s1)
    ctx->pc = 0x1f21a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f21ac: 0x6e22000c  ldr         $v0, 0xC($s1)
    ctx->pc = 0x1f21acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f21b0: 0x6a23001b  ldl         $v1, 0x1B($s1)
    ctx->pc = 0x1f21b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f21b4: 0x6e230014  ldr         $v1, 0x14($s1)
    ctx->pc = 0x1f21b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f21b8: 0x6a240023  ldl         $a0, 0x23($s1)
    ctx->pc = 0x1f21b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f21bc: 0x6e24001c  ldr         $a0, 0x1C($s1)
    ctx->pc = 0x1f21bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f21c0: 0x6a25002b  ldl         $a1, 0x2B($s1)
    ctx->pc = 0x1f21c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f21c4: 0x6e250024  ldr         $a1, 0x24($s1)
    ctx->pc = 0x1f21c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f21c8: 0xb2420df7  sdl         $v0, 0xDF7($s2)
    ctx->pc = 0x1f21c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21cc: 0xb6420df0  sdr         $v0, 0xDF0($s2)
    ctx->pc = 0x1f21ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21d0: 0xb2430dff  sdl         $v1, 0xDFF($s2)
    ctx->pc = 0x1f21d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21d4: 0xb6430df8  sdr         $v1, 0xDF8($s2)
    ctx->pc = 0x1f21d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21d8: 0xb2440e07  sdl         $a0, 0xE07($s2)
    ctx->pc = 0x1f21d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21dc: 0xb6440e00  sdr         $a0, 0xE00($s2)
    ctx->pc = 0x1f21dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21e0: 0xb2450e0f  sdl         $a1, 0xE0F($s2)
    ctx->pc = 0x1f21e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21e4: 0xb6450e08  sdr         $a1, 0xE08($s2)
    ctx->pc = 0x1f21e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21e8: 0x6a220033  ldl         $v0, 0x33($s1)
    ctx->pc = 0x1f21e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f21ec: 0x6e22002c  ldr         $v0, 0x2C($s1)
    ctx->pc = 0x1f21ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f21f0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f21f4: 0xb2420e17  sdl         $v0, 0xE17($s2)
    ctx->pc = 0x1f21f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21f8: 0xb6420e10  sdr         $v0, 0xE10($s2)
    ctx->pc = 0x1f21f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f21fc: 0xae430e18  sw          $v1, 0xE18($s2)
    ctx->pc = 0x1f21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3608), GPR_U32(ctx, 3));
label_1f2200:
    // 0x1f2200: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f2200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2204: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f2204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2208: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f2208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f220c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F220Cu;
        // 0x1f2210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F220Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2214u;
    // 0x1f2214: 0x0  nop
    ctx->pc = 0x1f2214u;
    // NOP
    if (ctx->pc == 0x1f2214u) { ctx->pc = 0x1f2218u; }
}
