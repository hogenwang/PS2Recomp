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

// Function: sub_001FB078
// Address: 0x1fb078 - 0x1fb190
void sub_001FB078_0x1fb078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB078_0x1fb078");
#endif

    switch (ctx->pc) {
        case 0x1fb088u: goto label_1fb088;
        case 0x1fb098u: goto label_1fb098;
        case 0x1fb0a8u: goto label_1fb0a8;
        case 0x1fb0b8u: goto label_1fb0b8;
        case 0x1fb0d4u: goto label_1fb0d4;
        default: break;
    }

    ctx->pc = 0x1fb078u;

    // 0x1fb078: 0xac850d4c  sw          $a1, 0xD4C($a0)
    ctx->pc = 0x1fb078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3404), GPR_U32(ctx, 5));
    // 0x1fb07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB07Cu;
        // 0x1fb080: 0xac860d50  sw          $a2, 0xD50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB084u;
    // 0x1fb084: 0x0  nop
    ctx->pc = 0x1fb084u;
    // NOP
label_1fb088:
    // 0x1fb088: 0xac850d6c  sw          $a1, 0xD6C($a0)
    ctx->pc = 0x1fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3436), GPR_U32(ctx, 5));
    // 0x1fb08c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB08Cu;
        // 0x1fb090: 0xac860d70  sw          $a2, 0xD70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3440), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB094u;
    // 0x1fb094: 0x0  nop
    ctx->pc = 0x1fb094u;
    // NOP
label_1fb098:
    // 0x1fb098: 0xac850d2c  sw          $a1, 0xD2C($a0)
    ctx->pc = 0x1fb098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 5));
    // 0x1fb09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB09Cu;
        // 0x1fb0a0: 0xac860d30  sw          $a2, 0xD30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0A4u;
    // 0x1fb0a4: 0x0  nop
    ctx->pc = 0x1fb0a4u;
    // NOP
label_1fb0a8:
    // 0x1fb0a8: 0xac860d84  sw          $a2, 0xD84($a0)
    ctx->pc = 0x1fb0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3460), GPR_U32(ctx, 6));
    // 0x1fb0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0ACu;
        // 0x1fb0b0: 0xac850d80  sw          $a1, 0xD80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3456), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0B4u;
    // 0x1fb0b4: 0x0  nop
    ctx->pc = 0x1fb0b4u;
    // NOP
label_1fb0b8:
    // 0x1fb0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb0c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb0cc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FB0CCu;
    SET_GPR_U32(ctx, 31, 0x1FB0D4u);
    ctx->pc = 0x1FB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB0CCu;
    // 0x1fb0d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FB0CCu, 0x1FB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB0D4u;
label_1fb0d4:
    // 0x1fb0d4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fb0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fb0d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB0D8u;
    {
        const bool branch_taken_0x1fb0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0D8u;
        // 0x1fb0dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0d8) {
            ctx->pc = 0x1FB0F8u;
            goto label_1fb0f8;
        }
    }
    ctx->pc = 0x1FB0E0u;
    // 0x1fb0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb0e4: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x1fb0e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    // 0x1fb0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb0ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb0f0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FB0F0u;
    ctx->pc = 0x1FB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB0F0u;
    // 0x1fb0f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FB0F8u;
label_1fb0f8:
    // 0x1fb0f8: 0x6a030913  ldl         $v1, 0x913($s0)
    ctx->pc = 0x1fb0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2323); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fb0fc: 0x6e03090c  ldr         $v1, 0x90C($s0)
    ctx->pc = 0x1fb0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fb100: 0x6a04091b  ldl         $a0, 0x91B($s0)
    ctx->pc = 0x1fb100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2331); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1fb104: 0x6e040914  ldr         $a0, 0x914($s0)
    ctx->pc = 0x1fb104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2324); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1fb108: 0x6a050923  ldl         $a1, 0x923($s0)
    ctx->pc = 0x1fb108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2339); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fb10c: 0x6e05091c  ldr         $a1, 0x91C($s0)
    ctx->pc = 0x1fb10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2332); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fb110: 0x6a06092b  ldl         $a2, 0x92B($s0)
    ctx->pc = 0x1fb110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1fb114: 0x6e060924  ldr         $a2, 0x924($s0)
    ctx->pc = 0x1fb114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2340); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1fb118: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1fb118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb11c: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1fb11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb120: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1fb120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb124: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1fb124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb128: 0xb2250017  sdl         $a1, 0x17($s1)
    ctx->pc = 0x1fb128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb12c: 0xb6250010  sdr         $a1, 0x10($s1)
    ctx->pc = 0x1fb12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb130: 0xb226001f  sdl         $a2, 0x1F($s1)
    ctx->pc = 0x1fb130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb134: 0xb6260018  sdr         $a2, 0x18($s1)
    ctx->pc = 0x1fb134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb138: 0x6a030933  ldl         $v1, 0x933($s0)
    ctx->pc = 0x1fb138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2355); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fb13c: 0x6e03092c  ldr         $v1, 0x92C($s0)
    ctx->pc = 0x1fb13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2348); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fb140: 0x6a04093b  ldl         $a0, 0x93B($s0)
    ctx->pc = 0x1fb140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1fb144: 0x6e040934  ldr         $a0, 0x934($s0)
    ctx->pc = 0x1fb144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1fb148: 0x6a050943  ldl         $a1, 0x943($s0)
    ctx->pc = 0x1fb148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2371); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fb14c: 0x6e05093c  ldr         $a1, 0x93C($s0)
    ctx->pc = 0x1fb14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fb150: 0x6a06094b  ldl         $a2, 0x94B($s0)
    ctx->pc = 0x1fb150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2379); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1fb154: 0x6e060944  ldr         $a2, 0x944($s0)
    ctx->pc = 0x1fb154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2372); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1fb158: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x1fb158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb15c: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x1fb15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb160: 0xb224002f  sdl         $a0, 0x2F($s1)
    ctx->pc = 0x1fb160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb164: 0xb6240028  sdr         $a0, 0x28($s1)
    ctx->pc = 0x1fb164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb168: 0xb2250037  sdl         $a1, 0x37($s1)
    ctx->pc = 0x1fb168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb16c: 0xb6250030  sdr         $a1, 0x30($s1)
    ctx->pc = 0x1fb16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb170: 0xb226003f  sdl         $a2, 0x3F($s1)
    ctx->pc = 0x1fb170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb174: 0xb6260038  sdr         $a2, 0x38($s1)
    ctx->pc = 0x1fb174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb184: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB184u;
        // 0x1fb188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB18Cu;
    // 0x1fb18c: 0x0  nop
    ctx->pc = 0x1fb18cu;
    // NOP
    if (ctx->pc == 0x1fb18cu) { ctx->pc = 0x1fb190u; }
}
