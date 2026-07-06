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

// Function: sub_001ED848
// Address: 0x1ed848 - 0x1ed920
void sub_001ED848_0x1ed848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED848_0x1ed848");
#endif

    switch (ctx->pc) {
        case 0x1ed8b8u: goto label_1ed8b8;
        default: break;
    }

    ctx->pc = 0x1ed848u;

    // 0x1ed848: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ed848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1ed84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED84Cu;
        // 0x1ed850: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED854u;
    // 0x1ed854: 0x0  nop
    ctx->pc = 0x1ed854u;
    // NOP
    // 0x1ed858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed864: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed868: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed86c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED86Cu;
    {
        const bool branch_taken_0x1ed86c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED86Cu;
        // 0x1ed870: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed86c) {
            ctx->pc = 0x1ED8B0u;
            goto label_1ed8b0;
        }
    }
    ctx->pc = 0x1ED874u;
    // 0x1ed874: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ed878: 0x24421540  addiu       $v0, $v0, 0x1540
    ctx->pc = 0x1ed878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5440));
    // 0x1ed87c: 0x684301a3  ldl         $v1, 0x1A3($v0)
    ctx->pc = 0x1ed87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ed880: 0x6c43019c  ldr         $v1, 0x19C($v0)
    ctx->pc = 0x1ed880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 412); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ed884: 0x684401ab  ldl         $a0, 0x1AB($v0)
    ctx->pc = 0x1ed884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ed888: 0x6c4401a4  ldr         $a0, 0x1A4($v0)
    ctx->pc = 0x1ed888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ed88c: 0x8c4501ac  lw          $a1, 0x1AC($v0)
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1ed890: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1ed890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed894: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1ed894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed898: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1ed898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed89c: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1ed89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed8a0: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x1ed8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x1ed8a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1ED8A4u;
    {
        const bool branch_taken_0x1ed8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8A4u;
        // 0x1ed8a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8a4) {
            ctx->pc = 0x1ED90Cu;
            goto label_1ed90c;
        }
    }
    ctx->pc = 0x1ED8ACu;
    // 0x1ed8ac: 0x0  nop
    ctx->pc = 0x1ed8acu;
    // NOP
label_1ed8b0:
    // 0x1ed8b0: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1ED8B0u;
    SET_GPR_U32(ctx, 31, 0x1ED8B8u);
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1ED8B0u, 0x1ED8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8B8u;
label_1ed8b8:
    // 0x1ed8b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ed8bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED8BCu;
    {
        const bool branch_taken_0x1ed8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8BCu;
        // 0x1ed8c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8bc) {
            ctx->pc = 0x1ED8E0u;
            goto label_1ed8e0;
        }
    }
    ctx->pc = 0x1ED8C4u;
    // 0x1ed8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed8c8: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x1ed8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x1ed8cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed8d4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1ED8D4u;
    ctx->pc = 0x1ED8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8D4u;
    // 0x1ed8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED8DCu;
    // 0x1ed8dc: 0x0  nop
    ctx->pc = 0x1ed8dcu;
    // NOP
label_1ed8e0:
    // 0x1ed8e0: 0x6a0209ff  ldl         $v0, 0x9FF($s0)
    ctx->pc = 0x1ed8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ed8e4: 0x6e0209f8  ldr         $v0, 0x9F8($s0)
    ctx->pc = 0x1ed8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ed8e8: 0x6a030a07  ldl         $v1, 0xA07($s0)
    ctx->pc = 0x1ed8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2567); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ed8ec: 0x6e030a00  ldr         $v1, 0xA00($s0)
    ctx->pc = 0x1ed8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ed8f0: 0x8e040a08  lw          $a0, 0xA08($s0)
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2568)));
    // 0x1ed8f4: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1ed8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed8f8: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1ed8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed8fc: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x1ed8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed900: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x1ed900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed904: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1ed904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1ed908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed90c:
    // 0x1ed90c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed918: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED918u;
        // 0x1ed91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED920u;
}
