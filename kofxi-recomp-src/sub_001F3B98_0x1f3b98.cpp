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

// Function: sub_001F3B98
// Address: 0x1f3b98 - 0x1f3cb0
void sub_001F3B98_0x1f3b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3B98_0x1f3b98");
#endif

    switch (ctx->pc) {
        case 0x1f3c08u: goto label_1f3c08;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c38u: goto label_1f3c38;
        default: break;
    }

    ctx->pc = 0x1f3b98u;

    // 0x1f3b98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3b9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f3b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f3ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ba4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f3ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f3ba8: 0x26110ea0  addiu       $s1, $s0, 0xEA0
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
    // 0x1f3bac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f3bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f3bb0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f3bb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3bb8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F3BB8u;
    {
        const bool branch_taken_0x1f3bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BB8u;
        // 0x1f3bbc: 0x26120dc4  addiu       $s2, $s0, 0xDC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bb8) {
            ctx->pc = 0x1F3C98u;
            goto label_1f3c98;
        }
    }
    ctx->pc = 0x1F3BC0u;
    // 0x1f3bc0: 0x6a020e53  ldl         $v0, 0xE53($s0)
    ctx->pc = 0x1f3bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3bc4: 0x6e020e4c  ldr         $v0, 0xE4C($s0)
    ctx->pc = 0x1f3bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3660); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3bc8: 0x6a030e5b  ldl         $v1, 0xE5B($s0)
    ctx->pc = 0x1f3bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3675); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f3bcc: 0x6e030e54  ldr         $v1, 0xE54($s0)
    ctx->pc = 0x1f3bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3668); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f3bd0: 0x6a060e63  ldl         $a2, 0xE63($s0)
    ctx->pc = 0x1f3bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3683); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f3bd4: 0x6e060e5c  ldr         $a2, 0xE5C($s0)
    ctx->pc = 0x1f3bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3676); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3bd8: 0x6a070e6b  ldl         $a3, 0xE6B($s0)
    ctx->pc = 0x1f3bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f3bdc: 0x6e070e64  ldr         $a3, 0xE64($s0)
    ctx->pc = 0x1f3bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3684); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f3be0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1f3be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3be4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1f3be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3be8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1f3be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3bec: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1f3becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3bf0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1f3bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3bf4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1f3bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3bf8: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x1f3bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3bfc: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x1f3bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c00: 0xc07cbdc  jal         func_1F2F70
    ctx->pc = 0x1F3C00u;
    SET_GPR_U32(ctx, 31, 0x1F3C08u);
    ctx->pc = 0x1F3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C00u;
    // 0x1f3c04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2F70u, 0x1F3C00u, 0x1F3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C08u;
label_1f3c08:
    // 0x1f3c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3C0Cu;
    {
        const bool branch_taken_0x1f3c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C0Cu;
        // 0x1f3c10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c0c) {
            ctx->pc = 0x1F3C28u;
            goto label_1f3c28;
        }
    }
    ctx->pc = 0x1F3C14u;
    // 0x1f3c14: 0xc07cc4a  jal         func_1F3128
    ctx->pc = 0x1F3C14u;
    SET_GPR_U32(ctx, 31, 0x1F3C1Cu);
    ctx->pc = 0x1F3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3128u, 0x1F3C14u, 0x1F3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C1Cu;
label_1f3c1c:
    // 0x1f3c1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3c20: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1f3c20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f3c24: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1f3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1f3c28:
    // 0x1f3c28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f3c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3c30: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F3C30u;
    SET_GPR_U32(ctx, 31, 0x1F3C38u);
    ctx->pc = 0x1F3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C30u;
    // 0x1f3c34: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC518u, 0x1F3C30u, 0x1F3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C38u;
label_1f3c38:
    // 0x1f3c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3c3c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1f3c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3c40: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1f3c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3c44: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1f3c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f3c48: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1f3c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f3c4c: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1f3c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f3c50: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1f3c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f3c54: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x1f3c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f3c58: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x1f3c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3c5c: 0xb2020eab  sdl         $v0, 0xEAB($s0)
    ctx->pc = 0x1f3c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c60: 0xb6020ea4  sdr         $v0, 0xEA4($s0)
    ctx->pc = 0x1f3c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3748); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c64: 0xb2030eb3  sdl         $v1, 0xEB3($s0)
    ctx->pc = 0x1f3c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3763); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c68: 0xb6030eac  sdr         $v1, 0xEAC($s0)
    ctx->pc = 0x1f3c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c6c: 0xb2040ebb  sdl         $a0, 0xEBB($s0)
    ctx->pc = 0x1f3c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3771); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c70: 0xb6040eb4  sdr         $a0, 0xEB4($s0)
    ctx->pc = 0x1f3c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c74: 0xb2060ec3  sdl         $a2, 0xEC3($s0)
    ctx->pc = 0x1f3c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c78: 0xb6060ebc  sdr         $a2, 0xEBC($s0)
    ctx->pc = 0x1f3c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3772); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3c7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3c80: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1f3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f3c84: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1f3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f3c88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3c8c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x1f3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1f3c90: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1f3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1f3c94: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x1f3c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_1f3c98:
    // 0x1f3c98: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f3c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3c9c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f3c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ca0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f3ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3ca4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f3ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CA8u;
        // 0x1f3cac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3CB0u;
}
